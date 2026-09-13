# -*- coding: utf-8 -*-
"""
创业王 v1.02 修改器 → v1.10 兼容加载器
原理: 启动原修改器, 待 ASPack 壳自解压完成后, 在其内存中打补丁:
  1) 版本门禁: "v1.02---" → "1.10---"
  2) 已适配功能的 AA 脚本: 钩子偏移/数据槽符号改为 1.10 地址
  3) Ctrl 系全局常量(double)改为 1.10 地址
  4) 未适配功能的脚本改为安全空脚本(防止写坏 1.10 内存)
用法: 先启动 1.10 版游戏并进入存档, 再运行本加载器 (可重复运行, 直接附加已运行的修改器)。
"""
import ctypes, os, sys, time, struct

k32 = ctypes.windll.kernel32
TRAINER = r"D:\game\CEO\修改器\创业王v1.02.exe"
B = 0x400000

# ---------- 补丁表 (基于 v1.02↔v1.10 函数匹配, 见分析报告 §10) ----------
TITLE_OLD = b"v1.02---"
TITLE_NEW = b"1.10---\x00"

SLOT_MAP = [                       # 数据槽符号(等长替换)
    (b"A7848", b"F7048"),
    (b"A7840", b"F7040"),
    (b"A784c", b"F704c"),
    (b"A784C", b"F704c"),
]

SCRIPT_PATCH = {
    0x59E637: [(b"9E1B", b"A36E")],  # s01/F3 矿物修改: 钩子 0x409E1B → 0x40A36E (已验证)
}
SCRIPT_NEUTER = [                    # 未适配 → 安全空脚本
    0x57D03E,  # s00 F2 无限金钱   (1.10 金钱代码已变)
    0x59E7FA,  # s02 年代/建筑过滤
    0x59E9ED,  # s03 厂房对象缓存 (Ctrl+Z/X/C 依赖)
    0x59F0CA,  # s04 强占
    0x59F2A3,  # s05 强占
    0x59F47C,  # s06 强占
    0x59F669,  # s07
    0x59F833,  # s08 机器秒生产   (1.10 生产代码已变)
    0x59FA1E,  # s09 机器秒生产
]
DBL_PATCH = {
    0x59E5BB: 0x8D6074 - B,          # Ctrl+C 宣传车全局: 0x8BC594 → 0x8D6074 (已验证)
}

class PE32(ctypes.Structure):
    _fields_ = [("dwSize", ctypes.c_ulong), ("cntUsage", ctypes.c_ulong),
                ("th32ProcessID", ctypes.c_ulong), ("th32DefaultHeapID", ctypes.POINTER(ctypes.c_ulong)),
                ("th32ModuleID", ctypes.c_ulong), ("cntThreads", ctypes.c_ulong),
                ("th32ParentProcessID", ctypes.c_ulong), ("pcPriClassBase", ctypes.c_long),
                ("dwFlags", ctypes.c_ulong), ("szExeFile", ctypes.c_char * 260)]

def find_pid(key_ascii):
    key = key_ascii.encode("ascii")
    snap = k32.CreateToolhelp32Snapshot(2, 0)
    e = PE32()
    e.dwSize = ctypes.sizeof(e)
    ok = k32.Process32First(snap, ctypes.byref(e))
    while ok:
        raw = bytes(e.szExeFile).split(b"\x00")[0]
        if key in raw:
            k32.CloseHandle(snap)
            return e.th32ProcessID
        ok = k32.Process32Next(snap, ctypes.byref(e))
    k32.CloseHandle(snap)
    return None

def rpm(h, va, n):
    buf = ctypes.create_string_buffer(n)
    got = ctypes.c_size_t(0)
    if not k32.ReadProcessMemory(h, ctypes.c_void_p(va), buf, n, ctypes.byref(got)):
        return None
    return buf.raw[:got.value]

