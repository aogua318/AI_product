import idc, idautils, ida_bytes
out = []
for a in (0x498143, 0x401ab8):
    out.append("=== around %08X ===" % a)
    ea = a
    for i in range(40):
        line = idc.generate_disasm_line(ea, 0)
        out.append("%08X  %s" % (ea, line or "<undef>"))
        n = idc.next_head(ea)
        if n <= ea or n > a + 0x300:
            break
        ea = n
open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\disasm_probe.txt", "w", encoding="utf-8").write("\n".join(out))
print("DONE")
