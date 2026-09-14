// 函数 0x401b40  sub_401B40  size=0x86  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_401B40(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // et2

  v2 = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 758);
  v3 = 0;
  v4 = 0;
  if ( v2 == -1 )
    return sub_401310(a1, a2);
  do
  {
    v5 = v2 * dword_8703BC;
    if ( *(char *)(v2 * dword_8703BC + dword_8703D0 + 31) == a2 )
    {
      ++v3;
      if ( *(_WORD *)(v5 + dword_8703D0 + 28) != 0xFFFF )
        ++v4;
    }
    v2 = *(__int16 *)(v5 + dword_8703D0 + 4);
  }
  while ( v2 != -1 );
  if ( !v3 )
    return sub_401310(a1, a2);
  result = 2 * v4;
  if ( v3 < 2 * v4 )
  {
    v7 = sub_4640D0();
    v8 = v7 % 100;
    result = v7 / 100;
    if ( v8 < 20 )
      return sub_401310(a1, a2);
  }
  return result;
}