def wpm(h, va, data):
    got = ctypes.c_size_t(0)
    ok = bool(k32.WriteProcessMemory(h, ctypes.c_void_p(va), data, len(data), ctypes.byref(got)))
    if not ok:
        # 只读页(.rdata): 先 VirtualProtectEx 改可写再写
        old = ctypes.c_ulong(0)
        if k32.VirtualProtectEx(h, ctypes.c_void_p(va), len(data), 0x40, ctypes.byref(old)):
            ok = bool(k32.WriteProcessMemory(h, ctypes.c_void_p(va), data, len(data), ctypes.byref(got)))
            k32.VirtualProtectEx(h, ctypes.c_void_p(va), len(data), old.value, ctypes.byref(old))
    return ok

def main():
    pid = find_pid("v1.02")
    if not pid:
        os.startfile(TRAINER)
        print("[*] 已启动修改器, 等待解压+界面就绪 ...")
        for _ in range(60):
            time.sleep(0.5)
            pid = find_pid("v1.02")
            if pid:
                break
    else:
        print("[*] 修改器已在运行, 直接附加")
    if not pid:
        print("[!] 未找到修改器进程")
        return 1
    time.sleep(1.5)
    print("[*] PID =", pid)
    h = k32.OpenProcess(0x1F0FFF, False, pid)
    if not h:
        print("[!] OpenProcess 失败")
        return 1

    sig = rpm(h, 0x59E58F, 30)
    expect = "Ctrl+Z：开.鼠标给主管".encode("gbk")
    if not sig or not sig.startswith(expect):
        print("[!] 特征校验失败, 内存布局不符:", sig and sig[:20])
        return 1
    print("[+] 特征校验通过 (基址 0x400000)")

    n = 0
    image0 = rpm(h, B, 0x250000)
    if image0:
        idx = 0
        while True:
            idx = image0.find(TITLE_OLD, idx)
            if idx < 0:
                break
            wpm(h, B + idx, TITLE_NEW)
            n += 1
            idx += 1
    print("[+] 版本门禁补丁: %d 处" % n)

    image = rpm(h, B, 0x250000)
    if not image:
        print("[!] 读镜像失败")
        return 1
    slot_n = 0
    for old, new in SLOT_MAP:
        idx = 0
        while True:
            idx = image.find(old, idx)
            if idx < 0:
                break
            wpm(h, B + idx, new)
            slot_n += 1
            idx += 1
    print("[+] 数据槽符号替换: %d 处" % slot_n)

    for va, subs in SCRIPT_PATCH.items():
        text = rpm(h, va, 600)
        if text is None:
            continue
        end = text.find(b"\x00")
        body = text[:end if end >= 0 else 600]
        for old, new in subs:
            body = body.replace(b"+" + old, b"+" + new)
        wpm(h, va, body + b"\x00")
        print("[+] 脚本适配 %08X (F3 矿物修改: 钩子→0x40A36E)" % va)

    # 全局扫替: 任何残留的旧符号(脚本/处理器侧)统一等长替换, 幂等
    GLOBAL_SYM = [(b"9E1B", b"A36E")] + SLOT_MAP
    for _ in range(3):
        img2 = rpm(h, B, 0x250000)
        if not img2:
            break
        fixed = 0
        for old, new in GLOBAL_SYM:
            idx2 = 0
            while True:
                idx2 = img2.find(old, idx2)
                if idx2 < 0:
                    break
                wpm(h, B + idx2, new)
                fixed += 1
                idx2 += 1
        if fixed == 0:
            break
    print("[+] 全局符号扫替完成")

    for va in SCRIPT_NEUTER:
        wpm(h, va, b"; not ported to 1.10 yet\x00")
    print("[+] 未适配脚本已安全禁用: %d 个" % len(SCRIPT_NEUTER))

    for va, newoff in DBL_PATCH.items():
        wpm(h, va, struct.pack("<d", float(newoff)))
    print("[+] Ctrl+C 全局常量 → 0x8D6074")

    print("[完成] 修改器已适配 1.10 (当前可用: F3 矿物修改; 其余功能待逐钩子移植)")
    return 0

if __name__ == "__main__":
    sys.exit(main())
