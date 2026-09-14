// 函数 0x41c850  sub_41C850  size=0x20B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41C850(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // edx
  int i; // eax
  int v5; // esi
  _DWORD *v6; // ebx

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !dword_4CD13C || *(char *)(v1 + 224) >= 7 )
  {
    v2 = v1 + 488;
    v3 = 8;
    do
    {
      if ( *(_WORD *)v2 != 0xFFFF && dword_4CD11C - *(_DWORD *)(v2 - 4) > 13824 )
      {
        *(_WORD *)v2 = -1;
        *(_WORD *)(v2 + 2) = -1;
        *(_DWORD *)(v2 - 4) = 0;
      }
      if ( *(_WORD *)(v2 + 8) != 0xFFFF && dword_4CD11C - *(_DWORD *)(v2 + 4) > 13824 )
      {
        *(_WORD *)(v2 + 8) = -1;
        *(_WORD *)(v2 + 10) = -1;
        *(_DWORD *)(v2 + 4) = 0;
      }
      if ( *(_WORD *)(v2 + 16) != 0xFFFF && dword_4CD11C - *(_DWORD *)(v2 + 12) > 13824 )
      {
        *(_WORD *)(v2 + 16) = -1;
        *(_WORD *)(v2 + 18) = -1;
        *(_DWORD *)(v2 + 12) = 0;
      }
      if ( *(_WORD *)(v2 + 24) != 0xFFFF && dword_4CD11C - *(_DWORD *)(v2 + 20) > 13824 )
      {
        *(_WORD *)(v2 + 24) = -1;
        *(_WORD *)(v2 + 26) = -1;
        *(_DWORD *)(v2 + 20) = 0;
      }
      v2 += 32;
      --v3;
    }
    while ( v3 );
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 820) = *(_DWORD *)(v1 + 816);
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 1120) = *(_DWORD *)(v1 + 1116);
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 920) = *(_DWORD *)(v1 + 916);
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 1020) = *(_DWORD *)(v1 + 1016);
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 1316) = *(_DWORD *)(v1 + 1312);
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 1216) = 0;
    for ( i = *(__int16 *)(v1 + 752); i != -1; i = *(__int16 *)(v5 + 6) )
    {
      v5 = dword_4D0C84 + i * dword_4D0C70;
      v6 = (_DWORD *)(v1 + 4 * byte_4CE046 + 1216);
      *v6 += sub_426510(v5);
    }
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 1416) = *(_DWORD *)(v1 + 1412);
    *(_DWORD *)(v1 + 4 * byte_4CE046 + 1512) = *(_DWORD *)(v1 + 816)
                                             - *(_DWORD *)(v1 + 1312)
                                             - *(_DWORD *)(v1 + 1116)
                                             - *(_DWORD *)(v1 + 916)
                                             - *(_DWORD *)(v1 + 1412)
                                             - *(_DWORD *)(v1 + 1016);
    *(_DWORD *)(v1 + 816) = 0;
    *(_DWORD *)(v1 + 1116) = 0;
    *(_DWORD *)(v1 + 916) = 0;
    *(_DWORD *)(v1 + 1016) = 0;
    *(_DWORD *)(v1 + 1312) = 0;
    *(_DWORD *)(v1 + 1412) = 0;
    sub_41C530((_DWORD *)v1);
    memset((void *)(v1 + 1792), 0, 0x38u);
  }
  return 0;
}
