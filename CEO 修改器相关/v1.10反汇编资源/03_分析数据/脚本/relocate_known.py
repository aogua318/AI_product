# -*- coding: utf-8 -*-
"""为 v1.10 人工标注做精确重定位:
对 v1.02 已确认的每个函数, 用「字节上下文唯一匹配」在 v1.10 中定位;
不唯一时退化为助记符匹配并标注置信度。
"""
import json, os, difflib
import pefile

V102 = open(r'D:\game\CEO\CEO.exe', 'rb').read()
V110 = open(r'D:\gameapp\Steam\steamapps\common\創業王\CEO.exe', 'rb').read()
pe102 = pefile.PE(data=V102, fast_load=True)
pe110 = pefile.PE(data=V110, fast_load=True)
B = 0x400000

def off102(va): return pe102.get_offset_from_rva(va - B)
def va110(off):
    for s in pe110.sections:
        if s.PointerToRawData <= off < s.PointerToRawData + s.SizeOfRawData:
            return B + s.VirtualAddress + (off - s.PointerToRawData)
    return None

# v1.02 已确认函数（地址 -> 作用），与 gen_inventory.py 中的 KNOWN_V102 一致
KNOWN = json.load(open(r'D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据\known_v102.json', encoding='utf-8'))
mnem = json.load(open(r'D:\game\CEO\修改器\创业王v1.02修改器分析\func_match_mnem.json', encoding='utf-8'))
head = json.load(open(r'D:\game\CEO\修改器\创业王v1.02修改器分析\func_match.json', encoding='utf-8'))

result = {}
for a102_s, desc in KNOWN.items():
    va = int(a102_s, 16)
    o = off102(va)
    # 逐级尝试: 24 / 16 / 12 / 8 字节上下文唯一匹配
    found, method = None, None
    for n in (32, 24, 16, 12, 8):
        pat = V102[o:o + n]
        hits = []
        i = 0
        while True:
            i = V110.find(pat, i)
            if i < 0: break
            hits.append(i); i += 1
        if len(hits) == 1:
            found = va110(hits[0]); method = "字节%d" % n; break
        if len(hits) == 0:
            break
    if found is None:
        # 退化: 助记符/头字节匹配表
        k1 = a102_s.upper().replace("0X", "0x"); k2 = a102_s.lower()
        for tbl, tag in ((mnem, "助记符"), (head, "头字节")):
            for k in (k1, k2):
                if k in tbl:
                    found = int(tbl[k]["v110"], 16); method = tag + "(%.2f)" % tbl[k].get("ratio", 0.8); break
            if found: break
    if found:
        result[hex(found).replace("0x", "0x").upper().replace("0X", "0x")] = {
            "v102": a102_s, "desc": desc, "method": method}
json.dump(result, open(r'D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据\known_v110_relocated.json', 'w', encoding='utf-8'), ensure_ascii=False, indent=1)

from collections import Counter
c = Counter((v["method"] or "?")[:3] for v in result.values())
print("重定位成功 %d / %d" % (len(result), len(KNOWN)))
print("方法分布:", dict(c))
for k, v in sorted(result.items(), key=lambda x: int(x[0], 16)):
    print("  %s <= %s [%s] %s" % (k, v["v102"], v["method"], v["desc"][:40]))
