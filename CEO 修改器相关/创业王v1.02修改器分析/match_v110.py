import struct, re, json, os
import pefile

V102 = open(r'D:\game\CEO\CEO.exe', 'rb').read()
V110 = open(r'D:\gameapp\Steam\steamapps\common\創業王\CEO.exe', 'rb').read()
TR = open(r'D:\game\CEO\修改器\创业王v1.02修改器分析\trainer_memdump.bin', 'rb').read()
B = 0x400000

pe102 = pefile.PE(data=V102, fast_load=True)
pe110 = pefile.PE(data=V110, fast_load=True)
base110 = pe110.OPTIONAL_HEADER.ImageBase
print('v1.10 ImageBase:', hex(base110))
for s in pe110.sections:
    print('  %s chars=0x%x va=0x%x vsz=0x%x' % (s.Name.decode().rstrip('\0'), s.Characteristics, s.VirtualAddress, s.Misc_VirtualSize))

def off102(va): return pe102.get_offset_from_rva(va - B)
def off110(va): return pe110.get_offset_from_rva(va - base110)

# ---- 1) hooks: (name, v1.02 hook VA, original bytes)  [VA = 0x400000 + script offset] ----
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
results = {}
for name, va, orig in hooks:
    o102 = off102(va)
    ctx_before = V102[o102-24:o102]
    ctx_after = V102[o102+len(orig):o102+len(orig)+24]
    # find in v1.10: ctx_before + orig + ctx_after exact
    pat = ctx_before + orig + ctx_after
    idx = 0; hits = []
    while True:
        idx = V110.find(pat, idx)
        if idx < 0: break
        hits.append(idx); idx += 1
    if len(hits) == 1:
        new_va = base110 + hits[0] + 24
        results[name] = {'v102': hex(va), 'v110': hex(new_va), 'method': 'ctx32'}
        print('%-12s %08X -> %08X  (ctx32, unique)' % (name, va, new_va))
    else:
        # relax: orig bytes + 8 before/after
        pat2 = V102[o102-8:o102] + orig + V102[o102+len(orig):o102+len(orig)+8]
        idx = 0; hits2 = []
        while True:
            idx = V110.find(pat2, idx)
            if idx < 0: break
            hits2.append(idx); idx += 1
        # subtract only orig-only matches
        if len(hits2) == 1:
            new_va = base110 + hits2[0] + 8
            results[name] = {'v102': hex(va), 'v110': hex(new_va), 'method': 'ctx8'}
            print('%-12s %08X -> %08X  (ctx8, unique)' % (name, va, new_va))
        else:
            # orig bytes only
            idx = 0; hits3 = []
            while True:
                idx = V110.find(orig, idx)
                if idx < 0: break
                hits3.append(idx); idx += 1
            results[name] = {'v102': hex(va), 'v110': ['%08X' % (base110 + h + 0) for h in hits3], 'method': 'orig_only', 'note': 'hits=%d' % len(hits3)}
            print('%-12s %08X -> AMBIG (%d ctx-hits; orig-only %d sites)' % (name, va, len(hits), len(hits3)))

# ---- 2) Ctrl globals: v1.02 access contexts -> v1.10 (wildcard the 4-byte global) ----
def find_global(gva):
    o102 = off102(gva)
    hits_new = []
    # take 4 access contexts around known xref sites in v1.02 code
    sites = []
    for delta in (-6, -3, 0, 3, 6):
        pass
    # gather candidate pattern: 8 bytes before immediate and 8 after (immediate = gva, 4 bytes)
    pre = V102[o102-8:o102]
    post = V102[o102+4:o102+12]
    pat = pre + b'\x00\x00\x00\x00' + post
    pr = re.compile(re.escape(pre) + b'(.{4})' + re.escape(post), re.S)
    for m in pr.finditer(V110):
        new_gva = base110 + m.start() + 8
        hits_new.append((hex(new_va if False else new_gva), m.group(1).hex()))
    return hits_new

for gva, nm in [(0x88EFDC, 'CtrlZ_X_global'), (0x8BC594, 'CtrlC_global')]:
    hits = find_global(gva)
    print(nm, hex(gva), '-> v1.10 candidates:', hits[:8])

# ---- 3) data slots: find unreferenced BSS page in v1.10 .data tail ----
tail_start, tail_end = 0x4F7000, 0x4F7300
ref = 0
for off in range(off110(0x400000), min(off110(0x400000)+0xA2000, len(V110))-4):
    v = struct.unpack_from('<I', V110, off)[0]
    if tail_start <= v < tail_end:
        ref += 1
print('refs into tail %08X-%08X in v1.10 code: %d' % (tail_start, tail_end, ref))

json.dump(results, open('v110_offset_map.json', 'w'), indent=1)
print('saved v110_offset_map.json')
