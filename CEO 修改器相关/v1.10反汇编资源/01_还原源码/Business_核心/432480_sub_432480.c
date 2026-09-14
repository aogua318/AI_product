// 函数 0x432480  sub_432480  size=0x131  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_432480()
{
  signed int v0; // ebx
  int v1; // eax
  __int16 *v2; // esi
  unsigned int v3; // ecx
  int v4; // edx
  int i; // eax
  _DWORD v6[20]; // [esp+8h] [ebp-54h] BYREF

  memset(v6, 0, sizeof(v6));
  v0 = dword_870818;
  v1 = 0;
  dword_870800[0] = 0;
  dword_870804 = 0;
  dword_870808 = 0;
  dword_87080C = 0;
  dword_870810 = 0;
  if ( dword_870818 > 0 )
  {
    v2 = (__int16 *)(*(_DWORD *)dword_870814 + 70);
    do
    {
      dword_8703D8[2 * v1] = v1;
      v3 = *v2;
      v4 = *(v2 - 1);
      word_8703DC[4 * v1] = v4;
      word_8703DE[4 * v1] = v3;
      if ( v3 <= 0x13 )
      {
        ++v6[v3];
        dword_870728[v3] = v4;
      }
      ++v1;
      v2 += 36;
    }
    while ( v1 < v0 );
  }
  for ( i = 0; i < 20; i += 5 )
  {
    if ( v6[i] )
      ++dword_870800[dword_870728[i]];
    if ( v6[i + 1] )
      ++dword_870800[dword_87072C[i]];
    if ( v6[i + 2] )
      ++dword_870800[dword_870730[i]];
    if ( v6[i + 3] )
      ++dword_870800[dword_870734[i]];
    if ( v6[i + 4] )
      ++dword_870800[dword_870738[i]];
  }
  qsort(dword_8703D8, v0, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_432450);
}
