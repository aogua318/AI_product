import json, difflib, os

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
v1 = json.load(open(os.path.join(OUT, "funcs_mnem_v102_.json"), encoding="utf-8"))
v2 = json.load(open(os.path.join(OUT, "funcs_mnem_v110_.json"), encoding="utf-8"))

# size-bucketed candidates + difflib SequenceMatcher on mnemonic strings
v2b = {}
for f in v2:
    v2b.setdefault(f["size"] // 200, []).append(f)

def best_for(f):
    lo = max(0, f["size"] // 200 - 1)
    cands = []
    for b in (lo - 1, lo, lo + 1):
        cands.extend(v2b.get(b, []))
    best = None
    best_r = 0.0
    sm = difflib.SequenceMatcher(None, f["seq"], "", autojunk=False)
    for c in cands:
        if abs(c["size"] - f["size"]) > f["size"] * 0.4:
            continue
        sm.set_seq2(c["seq"])
        r = sm.real_quick_ratio()
        if r < best_r:
            continue
        r = sm.ratio()
        if r > best_r:
            best_r = r
            best = c
    return best, best_r

care = {
    "0x420150": "s00/s04/s05/s06/s07 钩子所在函数(厂房界面主逻辑)",
    "0x409C00": "s01 钩子所在(选中地块处理)",
    "0x45CE50": "s02 钩子所在(建设菜单年代过滤)",
    "0x43B200": "s03 钩子所在(矿区信息界面)",
    "0x426AB0": "s08/s09 钩子所在(生产推进)",
    "0x40A180": "访问 0x88EFDC/0x8BC594",
    "0x4191D0": "访问 0x88EFDC",
    "0x419400": "访问 0x88EFDC",
    "0x419FB0": "访问 0x88EFDC",
    "0x45D2E0": "访问 0x8BC594",
}
res = {}
for f in v1:
    b, r = best_for(f)
    if b and r >= 0.75:
        res[f["addr"]] = {"v110": b["addr"], "ratio": round(r, 3), "size102": f["size"], "size110": b["size"]}
json.dump(res, open(os.path.join(OUT, "func_match_mnem.json"), "w"), indent=0)
print("matched>=0.75:", len(res), "/", len(v1))
for a, note in care.items():
    m = res.get(a)
    print(a, "(%s)" % note, "->", m if m else "NO MATCH")
