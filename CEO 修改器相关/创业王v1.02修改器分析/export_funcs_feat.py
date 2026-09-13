import json, os, idc, idautils, ida_funcs, ida_bytes

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
tag = idc.ARGV[1] if len(idc.ARGV) > 1 else "v102"

funcs = []
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    size = f.size()
    # string refs (decoded from this DB)
    strs = set()
    apis = set()
    consts = set()
    for item in idautils.FuncItems(ea):
        for xr in idautils.DataRefsFrom(item):
            b = ida_bytes.get_byte(xr)
            pass
        # read cstring at data ref
        for xr in idautils.DataRefsFrom(item):
            s = idc.get_strlit_contents(xr, -1, 0)
            if s and len(s) >= 4:
                try:
                    strs.add(s.decode('gbk', 'replace')[:40])
                except Exception:
                    pass
        for xr in idautils.DataRefsFrom(item):
            nm = idc.get_name(xr)
            if nm and nm.startswith('IAT_'):
                apis.add(nm)
    # sample instruction bytes (first 64 bytes) hash
    raw = ida_bytes.get_bytes(ea, min(size, 96)) or b''
    funcs.append({
        "addr": hex(ea), "size": size,
        "strs": sorted(strs), "apis": sorted(apis),
        "head": raw[:32].hex(),
    })
json.dump(funcs, open(os.path.join(OUT, "funcs_feat_%s.json" % tag), "w", encoding="utf-8"), ensure_ascii=False)
print("EXPORTED", tag, len(funcs))
