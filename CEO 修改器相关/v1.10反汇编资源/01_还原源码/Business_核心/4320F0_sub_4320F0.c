// 函数 0x4320f0  sub_4320F0  size=0x93  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4320F0(int a1)
{
  int v1; // eax
  char v2; // dl
  int v3; // edx
  int v4; // eax

  v1 = dword_89E57C + a1 * dword_89E568;
  v2 = *(_BYTE *)(v1 + 19) & 0xF;
  if ( !v2 || v2 == 2 )
  {
    v3 = *(__int16 *)(v1 + 4);
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 18) || v2 != 1 && v2 != 3 )
      return 0;
    v3 = *(__int16 *)(v1 + 6);
  }
  if ( v3 == dword_8703A8 )
  {
    v4 = *(__int16 *)(dword_4CCAAC + dword_8703A8 * dword_4CCA98 + 2 * *(unsigned __int8 *)(v1 + 16) + 240);
    if ( v4 != -1 && *(unsigned __int8 *)(v4 * dword_4CC8BC + dword_4CC8D0 + 1257) == dword_8703B0 )
      ++dword_8703AC;
  }
  return 0;
}
