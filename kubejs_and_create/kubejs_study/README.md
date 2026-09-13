# kubejs_study

KubeJS 学习仓库：示例脚本 + 学习文档。

```
kubejs_study/
├── docs/                 # 学习文档（按编号阅读，README 先看）
├── startup_scripts/      # 启动脚本：注册内容（改完要重启游戏）
├── server_scripts/       # 服务端脚本：配方、标签、聊天、逻辑（/reload 生效）
├── client_scripts/       # 客户端脚本：JEI/tooltip/显示（F3+T 生效）
└── assets/               # 脚本配套的客户端资源（语言文件等）
```

## 怎么用

把对应文件复制到游戏实例的 `kubejs/` 下同名位置即可，例如 chat_miao：

```
<游戏实例>/kubejs/server_scripts/chat_miao.js    ← server_scripts/chat_miao.js
<游戏实例>/kubejs/assets/kubejs/lang/*.json      ← assets/kubejs/lang/*.json
```

## 归属判断速查

判断脚本该放哪，见 [docs/08](docs/08-三种脚本文件夹详解.md) 的一图流：

- 要进注册表（注册新内容）→ startup_scripts
- 纯显示 → client_scripts
- 其余一切（数据/逻辑/聊天/配方）→ server_scripts

## 现有脚本

| 脚本 | 位置 | 功能 | 原理文档 |
|------|------|------|----------|
| chat_miao.js | server_scripts/ | 公屏发言结尾自动补"喵"，已有"喵"则不动；代码里不出现"喵"字面量（码点比较 + 翻译键方案），日志/网络包/源码可执行部分都搜不到 | [docs/09](docs/09-隐藏字符实现原理与限制.md) |
| chat_utils.js | server_scripts/ | chat_miao 的极简版：`\u55B5` 转义使代码无"喵"字面量，直接发真字符，不需要语言文件。防的只是"搜源码"（日志里会有"喵"）。注释已按学习约定补全——需要隐身时删注释即可 | [docs/09](docs/09-隐藏字符实现原理与限制.md) 极简版一节 |
| recipe_examples.js | server_scripts/ | 原版配方添加示例：背包合成、无序/有序合成、熔炉/高炉/烟熏炉/营火、切石机、锻造台，每类带参数讲解 | 参数顺序依据 schema，见 [docs/07](docs/07-KubeJS常用方法详解.md) 第 4 节 |
| tag_batch_examples.js | server_scripts/ | 标签批量专题：标签当配方输入、批量删改配方、标签套标签/正则/循环三种批量打标方式、事件执行顺序 | [docs/07](docs/07-KubeJS常用方法详解.md) 第 5 节 |

**注意：chat_miao.js 和 chat_utils.js 二选一部署**，同时放进游戏实例会重复追加后缀（显示两个"喵"）。
两份文件定位不同：chat_miao 是学习版（注释齐全、防到运行时数据层），chat_utils 是恶作剧版（只防源码搜索，5 行够用）。

方案选择依据（需求层级决定复杂度，详见 docs/09）：
- 只防"翻文件搜源码" → chat_utils.js：一行 `\u55B5` 转义就够
- 还要防"搜日志/网络包" → chat_miao.js：翻译键 + 语言文件才是必需品
