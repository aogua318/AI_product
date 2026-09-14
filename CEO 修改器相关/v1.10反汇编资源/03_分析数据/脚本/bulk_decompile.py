import json, os, ida_hexrays, ida_funcs, idautils, idc, ida_name

OUT = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\01_还原源码"
PROG = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据\decompile_progress.json"
BAD = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据\decompile_blacklist.json"
BATCH = 60

def load(path, default):
    return json.load(open(path)) if os.path.exists(path) else default

def classify(ea, cpps):
    if cpps:
        first = sorted(cpps)[0]
        base = os.path.basename(first.replace("/", "\\"))
        if "Business" in first:
            return "Business_UI" if base.startswith(("face_", "TALK", "talk")) else "Business_核心"
        if "a_lib" in first:
            return "a_lib引擎"
        if "a_prog" in first:
            return "a_prog框架"
        if "a_map" in first or "a_map" in first.upper():
            return "a_map地图"
        return "Business_核心"
    # 地址段分类 (v1.10 布局, 见 README)
    if 0x401000 <= ea < 0x44A000:
        return "Business_核心"
    if 0x44A000 <= ea < 0x463000:
        return "Business_UI"
    if 0x463000 <= ea < 0x471000:
        return "a_lib引擎"
    if 0x471000 <= ea < 0x47E000:
        return "a_wingdi辅助"
    if 0x47E000 <= ea < 0x483000:
        return "a_prog框架"
    if 0x483000 <= ea < 0x489000:
        return "a_map地图"
    return "CRT与库"

st = load(PROG, None)
if st is None:
    fmap = json.load(open(r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据\func_to_module.json", encoding="utf-8"))
    funcs = []
    for ea in idautils.Functions():
        f = ida_funcs.get_func(ea)
        if not f:
            continue
        name = ida_name.get_ea_name(ea, ida_name.GN_VISIBLE)
        funcs.append({"addr": hex(ea), "name": name, "size": f.size(), "mod": classify(ea, fmap.get(hex(ea)))})
    st = {"funcs": funcs, "done": 0, "failed": 0}
    json.dump(st, open(PROG, "w"))

bad = load(BAD, {"addrs": []})
badset = set(bad["addrs"])
funcs = st["funcs"]
os.makedirs(OUT, exist_ok=True)
start = st["done"]
end = min(start + BATCH, len(funcs))
for i in range(start, end):
    fn = funcs[i]
    ea = int(fn["addr"], 16)
    if fn["addr"] in badset:
        st["done"] = i + 1
        json.dump(st, open(PROG, "w"))
        continue
    mod_dir = os.path.join(OUT, fn["mod"])
    os.makedirs(mod_dir, exist_ok=True)
    safe = "%s_%s" % (fn["addr"][2:].upper(), "".join(c if c.isalnum() else "_" for c in fn["name"]))
    path = os.path.join(mod_dir, safe + ".c")
    code = None
    try:
        code = str(ida_hexrays.decompile(ea))
    except Exception:
        code = None
    header = "// 函数 %s  %s  size=0x%X  模块=%s\n// 还原方式: Hex-Rays 反编译(伪 C 源码)\n\n" % (
        fn["addr"], fn["name"], fn["size"], fn["mod"])
    try:
        if code:
            open(path, "w", encoding="utf-8", errors="replace").write(header + code)
        else:
            lines = ["// 函数 %s  %s  size=0x%X  模块=%s" % (fn["addr"], fn["name"], fn["size"], fn["mod"]),
                     "// 还原方式: Hex-Rays 失败, 以下为反汇编清单", ""]
            for item in idautils.FuncItems(ea):
                lines.append("%s  %s" % (hex(item), idc.generate_disasm_line(item, 0)))
            open(path, "w", encoding="utf-8", errors="replace").write("\n".join(lines))
            st["failed"] += 1
    except Exception:
        pass
    st["done"] = i + 1
    json.dump(st, open(PROG, "w"))
json.dump(bad, open(BAD, "w"))
print("PROGRESS %d/%d failed=%d" % (st["done"], len(funcs), st["failed"]))
