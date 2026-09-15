# -*- coding: utf-8 -*-
"""
創業王 v1.10 全量字符串提取工具

用途：把 v1.10 全部文本载体里的字符串抽出来，供逆向分析 / 文本替换 / 本地化参考。

== 载体与编码（2026-09-15 实测确定）==
  A. CEO.exe          — ① ASCII 内部串/文件名/格式串 ② **Big5 繁体中文**（UI/帮助/报错文本）
                        ③ 极少量 UTF-16LE（仅来自 Steam 包装层，非游戏本体文本）
  B. data\\*.csv       — Game 数据表，**Big5**，文本主体（产品/机器/建物/对话/新闻/地形…）
  C. stage\\*.stg      — 容器：u32 段号 + u32 压缩长度 + zlib 流；解压后有 Big5 地名/公司名
  D. *.APKG           — 资源包，索引在**文件末尾**：每 40 字节 = 文件名(32,Big5) + 偏移(u32) + 大小(u32)
                        header = 'APKG' + 索引起始偏移(u32) + 文件数(u32)；文件名含中文
  E. Face\\*.h         — C++ 枚举头（ASCII），即 UI 控件名
  F. Face\\*.fce       — 图形/布局复合体，实测无文本（仅机码噪声）

== 关键方法：用「游戏自身用字集」二阶段过滤 ==
  二进制里任意字节都可能凑巧符合 Big5 双字节编码，直接扫会产生大量假阳性
  （例：代码填充字节被解成「嬁襟昍孢」）。本工具的做法：
    阶段1  从**已确认可信**的来源（data CSV / stage / APKG 名）建立「可信用字集」；
    阶段2  扫 exe/fce 的 Big5 段，只保留「落在可信用字集内的字符占比 ≥ 阈值」的段；
    阶段3  用阶段2 的高置信结果**反哺扩充**可信用字集，再跑一遍（自举）。
  输出里保留 `用字比` 列，供人工按需再筛。UTF-16 另加「双字节 null 结尾 + CJK 字数≥3」约束。

用法：
  python extract_strings.py                 # 全量提取到本目录
  python extract_strings.py --min 3         # 最短串长（默认 4）
  python extract_strings.py --ratio 0.9     # Big5 用字比阈值（默认 0.85）

产物（均 UTF-8）：
  01_exe_strings.tsv      CEO.exe 串（ASCII + Big5，带 RVA / VA / 用字比）
  02_exe_utf16.tsv        CEO.exe 的 UTF-16LE 串
  03_data_csv.tsv         data\\*.csv 的 Big5 文本（文件 / 行号 / 文本）
  04_stage_strings.tsv    stage\\*.stg 解压后串
  05_apkg_names.tsv       各 APKG 内嵌文件名
  06_face_h_enums.tsv     Face\\*.h 枚举与控制名
  07_fce_strings.tsv      Face\\*.fce 内嵌 Big5
  all_strings.tsv         去重总表（字符串 / 编码 / 出现次数 / 来源）
  all_strings.json        同上，JSON
  chinese_texts.txt       仅中文文本（去重排序，便于通读）
  summary.txt             统计摘要
"""

import os
import re
import sys
import zlib
import json
import struct
import argparse
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
RES = os.path.abspath(os.path.join(HERE, os.pardir))       # v1.10反汇编资源\
UNPACK = os.path.join(RES, "05_资源解包")                   # 已解包资源（只读引用）
GAME = r"D:\gameapp\Steam\steamapps\common\創業王"          # 游戏本体（只读）
EXE = os.path.join(GAME, "CEO.exe")
IMAGE_BASE = 0x400000                                      # VA = 0x400000 + RVA

RATIO = 0.85          # Big5 用字比阈值（可被 --ratio 覆盖）
MINLEN = 4            # 最短串长（可被 --min 覆盖）


# ------------------------------------------------------------------ Big5 表

def _build_big5_table():
    tbl = {}
    for lead in range(0x81, 0xFF):
        for trail in list(range(0x40, 0x7F)) + list(range(0xA1, 0xFF)):
            try:
                tbl[(lead, trail)] = bytes([lead, trail]).decode("big5")
            except UnicodeDecodeError:
                pass
    return tbl


BIG5 = _build_big5_table()


# ------------------------------------------------------------------ PE 映射

