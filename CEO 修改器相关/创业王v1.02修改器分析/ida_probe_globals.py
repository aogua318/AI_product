import idc, idautils, ida_funcs, ida_hexrays

out = []
for va in (0x88EFDC, 0x8BC594, 0x8BC594+1, 0x88EFDC+1):
    out.append("=== xrefs to %08X ===" % va)
    n = 0
    for x in idautils.XrefsTo(va):
        f = ida_funcs.get_func(x.frm)
        out.append("  from %08X (func %s size=0x%X)" % (x.frm, ("%08X" % f.start_ea) if f else "none", f.size() if f else 0))
        n += 1
        if n > 12: break
    if n == 0:
        out.append("  <none>")
# decompile the accessing functions of the two primary targets
for va in (0x88EFDC, 0x8BC594):
    for x in idautils.XrefsTo(va):
        f = ida_funcs.get_func(x.frm)
        if f:
            try:
                cf = ida_hexrays.decompile(f.start_ea)
                open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\decomp\game_acc_%08X.c" % f.start_ea, "w", encoding="utf-8").write(str(cf))
                out.append("DECOMP %08X ok len=%d" % (f.start_ea, len(str(cf))))
            except Exception as e:
                out.append("DECOMP %08X fail %s" % (f.start_ea, str(e)[:60]))
            break
open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\globals_xrefs.txt", "w", encoding="utf-8").write("\n".join(out))
print("DONE")
