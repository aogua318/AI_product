// 函数 0x434030  sub_434030  size=0x3C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_434030(int a1)
{
  int v1; // ecx

  v1 = dword_4D10A8 + a1 * dword_4D1094;
  if ( (*(_BYTE *)(v1 + 11) & 0xF) == 2 && *(__int16 *)(v1 + 26) == dword_870848 )
  {
    *(_WORD *)(v1 + 26) = -1;
    sub_42C3E0(v1, 0, 1);
  }
  return 0;
}
