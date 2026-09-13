import idc, idautils, ida_funcs, ida_hexrays

out = []
hooks = {
    "script_00 (F? 生产类)": 0x4020E3,
    "script_01 (矿物改类型)": 0x409E1B,
    "fullaccess A7848": 0x4A7848,
    "fullaccess A7840": 0x4A7840,
    "script_02 A784c": 0x4A784C,
    "script_04": 0x40225F,
    "script_05": 0x402268,
    "script_06": 0x40226E,
    "script_07": 0x4024FC,
    "script_08": 0x42790F,
    "script_09": 0x427765,
    "script_03 3B2D3": 0x43B2D3,
    "script_04b 5CF3B": 0x45CF3B,
}
for name, a in hooks.items():
    out.append("=== %s @ %08X ===" % (name, a))
    f = ida_funcs.get_func(a)
    if f:
        out.append("  containing func: %08X size=0x%X" % (f.start_ea, f.size()))
    ea = a
    for i in range(8):
        out.append("  %08X  %s" % (ea, idc.generate_disasm_line(ea, 0) or "<undef>"))
        n = idc.next_head(ea)
        if n <= ea:
            break
        ea = n
    # raw bytes
    out.append("  bytes: " + " ".join("%02X" % ida_bytes.get_byte(a + i) for i in range(16)))

try:
    import ida_bytes
    # decompile containing functions of two key hooks
    for a in (0x4020E3, 0x409E1B):
        f = ida_funcs.get_func(a)
        if f:
            try:
                cf = ida_hexrays.decompile(f.start_ea)
                open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\decomp\game_%08X.c" % f.start_ea, "w", encoding="utf-8").write(str(cf))
                out.append("GAMEDECOMP %08X ok len=%d" % (f.start_ea, len(str(cf))))
            except Exception as e:
                out.append("GAMEDECOMP %08X fail %s" % (f.start_ea, str(e)[:60]))
except Exception as e:
    out.append("err %s" % e)

open(r"D:\game\CEO\修改器\创业王v1.02修改器分析\game_cross.txt", "w", encoding="utf-8").write("\n".join(out))
print("CROSSDONE")
