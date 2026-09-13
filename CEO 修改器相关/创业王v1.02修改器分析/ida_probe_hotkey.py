import idc, idautils, ida_funcs

out = []
IAT = {
    "GetKeyState": 0x574420, "mouse_event": 0x5745C0, "SetWindowsHookExA": 0x5745E0,
    "CallNextHookEx": 0x5745DC, "GetForegroundWindow": 0x574638, "PostMessageA": 0x574540,
}
for nm, va in IAT.items():
    out.append("=== %s @ %08X ===" % (nm, va))
    callers = {}
    for x in idautils.XrefsTo(va):
        f = ida_funcs.get_func(x.frm)
        callers.setdefault(hex(f.start_ea) if f else "nocallers", []).append(hex(x.frm))
    for k, v in callers.items():
        out.append("  caller %s <- %s" % (k, ",".join(v[:6])))
open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\hotkey_xrefs.txt", "w", encoding="utf-8").write("\n".join(out))
print("DONE")
