// 函数 0x487b20  sub_487B20  size=0x70E  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_487B20(int a1, int a2, int a3)
{
  int v4; // ebx
  __int16 *v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [esp+4h] [ebp-24h]
  int v18; // [esp+8h] [ebp-20h]
  int v19; // [esp+Ch] [ebp-1Ch]
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+1Ch] [ebp-Ch]
  int v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]

  if ( !dword_8F2B20 && a1 == dword_8F2B24 && a2 == dword_8F2B2C )
    return 0;
  dword_8F2B20 = 0;
  if ( dword_8F2B38 > 100 )
    return 1;
  ++dword_8F2B38;
  v4 = a1 + a2 * dword_8F2B28;
  v5 = (__int16 *)(dword_8F2B10 + 4 * a3);
  *(_WORD *)(dword_8F2B0C + 2 * v4) = *v5 / dword_8F2B30 + sub_4640D0() % v5[1];
  if ( *(_DWORD *)(dword_8F2B08 + 64) )
    sub_485C20((int *)dword_8F2B08, a1, a2);
  v6 = a2 - 1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( a2 - 1 >= 0
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v6))))
      & 1) == 0 )
  {
    v7 = sub_487680(a1, a2 - 1, a3, 0);
    if ( v7 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v6)) = v7;
      v17 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1, v6);
    }
  }
  if ( a1 + 1 < dword_8F2B28
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + a2 * dword_8F2B28) + 2)))
      & 2) == 0 )
  {
    v8 = sub_487680(a1 + 1, a2, a3, 1);
    if ( v8 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + a2 * dword_8F2B28) + 2) = v8;
      v18 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1 + 1, a2);
    }
  }
  v9 = a2 + 1;
  if ( a2 + 1 < dword_8F2B1C
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9))))
      & 4) == 0 )
  {
    v10 = sub_487680(a1, v9, a3, 2);
    if ( v10 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9)) = v10;
      v19 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1, v9);
    }
  }
  v11 = a2;
  if ( a1 - 1 >= 0
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + a2 * dword_8F2B28) - 2)))
      & 8) == 0 )
  {
    v12 = sub_487680(a1 - 1, a2, a3, 3);
    if ( v12 == -1 )
    {
LABEL_29:
      v11 = a2;
      goto LABEL_30;
    }
    *(_WORD *)(dword_8F2B0C + 2 * (a1 + a2 * dword_8F2B28) - 2) = v12;
    v20 = 1;
    if ( *(_DWORD *)(dword_8F2B08 + 64) )
    {
      sub_485C20((int *)dword_8F2B08, a1 - 1, a2);
      goto LABEL_29;
    }
    v11 = a2;
  }
LABEL_30:
  if ( a1 - 1 >= 0
    && v11 - 1 >= 0
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (v11 - 1)) - 2)))
      & 0x10) == 0 )
  {
    v13 = sub_487680(a1 - 1, v11 - 1, a3, 4);
    if ( v13 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (a2 - 1)) - 2) = v13;
      v21 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1 - 1, a2 - 1);
    }
    v11 = a2;
  }
  if ( a1 + 1 < dword_8F2B28
    && v11 - 1 >= 0
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (v11 - 1)) + 2)))
      & 0x20) == 0 )
  {
    v14 = sub_487680(a1 + 1, v11 - 1, a3, 5);
    if ( v14 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (a2 - 1)) + 2) = v14;
      v22 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1 + 1, a2 - 1);
    }
    v11 = a2;
  }
  if ( a1 + 1 < dword_8F2B28
    && v9 < dword_8F2B1C
    && (*(_BYTE *)(a3 * dword_8F2B14
                 + dword_8F2B18
                 + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9) + 2)))
      & 0x40) == 0 )
  {
    v15 = sub_487680(a1 + 1, v9, a3, 6);
    if ( v15 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9) + 2) = v15;
      v23 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1 + 1, v9);
    }
    v11 = a2;
  }
  if ( a1 - 1 >= 0
    && v9 < dword_8F2B1C
    && *(char *)(a3 * dword_8F2B14
               + dword_8F2B18
               + *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9) - 2))) >= 0 )
  {
    v16 = sub_487680(a1 - 1, v9, a3, 7);
    if ( v16 != -1 )
    {
      *(_WORD *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9) - 2) = v16;
      v24 = 1;
      if ( *(_DWORD *)(dword_8F2B08 + 64) )
        sub_485C20((int *)dword_8F2B08, a1 - 1, v9);
    }
    v11 = a2;
  }
  v25 = 3;
  do
  {
    if ( v17 )
      sub_487B20(
        a1,
        v11 - 1,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (v11 - 1)))));
    if ( v18 )
      sub_487B20(
        a1 + 1,
        v11,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + v11 * dword_8F2B28) + 2)));
    if ( v19 )
      sub_487B20(a1, v9, *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9))));
    if ( v20 )
      sub_487B20(
        a1 - 1,
        v11,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + v11 * dword_8F2B28) - 2)));
    if ( v21 )
      sub_487B20(
        a1 - 1,
        v11 - 1,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (v11 - 1)) - 2)));
    if ( v22 )
      sub_487B20(
        a1 + 1,
        v11 - 1,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * (v11 - 1)) + 2)));
    if ( v23 )
      sub_487B20(
        a1 + 1,
        v9,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9) + 2)));
    if ( v24 )
      sub_487B20(
        a1 - 1,
        v9,
        *(__int16 *)(dword_8F2B34 + 2 * *(__int16 *)(dword_8F2B0C + 2 * (a1 + dword_8F2B28 * v9) - 2)));
    --v25;
  }
  while ( v25 );
  --dword_8F2B38;
  return 1;
}
