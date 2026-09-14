import json, os, idautils, ida_funcs

OUT = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据"
api_map = {}
for ea, name in idautils.Names():
    if 0x4A2000 <= ea < 0x4A2300:
        api_map[ea] = name

func_apis = {}
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    apis = set()
    for item in idautils.FuncItems(ea):
        for xr in idautils.XrefsFrom(item, 0):
            if xr.to in api_map:
                apis.add(api_map[xr.to])
    if apis:
        func_apis[hex(ea)] = sorted(apis)
json.dump(func_apis, open(os.path.join(OUT, "api_refs.json"), "w"), indent=0)
print("APIDUMP funcs=%d" % len(func_apis))