def build_fo2rva(path):
    """
    构造「文件偏移 → RVA」映射。
    ⚠️ 关键：PE 节的 PointerToRawData **不等于** VirtualAddress
    （本 exe: .text RawPtr=0x400 / VirtAddr=0x1000），扫文件拿到的是**文件偏移**，
    直接当 RVA 或 VA 用会全错。返回 (fo2rva, 描述串)。
    """
    buf = open(path, "rb").read()
    pe = struct.unpack_from("<I", buf, 0x3C)[0]
    if buf[pe:pe + 4] != b"PE\x00\x00":
        raise ValueError("not a PE file: " + path)
    nsec = struct.unpack_from("<H", buf, pe + 6)[0]
    opt = struct.unpack_from("<H", buf, pe + 20)[0]
    base = pe + 24 + opt
    secs = []
    for i in range(nsec):
        o = base + i * 40
        name = buf[o:o + 8].rstrip(b"\x00").decode("latin-1")
        vsize, vaddr, rsize, raw = struct.unpack_from("<IIII", buf, o + 8)
        secs.append((name, raw, rsize, vaddr, vsize))

    def fo2rva(fo):
        for name, raw, rsize, vaddr, vsize in secs:
            if raw <= fo < raw + rsize:
                return vaddr + (fo - raw), name
        return None, None

    desc = ", ".join(f"{n} raw={r:#x}->rva={v:#x}" for n, r, _s, v, _vs in secs)
    return fo2rva, desc

# 允许出现在「像文本」串里的字符：CJK、中日韩标点、全角、常见 ASCII
_OK_RE = re.compile(
    r"[\u3000-\u303F\u4E00-\u9FFF\uF900-\uFAFF\uFE30-\uFE4F\uFF01-\uFF5E"
    r"0-9A-Za-z \t\r\n.,:;!?()\[\]{}<>/\\|@#$%^&*_+=\-'\"~`]"
)
_CJK_RE = re.compile(r"[\u3400-\u9FFF]")


def big5_runs(buf, min_chars=3):
    """
    扫 Big5 文本段，返回 [(offset, text, 前1字节, 后1字节)]。
    只做「形态」判断（可解码 + 可读字符占比），语义过滤交给 trusted_filter()。
    """
    out = []
    i, n = 0, len(buf)
    while i < n - 1:
        if (buf[i], buf[i + 1]) in BIG5:
            j, chars = i, []
            while j < n - 1 and (buf[j], buf[j + 1]) in BIG5:
                chars.append(BIG5[(buf[j], buf[j + 1])])
                j += 2
            if len(chars) >= min_chars:
                text = "".join(chars)
                ok = len(_OK_RE.findall(text))
                cjk = len(_CJK_RE.findall(text))
                if ok / len(text) >= 0.75 and cjk >= 1:
                    before = buf[i - 1] if i else 0
                    after = buf[j] if j < n else 0
                    out.append((i, text, before, after))
            i = j
        else:
            i += 1
    return out


def trusted_filter(runs, trusted, ratio):
    """按「可信用字集占比」过滤，返回 [(offset,text,before,after,ratio)]。"""
    out = []
    for off, text, before, after in runs:
        r = sum(1 for c in text if c in trusted) / len(text)
        if r >= ratio:
            out.append((off, text, before, after, r))
    return out


CAND_RATIO = 0.5      # 候选档下限


def trusted_filter_tiered(runs, trusted, ratio):
    """
    两档输出，避免「调高阈值就漏真串、调低就进噪声」的二选一：
      高   : 用字比 >= ratio
      候选 : 用字比 ∈ [CAND_RATIO, ratio) 且 **至少一侧紧邻 0x00**
             （.rdata 字符串表里的串一定是 null 结尾；代码里的巧合字节极少两侧带 null）
    返回 [(offset,text,before,after,ratio,tier)]
    """
    out = []
    for off, text, before, after in runs:
        r = sum(1 for c in text if c in trusted) / len(text)
        if r >= ratio:
            out.append((off, text, before, after, r, "高"))
        elif r >= CAND_RATIO and (before == 0 or after == 0):
            out.append((off, text, before, after, r, "候选"))
    return out


# ------------------------------------------------------------------ UTF-16LE

