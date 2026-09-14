# -*- coding: utf-8 -*-
"""生成 v1.10 函数清单（含作用说明）
说明来源:
  人工标注(v1.02移植) = v1.02 分析中经反编译确认的函数作用, 通过函数匹配表映射到 v1.10 地址
  推断 = 由函数引用的资源/数据/界面字符串与 Win32 API 自动推断
  未标注 = 无显著特征, 附被调用次数提示
"""
import json, os, io, re

BASE = r"D:\game\CEO\CEO 修改器相关\v1.10反汇编资源"
SRC = os.path.join(BASE, "01_还原源码")
DATA = os.path.join(BASE, "03_分析数据")

# v1.02 人工标注（源自 v1.02 分析报告 §3-§4, 经反编译确认）
KNOWN_V102 = {
 "0x429A60": "WinMain 程序入口: 单实例互斥→读 option.dat→建窗→全局初始化→主菜单状态机",
 "0x479990": "引擎主循环: PeekMessage/GetMessage 消息泵 + 定时器数组 + 鼠标差量 + 帧回调 + 界面退出清理",
 "0x40A8C0": "主玩法界面程序: 注册 GameState 相关 vtable 并进入主循环(返回码 1=重开 4=继续 0=回菜单 -1=退出)",
 "0x478DE0": "创建 800×600×16 游戏窗口并初始化 DirectDraw",
 "0x46C420": "打开 .apkg 资源包并按文件名线性查找条目(校验 APKG 魔数, 记录 offset/size)",
 "0x466E50": "只读打开文件: 先 fopen 裸文件, 失败则回退打开 <目录>.apkg 包内同名条目(虚拟文件系统入口)",
 "0x467000": "关闭文件句柄(区分裸文件与包条目递归关闭)",
 "0x467150": "统一读函数: 裸文件走 fread, 包条目走解码读",
 "0x46C5E0": "包内读取并逐字节取反(NOT)解密, 维护条目内位置",
 "0x469AD0": "RegisterClassExA + CreateWindowExA 创建 800×600 游戏主窗口",
 "0x491900": "DirectDrawCreate 初始化 DirectDraw 图形",
 "0x472590": "DirectSoundCreate 初始化 DirectSound 声音",
 "0x41DEF0": "全局数据装载: mapcity/txts CSV → 图块缓存 → gnd/road 图块 → 机器/产品/员工/建筑/AI/对话各表",
 "0x410B60": "解析 building.csv, 每行构建 72 字节建筑结构(4 种建筑子类型分支)",
 "0x403E50": "解析 AI_style.csv → AI 对手行为风格参数",
 "0x424720": "解析 maps.csv/mapcity.csv → 城市地图索引",
 "0x425430": "解析 stages.csv → 剧本关卡表(关卡目标/条件)",
 "0x41FFF0": "读取 option.dat 游戏设置",
 "0x434350": "输入(鼠标)初始化, 复位 5 个全局计时器",
 "0x435B90": "解析 talk.csv/talk_idx.csv NPC 对话文本",
 "0x42D2E0": "解析 people_type.csv 员工类型(能力/工资)",
 "0x428ED0": "解析 Machine_type.csv + Machine_group.csv 机器类型与组",
 "0x45F530": "主菜单界面程序: 注册菜单 vtable 并进入主循环(0=剧情 1=自由 2=名人堂 3=退出)",
 "0x4107E0": "解析 build_relation.csv 建筑依赖关系",
 "0x41C000": "解析 formula.csv 生产公式",
 "0x4132A0": "解析 mur.csv 矿/资源点数据",
 "0x42A450": "解析 news.csv 随机新闻事件",
 "0x4312F0": "解析 product1.csv/product2.csv 产品定义",
 "0x454000": "自由模式界面与 AI 配置(AIinfo.csv, 引用 list/ceo_info 等界面)",
 "0x454710": "解析 citys.csv 城市表",
 "0x438E30": "载入 famehall1.dat 名人堂数据",
 "0x422C30": "存档槽 save\\slot%d.lif 写入/读取",
 "0x422D60": "读取存档槽 save\\slot%d.lif",
 "0x434420": "按事件名播放 sound\\e*.wav 音效",
 "0x468DA0": "CreateThread 创建后台线程(声音/音乐)",
 "0x468AB0": "MCI 播放 Video\\*.mpg 过场动画",
 "0x47A5A0": "装载点阵字体(.fts/.idx1/.pic1)",
 "0x47A690": "装载辅助点阵字体",
 "0x463D80": "从图库装载图片资源",
 "0x4640F0": "装载地面/道路图块",
 "0x481750": "初始化等距图块缓存(容量参数 2048/10240)",
 "0x462440": "带调试记账的内存分配(a_alloc: 记录分配点, 未释放检测)",
 "0x462740": "带调试记账的内存释放(a_free: 非法/重复释放检测)",
 "0x460D80": "CSV 解析器: 经 afile 层读取(自动解密)并切分行列",
 "0x461000": "取 CSV 第 col 列第 row 行单元格文本",
 "0x40AC00": "剧情任务系统初始化(引用 face_task 系列界面)",
 "0x40B8B0": "玩法界面的退出/清理回调",
 "0x435FB0": "对话界面程序(引用 face\\face_talk.fce)",
 "0x45DB50": "小地图/地图旋转界面(引用 face_SmallMap.fce/MapRotate.fce)",
 "0x447A90": "银行/资产负债界面(引用 face\\Bank.fce, balance_info.fce)",
 "0x439980": "工厂信息-看板界面(引用 face\\factinf_board.fce)",
 "0x43B200": "工厂信息-矿区界面(引用 face\\factinf_mine.fce)",
 "0x43B3F0": "工厂信息-港口界面(引用 face\\factinf_port.fce)",
 "0x43CA40": "购买机器界面(引用 face\\face_buymachine.fce)",
 "0x444160": "建厂界面(引用 face\\ToBuildFirm*.fce)",
 "0x4448E0": "土地/工厂出售界面(引用 face\\forsale*.fce)",
 "0x449040": "产品手册界面(引用 face\\ProductBook*.fce)",
 "0x409000": "玩法主更新: 按消息号分派建筑放置/公司切换/资产浏览等(13KB 主逻辑)",
 "0x41E020": "GameState 快照备份/恢复(11408 字节结构)",
 "0x458190": "剧情模式关卡选择界面",
 "0x458640": "装载所选关卡并进入玩法",
 "0x4560F0": "自由经营模式参数设置界面",
 "0x453FA0": "自由模式初始化",
 "0x44A230": "自由模式城市/难度选择",
 "0x429A20": "名人堂入口流程",
 "0x459EF0": "名人堂数据载入/显示(famehall2.dat)",
}

