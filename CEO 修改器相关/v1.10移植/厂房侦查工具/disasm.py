"""Linear x86-32 disassembler for a PE image range (RVA based).

Usage:
    python disasm.py <exe> <rva_start_hex> <rva_end_hex> [--abs]

Example (dump the placement routine in the 1.10 build):
    python disasm.py CEO.exe 2BDA0 2BF00

Needs: pip install capstone
"""
import struct
import sys

from capstone import CS_ARCH_X86, CS_MODE_32, Cs


def parse_pe(path):
    data = open(path, "rb").read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    coff = e_lfanew + 4
    num_sections, = struct.unpack_from("<H", data, coff + 2)
    size_opt, = struct.unpack_from("<H", data, coff + 16)
    opt = coff + 20
    image_base, = struct.unpack_from("<I", data, opt + 28)
    sections = []
    sec_off = opt + size_opt
    for i in range(num_sections):
        off = sec_off + i * 40
        name = data[off : off + 8].rstrip(b"\0").decode("latin1").strip()
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", data, off + 8)
        sections.append(dict(name=name, vaddr=vaddr, vsize=vsize, rawsize=rawsize, rawptr=rawptr))
    return data, image_base, sections


def rva_to_off(sections, rva):
    for s in sections:
        if s["vaddr"] <= rva < s["vaddr"] + s["rawsize"]:
            return s["rawptr"] + (rva - s["vaddr"])
    return None


def main():
    path = sys.argv[1]
    rva_start = int(sys.argv[2], 16)
    rva_end = int(sys.argv[3], 16)
    show_abs = "--abs" in sys.argv
    data, image_base, sections = parse_pe(path)
    off = rva_to_off(sections, rva_start)
    if off is None:
        print("rva not mapped to raw data")
        return
    code = data[off : off + (rva_end - rva_start)]
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = False
    print(f"{path}  image_base=0x{image_base:X}  rva 0x{rva_start:X}..0x{rva_end:X}")
    for insn in md.disasm(code, image_base + rva_start):
        rva = insn.address - image_base
        absmark = f" abs=0x{insn.address:08X}" if show_abs else ""
        print(
            "RVA 0x{0:06X}{1}  {2:<24} {3} {4}".format(
                rva, absmark, insn.bytes.hex(" ").upper(), insn.mnemonic, insn.op_str
            )
        )


if __name__ == "__main__":
    main()
