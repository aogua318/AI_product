import ctypes, ctypes.wintypes as wt, os, struct, sys, time

k32 = ctypes.windll.kernel32
psapi = ctypes.windll.psapi
TH32CS_SNAPMODULE = 0x8
TH32CS_SNAPPROCESS = 0x2
PROCESS_VM_READ = 0x10
PROCESS_QUERY_INFORMATION = 0x400

class MODULEENTRY32(ctypes.Structure):
    _fields_ = [("dwSize", ctypes.c_ulong), ("th32ModuleID", ctypes.c_ulong),
                ("th32ProcessID", ctypes.c_ulong), ("GlblcntUsage", ctypes.c_ulong),
                ("ProccntUsage", ctypes.c_ulong), ("modBaseAddr", ctypes.POINTER(ctypes.c_byte)),
                ("modBaseSize", ctypes.c_ulong), ("hModule", ctypes.c_void_p),
                ("szModule", ctypes.c_char * 256), ("szExePath", ctypes.c_char * 260)]

def find_pid(name_part):
    snap = k32.CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)
    class PROCENTRY32(ctypes.Structure):
        _fields_ = [("dwSize", ctypes.c_ulong), ("cntUsage", ctypes.c_ulong),
                    ("th32ProcessID", ctypes.c_ulong), ("th32DefaultHeapID", ctypes.POINTER(ctypes.c_ulong)),
                    ("th32ModuleID", ctypes.c_ulong), ("cntThreads", ctypes.c_ulong),
                    ("th32ParentProcessID", ctypes.c_ulong), ("pcPriClassBase", ctypes.c_long),
                    ("dwFlags", ctypes.c_ulong), ("szExeFile", ctypes.c_char * 260)]
    e = PROCENTRY32(); e.dwSize = ctypes.sizeof(e)
    res = []
    if k32.Process32First(snap, ctypes.byref(e)):
        while True:
            n = e.szExeFile.decode('gbk', 'replace')
            if name_part in n:
                res.append((e.th32ProcessID, n))
            if not k32.Process32Next(snap, ctypes.byref(e)):
                break
    k32.CloseHandle(snap)
    return res

def dump():
    pids = find_pid("v1.02")
    if not pids:
        print("NOPROC"); return
    pid = pids[0][0]
    print("PID", pid, pids[0][1])
    h = k32.OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, False, pid)
    if not h:
        print("OPENFAIL", ctypes.get_last_error()); return
    snap = k32.CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid)
    e = MODULEENTRY32(); e.dwSize = ctypes.sizeof(e)
    mods = []
    if k32.Module32First(snap, ctypes.byref(e)):
        while True:
            mods.append((e.szModule.decode('gbk','replace').lower(),
                         ctypes.cast(e.modBaseAddr, ctypes.c_void_p).value or 0,
                         e.modBaseSize,
                         e.szExePath.decode('gbk','replace')))
            if not k32.Module32Next(snap, ctypes.byref(e)):
                break
    k32.CloseHandle(snap)
    main = mods[0]
    base, size = main[1], main[2]
    print("main module", main[0], hex(base), hex(size))
    buf = ctypes.create_string_buffer(size)
    got = ctypes.c_size_t(0)
    if not k32.ReadProcessMemory(h, ctypes.c_void_p(base), buf, size, ctypes.byref(got)):
        print("READFAIL", ctypes.get_last_error()); return
    image = buf.raw[:got.value]
    out_dir = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
    os.makedirs(out_dir, exist_ok=True)
    open(os.path.join(out_dir, "trainer_memdump.bin"), "wb").write(image)
    json_mods = [{"name": m[0], "base": m[1], "size": m[2], "path": m[3]} for m in mods]
    import json
    json.dump(json_mods, open(os.path.join(out_dir, "modules.json"), "w"), indent=1)
    print("dumped", hex(got.value))
    # build export map for system modules to annotate IAT later
    expmap = {}
    for m in mods:
        if m[0] in ("kernel32.dll", "user32.dll", "gdi32.dll", "advapi32.dll", "ws2_32.dll",
                    "winmm.dll", "ole32.dll", "oleaut32.dll", "comctl32.dll", "wininet.dll",
                    "comdlg32.dll", "shell32.dll", "msvcr71.dll", "ntdll.dll"):
            mb, msz = m[1], m[2]
            hdr = ctypes.create_string_buffer(0x1000)
            k32.ReadProcessMemory(h, ctypes.c_void_p(mb), hdr, 0x1000, ctypes.byref(got))
            e_lfanew = struct.unpack_from("<I", hdr.raw, 0x3c)[0]
            # export dir RVA from optional header data directory 0
            dd_rva, dd_sz = struct.unpack_from("<II", hdr.raw, e_lfanew + 24 + 96)
            if dd_rva == 0:
                continue
            eh = ctypes.create_string_buffer(dd_sz + 8)
            k32.ReadProcessMemory(h, ctypes.c_void_p(mb + dd_rva), eh, dd_sz, ctypes.byref(got))
            raw = eh.raw
            nfun, nnames = struct.unpack_from("<II", raw, 0x14 + 4)
            aof, aon, aoo = struct.unpack_from("<III", raw, 0x1c + 8)
            funbuf = ctypes.create_string_buffer(nfun * 4 + 8)
            namebuf = ctypes.create_string_buffer(nnames * 4 + 8)
            ooo = ctypes.create_string_buffer(nnames * 2 + 8)
            k32.ReadProcessMemory(h, ctypes.c_void_p(mb + aof), funbuf, nfun * 4, ctypes.byref(got))
            k32.ReadProcessMemory(h, ctypes.c_void_p(mb + aon), namebuf, nnames * 4, ctypes.byref(got))
            k32.ReadProcessMemory(h, ctypes.c_void_p(mb + aoo), ooo, nnames * 2, ctypes.byref(got))
            fns = struct.unpack_from("<%dI" % nfun, funbuf.raw, 0)
            nms = struct.unpack_from("<%dI" % nnames, namebuf.raw, 0)
            ords = struct.unpack_from("<%dH" % nnames, ooo.raw, 0)
            nb = ctypes.create_string_buffer(4096)
            for i in range(nnames):
                k32.ReadProcessMemory(h, ctypes.c_void_p(mb + nms[i]), nb, 200, ctypes.byref(got))
                nm = nb.raw.split(b"\0")[0].decode('ascii', 'replace')
                va = mb + fns[ords[i]] if ords[i] < nfun else 0
                expmap[va] = m[0].split('.')[0] + "." + nm
    import json
    json.dump({hex(k): v for k, v in expmap.items()}, open(os.path.join(out_dir, "exports_map.json"), "w"), indent=0)
    print("exports mapped:", len(expmap))

if __name__ == "__main__":
    dump()
