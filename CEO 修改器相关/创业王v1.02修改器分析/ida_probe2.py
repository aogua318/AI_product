import json, os, idautils
OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
strs = []
for s in idautils.Strings():
    try:
        v = str(s)
    except Exception:
        continue
    strs.append((hex(s.ea), s.length, v))
json.dump(strs, open(os.path.join(OUT, "trainer_strings.json"), "w", encoding="utf-8"), ensure_ascii=False)
print("STRS", len(strs))
