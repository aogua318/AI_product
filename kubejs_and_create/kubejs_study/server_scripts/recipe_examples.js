// ============================================================================
// 脚本：recipe_examples.js（原版配方添加示例大全）
// ============================================================================
// 覆盖：背包合成 / 无序合成 / 有序合成 / 熔炉 / 高炉 / 烟熏炉 / 营火 /
//       切石机 / 锻造台 —— 全部是原版配方类型，不依赖任何附属模组。
//
// 位置：<游戏实例>/kubejs/server_scripts/recipe_examples.js
// 生效：/reload（配方是服务器脚本的事，见 docs/08）
//
// 配方添加只有一个事件入口：ServerEvents.recipes。
// 回调参数 e 是 RecipesKubeEvent（源码：recipe/RecipesKubeEvent.java），
// 它身上摆着一排"配方类型入口"：e.shaped / e.shapeless / e.smelting /
// e.blasting / e.smoking / e.campfireCooking / e.stonecutting / e.smithing ...
//
// 每种类型的参数顺序 = 它 schema 里 keys 的顺序（schema 在
// kubejs 源码 src/main/resources/data/minecraft/kubejs/recipe_schema/ 下），
// 可选参数可以不传，也可以用链式方法补写。
// 例子均为演示用"整活"配方，复制后请按需改材料。
// ============================================================================

