import json, os

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
v1 = json.load(open(os.path.join(OUT, "funcs_feat_v102.json"), encoding="utf-8"))
v2 = json.load(open(os.path.join(OUT, "funcs_feat_v110.json"), encoding="utf-8"))

# index v110 by string refs and by head-bytes
by_head = {}
for f in v2:
    by_head.setdefault(f["head"], []).append(f)
by_str = {}
for f in v2:
    for s in f["strs"]:
        by_str.setdefault(s, set()).add(f["addr"])

matches = {}
for f in v1:
    a = f["addr"]
    # 1) exact head-bytes match (identical prologue+body start) with same size
    cands = by_head.get(f["head"], [])
    exact = [c for c in cands if abs(c["size"] - f["size"]) <= 16]
    if len(exact) == 1:
        matches[a] = {"v110": exact[0]["addr"], "conf": "head_bytes", "size102": f["size"], "size110": exact[0]["size"]}
        continue
    # 2) string-ref overlap
    best = None
    best_score = 0
    strs = set(f["strs"])
    if strs:
        score_map = {}
        for s in strs:
            for cand in by_str.get(s, ()):
                score_map[cand] = score_map.get(cand, 0) + 1
        for cand, sc in score_map.items():
            cf = next(x for x in v2 if x["addr"] == cand)
            denom = max(len(strs), len(cf["strs"]))
            if denom == 0:
                continue
            sc = sc / denom
            size_ratio = min(f["size"], cf["size"]) / max(f["size"], cf["size"])
            total = sc * 0.7 + size_ratio * 0.3
            if total > best_score:
                best_score = total
                best = (cand, cf, sc)
    if best and best_score >= 0.6:
        matches[a] = {"v110": best[0], "conf": "strings(%.2f)" % best_score, "size102": f["size"], "size110": best[1]["size"]}

json.dump(matches, open(os.path.join(OUT, "func_match.json"), "w"), indent=0)
print("matched:", len(matches), "/", len(v1))
# check the specific functions we care about
care = ["0x420150", "0x409C00", "0x45CE50", "0x43B200", "0x426AB0", "0x40A180",
        "0x4191D0", "0x4192F0", "0x419400", "0x419FB0", "0x41A110", "0x45D2E0", "0x409000"]
for c in care:
    m = matches.get(c)
    print(c, "->", m)
