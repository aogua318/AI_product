import ctypes, os, time, struct

k32 = ctypes.windll.kernel32
B = 0x400000

class PE32(ctypes.Structure):
    _fields_ = [("dwSize", ctypes.c_ulong), ("cntUsage", ctypes.c_ulong), ("th32ProcessID", ctypes.c_ulong),
                ("th32DefaultHeapID", ctypes.POINTER(ctypes.c_ulong)), ("th32ModuleID", ctypes.c_ulong),
                ("cntThreads", ctypes.c_ulong), ("th32ParentProcessID", ctypes.c_ulong),
                ("pcPriClassBase", ctypes.c_long), ("dwFlags", ctypes.c_ulong), ("szExeFile", ctypes.c_char * 260)]

def find_pids():
    snap = k32.CreateToolhelp32Snapshot(2, 0)
    e = PE32(); e.dwSize = ctypes.sizeof(e)
    out = []
    if k32.Process32First(snap, ctypes.byref(e)):
        while True:
            if b"v1.02" in bytes(e.szExeFile).split(b"\x00")[0]:
                out.append(e.th32ProcessID)
            if not k32.Process32Next(snap, ctypes.byref(e)):
                break
    k32.CloseHandle(snap)
    return out

# 0) 清理所有残留实例(释放单实例互斥量)
for p in find_pids():
    k32.TerminateProcess(k32.OpenProcess(0x1F0FFF, False, p), 0)
time.sleep(1)

# 1) 运行加载器(它负责启动+打补丁)
import subprocess
r = subprocess.run(["D:\\demoapp\\python\\python313\\python.exe",
                    r"D:\game\CEO\修改器\v1.10移植\loader_v110.py"],
                   capture_output=True, text=True, encoding="utf-8", errors="replace")
print(r.stdout.strip())
if r.returncode != 0:
    print("[!] 加载器失败"); raise SystemExit(1)

# 2) 附加验证
time.sleep(1)
pids = find_pids()
if not pids:
    print("[!] 修改器未在运行"); raise SystemExit(1)
h = k32.OpenProcess(0x1F0FFF, False, pids[0])
def rpm(va, n):
    buf = ctypes.create_string_buffer(n)
    got = ctypes.c_size_t(0)
    k32.ReadProcessMemory(h, ctypes.c_void_p(va), buf, n, ctypes.byref(got))
    return buf.raw[:got.value]

ok = True
t = rpm(0x59E637, 500)
f3_ok = (b"A36E" in t) and (b"9E1B" not in t)
print("[检查1] F3 脚本已改钩子:", f3_ok)
img = rpm(B, 0x250000)
t_ok = (img.count(b"v1.02---") == 0) and (img.count(b"1.10---") >= 1)
print("[检查2] 版本门禁已改:", t_ok, "(v1.02---=%d, 1.10---=%d)" % (img.count(b"v1.02---"), img.count(b"1.10---")))
s_ok = (img.count(b"A7848") == 0) and (img.count(b"F7048") >= 2)
print("[检查3] 数据槽已改:", s_ok, "(A7848=%d, F7048=%d)" % (img.count(b"A7848"), img.count(b"F7048")))
d = struct.unpack("<d", rpm(0x59E5BB, 8))[0]
c_ok = int(d) == 0x8D6074 - 0x400000
print("[检查4] Ctrl+C 全局常量:", d, "(=0x%X) 期望 0x4D6074" % int(d), "→", c_ok)
print()
print("全部通过" if (f3_ok and t_ok and s_ok and c_ok) else "存在未通过项")
k32.TerminateProcess(h, 0)
