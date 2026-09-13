import json, os, idautils, ida_funcs, ida_name, idc

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
targets = ("IAT_kernel32_OpenProcess", "IAT_kernel32_WriteProcessMemory", "IAT_kernel32_ReadProcessMemory",
           "IAT_user32_FindWindowA", "IAT_user32_FindWindowExA", "IAT_user32_GetAsyncKeyState",
           "IAT_user32_RegisterHotKey", "IAT_user32_SetWindowsHookExA", "IAT_kernel32_CreateToolhelp32Snapshot",
           "IAT_kernel32_OpenProcess", "IAT_user32_GetDlgItem", "IAT_user32_SendMessageA",
           "IAT_kernel32_TerminateProcess", "IAT_user32_GetWindowTextA", "IAT_user32_GetCursorPos")
res = {}
for ea, name in idautils.Names():
    if name in targets:
        refs = set()
        for xr in idautils.XrefsTo(ea):
            fa = ida_funcs.get_func(xr.frm)
            if fa:
                refs.add(hex(fa.start_ea))
        if refs:
            res[name] = sorted(refs)
json.dump(res, open(os.path.join(OUT, "key_api_callsites.json"), "w"), indent=1)
print("APISITES", json.dumps(res)[:600])

# GBK strings
strs = []
for s in idautils.Strings():
    try:
        v = str(s)
    except Exception:
        continue
    strs.append((hex(s.ea), s.length, s.type, v))
json.dump(strs, open(os.path.join(OUT, "trainer_strings.json"), "w", encoding="utf-8"), ensure_ascii=False)
print("STRS", len(strs))