def _ok_cp(cp):
    return (0x20 <= cp <= 0x7E) or (0x4E00 <= cp <= 0x9FFF) \
        or (0x3000 <= cp <= 0x303F) or (0xFF01 <= cp <= 0xFF5E)


_WORDISH = set("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
               "abcdefghijklmnopqrstuvwxyz"
               " .,:;/\\_-()[]<>*+%#@!?'\"=$&|")
_ALNUM2_RE = re.compile(r"[0-9A-Za-z]{2,}")


def utf16_runs(buf, min_chars=4, min_cjk=3, ratio=0.9, trusted=None):
    """
    扫 UTF-16LE 段。两相位（偶/奇对齐）取最大段，要求「双字节 null 结尾 + 起于段边界」，
    再分两类校验：
      含 CJK  : CJK 字数 ≥ min_cjk 且用字比 ≥ ratio（少于 min_cjk 的按噪声丢弃）
      纯 ASCII: 「词形字符」占比 ≥ 0.85（挡掉 &.4<D:6 这类二进制巧合）
    """
    n = len(buf)
    out = []
    for phase in (0, 1):
        i = phase
        while i < n - 1:
            cp = buf[i] | (buf[i + 1] << 8)
            prev_ok = i >= 2 and _ok_cp(buf[i - 2] | (buf[i - 1] << 8))
            if not _ok_cp(cp) or prev_ok:
                i += 2
                continue
            j, chars = i, []
            while j < n - 1 and _ok_cp(buf[j] | (buf[j + 1] << 8)):
                chars.append(chr(buf[j] | (buf[j + 1] << 8)))
                j += 2
            term = j + 1 < n and buf[j] == 0 and buf[j + 1] == 0
            if len(chars) >= min_chars and term:
                s = "".join(chars)
                cjk = [c for c in s if "\u4e00" <= c <= "\u9fff"]
                ok = False
                if cjk:
                    if len(cjk) >= min_cjk and trusted is not None:
                        ok = sum(1 for c in cjk if c in trusted) / len(cjk) >= ratio
                else:
                    ok = sum(1 for c in s if c in _WORDISH) / len(s) >= 0.85 \
                        and _ALNUM2_RE.search(s) is not None
                if ok:
                    out.append((i, s))
            i = j
    return out


# ------------------------------------------------------------------ ASCII

def ascii_strings(buf, min_len=4):
    out, cur, start = [], [], 0
    for i, b in enumerate(buf):
        if 0x20 <= b < 0x7F or b == 0x09:
            if not cur:
                start = i
            cur.append(b)
        else:
            if len(cur) >= min_len:
                out.append((start, bytes(cur).decode("ascii")))
            cur = []
    if len(cur) >= min_len:
        out.append((start, bytes(cur).decode("ascii")))
    return out


_NOISE_RE = re.compile(r"^[\W_]+$")
_NUM_RE = re.compile(r"[-\d.]+")


def clean_ascii(items):
    return [(o, s) for o, s in items if not _NOISE_RE.match(s) and len(set(s)) > 2]


def cell_kind(s):
    """给 CSV 单元格分类，便于把配置数值从文本里筛掉。"""
    if _CJK_RE.search(s):
        return "中文"
    if _NUM_RE.fullmatch(s):
        return "数值"
    return "ASCII"


# ------------------------------------------------------------------ 各来源

