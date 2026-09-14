// 函数 0x41b350  sub_41B350  size=0x4B5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl sub_41B350(int a1)
{
  int *result; // eax
  int *v2; // edi
  int v3; // esi
  int v4; // edx
  __int16 *v5; // ebx
  __int16 *v6; // edi
  __int16 v7; // cx
  char *v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // ax
  char v12; // cl
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // ebx
  int v26; // edx
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  int v30; // [esp+4h] [ebp-28h] BYREF
  int v31; // [esp+8h] [ebp-24h]
  int v32; // [esp+Ch] [ebp-20h]
  int v33; // [esp+10h] [ebp-1Ch]
  int v34; // [esp+14h] [ebp-18h]
  char *v35; // [esp+18h] [ebp-14h]
  int v36; // [esp+1Ch] [ebp-10h]
  int i; // [esp+20h] [ebp-Ch]
  int v38; // [esp+24h] [ebp-8h]
  int *v39; // [esp+28h] [ebp-4h]

  sub_464B60(&v30);
  v36 = dword_4B1028;
  result = (int *)sub_4656D0(&unk_4CCA94);
  v2 = result;
  v39 = result;
  if ( dword_4B1028 != -1 && (_DWORD *)dword_4C2D38 != dword_4D0E68 )
  {
    dword_4C2D38 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    result = (int *)sub_4874B0(dword_4C2D38, 606, 519, 635, 47, 156, 117, 0);
  }
  if ( v2 != (int *)-1 )
  {
    v3 = dword_4CCAAC + (_DWORD)v2 * dword_4CCA98;
    memset((void *)(v3 + 484), -1, 0x100u);
    v4 = a1;
    v5 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
    v6 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *v5);
    v7 = (__int16)v39;
    *(_BYTE *)(v3 + 224) = *((_BYTE *)v5 + 2);
    v5[8] = v7;
    *(_WORD *)(v3 + 1620) = a1;
    v5[9] = -1;
    v5[10] = -1;
    *((_BYTE *)v5 + 22) = 1;
    *(_WORD *)(v3 + 1622) = 1;
    v8 = (char *)&unk_4D10B8 + 189880 * *(char *)(v3 + 224);
    *(_WORD *)(v3 + 1618) = *((_WORD *)v8 + 44);
    *(_WORD *)(v3 + 1616) = -1;
    *((_WORD *)v8 + 44) = (_WORD)v39;
    v9 = *(_WORD *)(v3 + 1618);
    v35 = v8;
    if ( v9 != -1 )
    {
      *(_WORD *)(dword_4CCA98 * v9 + dword_4CCAAC + 1616) = (_WORD)v39;
      v8 = v35;
      v4 = a1;
    }
    ++*((_WORD *)v8 + 45);
    sub_416180((int *)(v3 + 192), (_DWORD *)(v3 + 196), v4, (int *)(v3 + 188), (_DWORD *)(v3 + 200));
    sub_4842C0(*(_DWORD *)(v3 + 196), *(_DWORD *)(v3 + 200), 32, 1, 0, 74);
    sub_484240(312, 20);
    sub_4841A0(9, 41);
    sub_4841F0(606, 519);
    sub_483B80(&unk_4CCC58);
    sub_483A60(0, &unk_4CCEAC, 1);
    sub_465930(*(_DWORD *)(v3 + 120), -1, *(_DWORD *)(v3 + 200) * *(_DWORD *)(v3 + 196));
    sub_483A60(1, &unk_4CCC44, 1);
    v10 = sub_40CD00(v6);
    *(_WORD *)(v3 + 228) = v10 * v10;
    *(_WORD *)(v3 + 234) = v6[33];
    *(_WORD *)(v3 + 232) = v6[32];
    v11 = v6[32];
    *(_WORD *)(v3 + 478) = v11;
    v12 = *((_BYTE *)v5 + 7);
    if ( v12 == 5 || v12 == 3 )
    {
      v13 = (int)((unsigned __int64)(1374389535LL * dword_4CCC30 * v11) >> 32) >> 5;
      *(_WORD *)(v3 + 478) = v13 + (v13 >> 31);
    }
    *(_DWORD *)(v3 + 2112) = 0;
    memset((void *)(v3 + 1624), 0, 0x50u);
    memset((void *)(v3 + 1704), 0, 0x50u);
    sub_4836F0(4);
    sub_483BB0(16);
    sub_465960(*(_DWORD *)(v3 + 140), -2, *(_DWORD *)(v3 + 200) * *(_DWORD *)(v3 + 196));
    v14 = sub_40CDD0((int)v5);
    sub_464CE0(v14);
    v15 = *((char *)v5 + 7);
    if ( dword_4CD128 >= 50 || v15 > 0 )
      ++v15;
    v16 = v31;
    v17 = v32;
    v18 = v30;
    v34 = 3 * v15 + 1;
    v19 = v33;
    i = v31;
    if ( v31 <= v33 )
    {
      do
      {
        v38 = v18;
        if ( v18 <= v17 )
        {
          do
          {
            v20 = v38 + i * *(_DWORD *)(v3 + 24);
            *(_WORD *)(*(_DWORD *)(v3 + 120) + 2 * v20) = v34 + sub_4640D0() % 3;
            v21 = v38;
            *(_DWORD *)(*(_DWORD *)(v3 + 140) + 4 * v20) = -1;
            v17 = v32;
            v38 = v21 + 1;
          }
          while ( v21 + 1 <= v32 );
          v19 = v33;
          v18 = v30;
        }
        ++i;
      }
      while ( i <= v19 );
      v16 = v31;
    }
    if ( v5[2] == -1 )
    {
      v25 = (int)v39;
    }
    else
    {
      v22 = (v17 + v18) >> 1;
      v34 = (v16 + v19) >> 1;
      v23 = sub_4640D0() % 4;
      v24 = v5[2];
      v25 = (int)v39;
      sub_42B4A0(v39, a1, v22, v34, v24, v23);
    }
    v26 = 0;
    v27 = -1;
    dword_4CCA90 = v25;
    dword_4CC8E0 = v3;
    for ( i = 0; v26 < dword_4CC8E4[0]; i = v26 )
    {
      v28 = dword_4CC8E8[v26];
      if ( dword_4B1024 == v28 )
        v36 = v25;
      v29 = *(__int16 *)(dword_4C43DC + v28 * dword_4C43C8 + 16);
      if ( v29 != v27 && v29 != v25 )
      {
        v27 = *(__int16 *)(dword_4C43DC + v28 * dword_4C43C8 + 16);
        dword_4CC8D8 = dword_4CCAAC + dword_4CCA98 * v29;
        sub_41AD50(v29, v25);
        v26 = i;
      }
      ++v26;
    }
    if ( v36 == v25 || dword_4B1024 == a1 )
      sub_40DD00(a1);
    *(_DWORD *)(v3 + 1784) = -1;
    *(_DWORD *)(v3 + 1788) = -1;
    sub_417300(v3);
    sub_417880(v3);
    sub_42ECC0(v35);
    if ( dword_4C2D38 == v3 )
    {
      sub_486D40(0, 0);
      sub_486D40(1, 1);
      sub_487220(&unk_4C42A0);
      dword_4B1028 = v25;
      sub_435390();
    }
    return sub_417C30(v25);
  }
  return result;
}
