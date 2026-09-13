# 07 - KubeJS 常用方法详解

> 本文按"使用场景"组织，方法签名均核对过本仓库源码（KubeJS 新分支，MC 26.1.2 / NeoForge）。
> 源码里带 `@Info` 注解的方法说明就是给脚本作者看的文档，顺藤摸瓜找方法时可以先搜 `@Info`。
> 注意：这是较新的 API（如 ID 类叫 `Identifier`），和 1.21 及以下的 wiki 写法（`ResourceLocation`）略有差异，脚本层用法基本一致。

## 目录

1. [事件订阅](#1-事件订阅)
2. [Item 相关](#2-item-相关)
3. [Ingredient 相关](#3-ingredient-相关)
4. [配方事件（重点）](#4-配方事件)
5. [标签事件](#5-标签事件)
6. [注册新物品/方块](#6-注册新物品方块)

---

## 1. 事件订阅

写法固定：`事件组.事件名(目标, 回调函数)`。事件名都是 camelCase 字符串，
定义在各事件组接口里（`plugin/builtin/event/` 包）。

### 事件组总览

| 事件组 | 脚本类型 | 干什么 |
|--------|----------|--------|
| `StartupEvents` | startup_scripts | 注册内容、启动期 |
| `ServerEvents` | server_scripts | 配方、标签、命令、tick |
| `PlayerEvents` | 两边都有 | 玩家行为 |
| `BlockEvents` / `EntityEvents` / `ItemEvents` | 两边都有 | 方块/实体/物品交互 |
| `ClientEvents` / `NetworkEvents` | client_scripts | 界面、网络包 |

### StartupEvents（`StartupEvents.java`）

| 事件 | 写法 | 说明 |
|------|------|------|
| `init` / `postInit` | `StartupEvents.init(e => {...})` | 启动阶段钩子，一般用不到 |
| `registry` | `StartupEvents.registry('item', e => {...})` | **注册内容**，必须带目标参数（注册表名，见第 6 节） |
| `modifyCreativeTab` | `StartupEvents.modifyCreativeTab('building_blocks', e => {...})` | 改某个创造模式物品栏标签页 |

### ServerEvents（`ServerEvents.java`）

| 事件 | 写法 | 说明 |
|------|------|------|
| `recipes` | `ServerEvents.recipes(e => {...})` | **改配方的主入口**（见第 4 节） |
| `tags` | `ServerEvents.tags('item', e => {...})` | 改标签，必须带注册表类型目标（见第 5 节） |
| `loaded` / `unloaded` / `tick` | `ServerEvents.tick(e => {...})` | 服务器加载/卸载/每 tick（20 次/秒） |
| `commandRegistry` | `ServerEvents.commandRegistry(e => {...})` | 用 Brigadier 注册正式命令 |
| `command` | `ServerEvents.command('foo', e => {...})` | 快捷注册简易命令，第一个参数是命令名 |
| `afterRecipes` | `ServerEvents.afterRecipes(e => {...})` | 配方全部应用完后触发 |
| `modifyRecipeResult` | `ServerEvents.modifyRecipeResult('minecraft:crafting_table', e => {...})` | 修改合成产物（带目标过滤） |

### PlayerEvents（`PlayerEvents.java`）

| 事件 | 说明 |
|------|------|
| `loggedIn` / `loggedOut` | 玩家进/出服 |
| `cloned` | 玩家数据复制（死亡重生、跨维度） |
| `respawned` | 重生 |
| `tick` | 每玩家每 tick |
| `chat` | 聊天消息（可取消） |
| `advancement` | 完成进度，可按进度 ID 过滤：`PlayerEvents.advancement('minecraft:story/mine_stone', e => {})` |
| `inventoryChanged` | 物品栏变动，可按物品过滤 |
| `stageAdded` / `stageRemoved` | 游戏阶段（GameStages 概念）变化 |

`hasResult()` 标记的事件（源码里能看到）支持在回调里 `return false/cancel()` 取消行为，
比如 `chat`、`advancement`。

### BlockEvents / EntityEvents（常用子集）

| 事件 | 目标参数 | 说明 |
|------|----------|------|
| `BlockEvents.rightClicked` | 方块 ID | 右键方块，`e.item` 是手中物品，`e.player` |
| `BlockEvents.broken` | 方块 ID | 挖掉方块 |
| `BlockEvents.placed` | 方块 ID | 放置方块 |
| `BlockEvents.drops` | 方块 ID | 掉落物生成，可改 `e.drops` |
| `EntityEvents.death` | 实体 ID | 死亡，`e.entity`、`e.source` |
| `EntityEvents.spawned` | 实体 ID | 生成，可取消 |
| `EntityEvents.drops` | 实体 ID | 掉落物，可改 |

**"目标参数"是什么**：源码里这些事件是 `TargetedEventHandler`，
订阅时第一个参数告诉 KubeJS"我只关心这个方块/实体/进度"，不传目标则匹配所有。

---

## 2. Item 相关

全局绑定 `Item`（源码 `plugin/builtin/wrapper/ItemWrapper.java`）。

### `Item.of(stack, [count], [components])`

四种重载（源码里四个 `of`）：

```js
Item.of('minecraft:diamond_sword')                 // 最基础：字符串 ID → ItemStack
Item.of('minecraft:diamond_sword', 5)              // 第二参是数量
Item.of('minecraft:diamond_sword', {enchantments: {levels: {'minecraft:sharpness': 5}}})  // 第二参是数据组件 map
Item.of('minecraft:diamond_sword', 1, {enchantments: {...}})  // 数量 + 组件
```

- **参数 1 `stack`**：能被包装成 ItemStack 的任何东西——ID 字符串、另一个 ItemStack、物品实例。包装规则在 `wrapTrivial` 方法里，转换失败会抛出带源码行号的运行时错误。
- **参数 2**：整数 = 数量；对象 = 数据组件（1.20.5+ 取代了旧 NBT 写法）。
- **参数 3**：数量 + 组件。
- **返回值**：不可变的 ItemStack 快照，直接当配方的输入输出用。

### ItemStack 上的常用方法（kjs$ 扩展）

`Item.of(...)` 拿到的对象还有一些扩展方法（定义在 ItemStack 的 mixin 里，JS 侧不需要 `kjs$` 前缀也能调）：
`.hasTag(tag)`、`.getId()`、`.getMod()`、`.getCount()`、`.setCount(n)`、`.isItem(id)` 等。

---

## 3. Ingredient 相关

全局绑定 `Ingredient`（源码 `plugin/builtin/wrapper/IngredientWrapper.java`）。
**Ingredient ≠ ItemStack**：配方输入用 Ingredient（"匹配一类物品"），输出用 ItemStack（"确定的物品"）。

### `Ingredient.of(x, [count])`

```js
Ingredient.of('#minecraft:planks')   // # 开头 = 标签，匹配所有木板
Ingredient.of('minecraft:apple')     // 单个物品
Ingredient.of('minecraft:apple', 3)  // 需要数量 ≥3（SizedIngredient，Create 等模组配方会用）
```

### 其他常用构造

| 方法 | 作用 |
|------|------|
| `Ingredient.getAll()` | 匹配一切物品（慎用） |
| `Ingredient.withData(base, data, strict?)` | 匹配"带某数据组件"的物品，如 `Ingredient.withData('#minecraft:swords', {damage: 0})`；`strict=true` 时组件必须完全一致 |

### 逻辑组合

```js
Ingredient.of('a').or('b')          // 或
Ingredient.of('#c:ingots').not('c:iron_ingot')  // 非
```

---

## 4. 配方事件

`ServerEvents.recipes(e => {...})` 拿到的 `e` 是 `RecipesKubeEvent`
（源码 `recipe/RecipesKubeEvent.java`）。它身上的东西分四组：

### 4.1 配方类型入口（对象属性）

源码里直接摆了一排属性，每个都是"函数容器"：

```js
e.shaped / e.shapeless       // 工作台
e.smelting / e.blasting      // 熔炉 / 高炉
e.smoking / e.campfireCooking // 烟熏 / 营火
e.stonecutting               // 切石机
e.smithing                   // 锻造台
```

而 `e.recipes` 是"命名空间 → 模组配方类型"的两级结构：
`e.recipes.create.crushing(...)`（有附属注册 schema 才有），
`e.recipes.minecraft.smelting(...)` 等价于 `e.smelting(...)`。

### 4.2 有序/无序合成（最常用）

```js
e.shaped('minecraft:diamond', ['AB', 'BA'], {
  A: 'minecraft:sand',   // 字符串键对应图案里的字母
  B: '#minecraft:logs'   // 键的值可以是 ID、标签、Ingredient.of(...)
})
  .id('mypack:diamond_from_sand')  // 自定义配方 ID，强烈建议写

e.shapeless('9x minecraft:iron_ingot', ['minecraft:iron_block'])
// 输出前加 "数量x " 表示产出 9 个
```

- **参数 1（输出）**：ID 字符串或 `Item.of(...)`，可带 `Nx` 前缀
- **参数 2（图案）**：shaped 时是 1~3 行字符串数组，每行最多 3 个字符；shapeless 时省略
- **参数 3（键表）**：普通对象，键 = 图案字符，值 = 任意可转 Ingredient 的东西
- **`.id(...)`**：链式方法，设置配方 ID；不写会自动生成，但删改时不方便引用

熔炉类（smelting 等）签名更简单：`(输出, 输入, [经验], [时间])`。

### 4.3 删改已有配方

```js
e.remove({ type: 'create:crushing' })                 // 删一类
e.remove({ id: 'minecraft:furnace' })                 // 删单个（最精确）
e.remove({ output: 'minecraft:iron_ingot' })          // 删所有产出铁锭的
e.remove({ input: '#minecraft:planks', mod: 'minecraft' }) // 组合条件
```

- **`filter` 参数**：配方过滤器对象，可用键有
  `type`（配方类型）、`id`（配方 ID）、`mod`（所属模组）、`output`、`input`、`ingredient`（同 input）、
  也支持函数 `(recipe) => bool`。多个条件是 AND 关系。
- 底层实现：`recipeStream(cx, filter)` 流式过滤后标记删除，所有"查询"方法共用这套过滤器。

```js
e.replaceInput('minecraft:iron_ingot', 'minecraft:copper_ingot')  // 全局替换
e.replaceInput({type: 'minecraft:smelting'}, 'minecraft:iron_ore', 'minecraft:gold_ore')
e.replaceOutput({mod: 'create'}, 'create:zinc_ingot', 'minecraft:iron_ingot')
```

- **`filter`**：同 remove，限定改动范围
- **`match`**：要被替换的东西（可带数量）
- **`with`**：替换成什么（ID / 标签 / ItemStack / Ingredient）

### 4.4 通用/查询方法

| 方法 | 参数 | 作用 |
|------|------|------|
| `e.custom(jsonObj)` | 完整配方 JSON 对象 | 提交任何模组的任何配方，schema 未知时的兜底手段（见 06 文档） |
| `e.findRecipes(filter)` | 过滤器 | 返回 `KubeRecipe` 列表 |
| `e.findRecipeIds(filter)` | 过滤器 | 返回配方 ID 列表 |
| `e.countRecipes(filter)` | 过滤器 | 数量 |
| `e.containsRecipe(filter)` | 过滤器 | 存在与否 |
| `e.forEachRecipe(filter, fn)` | 过滤器 + 回调 | 遍历 |

拿到的 `KubeRecipe` 对象（源码 `recipe/KubeRecipe.java`）常用方法：
`.json`（JSON 表示）、`.set(key, value)` / `.get(key)`（按 schema 的 key 读写，key 名在 schema JSON 里定义）、
`.id`、`.type`、`.removed`。

---

## 5. 标签事件

```js
ServerEvents.tags('item', e => {   // 参数：注册表类型 'item' / 'block' / 'fluid' / 'entity_type' ...
  e.add('minecraft:planks', 'mymod:fake_plank')          // 往已有标签加成员
  e.add('c:my_tag', ['#minecraft:planks', 'xxx'])        // 标签可以套标签
  e.remove('minecraft:planks', 'minecraft:bamboo_planks') // 移除成员
  e.removeAll('minecraft:planks')                         // 清空标签
  e.add('my_pack:brand_new_tag', 'minecraft:stone')       // 新建标签直接用
})
```

- **事件目标（第一个参数）**：注册表类型的字符串，决定改哪类标签。源码里是
  `TargetedEventHandler<ResourceKey<? extends Registry<?>>> TAGS`。
- **`e.add(tag, ...filters)`**：tag 是 ID 字符串；filters 是变长参数，每个可以是物品 ID、`#标签`、`Item.of(...)` 等，包装规则同配方输入。
- **为什么标签改不生效**：标签事件跑在配方加载前，配方里 `#xxx` 的解析依赖标签结果；改标签后配方自动跟随，但 JEI 有时要重进世界才刷新。

---

## 6. 注册新物品/方块

```js
StartupEvents.registry('item', e => {
  // 第一个参数：注册表类型；e 是 RegistryKubeEvent
  e.create('my_item')                    // 基础物品，ID 自动是 kubejs:my_item
    .displayName('我的物品')              // 显示名
    .maxStackSize(16)                    // 见下表
    .rarity('epic')
    .food(4, 0.5)                        // 营养值, 饱和度

  e.create('my_block_item', 'block')     // 第二参指定 builder 类型：创建"会放置方块"的物品
})
```

- **事件目标**：注册表名字符串：`'item'`、`'block'`、`'fluid'`、`'enchantment'` 等（对应 `Registries.ITEM` 等 ResourceKey）。
- **`e.create(id, [type])`**（源码 `RegistryKubeEvent.create`）：
  - `id`：不带命名空间，默认挂在 `kubejs:` 下
  - `type`：builder 类型字符串，决定后续链式方法有哪些；省略时 item → 普通物品，block → 普通方块。
    附属模组会往里加新类型——KubeJS-Create 就注册了 `Create.asResource('sandpaper')` 和
    `'sequenced_assembly'`（见 `KubeJSCreatePlugin.registerBuilderTypes`）。
- **返回值是 Builder 对象**，链式调用配置属性，游戏启动时才真正注册。

### ItemBuilder 常用链式方法（源码 `item/ItemBuilder.java`）

| 方法 | 参数 | 作用 |
|------|------|------|
| `.displayName(text)` | 字符串/Text 组件 | 显示名 |
| `.maxStackSize(n)` | 1~99 | 最大堆叠（默认 64） |
| `.unstackable()` | 无 | 不可堆叠（= maxStackSize 1） |
| `.maxDamage(n)` | 整数 | 设耐久上限（设置了就变成可损耗物品） |
| `.burnTime(ticks)` | tick 数 | 当燃料能烧多久 |
| `.containerItem(id)` | 物品 ID | 用完留下的容器（如桶） |
| `.rarity(name)` | `common/uncommon/rare/epic` | 稀有度（名字颜色） |
| `.group(tabId)` | 物品栏页 ID | 放进哪个创造页 |
| `.color(fn)` / `.color(index, fn)` | 回调 `(stack, tintIndex) => 0xRRGGBB` | 动态染色（配合带 tint 的模型） |
| `.food(nutrition, saturation)` 或 `.food(builder => {...})` | 见左 | 设为食物；builder 版还能 `.effect()` 加食用效果 |
| `.fireResistant()` | 无 | 防火（掉岩浆里不烧毁） |
| `.component(type, value)` | DataComponentType + 值 | 底层通用入口，直接写数据组件 |

## 附：学习方法建议

- 想知道"某个事件对象里有什么"：搜事件类名（如 `BlockRightClickedKubeEvent`），public 字段/方法就是脚本可用的。
- 想知道"某全局变量（如 `Item`）有哪些方法"：搜对应 Wrapper 接口（`ItemWrapper`）。
- 源码里的 `@Info("...")` 注解就是官方给脚本作者写的方法说明，`typings/` 相关代码会把它们导出成 IDE 补全。
