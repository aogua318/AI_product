// 函数 0x41c040  sub_41C040  size=0x4E2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41C040(int a1, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edx
  __int16 *v7; // ebx
  char *v8; // ecx
  char *v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  __int16 v14; // ax
  int v15; // eax
  __int16 *v16; // esi
  int v17; // eax
  int v18; // esi
  __int16 v19; // cx
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // edi
  int v25; // ebx
  int v26; // ecx
  int v27; // eax
  int i; // eax
  int v29; // esi
  int v30; // [esp-20h] [ebp-30h]
  int v31; // [esp+0h] [ebp-10h] BYREF
  int v32; // [esp+4h] [ebp-Ch] BYREF
  int v33; // [esp+8h] [ebp-8h] BYREF
  int v34; // [esp+Ch] [ebp-4h] BYREF
  int v35; // [esp+18h] [ebp+8h]

  if ( a1 == -1 )
    return 0;
  v3 = dword_4CCA98;
  v4 = dword_4CCAAC + a1 * dword_4CCA98;
  v5 = *(char *)(v4 + 224);
  if ( v5 == a2 )
    return 0;
  v6 = *(__int16 *)(v4 + 238);
  v7 = (__int16 *)((char *)&unk_4D10B8 + 189880 * a2);
  v8 = (char *)&unk_4D10B8 + 189880 * v5;
  if ( v6 != -1 )
  {
    do
    {
      v9 = (char *)(dword_4CC8D0 + v6 * dword_4CC8BC);
      v10 = *v9;
      if ( v8[v10 + 189772] )
        *((_BYTE *)v7 + v10 + 189772) = 1;
      v6 = *((__int16 *)v9 + 3);
    }
    while ( v6 != -1 );
    v3 = dword_4CCA98;
  }
  v11 = *(__int16 *)(v4 + 1616);
  v12 = *(__int16 *)(v4 + 1618);
  v34 = v11;
  if ( v11 == -1 )
  {
    *((_WORD *)v8 + 44) = v12;
  }
  else
  {
    *(_WORD *)(v11 * v3 + dword_4CCAAC + 1618) = v12;
    v3 = dword_4CCA98;
    LOWORD(v11) = v34;
  }
  if ( v12 != -1 )
    *(_WORD *)(v12 * v3 + dword_4CCAAC + 1616) = v11;
  --*((_WORD *)v8 + 45);
  sub_42ECC0(v8);
  v13 = a1;
  *(_BYTE *)(v4 + 224) = a2;
  *(_WORD *)(v4 + 1618) = v7[44];
  *(_WORD *)(v4 + 1616) = -1;
  v7[44] = a1;
  v14 = *(_WORD *)(v4 + 1618);
  if ( v14 != -1 )
    *(_WORD *)(dword_4CCA98 * v14 + dword_4CCAAC + 1616) = a1;
  ++v7[45];
  sub_42ECC0(v7);
  v15 = *(__int16 *)(v4 + 1620);
  if ( v15 != -1 )
  {
    do
    {
      v16 = (__int16 *)(dword_4C43DC + v15 * dword_4C43C8);
      *((_BYTE *)v16 + 2) = a2;
      sub_486530(*((_DWORD *)v16 + 20), *(__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *v16), v7[1] + 2, 0, 0, 0);
      v15 = v16[10];
    }
    while ( v15 != -1 );
    v13 = a1;
  }
  if ( sub_41A0C0(&v32, &v31, v13, &v33, &v34) )
  {
    v17 = sub_4656D0(&unk_4CCA94);
    v35 = v17;
    if ( dword_4B1028 != -1 && (_DWORD *)dword_4C2D38 != dword_4D0E68 )
    {
      dword_4C2D38 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
      sub_4874B0(dword_4C2D38, 606, 519, 635, 47, 156, 117, 0);
      v17 = v35;
    }
    if ( v17 != -1 )
    {
      v18 = dword_4CCAAC + v17 * dword_4CCA98;
      *(_BYTE *)(v18 + 224) = a2;
      *(_DWORD *)(v18 + 1620) = 0xFFFF;
      *(_WORD *)(v18 + 1618) = v7[44];
      *(_WORD *)(v18 + 1616) = -1;
      v7[44] = v17;
      v19 = *(_WORD *)(v18 + 1618);
      if ( v19 != -1 )
        *(_WORD *)(dword_4CCA98 * v19 + dword_4CCAAC + 1616) = v17;
      v20 = v33;
      *(_DWORD *)(v18 + 1784) = -1;
      *(_DWORD *)(v18 + 1788) = -1;
      ++v7[45];
      v21 = v31;
      *(_DWORD *)(v18 + 192) = v32;
      v22 = v34;
      v30 = v34;
      *(_DWORD *)(v18 + 188) = v20;
      *(_DWORD *)(v18 + 196) = v21;
      *(_DWORD *)(v18 + 200) = v22;
      sub_4842C0(v21, v30, 32, 1, 0, 74);
      sub_484240(312, 20);
      sub_4841A0(9, 41);
      sub_4841F0(606, 519);
      sub_483B80(&unk_4CCC58);
      sub_483A60(0, &unk_4CCEAC, 1);
      v23 = v34 * v21;
      sub_465930(*(_DWORD *)(v18 + 120), -1, v23);
      sub_483A60(1, &unk_4CCC44, 1);
      *(_WORD *)(v18 + 228) = 0;
      *(_WORD *)(v18 + 234) = *(_WORD *)(v4 + 234);
      *(_WORD *)(v18 + 232) = *(_WORD *)(v4 + 232);
      *(_WORD *)(v18 + 478) = *(_WORD *)(v4 + 478);
      *(_DWORD *)(v18 + 452) = *(_DWORD *)(v4 + 452);
      *(_DWORD *)(v18 + 456) = *(_DWORD *)(v4 + 456);
      *(_DWORD *)(v18 + 460) = *(_DWORD *)(v4 + 460);
      *(_WORD *)(v18 + 482) = 0;
      *(_DWORD *)(v18 + 464) = 0;
      *(_DWORD *)(v18 + 468) = 0;
      memset((void *)(v18 + 1624), 0, 0x50u);
      memset((void *)(v18 + 1704), 0, 0x50u);
      sub_4836F0(4);
      sub_483BB0(16);
      sub_465960(*(_DWORD *)(v18 + 140), -2, v23);
      v24 = -1;
      v25 = 0;
      v34 = -1;
      if ( dword_4CC8E4[0] > 0 )
      {
        do
        {
          v26 = dword_4CC8E8[v25];
          if ( dword_4B1024 == v26 )
            v34 = v35;
          v27 = *(__int16 *)(dword_4C43DC + v26 * dword_4C43C8 + 16);
          if ( v27 != v24 && v27 != v35 )
          {
            v24 = *(__int16 *)(dword_4C43DC + v26 * dword_4C43C8 + 16);
            dword_4CC8D8 = dword_4CCAAC + dword_4CCA98 * v27;
            sub_41AD50(v27, v35);
          }
          ++v25;
        }
        while ( v25 < dword_4CC8E4[0] );
        if ( v34 != -1 )
        {
          dword_4B1028 = v34;
          sub_40DD00(*(__int16 *)(v18 + 1620));
        }
      }
      v17 = v35;
    }
    sub_417C30(v17);
    v4 = dword_4CCAAC + v35 * dword_4CCA98;
  }
  else
  {
    sub_417C30(v13);
  }
  for ( i = *(__int16 *)(v4 + 480); i != -1; i = *(__int16 *)(v29 + 10) )
  {
    v29 = dword_870840 + i * dword_87082C;
    sub_433710(v29);
  }
  return 1;
}
