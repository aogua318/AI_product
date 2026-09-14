// 函数 0x420d80  sub_420D80  size=0x299  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_420D80(int a1, int a2, int a3, int a4, int a5)
{
  __int16 *v5; // ebx
  int v6; // eax
  __int16 v7; // cx
  int i; // eax
  __int16 *v10; // esi
  __int16 v11; // ax
  unsigned __int8 *v12; // edi
  int v13; // ecx
  unsigned int v14; // ecx
  signed int v15; // ecx
  int j; // eax
  int v17; // esi
  __int16 v18; // ax
  unsigned __int8 *v19; // edi
  unsigned int v20; // ecx
  signed int v21; // ecx
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // [esp+4h] [ebp-14h]
  __int16 *v26; // [esp+8h] [ebp-10h]
  int v27; // [esp+Ch] [ebp-Ch] BYREF
  int v28; // [esp+10h] [ebp-8h] BYREF
  int v29; // [esp+14h] [ebp-4h]
  int v30; // [esp+20h] [ebp+8h]

  v5 = (__int16 *)(dword_4CCAAC + a1 * dword_4CCA98);
  v29 = 1000000000;
  v6 = dword_4CC8D0 + dword_4CC8BC * v5[a4 + 120];
  v26 = v5;
  v30 = -1;
  v25 = v6;
  if ( !a5 )
  {
    v7 = *(_WORD *)(v6 + 32);
    if ( v7 )
    {
      if ( *(__int16 *)(v6 + 26) - v7 <= 0 )
        return -1;
    }
  }
  for ( i = v5[377]; i != -1; i = v10[3] )
  {
    v10 = (__int16 *)(dword_4C4378 + i * dword_4C4364);
    v11 = v10[1];
    if ( v11 != -1 )
    {
      v12 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v11);
      if ( *v12 == a4 && v12[3] == 2 && *((_WORD *)v12 + 14) == 0xFFFF && v12[11] == 0xFF )
      {
        v13 = dword_4CCAAC + dword_4CCA98 * *v10;
        sub_483850(
          *(__int16 *)(v10[4] * *(_DWORD *)(v13 + 160) + *(_DWORD *)(v13 + 180) + 2),
          *(__int16 *)(v10[4] * *(_DWORD *)(v13 + 160) + *(_DWORD *)(v13 + 180) + 4),
          &v28,
          &v27);
        v14 = abs32(a3 - v27) + abs32(a2 - v28);
        if ( a5 )
          v15 = v14 - *((_DWORD *)v12 + 5);
        else
          v15 = *((_DWORD *)v12 + 5) + v14;
        if ( *((char *)v10 + 10) != *(unsigned __int8 *)(v25 + 1256) )
          v15 -= 10000;
        v5 = v26;
        if ( v15 < v29 )
        {
          v29 = v15;
          v30 = v10[1];
        }
      }
    }
  }
  for ( j = v5[376]; j != -1; j = *(__int16 *)(v17 + 6) )
  {
    v17 = dword_4D0C84 + j * dword_4D0C70;
    v18 = *(_WORD *)(v17 + 130);
    if ( v18 != -1 )
    {
      v19 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v18);
      if ( v19[11] == 0xFF && *v19 == a4 )
      {
        sub_426BF0(&v28, &v27);
        v20 = abs32(a3 - v27) + abs32(a2 - v28);
        if ( a5 )
          v21 = v20 - *((_DWORD *)v19 + 5);
        else
          v21 = *((_DWORD *)v19 + 5) + v20;
        if ( v21 < v29 )
        {
          v29 = v21;
          v30 = *(__int16 *)(v17 + 130);
        }
      }
    }
  }
  if ( !a5 && v30 == -1 )
  {
    v22 = v5[379];
    if ( v22 != -1 )
    {
      while ( 1 )
      {
        v23 = dword_8703D0 + v22 * dword_8703BC;
        if ( *(_BYTE *)(v23 + 30) == 2 )
        {
          v24 = sub_430BC0(dword_8703D0 + v22 * dword_8703BC);
          if ( v24 != -1 && *(unsigned __int8 *)(v24 * dword_4D0B98 + dword_4D0BAC) == a4 )
            break;
        }
        v22 = *(__int16 *)(v23 + 4);
        if ( v22 == -1 )
          return -1;
      }
      return v24;
    }
  }
  return v30;
}
