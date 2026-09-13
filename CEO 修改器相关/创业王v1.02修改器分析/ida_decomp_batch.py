import os, idc, idautils, ida_funcs, ida_hexrays

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析\decomp"
os.makedirs(OUT, exist_ok=True)
addrs = [0x4EAAE0, 0x4EC860, 0x4FF2E0, 0x4FF6B0, 0x5345E0, 0x53B6F0]
for a in addrs:
    try:
        cf = ida_hexrays.decompile(a)
        open(os.path.join(OUT, "%08X.c" % a), "w", encoding="utf-8").write(str(cf))
        print("OK", hex(a), len(str(cf)))
    except Exception as e:
        print("FAIL", hex(a), str(e)[:80])
# callers of mouse_event wrapper 0x5345E0
out = ["=== callers of 0x5345E0 (mouse_event wrapper) ==="]
for x in idautils.XrefsTo(0x5345E0):
    f = ida_funcs.get_func(x.frm)
    out.append("  from %08X (func %s)" % (x.frm, ("%08X" % f.start_ea) if f else "none"))
open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\mouse_callers.txt", "w", encoding="utf-8").write("\n".join(out))
print("\n".join(out))
