import json, os, idc, idautils, ida_funcs, ida_ua

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
tag = os.environ.get("FEAT_TAG", "v102")

funcs = []
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f or f.size() < 32:
        continue
    mn = []
    for item in idautils.FuncItems(ea):
        m = idc.print_insn_mnem(item)
        if m:
            mn.append(m)
    seq = " ".join(mn)
    funcs.append({"addr": hex(ea), "size": f.size(), "n": len(mn), "seq": seq})
json.dump(funcs, open(os.path.join(OUT, "funcs_mnem_%s.json" % tag), "w", encoding="utf-8"))
print("EXPORTED", tag, len(funcs))
