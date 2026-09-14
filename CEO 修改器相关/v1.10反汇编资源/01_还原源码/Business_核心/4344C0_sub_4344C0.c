// 函数 0x4344c0  sub_4344C0  size=0x4A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4344C0(int a1)
{
  int v1; // esi

  v1 = dword_870868 + a1 * dword_870854;
  memcpy_0((void *)(v1 + 24), (const void *)(v1 + 20), 0x18u);
  memcpy_0((void *)(v1 + 52), (const void *)(v1 + 48), 0x18u);
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  return 0;
}
