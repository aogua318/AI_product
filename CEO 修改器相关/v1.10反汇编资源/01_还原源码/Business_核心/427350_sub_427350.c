// 函数 0x427350  sub_427350  size=0x32  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_427350(int a1)
{
  int v1; // eax
  _WORD *v2; // esi

  v1 = dword_4D0C84 + a1 * dword_4D0C70;
  v2 = (_WORD *)(v1 + 188);
  memcpy_0((void *)(v1 + 190), (const void *)(v1 + 188), 6u);
  *v2 = 0;
  return 0;
}
