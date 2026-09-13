import idc, idautils, ida_funcs, ida_bytes, json

out = []
base = 0x400000

# 1) xrefs to mouse_event string (dump offset 0x5ccec8 was file offset in strings list = VA given by IDA strings; recompute: string list ea was 0x5ccec8? we saw ea printed '0x5ccec8' as VA)
for s_va, nm in [(0x5CCEC8, "mouse_event"), (0x5D6F54, "hotkey_labels"), (0x590DA1, "CEO.exe_str")]:
    out.append("=== xrefs to %s @ %08X ===" % (nm, s_va))
    for x in idautils.XrefsTo(s_va):
        f = ida_funcs.get_func(x.frm)
        out.append("  from %08X (func %s)" % (x.frm, ("%08X" % f.start_ea) if f else "none"))

# 2) SetWindowsHookExA call sites: show preceding push (hook type) context
out.append("=== SetWindowsHookExA call sites ===")
for site in (0x53A360, 0x565169, 0x568018):
    out.append("-- site %08X --" % site)
    ea = site
    for i in range(10):
        out.append("  %08X  %s" % (ea, idc.generate_disasm_line(ea, 0) or "<undef>"))
        n = idc.next_head(ea)
        if n <= ea:
            break
        ea = n

open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\probe_mouse.txt", "w", encoding="utf-8").write("\n".join(out))
print("DONE")