def read_trusted_sources():
    """从可信来源收集字符集 + 已提取文本。"""
    trusted = set()

    # data/*.csv
    csv_rows = []
    d = os.path.join(UNPACK, "data")
    if os.path.isdir(d):
        for fn in sorted(os.listdir(d)):
            if not fn.lower().endswith(".csv"):
                continue
            txt = open(os.path.join(d, fn), "rb").read().decode("big5", "replace")
            trusted |= set(txt)
            for ln, line in enumerate(txt.replace("\r\n", "\n").split("\n"), 1):
                for cell in line.split("\t"):
                    cell = cell.strip().strip('"').strip()
                    if len(cell) >= 2:
                        csv_rows.append((fn, ln, cell))

    # stage/*.stg
    stage_rows = []
    d = os.path.join(UNPACK, "stage")
    if os.path.isdir(d):
        for fn in sorted(os.listdir(d)):
            if not fn.lower().endswith(".stg"):
                continue
            buf = open(os.path.join(d, fn), "rb").read()
            off, seg = 0, 0
            while off + 8 <= len(buf):
                _id, csize = struct.unpack_from("<II", buf, off)
                if csize <= 0 or off + 8 + csize > len(buf):
                    print(f"  [warn] {fn}: 段 {seg} 长度异常，停止解析", file=sys.stderr)
                    break
                try:
                    dec = zlib.decompress(buf[off + 8: off + 8 + csize])
                except zlib.error:
                    print(f"  [warn] {fn}: 段 {seg} 解压失败，跳过", file=sys.stderr)
                    off += 8 + csize
                    seg += 1
                    continue
                for o, s, _b, _a in big5_runs(dec, min_chars=2):
                    stage_rows.append((fn, seg, o, s, "big5"))
                    trusted |= set(s)
                for o, s in clean_ascii(ascii_strings(dec, MINLEN)):
                    stage_rows.append((fn, seg, o, s, "ascii"))
                seg += 1
                off += 8 + csize

    # APKG 内嵌文件名
    apkg_rows = []
    for fn in sorted(os.listdir(GAME)):
        if not fn.upper().endswith(".APKG"):
            continue
        buf = open(os.path.join(GAME, fn), "rb").read()
        if buf[:4] != b"APKG" or len(buf) < 12:
            continue
        idx_off, cnt = struct.unpack_from("<II", buf, 4)
        if not (0 < idx_off < len(buf)) or cnt * 40 > len(buf) - idx_off:
            print(f"  [warn] {fn}: 索引异常 idx_off={idx_off} cnt={cnt}", file=sys.stderr)
            continue
        for k in range(cnt):
            e = buf[idx_off + k * 40: idx_off + (k + 1) * 40]
            name = e[:32].split(b"\x00")[0].decode("big5", "replace")
            off_, size_ = struct.unpack_from("<II", e, 32)
            if name:
                apkg_rows.append((fn, k, name, off_, size_))
                trusted |= set(name)

    return trusted, csv_rows, stage_rows, apkg_rows


def from_exe(trusted, ratio, min_len):
    buf = open(EXE, "rb").read()
    fo2rva, secdesc = build_fo2rva(EXE)
    runs = big5_runs(buf, min_chars=3)

    # 自举：高置信段反哺可信用字集，再过滤一次
    hi = trusted_filter(runs, trusted, 0.99)
    trusted2 = trusted | {c for _o, t, _b, _a, _r in hi for c in t}
    big5 = trusted_filter_tiered(runs, trusted2, ratio)

    rows = [(o, s, "ascii", 1.0, "高") for o, s in clean_ascii(ascii_strings(buf, min_len))]
    rows += [(o, t, "big5", r, tier) for o, t, _b, _a, r, tier in big5]
    # 文件偏移 -> RVA（并附所属节名）
    out = []
    for o, s, enc, r, tier in rows:
        rva, sec = fo2rva(o)
        out.append((o, rva, sec or "?", s, enc, r, tier))
    return buf, out, len(runs), len(trusted2), secdesc


def from_face_h(min_len):
    d = os.path.join(UNPACK, "Face")
    rows = []
    if not os.path.isdir(d):
        return rows
    for fn in sorted(os.listdir(d)):
        if not fn.lower().endswith(".h"):
            continue
        txt = open(os.path.join(d, fn), "rb").read().decode("big5", "replace")
        for ln, line in enumerate(txt.replace("\r\n", "\n").split("\n"), 1):
            line = line.strip()
            if len(line) >= 2:
                rows.append((fn, ln, line))
    return rows


def from_face_fce(trusted, ratio):
    d = os.path.join(UNPACK, "Face")
    rows = []
    if not os.path.isdir(d):
        return rows
    for fn in sorted(os.listdir(d)):
        if not fn.lower().endswith(".fce"):
            continue
        buf = open(os.path.join(d, fn), "rb").read()
        for o, t, _b, _a, r, tier in trusted_filter_tiered(big5_runs(buf, 3), trusted, ratio):
            rows.append((fn, o, t, r, tier))
    return rows


# ------------------------------------------------------------------ main

def w(path, header=None):
    f = open(os.path.join(HERE, path), "w", encoding="utf-8")
    if header:
        f.write(header + "\n")
    return f


