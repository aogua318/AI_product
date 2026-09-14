import json, os, idautils, ida_funcs, ida_name, ida_xref, ida_bytes, ida_entry

OUT = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据"
os.makedirs(OUT, exist_ok=True)

# 1) 全部函数
funcs = []
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    name = ida_name.get_ea_name(ea, ida_name.GN_VISIBLE)
    funcs.append({"addr": hex(ea), "name": name, "size": f.size() if f else 0})
json.dump(funcs, open(os.path.join(OUT, "functions.json"), "w", encoding="utf-8"), indent=0)

# 2) 源码路径断言串 → 函数归属
cpp_pairs = []
mod_map = {}
for s in idautils.Strings():
    try:
        val = str(s)
    except Exception:
        continue
    if ".cpp" in val.lower():
        cpp_pairs.append({"addr": hex(s.ea), "path": val})
        for xr in idautils.XrefsTo(s.ea):
            fa = ida_funcs.get_func(xr.frm)
            if fa:
                mod_map.setdefault(hex(fa.start_ea), set()).add(val)
json.dump(cpp_pairs, open(os.path.join(OUT, "cpp_strings.json"), "w", encoding="utf-8"), ensure_ascii=False, indent=1)
json.dump({k: sorted(v) for k, v in mod_map.items()}, open(os.path.join(OUT, "func_to_module.json"), "w", encoding="utf-8"), ensure_ascii=False, indent=1)

# 3) 资源路径字符串 → 引用函数
str_refs = {}
res_all = []
for s in idautils.Strings():
    try:
        val = str(s)
    except Exception:
        continue
    res_all.append({"addr": hex(s.ea), "string": val})
    if val.endswith((".apkg", ".fce", ".csv", ".wav", ".mpg", ".idx1", ".idx2", ".pic1", ".pic2", ".dat", ".lif", ".stg", ".tga")) \
       or val.startswith(("face\\", "pics\\", "data\\", "sound\\", "maps\\", "fonts\\", "stage\\", "Video\\")):
        refs = set()
        for xr in idautils.XrefsTo(s.ea):
            fa = ida_funcs.get_func(xr.frm)
            if fa:
                refs.add(hex(fa.start_ea))
        if refs:
            str_refs.setdefault(val, sorted(refs))
json.dump(res_all, open(os.path.join(OUT, "strings_all.json"), "w", encoding="utf-8"), ensure_ascii=False, indent=0)
json.dump(str_refs, open(os.path.join(OUT, "string_refs.json"), "w", encoding="utf-8"), ensure_ascii=False, indent=1)

# 4) 调用图
callgraph = {}
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    callees = set()
    for item in idautils.FuncItems(ea):
        for xr in idautils.XrefsFrom(item, 0):
            if xr.type in (ida_xref.fl_CN, ida_xref.fl_CF):
                t = ida_funcs.get_func(xr.to)
                if t:
                    callees.add(hex(t.start_ea))
    callgraph[hex(ea)] = sorted(callees)
json.dump(callgraph, open(os.path.join(OUT, "callgraph.json"), "w", encoding="utf-8"), indent=0)

# 5) 导入表（含 IAT 名，若库中未标注则给地址）
imports = []
for ea, name in idautils.Names():
    if name.startswith("IAT_") or (0x4A2000 <= ea < 0x4A22AC):
        imports.append({"addr": hex(ea), "name": name})
json.dump(imports, open(os.path.join(OUT, "imports.json"), "w", encoding="utf-8"), indent=1)

# 6) 入口点
ents = []
for i in range(ida_entry.get_entry_qty()):
    o = ida_entry.get_entry_ordinal(i)
    ents.append({"ordinal": o, "addr": hex(ida_entry.get_entry(o)), "name": ida_entry.get_entry_name(o)})
json.dump(ents, open(os.path.join(OUT, "entrypoints.json"), "w", encoding="utf-8"), indent=1)

print("EXPORT_DONE funcs=%d strings=%d cpp=%d modmap=%d strrefs=%d callgraph=%d imports=%d" % (
    len(funcs), len(res_all), len(cpp_pairs), len(mod_map), len(str_refs), len(callgraph), len(imports)))
