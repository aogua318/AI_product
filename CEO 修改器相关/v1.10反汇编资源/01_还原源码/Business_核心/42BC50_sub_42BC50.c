// 函数 0x42bc50  sub_42BC50  size=0x79  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_42BC50(int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  BOOL result; // eax

  v3 = (_DWORD *)(dword_4CCAAC + a1 * dword_4CCA98);
  v4 = v3[6];
  result = 0;
  if ( a2 < v4 && a3 < v3[7] )
  {
    v5 = *(_DWORD *)(v3[35] + 4 * (a2 + a3 * v4));
    if ( v5 == -1 )
      return 1;
    if ( v5 >= 0 )
    {
      v6 = v3[40];
      v7 = v3[45];
      v8 = v5 * v6;
      if ( *(_BYTE *)(v7 + v8 + 11) == 6
        && *(_WORD *)(dword_8703BC * *(__int16 *)(v7 + v8 + 12) + dword_8703D0 + 28) == 0xFFFF )
      {
        return 1;
      }
    }
  }
  return result;
}