def esc(s):
    """TSV 单元转义：串里可能本来就含制表符/换行（如 exe 里带 \\t 的格式串），
    不转义会把列冲乱。只处理 TSV 有语义的字符，不动反斜杠（路径里要用）。"""
    return s.replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n")


def main():
    global RATIO, MINLEN
    ap = argparse.ArgumentParser()
    ap.add_argument("--min", type=int, default=4, help="最短串长（默认 4）")
    ap.add_argument("--ratio", type=float, default=0.85, help="Big5 用字比阈值（默认 0.85）")
    args = ap.parse_args()
    RATIO, MINLEN = args.ratio, args.min
    m = args.min

    print("=" * 64)
    print("創業王 v1.10 全量字符串提取")
    print("=" * 64)
    summary = []
    master = []

    # 阶段1：可信来源
    print("\n[阶段1] 读取可信来源，建立用字集 ...")
    trusted, csv_rows, stage_rows, apkg_rows = read_trusted_sources()
    print(f"        可信用字集: {len(trusted)} 个字符")
    print(f"        CSV {len(csv_rows)} 单元格 / stage {len(stage_rows)} 条 / APKG {len(apkg_rows)} 名")

    # 阶段2/3：exe
    print("[阶段2] CEO.exe（自举过滤）...")
    _buf, exe_rows, raw_n, trusted_n, secdesc = from_exe(trusted, RATIO, m)
    nb = sum(1 for r in exe_rows if r[4] == "big5")
    ncand = sum(1 for r in exe_rows if r[4] == "big5" and r[6] == "候选")
    with w("01_exe_strings.tsv", "RVA\tVA\t节\t编码\t置信\t用字比\t字符串") as f:
        for _fo, rva, sec, s, enc, r, tier in sorted(exe_rows, key=lambda x: (x[1] is None, x[1] or x[0])):
            if rva is None:
                # 落在 PE 头等非节区（如 DOS stub 文本）：保留，但明确标出是文件偏移
                f.write(f"(FO+{_fo:X})\t-\t(头/非节区)\t{enc}\t{tier}\t{r:.2f}\t{esc(s)}\n")
            else:
                f.write(f"CEO.exe+{rva:X}\t0x{IMAGE_BASE + rva:X}\t{sec}\t{enc}"
                        f"\t{tier}\t{r:.2f}\t{esc(s)}\n")
            master.append((s, enc, "CEO.exe", f"RVA {rva:X}" if rva is not None else f"FO {_fo:X}"))
    print(f"        原始 Big5 形态段 {raw_n} → 过滤后 {nb} 条（其中候选 {ncand}）；自举后字集 {trusted_n} 字")
    print(f"        PE 节映射: {secdesc}")
    summary.append(f"CEO.exe: ASCII {len(exe_rows)-nb} 条, Big5 {nb} 条（其中候选档 {ncand}；原始形态段 {raw_n}）")

    # UTF-16
    print("[阶段3] CEO.exe UTF-16LE ...")
    fo2rva, _sd = build_fo2rva(EXE)
    u16 = utf16_runs(_buf, trusted=trusted)
    with w("02_exe_utf16.tsv", "RVA\tVA\t节\t字符串") as f:
        for off, s in sorted(u16):
            rva, sec = fo2rva(off)
            if rva is None:
                continue
            f.write(f"CEO.exe+{rva:X}\t0x{IMAGE_BASE + rva:X}\t{sec}\t{esc(s)}\n")
            master.append((s, "utf16le", "CEO.exe", f"RVA {rva:X}"))
    print(f"        {len(u16)} 条")
    summary.append(f"CEO.exe UTF-16LE: {len(u16)} 条（全部来自 Steam 包装层）")

    # data csv
    print("[阶段4] data/*.csv ...")
    with w("03_data_csv.tsv", "文件\t行号\t类型\t文本") as f:
        for fn, ln, cell in csv_rows:
            f.write(f"{fn}\t{ln}\t{cell_kind(cell)}\t{esc(cell)}\n")
            master.append((cell, "big5", f"data/{fn}", f"L{ln}"))
    print(f"        {len(csv_rows)} 条（其中非数值 "
          f"{sum(1 for _f, _l, c in csv_rows if cell_kind(c) != '数值')} 条）")
    summary.append(f"data/*.csv: {len(csv_rows)} 个文本单元格")

    # stage
    print("[阶段5] stage/*.stg ...")
    with w("04_stage_strings.tsv", "文件\t段号\t段内偏移\t编码\t字符串") as f:
        for fn, seg, o, s, enc in stage_rows:
            f.write(f"{fn}\t{seg}\t0x{o:X}\t{enc}\t{esc(s)}\n")
            master.append((s, enc, f"stage/{fn}", f"seg{seg}+0x{o:X}"))
    print(f"        {len(stage_rows)} 条")
    summary.append(f"stage/*.stg: {len(stage_rows)} 条")

    # apkg
    print("[阶段6] *.APKG ...")
    with w("05_apkg_names.tsv", "APKG\t序号\t文件名\t偏移\t大小") as f:
        for fn, k, name, off_, size_ in apkg_rows:
            f.write(f"{fn}\t{k}\t{esc(name)}\t{off_}\t{size_}\n")
            master.append((name, "big5", fn, f"#{k}"))
    print(f"        {len(apkg_rows)} 条")
    summary.append(f"*.APKG 内嵌文件名: {len(apkg_rows)} 个")

    # face .h
    print("[阶段7] Face/*.h ...")
    h_rows = from_face_h(m)
    with w("06_face_h_enums.tsv", "文件\t行号\t内容") as f:
        for fn, ln, line in h_rows:
            f.write(f"{fn}\t{ln}\t{esc(line)}\n")
            master.append((line, "ascii", f"Face/{fn}", f"L{ln}"))
    print(f"        {len(h_rows)} 条")
    summary.append(f"Face/*.h 枚举行: {len(h_rows)} 行")

    # face .fce
    print("[阶段8] Face/*.fce ...")
    fce_rows = from_face_fce(trusted, RATIO)
    with w("07_fce_strings.tsv", "文件\t偏移\t置信\t用字比\t字符串") as f:
        for fn, o, s, r, tier in fce_rows:
            f.write(f"{fn}\t0x{o:X}\t{tier}\t{r:.2f}\t{esc(s)}\n")
            master.append((s, "big5", f"Face/{fn}", f"0x{o:X}"))
    print(f"        {len(fce_rows)} 条")
    summary.append(f"Face/*.fce: {len(fce_rows)} 条（预期为 0，实测确认为噪声才保留）")

    # 汇总
    print("\n[汇总] 生成总表 ...")
    agg = defaultdict(lambda: {"enc": set(), "src": set()})
    for text, enc, src, loc in master:
        agg[text]["enc"].add(enc)
        agg[text]["src"].add(f"{src}@{loc}")

    uniq = sorted(agg.items(), key=lambda kv: (-len(kv[1]["src"]), kv[0]))
    with w("all_strings.tsv", "字符串\t类型\t编码\t出现次数\t来源") as f:
        for text, info in uniq:
            srcs = sorted(info["src"])
            shown = " | ".join(srcs[:6]) + (" ..." if len(srcs) > 6 else "")
            f.write(f"{esc(text)}\t{cell_kind(text)}\t{'/'.join(sorted(info['enc']))}"
                    f"\t{len(srcs)}\t{shown}\n")

    with open(os.path.join(HERE, "all_strings.json"), "w", encoding="utf-8") as f:
        json.dump([{"text": t, "kind": cell_kind(t), "enc": sorted(i["enc"]),
                    "count": len(i["src"]), "sources": sorted(i["src"])}
                   for t, i in uniq],
                  f, ensure_ascii=False, indent=1)

    cjk = sorted({t for t, _ in uniq if _CJK_RE.search(t)})
    with open(os.path.join(HERE, "chinese_texts.txt"), "w", encoding="utf-8") as f:
        f.write("\n".join(cjk))

    summary.append(f"---\n总条目 {len(master)}，去重 {len(uniq)}，含中文 {len(cjk)}")
    with w("summary.txt", "創業王 v1.10 字符串提取摘要\n" + "=" * 44) as f:
        f.write("\n".join(summary) + "\n\n各来源去重贡献:\n")
        c = Counter()
        for _t, info in uniq:
            for s in info["src"]:
                c[s.split("@")[0]] += 1
        for k, v in c.most_common(30):
            f.write(f"  {v:>7}  {k}\n")

    print("\n".join(summary))
    print(f"\n产物目录: {HERE}")


if __name__ == "__main__":
    main()
