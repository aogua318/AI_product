// 函数 0x41ad50  sub_41AD50  size=0x5FE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41AD50(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  _WORD *v5; // ecx
  int v6; // edi
  _WORD *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // esi
  int v18; // edx
  int v19; // edi
  __int16 v20; // di
  int v21; // eax
  _BYTE *v22; // eax
  int v23; // edi
  int v24; // eax
  _BYTE *v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // edi
  int v29; // edx
  int v30; // ebx
  __int16 v31; // ax
  int v32; // ebx
  __int16 v33; // ax
  int v34; // ebx
  int v35; // eax
  int v36; // edx
  int v37; // ebx
  int v38; // edi
  int v39; // edx
  int v40; // ebx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  char *v45; // edx
  int v46; // ecx
  int result; // eax
  int v48; // ecx
  int v49; // eax
  char v50[16]; // [esp+Ch] [ebp-20h] BYREF
  int v51; // [esp+1Ch] [ebp-10h]
  int v52; // [esp+20h] [ebp-Ch]
  char *v53; // [esp+24h] [ebp-8h]
  int v54; // [esp+28h] [ebp-4h]

  sub_464B60(v50);
  v2 = dword_4CCAAC + a1 * dword_4CCA98;
  v3 = dword_4CCAAC + a2 * dword_4CCA98;
  v4 = *(_DWORD *)(v2 + 1784);
  dword_4CCA90 = a2;
  dword_4CC8E0 = v3;
  dword_4CC8D8 = v2;
  if ( v4 != -1 )
  {
    sub_4864E0(v4);
    v2 = dword_4CC8D8;
    v3 = dword_4CC8E0;
    *(_DWORD *)(dword_4CC8D8 + 1784) = -1;
  }
  if ( *(_DWORD *)(v2 + 1788) != -1 )
  {
    sub_4864E0(*(_DWORD *)(v2 + 1788));
    v2 = dword_4CC8D8;
    v3 = dword_4CC8E0;
    *(_DWORD *)(dword_4CC8D8 + 1788) = -1;
  }
  v53 = (char *)&unk_4D10B8 + 189880 * *(char *)(v3 + 224);
  *(_WORD *)(v3 + 740) += *(_WORD *)(v2 + 740);
  *(_WORD *)(v3 + 742) += *(_WORD *)(v2 + 742);
  *(_WORD *)(v3 + 744) += *(_WORD *)(v2 + 744);
  *(_WORD *)(v3 + 748) += *(_WORD *)(v2 + 748);
  *(_WORD *)(v3 + 746) += *(_WORD *)(v2 + 746);
  *(_WORD *)(v3 + 750) += *(_WORD *)(v2 + 750);
  *(_DWORD *)(v3 + 452) += *(_DWORD *)(v2 + 452);
  *(_DWORD *)(v3 + 456) += *(_DWORD *)(v2 + 456);
  *(_DWORD *)(v3 + 460) += *(_DWORD *)(v2 + 460);
  *(_WORD *)(v3 + 464) += *(_WORD *)(v2 + 464);
  *(_WORD *)(v3 + 466) += *(_WORD *)(v2 + 466);
  *(_WORD *)(v3 + 482) += *(_WORD *)(v2 + 482);
  *(_WORD *)(v3 + 468) += *(_WORD *)(v2 + 468);
  *(_WORD *)(v3 + 470) += *(_WORD *)(v2 + 470);
  *(_WORD *)(v3 + 472) += *(_WORD *)(v2 + 472);
  *(_WORD *)(v3 + 474) += *(_WORD *)(v2 + 474);
  *(_WORD *)(v3 + 476) += *(_WORD *)(v2 + 476);
  *(_WORD *)(v3 + 766) += *(_WORD *)(v2 + 766);
  v5 = (_WORD *)(v3 + 768);
  v6 = v2 - v3;
  v7 = (_WORD *)(v2 + 800);
  v8 = 2;
  do
  {
    *v5 += *(_WORD *)((char *)v5 + v6);
    v5[8] += *(v7 - 8);
    v5[16] += *v7;
    v5[1] += *(v7 - 15);
    v5[9] += *(v7 - 7);
    v5[17] += v7[1];
    v5[2] += *(v7 - 14);
    v5[10] += *(v7 - 6);
    v5[18] += v7[2];
    v5[3] += *(v7 - 13);
    v5[11] += *(v7 - 5);
    v5[19] += v7[3];
    v5 += 4;
    v7 += 4;
    --v8;
  }
  while ( v8 );
  v9 = 0;
  while ( 1 )
  {
    v10 = v9 + v2 + 484;
    v11 = sub_464E90(*(__int16 *)(v9 + v2 + 488));
    v12 = dword_4CC8E0;
    if ( v11 )
      sub_417B60((char *)dword_4CC8E0, *(__int16 *)(v10 + 4), *(_WORD *)(v10 + 6), *(_DWORD *)v10);
    v9 += 8;
    if ( v9 >= 256 )
      break;
    v2 = dword_4CC8D8;
  }
  v13 = *(__int16 *)(v12 + 480);
  v14 = dword_87082C;
  v15 = -1;
  v54 = -1;
  if ( v13 == -1 )
  {
    v16 = a2;
  }
  else
  {
    do
    {
      v16 = dword_870840 + v13 * dword_87082C;
      v15 = v13;
      v13 = *(__int16 *)(v16 + 10);
      v54 = v15;
    }
    while ( v13 != -1 );
  }
  v17 = dword_4CC8D8;
  v18 = *(__int16 *)(dword_4CC8D8 + 480);
  if ( v15 == -1 )
  {
    *(_WORD *)(v12 + 480) = v18;
    if ( v18 == -1 )
      goto LABEL_24;
    v14 = dword_87082C;
    v16 = dword_870840 + v18 * dword_87082C;
  }
  if ( v18 != -1 )
  {
    v19 = dword_870840 + v18 * v14;
    if ( v19 != v16 )
    {
      *(_WORD *)(v19 + 8) = v54;
      *(_WORD *)(v16 + 10) = v18;
    }
    v20 = dword_4CCA90;
    *(_WORD *)(v17 + 480) = -1;
    do
    {
      v21 = dword_870840 + v18 * dword_87082C;
      v18 = *(__int16 *)(v21 + 10);
      *(_WORD *)(v21 + 4) = v20;
    }
    while ( v18 != -1 );
  }
