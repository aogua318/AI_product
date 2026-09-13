# 04 - KubeJS-Create 源码解析

这个附属模组只有十几个 Java 文件，是学习"怎么给 KubeJS 写附属"的最佳样本。
建议按下面顺序读。

## 文件地图

```
src/main/java/dev/latvian/mods/kubejs/create/
├── KubeJSCreate.java              # ① 主类（空壳，@Mod 入口）
├── KubeJSCreatePlugin.java        # ② 插件类（核心！所有注册都在这）
├── events/                        # ③ 事件定义与事件对象
│   ├── CreateEvents.java          #    事件表（3 个 startup 事件）
│   ├── BoilerHeaterHandlerEvent.java
│   ├── SpecialFluidHandlerEvent.java
│   └── SpecialSpoutHandlerEvent.java
├── recipe/                        # ④ 配方组件
│   ├── CreateRecipeComponents.java        # 组件集合（流体输入、热条件等）
│   └── ProcessingOutputRecipeComponent.java # Create 特有的"带概率输出"组件
├── item/                          # ⑤ 自定义物品构建器
│   ├── SandpaperItemBuilder.java          # 砂纸物品
│   └── SequencedAssemblyItemBuilder.java  # 序装配列中间物品
├── wrapper/
│   └── KubeCreateOutput.java      # ⑥ JS↔Java 输出对象转换
└── core/mixin/                    # ⑦ 混入
    ├── ProcessingOutputStacksInvoker.java
    └── FluidIngredientStacksInvoker.java

src/main/resources/
├── kubejs.plugins.txt             # 插件声明（一行）
├── kubejs_create.mixins.json      # mixin 配置
├── META-INF/neoforge.mods.toml    # 模组元数据
├── META-INF/accesstransformer.cfg # 访问权限改造
└── data/create/kubejs/recipe_schema/*.json  # 配方模式（见 02 文档）
```

## 逐个讲解

### ① KubeJSCreate.java —— 主类

只有 `@Mod("kubejs_create")` 一个注解，类体为空。作用仅仅是让 NeoForge 认识这个模组。**实际功能全部由 KubeJSPlugin 回调驱动**——这是 KubeJS 附属的标准套路：主类给加载器看，插件类给 KubeJS 看。

### ② KubeJSCreatePlugin.java —— 真正的核心

每个 override 方法对应 KubeJS 生命周期的不同阶段：

| 方法 | 干什么 | 对应脚本效果 |
|------|--------|--------------|
| `afterInit` | 主动 post 3 个 startup 事件 | 脚本能写 `CreateEvents.spoutHandler(...)` |
| `registerBuilderTypes` | 注册 2 种自定义物品构建器 | `StartupEvents.registry('item', ...)` 里能建砂纸/序装配列物品 |
| `registerEvents` | 注册 `CreateEvents.GROUP` | 事件名能在脚本里被解析 |
| `registerBindings` | 注入全局变量 `CreateItem`、`CreateProcessingOutput` | 脚本里直接用 |
| `registerTypeWrappers` | 字面量自动转 `ProcessingOutput` | 传 `{chance: 0.5}` 不用建 Java 对象 |
| `registerRecipeSchemas` | （注释列出了配方，实际 schema 在 JSON 里） | `e.recipes.create.crushing(...)` |
| `registerRecipeComponents` | 注册 3 个组件类型 | schema JSON 里能用 `"type": "create:processing_output"` |
| `registerDataComponentTypeDescriptions` | 反射枚举 Create 的组件给 JS 补全 | IDE 提示更友好 |

注意 `registerDataComponentTypeDescriptions` 里用了**反射**（`getDeclaredFields`）遍历 `AllDataComponents` 的静态字段——省得每加一个组件就手动登记一次，代价是绕过了编译期检查。

### ③ CreateEvents.java —— 事件表

```java
EventGroup GROUP = EventGroup.of("CreateEvents");
EventHandler SPECIAL_SPOUT = GROUP.startup("spoutHandler", () -> SpecialSpoutHandlerEvent.class);
```

- 事件在 JS 里的名字是 `"spoutHandler"`（camelCase）
- `startup` 表示它只在启动脚本里可用
- 事件对象（如 `SpecialSpoutHandlerEvent`）里定义了脚本可以调用/覆写的方法，看它就知道脚本能改什么

### ④ recipe/ —— 配方组件

`ProcessingOutputRecipeComponent`：Create 的输出可以带**概率**（如 50% 出副产物）和堆叠数量，原版 KubeJS 的输出组件不支持，所以这里自定义了一个组件类型，注册 ID 后就能在 schema JSON 里引用。

`CreateRecipeComponents`：静态集合，把"带大小的流体输入（SIZED_FLUID_INGREDIENT）""加热条件（HEAT_CONDITION，即加热/判熏)"打包复用。

### ⑤ item/ —— 物品构建器

让 startup 脚本能创建 Create 特殊类型的物品。`SequencedAssemblyItemBuilder` 生成"序装配列进行中"的中间态物品。构建器模式：JS 里 `item('xxx').maxStackSize(16)` 这种链式调用就是 Builder 类的方法。

### ⑥ wrapper/KubeCreateOutput.java

`wrapProcessingOutput` 等方法：JS 侧传来的各种形态（字符串、对象、已有实例）统一包成 Java 的 `ProcessingOutput`。**这是理解"脚本里随便传什么都能用"的关键**。

### ⑦ core/mixin/

两个 invoker mixin：把 Create 类里的 private 方法"暴露"出来调用（invoker 类型的 mixin 不改逻辑，只补一个 public 桥接方法）。比改逻辑的 mixin 温和得多。

## 配方 schema JSON 的读法

以 `crushing.json` 为例：

```json
{ "parent": "create:base/processing_with_time" }
```

一层层往上追 parent：

- `base/processing`：通用处理配方（输入 + 输出，输出用 create 的 processing_output 组件）
- `+base/processing_with_time`：合并进 `processing_time` 参数（input 角色、类型 ticks、默认 100 tick、必写出）
- `crushing.json` 最终 = 带时间的处理配方

其它 schema 的差异：
- `mixing.json` / `compacting.json` → `processing_unwrapped`（输入不按槽位包装）
- `basin.json`、`sequenced_assembly.json` 有自己独立的 keys，值得单独读
- `"role": "input" | "output"`、"optional"（默认值）、"always_write" 是 schema 的通用字段

## 学习建议

1. 先通读 `KubeJSCreatePlugin`，对照 02 文档理解每个注册点
2. 挑一个 schema（推荐 `cutting.json`）从脚本调用一路追到 JSON → Java 组件
3. 自己试着在 `server_scripts` 里写一个 Create 配方，改完 `/reload` 看效果
4. 想写自己的附属时，把 KubeJS-Create 当模板抄结构
