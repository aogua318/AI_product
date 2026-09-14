"""Minimal PE parser + wildcard AOB search for CEO.exe (1.10).

Usage:
    python pe_aob.py <exe> <pattern> [<pattern> ...]

Pattern syntax: hex bytes separated by spaces, "??" = wildcard.
Example:
    python pe_aob.py CEO.exe "66 FF 87 D4 01 00 00" "66 83 BC ?? 20 03 00 00"

Prints every hit as file-offset / RVA / (RVA-BaseOfCode) with surrounding bytes.
"""
import struct
import sys


def parse_pe(path):
    data = open(path, "rb").read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    assert data[e_lfanew : e_lfanew + 4] == b"PE\0\0", "not a PE file"
    coff = e_lfanew + 4
    num_sections, = struct.unpack_from("<H", data, coff + 2)
    size_opt, = struct.unpack_from("<H", data, coff + 16)
    opt = coff + 20
    magic, = struct.unpack_from("<H", data, opt)
    is64 = magic == 0x20B
    image_base = struct.unpack_from("<Q" if is64 else "<I", data, opt + (24 if is64 else 28))[0]
    image_size, = struct.unpack_from("<I", data, opt + 56)
    sections = []
    sec_off = opt + size_opt
    for i in range(num_sections):
        off = sec_off + i * 40
        name = data[off : off + 8].rstrip(b"\0").decode("latin1")
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", data, off + 8)
        sections.append(
            dict(name=name, vaddr=vaddr, vsize=vsize, rawsize=rawsize, rawptr=rawptr)
        )
    return data, image_base, image_size, sections


def rva_to_off(sections, rva):
    for s in sections:
        span = max(s["vsize"], s["rawsize"])
        if s["vaddr"] <= rva < s["vaddr"] + span:
            delta = rva - s["vaddr"]
            if delta < s["rawsize"]:
                return s["rawptr"] + delta
            return None
    return None


def off_to_rva(sections, off):
    for s in sections:
        if s["rawptr"] <= off < s["rawptr"] + s["rawsize"]:
            return s["vaddr"] + (off - s["rawptr"])
    return None


def parse_pattern(text):
    out = []
    for token in text.split():
        if token in ("??", "?", "**"):
            out.append(None)
        else:
            out.append(int(token, 16))
    return out


def find_all(data, pattern):
    n = len(pattern)
    first = pattern[0]
    hits = []
    start = 0
    while True:
        i = data.find(bytes([first]) if first is not None else b"", start) if first is not None else start
        if first is None:
            i = start
        if i < 0 or i + n > len(data):
            break
        ok = True
        for k, b in enumerate(pattern):
            if b is not None and data[i + k] != b:
                ok = False
                break
        if ok:
            hits.append(i)
            start = i + 1
        else:
            start = i + 1
    return hits


def main():
    path = sys.argv[1]
    data, image_base, image_size, sections = parse_pe(path)
    print(f"file      : {path}")
    print(f"size      : {len(data)} (0x{len(data):X})")
    print(f"image base: 0x{image_base:X}   size of image: 0x{image_size:X}")
    for s in sections:
        print(
            "  section {name:8s} rva=0x{vaddr:06X} vsize=0x{vsize:06X} "
            "rawptr=0x{rawptr:06X} rawsize=0x{rawsize:06X}".format(**s)
        )
    for pat_text in sys.argv[2:]:
        pattern = parse_pattern(pat_text)
        hits = find_all(data, pattern)
        print(f"\n=== {pat_text} ===  hits={len(hits)}")
        for off in hits[:40]:
            rva = off_to_rva(sections, off)
            ctx = data[off : off + len(pattern) + 8]
            print(
                "  file=0x{0:06X} rva=0x{1} (CEO.exe+{2}) bytes={3}".format(
                    off,
                    f"{rva:06X}" if rva is not None else "?",
                    f"{rva:X}" if rva is not None else "?",
                    ctx.hex(" ").upper(),
                )
            )
        if len(hits) > 40:
            print(f"  ... {len(hits) - 40} more")


if __name__ == "__main__":
    main()
