# -*- coding: utf-8 -*-
"""校验重定位结果: 用 v1.10 函数的字符串引用/API 交叉验证 v1.02 描述是否自洽, 给出置信度"""
import json, os, re

DATA = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源\03_分析数据"
rel = json.load(open(os.path.join(DATA, "known_v110_relocated.json"), encoding="utf-8"))
str_refs = json.load(open(os.path.join(DATA, "string_refs.json"), encoding="utf-8"))
api_refs = {k.lower(): v for k, v in json.load(open(os.path.join(DATA, "api_refs.json"), encoding="utf-8")).items()}

# 描述中提到 .fce/.csv/.dat/.wav 等资源名的, 期望该函数引用同名串
expect_pat = re.compile(r'(face\\[A-Za-z0-9_]+\.fce|[A-Za-z0-9_]+\.csv|famehall\d\.dat|option\.dat|sound\\e\*\.wav|Video\\\*\.mpg|save\\slot%d\.lif|\.idx1|\.pic1)')

def strings_of(va):
    a = va.upper().replace("0X", "0x")
    out = []
    for s, refs in str_refs.items():
        if a in [x.upper().replace("0X", "0x") for x in refs]:
            out.append(s)
    return out

final = {}
for va, info in rel.items():
    desc = info["desc"]
    method = info["method"] or ""
    strs = strings_of(va)
    low = [s.lower().replace("\\\\", "\\") for s in strs]
    # 期望资源名
    expects = set()
    for m in expect_pat.finditer(desc.replace("\\\\", "\\")):
        t = m.group(1)
        if t.startswith("face\\"):
            expects.add(os.path.basename(t).lower())
        elif t.endswith(".csv"):
            expects.add(t.lower())
        else:
            expects.add(t.lower())
    hit = sum(1 for e in expects if any(e in s for s in low))
    conf = "中"
    if method.startswith("字节"):
        conf = "高"
    else:
        r = float(re.search(r'\(([\d.]+)\)', method).group(1)) if re.search(r'\(([\d.]+)\)', method) else 0.8
        conf = "高" if r >= 0.92 else ("中" if r >= 0.82 else "低")
    if expects:
        # 有可验证期望: 命中则提升, 未命中则降级
        if hit:
            conf = "高" if conf in ("高", "中") else "中"
            note = "资源串验证通过(%d/%d)" % (hit, len(expects))
        else:
            conf = "低"
            note = "资源串未命中(%d 项期望)" % len(expects)
    else:
        note = "无资源串可验证"
    final[va] = {"v102": info["v102"], "desc": desc, "method": method, "conf": conf, "note": note, "strings": strs[:6]}

json.dump(final, open(os.path.join(DATA, "known_v110_final.json"), "w", encoding="utf-8"), ensure_ascii=False, indent=1)
from collections import Counter
print("置信度分布:", dict(Counter(v["conf"] for v in final.values())))
print()
for k, v in sorted(final.items(), key=lambda x: int(x[0], 16)):
    print("%s  [%s] %-14s %s | %s" % (k, v["conf"], v["note"], v["desc"][:34], (v["strings"][:2] or "")))
