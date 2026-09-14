// 函数 0x4439e0  sub_4439E0  size=0x5E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4439E0(int a1)
{
  int v1; // eax
  char v2; // cl
  bool v3; // zf

  v1 = dword_89E57C + a1 * dword_89E568;
  v2 = *(_BYTE *)(v1 + 19) & 0xF;
  if ( !v2 || v2 == 2 )
  {
    v3 = *(__int16 *)(v1 + 4) == dword_4B1028;
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 18) || v2 != 1 && v2 != 3 )
      return 0;
    v3 = *(__int16 *)(v1 + 6) == dword_4B1028;
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(v1 + 19) & 0x10) != 0 )
      ++dword_8A757C;
    ++dword_8A7578;
  }
  return 0;
}
