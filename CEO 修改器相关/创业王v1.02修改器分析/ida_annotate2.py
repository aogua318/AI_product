import json, os, idc, idaapi, ida_name, ida_auto, idautils

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
iat = json.load(open(os.path.join(OUT, "iat_annotations.json"), encoding="utf-8"))
n = 0
for va_s, name in iat.items():
    va = int(va_s, 16)
    idc.create_data(va, idc.FF_DWORD, 4, idaapi.BADADDR)
    safe = name.replace(".", "_")
    if ida_name.set_name(va, "IAT_" + safe, ida_name.SN_NOWARN | ida_name.SN_NOCHECK):
        n += 1
print("NAMED", n)
ida_auto.auto_wait()
print("ANALYSIS_DONE funcs=%d" % len(list(idautils.Functions())))
