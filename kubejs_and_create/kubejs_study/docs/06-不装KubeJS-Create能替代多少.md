# 06 - KubeJS-Create 到底提供了什么？不装它行不行？

## 先纠正一个理解

KubeJS-Create 做的不是"性能优化"，而是**集成与便利性（DX）**——把 Create 的功能和私有 API 暴露给 KubeJS 脚本。它不改变游戏运行速度，装不装对游戏性能没有影响；区别在于**脚本能不能写、写起来多方便**。

## 它提供的 6 类功能

| # | 功能 | 源码位置 | 没有它时脚本侧的表现 |
|---|------|----------|---------------------|
| 1 | 16 种 Create 配方的 schema（破碎/混合/压实/序装配列…） | `resources/data/create/kubejs/recipe_schema/` | `e.recipes.create.crushing(...)` 这个入口**不存在** |
| 2 | Create 特有配方组件：带概率输出（chance）、热条件（heated/superheated）、带数量流体 | `recipe/CreateRecipeComponents.java`、`recipe/ProcessingOutputRecipeComponent.java` | 没有类型校验和自动转换 |
| 3 | 3 个 startup 事件：`spoutHandler`（喷嘴灌装）、`pipeFluidEffect`（管道流体效果）、`boilerHeatHandler`（锅炉加热） | `events/` | 完全无法从脚本触达 |
| 4 | 2 个自定义物品构建器：砂纸、序装配列中间物品 | `item/` | 无法在 startup 脚本注册这两种物品 |
| 5 | 全局绑定 `CreateItem` / `CreateProcessingOutput` + 字面量自动转 `ProcessingOutput` | `KubeJSCreatePlugin.registerBindings/registerTypeWrappers` | 只能手写 JSON 结构 |
| 6 | Mixin 暴露 Create 私有成员 | `core/mixin/` | 纯脚本无解 |

其中第 2、5 点是"便利性"：比如输出概率，Create 的 JSON 格式本身就支持 `"chance": 0.5` 字段，附属只是让脚本里写 `'minecraft:sand'` 或 `{item: '...', chance: 0.5}` 都能被自动包装成 `ProcessingOutput`。

## 不装 KubeJS-Create，哪些还能做？

### ✅ 能替代：新增 Create 配方（两种办法）

**办法 A：`event.custom()`（KubeJS 本体通用方法，见 `RecipesKubeEvent.java:540`）**

KubeJS 本体就有 `custom` 方法，可以提交**任何模组的任何配方 JSON**，不认识 schema 也没关系：

```js
ServerEvents.recipes(e => {
  e.custom({
    type: 'create:crushing',
    ingredients: [Item.of('minecraft:gravel')],
    processingTime: 100,
    results: [
      { item: 'minecraft:sand', chance: 0.5 },
      { item: 'create:experience_nugget', chance: 0.125 }
    ]
  }).id('my_pack:crushing/gravel_to_sand')
})
```

**办法 B：数据包 JSON**

在 `kubejs/data/create/recipes/xxx.json` 里直接放 Create 原生格式的配方文件，效果等价。

代价：**没有 schema 带来的校验、默认值和补全**——字段名拼错不会立刻报错，要到配方加载失败/机器不工作时才发现；`processingTime` 这类字段得自己记得写。

### ⚠️ 部分能替代：删除 / 修改配方

- 删除：`e.remove({ type: 'create:crushing' })` 按 type/id 过滤是 KubeJS 本体能力，**可用**；按 output/ingredient 匹配对无 schema 的配方类型支持不完整，最稳的是按配方 id 删。
- 修改：`e.replaceInput` / `e.replaceOutput` 依赖 schema 的组件匹配逻辑（`ProcessingOutputRecipeComponent` 里的 `matches/replace`），没有 schema 时对 Create 配方基本不生效——这部分算**实际不可替代**。

### ❌ 不能替代：3 个事件 + 2 个物品构建器

- 三个事件直接调的是 Create 的公开 API registry（`BlockSpoutingBehaviour.BY_BLOCK`、`BoilerHeater.REGISTRY` 等），但**注册事件组这一步必须由 Java 侧的 KubeJSPlugin 完成**，KubeJS 本体不知道 Create 有这些 registry。
- 砂纸/序装配列物品需要把 Create 特有的 Item 类注册进物品注册表，这只能走 Java。
- 不装附属还想实现这些，唯一的路就是**自己写一个 Java 模组**（基本等于把 KubeJS-Create 抄一遍），纯脚本项目无解。

## 结论

| 你要做的事 | 不装 KubeJS-Create |
|-----------|-------------------|
| 加/删 Create 配方 | ✅ 可以，用 `e.custom()` 或数据包 JSON，牺牲校验和便利性 |
| 批量替换 Create 配方的输入输出 | ❌ 基本不行 |
| 自定义喷嘴/管道/锅炉行为 | ❌ 不行，需要 Java |
| 注册砂纸、序装配列物品 | ❌ 不行，需要 Java |

一句话：**配方类需求可绕过，行为类需求绕不过**。如果整合包只需要改 Create 配方，不装附属是可行的；只要涉及"行为修改"或大量配方维护，装附属（或自己写一个）是正解。

## 顺带解答了疑问清单里的一条

`ProcessingOutputMixin` 的内容查明了：它是**接口注入型 mixin**——`@Mixin(ProcessingOutput.class) class ProcessingOutputMixin implements KubeCreateOutput {}`，类体是空的，作用只是让 Create 的 `ProcessingOutput` 类在字节码层面多实现 `KubeCreateOutput` 接口，这样它才能被当作 JS 包装目标（`registerBindings` 里的 `CreateProcessingOutput`）。不改任何逻辑，作者说 "mildly cursed" 是因为让别人的类实现自己的接口这种写法很 hack。详见 [04-源码解析](04-KubeJS-Create源码解析.md) ⑦。
