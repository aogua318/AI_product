// 函数 0x439f60  sub_439F60  size=0x1D1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_439F60(int a1)
{
  int v1; // esi
  int v2; // ecx
  __int16 *v3; // edi
  int v4; // eax
  _WORD *v5; // ecx
  int v6; // eax
  int v7; // eax
  _WORD *v8; // ecx
  int v9; // eax
  __int16 *v10; // esi
  int v11; // ebx
  int v12; // esi
  __int16 *v14; // [esp+8h] [ebp-4h]

  v1 = dword_89E57C + a1 * dword_89E568;
  v2 = *(__int16 *)(v1 + 4);
  if ( v2 == dword_89E558 )
  {
    v3 = (__int16 *)(dword_4CCAAC + dword_4CCA98 * v2);
    if ( (*(_BYTE *)(v1 + 19) & 0xF) != 0 )
    {
      if ( (*(_BYTE *)(v1 + 19) & 0xF) == 2 )
      {
        v4 = 0;
        v5 = (_WORD *)(v1 + 8);
        while ( *v5 != 0xFFFF )
        {
          ++v4;
          ++v5;
          if ( v4 >= 4 )
            goto LABEL_10;
        }
        sub_439000(dword_89E57C + a1 * dword_89E568, *(unsigned __int8 *)(v1 + 17) - v4);
      }
    }
    else
    {
      sub_419C10(v3, *(unsigned __int8 *)(v1 + 16), -*(unsigned __int8 *)(v1 + 17));
    }
LABEL_10:
    if ( *(_BYTE *)(v1 + 18) )
    {
      v3 = (__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 6));
      v6 = dword_4CC8D0 + dword_4CC8BC * v3[*(unsigned __int8 *)(v1 + 16) + 120];
      *(_WORD *)(v6 + 34) -= *(unsigned __int8 *)(v1 + 17);
    }
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 18) || *(__int16 *)(v1 + 6) != dword_89E558 )
      return 0;
    if ( (*(_BYTE *)(v1 + 19) & 0xF) != 0 )
    {
      v7 = (*(_BYTE *)(v1 + 19) & 0xF) - 2;
      if ( (*(_BYTE *)(v1 + 19) & 0xF) == 2 )
      {
        v8 = (_WORD *)(v1 + 8);
        while ( *v8 != 0xFFFF )
        {
          ++v7;
          ++v8;
          if ( v7 >= 4 )
            goto LABEL_22;
        }
        sub_439000(dword_89E57C + a1 * dword_89E568, *(unsigned __int8 *)(v1 + 17) - v7);
      }
    }
    else
    {
      sub_419C10(
        (__int16 *)(dword_4CCAAC + dword_4CCA98 * v2),
        *(unsigned __int8 *)(v1 + 16),
        -*(unsigned __int8 *)(v1 + 17));
    }
LABEL_22:
    v3 = (__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 6));
    v9 = dword_4CC8D0 + dword_4CC8BC * v3[*(unsigned __int8 *)(v1 + 16) + 120];
    *(_WORD *)(v9 + 34) -= *(unsigned __int8 *)(v1 + 17);
  }
  v10 = (__int16 *)(v1 + 14);
  v11 = 3;
  v14 = v10;
  do
  {
    v12 = *v10;
    if ( v12 != -1 )
    {
      sub_415C20(
        dword_4CC8D0 + dword_4CC8BC * v3[*(unsigned __int8 *)(dword_4D0BAC + v12 * dword_4D0B98) + 120],
        *(_DWORD *)(dword_4D0BAC + v12 * dword_4D0B98 + 20));
      sub_420B10(v12);
    }
    v10 = v14 - 1;
    --v11;
    --v14;
  }
  while ( v11 >= 0 );
  sub_438C20(a1);
  return 0;
}
