import json, struct, os

OUT = r"D:\game\CEO\修改器\创业王v1.02修改器分析"
V110 = open(r'D:\gameapp\Steam\steamapps\common\創業王\CEO.exe', 'rb').read()
V102 = open(r'D:\game\CEO\CEO.exe', 'rb').read()
B = 0x400000
base110 = 0x400000

# 1) where is the unique s01 byte pattern in v1.10 (file offset -> VA via section mapping)?
import pefile
pe110 = pefile.PE(data=V110, fast_load=True)
def off110_to_va(off):
    for s in pe110.sections:
        if s.PointerToRawData <= off < s.PointerToRawData + s.SizeOfRawData:
            return base110 + s.VirtualAddress + (off - s.PointerToRawData)
    return None
pat_s01 = bytes.fromhex('8A46035F3C02')
idx = V110.find(pat_s01)
va_s01 = off110_to_va(idx)
print('s01 alt bytes found in v1.10 at file 0x%x -> VA %08X (v1.02 hook 0x409E1B, shift=%+#x)' % (idx, va_s01, va_s01 - 0x409E1B))

# 2) anchors from mnemonic matches near each hook region
mm = json.load(open(os.path.join(OUT, 'func_match_mnem.json')))
anchors = sorted((int(k, 16), int(v['v110'], 16)) for k, v in mm.items())
def region_shift(va):
    # nearest anchor below
    best = None
    for a102, a110 in anchors:
        if a102 <= va:
            best = (a102, a110)
        else:
            break
    if best is None:
        return None, None
    return best[1] - best[0], best

hooks = [
    ('s00_money',   0x4202E3, bytes.fromhex('2BC8890A894C2458')),
    ('s01_mineral', 0x409E1B, bytes.fromhex('8A46035F3C02')),
    ('s02_era',     0x45CF3B, bytes.fromhex('0FBE9408E0000000')),
    ('s03_factory', 0x43B2D3, bytes.fromhex('8B4B08')),
    ('s04_own',     0x42025F, bytes.fromhex('897F68894A04')),
    ('s05_own',     0x420268, bytes.fromhex('897F70894A04')),
    ('s06_own',     0x42026E, bytes.fromhex('894A08894A0C')),
    ('s07_build',   0x4204FC, bytes.fromhex('894C2414')),
    ('s08_prod',    0x42790F, bytes.fromhex('66FF00B801000000')),
    ('s09_prod',    0x427765, bytes.fromhex('66FF4500B801000000')),
]
# 3) for each hook: wildcarded opcode-level pattern search near the estimated position in v1.10
#    build pattern from v1.02 context: keep opcode bytes, wildcard immediates/disp32 that differ
import re
def wildcard_ctx(va, hooklen):
    o = off102 = None
    import pefile as pf
    pe102 = pf.PE(r'D:\game\CEO\CEO.exe', fast_load=True)
    o = pe102.get_offset_from_rva(va - B)
    ctx = V102[o - 20:o + hooklen + 20]
    return ctx

for name, va, orig in hooks:
    sh, anchor = region_shift(va)
    est = va + (sh if sh else 0)
    # search window ±0x8000 around estimate for the exact alt bytes first
    o110 = None
    # map est to v1.10 file offset
    for s in pe110.sections:
        if s.VirtualAddress <= est - base110 < s.VirtualAddress + s.Misc_VirtualSize:
            o110 = s.PointerToRawData + (est - base110 - s.VirtualAddress)
            break
    found = None
    if o110:
        lo = max(0, o110 - 0x8000)
        hi = min(len(V110), o110 + 0x8000)
        i = V110.find(orig, lo, hi)
        if i >= 0:
            found = off110_to_va(i)
    print('%-12s v1.02 %08X shift=%s est=%08X exact-in-window=%s' % (
        name, va, ('%+#x' % sh) if sh else 'None', est, ('%08X' % found) if found else 'no'))
