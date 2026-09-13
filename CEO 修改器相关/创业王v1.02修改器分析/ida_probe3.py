import json, os, idautils, ida_funcs, ida_hexrays

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
base = 0x400000
targets = {}
# script string VAs
import re
dump = open(os.path.join(OUT, "trainer_memdump.bin"), "rb").read()
for m in re.finditer(rb'\[ENABLE\]', dump):
    targets[base + m.start()] = "AA_SCRIPT"
# api name strings
for pat, nm in [(rb'\x00OpenProcess\x00', "str_OpenProcess"), (rb'\x00WriteProcessMemory\x00', "str_WPM"),
                (rb'\x00ReadProcessMemory\x00', "str_RPM"), (rb'OpenProcessToken', "str_OpenProcTok"),
                (rb'GetWindowThreadProcessId', "str_GWTPID"), (rb'\x00mouse_event\x00', "str_mouse_event")]:
    for m in re.finditer(pat, dump):
        targets[base + m.start() + (1 if pat.startswith(b'\x00') else 0)] = nm

res = {}
for va, nm in targets.items():
    xr = idautils.XrefsTo(va)
    fl = []
    for x in xr:
        fa = ida_funcs.get_func(x.frm)
        fl.append(hex(fa.start_ea) if fa else hex(x.frm))
    if fl:
        res.setdefault(nm, {})[hex(va)] = sorted(set(fl))
json.dump(res, open(os.path.join(OUT, "script_xrefs.json"), "w"), indent=1)
for k, v in res.items():
    print(k, v)