KNOWN = {}
_kf = json.load(open(os.path.join(DATA, "known_v110_final.json"), encoding="utf-8"))
for _va, _v in _kf.items():
    KNOWN[_va.upper().replace("0X", "0x")] = _v["desc"] + "  [v1.02:%s 置信度:%s %s]" % (_v["v102"], _v["conf"], _v["note"])

str_by_func = {}
for s, refs in json.load(open(os.path.join(DATA, "string_refs.json"), encoding="utf-8")).items():
    for r in refs:
        str_by_func.setdefault(r.lower(), []).append(s)
api_refs = {k.lower(): v for k, v in json.load(open(os.path.join(DATA, "api_refs.json"), encoding="utf-8")).items()}
callgraph = json.load(open(os.path.join(DATA, "callgraph.json"), encoding="utf-8"))
callers = {}
for c, callees in callgraph.items():
    for x in callees:
        callers[x] = callers.get(x, 0) + 1

def describe(fn):
    a = fn["addr"].upper().replace("0X", "0x")
    al = fn["addr"].lower()
    if a in KNOWN:
        return KNOWN[a], "人工标注"
    strs = sorted(str_by_func.get(al, []) + str_by_func.get(a, []))
    apis = api_refs.get(al, []) + api_refs.get(a, [])
    hints = []
    fce = [s for s in strs if s.endswith(".fce")]
    csv = [s for s in strs if s.endswith(".csv")]
    res = [s for s in strs if s.endswith((".apkg", ".wav", ".mpg", ".dat", ".lif", ".stg", ".tga", ".pic1", ".pic2", ".idx1", ".idx2", ".ch1", ".ch2"))]
    if fce: hints.append("加载界面布局 " + "、".join(fce[:2]) + " → 界面程序")
    if csv: hints.append("读取数据表 " + "、".join(csv[:2]))
    if res: hints.append("引用资源 " + "、".join(res[:2]))
    ajoin = " ".join(apis)
    if "DirectDraw" in ajoin or "BitBlt" in ajoin: hints.append("图形绘制/呈现")
    if "CreateFile" in ajoin or "ReadFile" in ajoin: hints.append("文件读写")
    if "GetMessage" in ajoin or "PeekMessage" in ajoin: hints.append("消息循环")
    if "CreateThread" in ajoin: hints.append("线程管理")
    if "DirectSound" in ajoin or "waveOut" in ajoin: hints.append("音频")
    if "RegOpenKey" in ajoin: hints.append("注册表")
    if hints:
        return "；".join(hints), "推断"
    return "被 %d 处调用 (无显著字符串/API 特征)" % callers.get(al, callers.get(a, 0)), "未标注"

# 收集模块目录
mods = {}
for mod in sorted(os.listdir(SRC)):
    d = os.path.join(SRC, mod)
    if os.path.isdir(d):
        mods[mod] = d

# 从 .c 文件头解析函数记录
hdr = re.compile(r"// 函数 (0x[0-9A-Fa-f]+)  (\S+)  size=(0x[0-9A-Fa-f]+)  模块=(.+)")
records = []
for mod, d in mods.items():
    for f in os.listdir(d):
        if not f.endswith(".c"):
            continue
        with io.open(os.path.join(d, f), encoding="utf-8", errors="replace") as g:
            head = g.readline() + (g.readline() or "")
        m = hdr.match(head)
        if m:
            records.append({"addr": m.group(1), "name": m.group(2), "size": int(m.group(3), 16),
                            "mod": mod.strip(), "file": f})
print("parsed", len(records))

stats = {"人工标注": 0, "推断": 0, "未标注": 0}
by_mod = {}
for r in records:
    by_mod.setdefault(r["mod"], []).append(r)
for mod in sorted(by_mod):
    fns = sorted(by_mod[mod], key=lambda x: int(x["addr"], 16))
    lines = ["# %s — 函数清单与作用说明（%d 个）" % (mod, len(fns)), "",
             "> 作用说明来源：`人工标注`=v1.02 分析中经反编译确认的作用（通过函数匹配表映射到 v1.10 地址）；`推断`=由引用的界面/数据/资源字符串与 Win32 API 自动推断；`未标注`=无显著特征，请结合伪源码阅读。", "",
             "| 地址 | 函数名 | 大小 | 作用说明 | 依据 | 伪源码文件 |", "|---|---|---|---|---|---|"]
    for fn in fns:
        desc, tag = describe(fn)
        stats[tag] += 1
        lines.append("| %s | %s | 0x%X | %s | %s | %s |" % (fn["addr"], fn["name"], fn["size"], desc, tag, fn["file"]))
    io.open(os.path.join(mods[mod], "_模块函数清单.md"), "w", encoding="utf-8").write("\n".join(lines))

print("STATS", stats)