ServerEvents.recipes(event => {

	// ==========================================================================
	// 1. 背包合成（2x2 网格）
	// ==========================================================================
	// 原版没有"背包合成"这个独立配方类型！玩家物品栏里的 2x2 合成格
	// 和工作台用同一套配方（crafting_shaped / crafting_shapeless）。
	// 规律：图案能塞进 2x2 的配方，自动就能在背包里合成。
	//
	// 下面这个无序配方只需要 4 个材料，正好塞进 2x2，
	// 所以它在背包里就能直接合成，不用开工作台。
	//
	// e.shapeless(输出, 材料列表) —— 参数顺序对应 shapeless.json 的
	// keys：result → ingredients。材料数量可变（schema 里是 spread 列表）。
	// 输出写 "数量x 物品ID" 可以直接指定产出个数。
	// ==========================================================================
	event.shapeless('minecraft:slime_ball', [
		'minecraft:rotten_flesh', // 腐肉 x4 → 粘液球，背包里就能搓
		'minecraft:rotten_flesh',
		'minecraft:rotten_flesh',
		'minecraft:rotten_flesh'
	]).id('kubejs_examples:shapeless/slime_from_rotten_flesh')

	// ==========================================================================
	// 2. 工作台无序合成（材料随便摆，位置无关）
	// ==========================================================================
	// 语法：event.shapeless(输出, [材料1, 材料2, ...])
	// 材料可以是：物品 ID 字符串、'#标签'、Item.of(...) 等。
	// 无序 = 材料在工作台里怎么摆都能合成。
	//
	// 常见坑：无序配方的材料种类 ≥2 时，别写重复ID数组来表示数量，
	// 要像下面这样真的写多个元素（或用带数量的 SizedIngredient）。
	// ==========================================================================
	event.shapeless('minecraft:golden_apple', [
		'minecraft:apple',        // 1 个苹果
		'8x minecraft:gold_ingot' // 8 个金锭 —— "8x " 前缀让这一格需要数量 ≥8（带数量的配方输入）
	]).id('kubejs_examples:shapeless/golden_apple')

	// ==========================================================================
	// 3. 工作台有序合成（图案必须一致）
	// ==========================================================================
	// 语法：event.shaped(输出, [图案行], { 键: 对应材料 })
	// 参数顺序对应 shaped.json 的 constructors：result → pattern → key。
	//
	// - 图案是字符串数组，每行最多 3 个字符，最多 3 行（1~3 行都行，
	//   1~2 行的配方自然就能塞进背包 2x2/1x3 的格子）
	// - 键表里每个键对应图案里的一个字符；空格" "表示该格必须为空
	// - 键的值可以是物品 ID、'#标签'
	//
	// .id('命名空间:路径') 给配方自定义 ID，强烈建议每条都写：
	//   1) 防止自动生成的 ID 撞车  2) 以后 remove/replace 时好引用
	// ==========================================================================
	event.shaped('minecraft:leather', [
		'FFF',
		'FFF',
		'FFF'
	], {
		F: 'minecraft:rotten_flesh' // 9 腐肉摆满 3x3 → 1 皮革
	}).id('kubejs_examples:shaped/leather_from_rotten_flesh')

	// 再来一个带空格的图案：只有中间 3 格放材料。
	// 空格 = 该格必须留空，所以这是"一排"配方。
	event.shaped('minecraft:tnt', [
		' G ',
		'GSG',
		' G '
	], {
		G: 'minecraft:gunpowder',
		S: 'minecraft:sand'
	}).id('kubejs_examples:shaped/tnt_alternative')

	// ==========================================================================
	// 4~7. 熔炼四件套（熔炉 / 高炉 / 烟熏炉 / 营火）
	// ==========================================================================
	// 四种类型共用同一个 cooking schema，参数完全一致：
	//   event.类型(输出, 输入, [经验值], [耗时 tick])
	//   - 经验值：熔炼完成给多少 XP，可选，默认 0
	//   - 耗时：tick 数（20 tick = 1 秒），可选，默认 200（10 秒）
	//   schema 里给这两个可选参数起了链式方法名：xp 和 time，
	//   所以既能在参数位上写，也能链式写，两种风格等价（见 4 和 5 的对比）。
	//
	// 选择的规律：矿石/金属 → 高炉（快一倍）；食物 → 烟熏炉（快一倍）；
	// 其他 → 熔炉；营火最慢但免燃料、可同时烧多个。
	// ==========================================================================

	// 4. 熔炉：链式写法。e.smelting(输出, 输入) 之后接 .xp() .time()
	event.smelting('minecraft:glass', 'minecraft:sand')
		.xp(0.1)
		.time(100) // 100 tick = 5 秒，比原版快一半
		.id('kubejs_examples:smelting/glass_faster')

	// 5. 高炉：位置参数写法。第 3 参经验、第 4 参耗时，效果同链式。
	//    输入用标签可以一次覆盖一组矿物（#minecraft: 前缀 = 原版标签，必定存在）。
	event.blasting('minecraft:diamond', '#minecraft:iron_ores', 1.0, 50)
		.id('kubejs_examples:blasting/iron_ore_to_diamond')

	// 6. 烟熏炉：烧食物。烟熏炉只接受"是食物"的输入，输出也建议是食物。
	event.smoking('minecraft:cooked_beef', 'minecraft:pufferfish', 0.35, 100)
		.id('kubejs_examples:smoking/pufferfish_to_steak')

	// 7. 营火：参数同上，默认耗时 600 tick（30 秒），很适合"慢工出细活"。
	event.campfireCooking('minecraft:charcoal', 'minecraft:stick', 0.1, 300)
		.id('kubejs_examples:campfire/stick_to_charcoal')

	// ==========================================================================
	// 8. 切石机
	// ==========================================================================
	// 语法：event.stonecutting(输出, 输入)
	// 注意：切石机输入永远消耗 1 个物品，输出上的 "2x " 前缀表示
	// 1 个石头切出 2 块石砖 —— 这是切石机"高产"玩法的核心。
	// ==========================================================================
	event.stonecutting('2x minecraft:stone_bricks', 'minecraft:stone')
		.id('kubejs_examples:stonecutting/stone_to_bricks')

	// ==========================================================================
	// 9. 锻造台
	// ==========================================================================
	// 完整写法 4 参数：event.smithing(输出, 模板, 底材, 材料)
	// 简写 3 参数：event.smithing(输出, 底材, 材料)
	//   —— schema 里定义了三参重载会自动把模板填成
	//   下界合金升级模板（smithing_transform.json 的 constructors.overrides）
	// ==========================================================================

	// 9a. 三参简写：模板自动 = 下界合金升级模板。
	//     这条让钻石镐 + 1 个下界合金锭就能升级（原版还要模板）。
	event.smithing('minecraft:netherite_pickaxe', 'minecraft:diamond_pickaxe', 'minecraft:netherite_ingot')
		.id('kubejs_examples:smithing/netherite_pickaxe_no_template')

	// 9b. 四参完整写法：自选模板。钻石剑 + 铁锭 + 任意锻造模板 → 换成下界合金剑？
	//     这里用锻造模板做了个"镀金"整活，实际玩法自己发挥。
	event.smithing(
		'minecraft:netherite_axe',                    // 输出
		'minecraft:netherite_upgrade_smithing_template', // 模板
		'minecraft:diamond_axe',                      // 底材（被升级的）
		'minecraft:iron_ingot'                        // 材料（替代下界合金锭，白嫖）
	).id('kubejs_examples:smithing/cheap_netherite_axe')
})

// ============================================================================
// 学习笔记：
//
// 1. 为什么全在 ServerEvents.recipes 里？
//    配方在"世界加载/重载"时才由数据包管线应用，所有新增/删除/修改
//    都在这一个事件里完成；改完 /reload 立即生效，不用重启游戏。
//
// 2. .id() 里为什么用 'kubejs_examples:' 前缀？
//    配方 ID 是 ResourceLocation（命名空间:路径）。用自定义命名空间
//    一眼区分"哪些配方是脚本加的"，也避免和模组/原版 ID 冲突。
//
// 3. 怎么验证配方加上了？
//    - 游戏内查：JEI/EMI 搜索输出物品
//    - 日志查：logs/kubejs/server.log 有配方解析错误会打在这里
//    - 命令查：/kubejs errors 看脚本与配方报错
//
// 4. 参数写错了怎么办？
//    schema 会校验键名与类型，错误的配方会在日志里报错并跳过，
//    不会崩服——所以报错时先看 logs/kubejs/server.log。
// ============================================================================
