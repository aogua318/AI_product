# 02 - KubeJS 基础概念

## KubeJS 的工作原理（一句话版）

KubeJS 在 Minecraft 启动时，用 **Mozilla Rhino**（一个 Java 写的 JavaScript 引擎）执行玩家写的 JS 脚本，把脚本里注册的"回调函数"挂到游戏的各种**事件**上，事件发生时就调用对应的 JS 函数。

所以源码里会同时看到两种东西：
1. Java 侧：定义事件、注册配方模式、把 Java 对象"包装"给 JS 用（`script/`、`event/`、`recipe/` 包）
2. JSON 侧：配方模式（recipe schema）等数据文件（`resources/data/.../recipe_schema/`）

## 三种脚本类型（ScriptType）

| 类型 | 目录 | 执行时机 | 典型用途 |
|------|------|----------|----------|
| startup | `kubejs/startup_scripts/` | 游戏启动、注册阶段 | 注册新物品/方块 |
| server | `kubejs/server_scripts/` | 世界加载 / `/reload` | 改配方、写服务器逻辑 |
| client | `kubejs/client_scripts/` | 客户端启动 | 改 JEI 界面、tooltip |

源码里 `ScriptType.STARTUP`、`ScriptType.SERVER` 这些常量就是它，事件也会声明自己属于哪种类型（比如 Create 附属的三个事件都是 startup）。

## 事件系统（event 包）

- `EventGroup`：一组事件的集合，如 `CreateEvents.GROUP = EventGroup.of("CreateEvents")`
- `EventHandler`：单个事件的"钩子"，脚本里写 `CreateEvents.spoutHandler(event => {...})` 就是订阅它
- 事件分 startup / server / client / network 几类，由声明方法决定（`GROUP.startup(...)` 等）

对应源码：`KubeJS-Create/.../events/CreateEvents.java` —— 一个 interface，里面只有常量定义，很典型的"声明式事件表"。

## 插件机制（KubeJSPlugin）

附属模组想给 KubeJS 添加功能，不是直接改 KubeJS，而是写一个 `KubeJSPlugin` 子类，KubeJS 启动时回调它的各个钩子方法：

- `registerBindings` —— 往 JS 里注入全局变量（如 `CreateItem`）
- `registerEvents` —— 注册事件组
- `registerRecipeSchemas` —— 注册配方模式
- `registerRecipeComponents` —— 注册配方组件类型
- `registerTypeWrappers` —— 让 JS 能把普通对象当作某 Java 类型用
- `registerBuilderTypes` —— 注册"物品/方块构建器"（让 startup 脚本能创建自定义物品）

插件在 `src/main/resources/kubejs.plugins.txt` 里声明，一行格式：`完整类名 别名`。
KubeJS-Create 的就一行：`dev.latvian.mods.kubejs.create.KubeJSCreatePlugin create`。

## 配方模式（Recipe Schema）

KubeJS 7+ 用 **JSON 文件**描述"某种机器的配方长什么样"（有哪些输入、输出、可选参数），而不是用 Java 硬编码。脚本作者就能写：

```js
ServerEvents.recipes(e => {
  e.recipes.create.crushing('minecraft:sand', 'minecraft:gravel')
})
```

`.recipes.create.crushing` 能存在，就是因为 KubeJS-Create 注册了 `crushing.json` 这个 schema。
schema 支持继承：`"parent": "create:base/processing_with_time"` 表示"在通用处理配方基础上加一个 processing_time 参数"。

相关文件：
- 模式 JSON：`KubeJS-Create/src/main/resources/data/create/kubejs/recipe_schema/`
- 解析代码：`kubejs/.../recipe/schema/` 包

## 类型包装（TypeWrapper / Rhino）

JS 里的对象和 Java 对象不是一回事。Rhino 引擎负责在两者之间转换：
- `registerBindings`：JS 直接用 `CreateItem.xxx` 访问 Java 类
- `registerTypeWrappers`：JS 里写的普通字面量（如 `{fluid: 'water', amount: 100}`）自动转成 Java 的 `ProcessingOutput` 等
- `interfaces.json`（kubejs 仓库根目录）：接口注入数据，让 Java 接口在 JS 侧更好用

这是看源码最容易懵的地方：**一个方法在 JS 里能传的参数类型很宽松，是因为有一堆转换层**。