LABEL_24:
  v22 = (_BYTE *)(v12 + 1853);
  v23 = -1853 - v12;
  do
  {
    if ( *(v22 - 1) == 0xFF )
      *(v22 - 1) = v22[v23 + 1852 + v17];
    if ( *v22 == 0xFF )
      *v22 = v22[v23 + 1853 + v17];
    v22 += 2;
  }
  while ( (int)&v22[v23] < 106 );
  v24 = *(_DWORD *)(v17 + 1848);
  if ( *(_DWORD *)(v12 + 1848) < v24 )
    *(_DWORD *)(v12 + 1848) = v24;
  v25 = (_BYTE *)(v12 + 1985);
  v26 = -1985 - v12;
  do
  {
    if ( *(v25 - 1) == 0xFF )
      *(v25 - 1) = v25[v26 + 1984 + v17];
    if ( *v25 == 0xFF )
      *v25 = v25[v26 + 1985 + v17];
    v25 += 2;
  }
  while ( (int)&v25[v26] < 106 );
  v27 = *(_DWORD *)(v17 + 1980);
  if ( *(_DWORD *)(v12 + 1980) < v27 )
    *(_DWORD *)(v12 + 1980) = v27;
  v28 = *(__int16 *)(v17 + 228);
  v29 = *(__int16 *)(v12 + 228);
  v30 = v29 * *(__int16 *)(v12 + 234);
  v54 = v29 + v28;
  v31 = (v30 + v28 * *(__int16 *)(v17 + 234)) / (v29 + v28);
  v32 = *(__int16 *)(v12 + 228) * *(__int16 *)(v12 + 232);
  *(_WORD *)(v12 + 234) = v31;
  v33 = (v32 + v28 * *(__int16 *)(v17 + 232)) / v54;
  v34 = *(__int16 *)(v12 + 228) * *(__int16 *)(v12 + 478);
  *(_WORD *)(v12 + 232) = v33;
  *(_WORD *)(v12 + 478) = (v34 + v28 * *(__int16 *)(v17 + 478)) / v54;
  *(_WORD *)(v12 + 228) += v28;
  v35 = *(_DWORD *)(v17 + 192);
  v36 = v35 + *(_DWORD *)(v17 + 200);
  v54 = v35;
  if ( v35 < v36 )
  {
    do
    {
      v37 = *(_DWORD *)(v17 + 196);
      v38 = v35 - *(_DWORD *)(v12 + 192);
      v52 = v35 - *(_DWORD *)(v17 + 192);
      v39 = *(_DWORD *)(v17 + 188);
      v51 = v38;
      if ( v39 < v39 + v37 )
      {
        do
        {
          v40 = *(__int16 *)(*(_DWORD *)(v17 + 120) + 2 * (v39 + v52 * *(_DWORD *)(v17 + 24) - *(_DWORD *)(v17 + 188)));
          if ( v40 != -1 )
          {
            v41 = v39 + v38 * *(_DWORD *)(v12 + 24) - *(_DWORD *)(v12 + 188);
            *(_WORD *)(*(_DWORD *)(v12 + 120) + 2 * v41) = v40;
            *(_DWORD *)(*(_DWORD *)(v12 + 140) + 4 * v41) = -1;
            v38 = v51;
          }
          ++v39;
        }
        while ( v39 < *(_DWORD *)(v17 + 188) + *(_DWORD *)(v17 + 196) );
        v35 = v54;
      }
      v42 = *(_DWORD *)(v17 + 200) + *(_DWORD *)(v17 + 192);
      v54 = ++v35;
    }
    while ( v35 < v42 );
  }
  sub_464ED0(sub_416710);
  sub_416BA0(a1, a2);
  sub_439F20(a1, a2);
  v43 = *(__int16 *)(dword_4CC8D8 + 1616);
  v44 = *(__int16 *)(dword_4CC8D8 + 1618);
  if ( v43 == -1 )
  {
    v45 = v53;
    *((_WORD *)v53 + 44) = v44;
  }
  else
  {
    *(_WORD *)(v43 * dword_4CCA98 + dword_4CCAAC + 1618) = v44;
    v45 = v53;
  }
  if ( v44 != -1 )
    *(_WORD *)(v44 * dword_4CCA98 + dword_4CCAAC + 1616) = v43;
  v46 = dword_4CCA98;
  --*((_WORD *)v45 + 45);
  sub_4834C0((void *)(dword_4CCAAC + a1 * v46));
  sub_464E10(a1);
  sub_4172C0(a1);
  sub_40F0A0(a1, a2);
  result = sub_417300(dword_4CC8E0);
  if ( dword_4C2D38 == dword_4CC8D8 )
  {
    v49 = sub_461900(v48);
    sub_4090C0(dword_4CC8E0, v49);
    sub_416690();
    return sub_47C950(0);
  }
  return result;
}
