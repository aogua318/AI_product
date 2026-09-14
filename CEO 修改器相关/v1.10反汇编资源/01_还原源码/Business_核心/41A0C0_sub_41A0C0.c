// 函数 0x41a0c0  sub_41A0C0  size=0x4FD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_41A0C0(_DWORD *a1, _DWORD *a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  _DWORD *v32; // eax
  int v33; // esi
  int v34; // edi
  int v35; // eax
  _DWORD *v36; // esi
  int v37; // eax
  char v38[16]; // [esp+Ch] [ebp-FF0h] BYREF
  _DWORD *v39; // [esp+1Ch] [ebp-FE0h]
  _DWORD *v40; // [esp+20h] [ebp-FDCh]
  int *v41; // [esp+24h] [ebp-FD8h]
  _DWORD *v42; // [esp+28h] [ebp-FD4h]
  int v43; // [esp+2Ch] [ebp-FD0h] BYREF
  int v44; // [esp+30h] [ebp-FCCh]
  int v45; // [esp+34h] [ebp-FC8h]
  int v46; // [esp+38h] [ebp-FC4h]
  int v47; // [esp+3Ch] [ebp-FC0h] BYREF
  int v48; // [esp+40h] [ebp-FBCh] BYREF
  int v49; // [esp+44h] [ebp-FB8h]
  int v50; // [esp+48h] [ebp-FB4h] BYREF
  int v51; // [esp+4Ch] [ebp-FB0h] BYREF
  int v52; // [esp+50h] [ebp-FACh]
  int v53; // [esp+54h] [ebp-FA8h]
  _DWORD v54[1000]; // [esp+58h] [ebp-FA4h]

  v41 = a4;
  v42 = a1;
  v40 = a2;
  v39 = a5;
  sub_464B60(&v43);
  sub_464B60(v38);
  v5 = dword_4CCAAC + a3 * dword_4CCA98;
  sub_4198B0((_DWORD *)v5, 2, 2, &v47, &v50);
  v6 = dword_4B1108;
  sub_4198B0(
    (_DWORD *)v5,
    *(_DWORD *)(v5 + 196) - dword_4B1108 + 1,
    *(_DWORD *)(v5 + 200) - dword_4B1108 + 1,
    &v48,
    &v51);
  v7 = v47;
  v45 = v48;
  v8 = 0;
  v43 = v47;
  v44 = v50;
  v46 = v51;
  v49 = 0;
  if ( v50 > 0 )
  {
    v53 = v47;
    if ( v47 <= v48 )
    {
      v9 = 4 * (v47 + dword_4D0E80 * (v50 - 1));
      v52 = v9;
      do
      {
        v10 = *(_DWORD *)(v9 + dword_4D0EF4);
        if ( v10 != -1 && !sub_483C00(*(_DWORD *)(v9 + dword_4D0EF4)) )
          v54[v8++] = sub_483C30(v10);
        v9 = v52 + 4;
        ++v53;
        v52 += 4;
      }
      while ( v53 <= v45 );
      v7 = v43;
      v6 = dword_4B1108;
      v49 = v8;
    }
  }
  if ( v46 + 1 < dword_4D0E84 )
  {
    v53 = v7;
    if ( v7 <= v45 )
    {
      v11 = 4 * (dword_4D0E80 * (v46 + 1) + v7);
      v52 = v11;
      do
      {
        v12 = *(_DWORD *)(v11 + dword_4D0EF4);
        if ( v12 != -1 && !sub_483C00(*(_DWORD *)(v11 + dword_4D0EF4)) )
          v54[v8++] = sub_483C30(v12);
        v11 = v52 + 4;
        ++v53;
        v52 += 4;
      }
      while ( v53 <= v45 );
      v7 = v43;
      v6 = dword_4B1108;
      v49 = v8;
    }
  }
  if ( v7 > 0 )
  {
    v52 = v7 - 1;
    v13 = v44;
    v53 = v44;
    if ( v44 <= v46 )
    {
      do
      {
        v14 = v52 + v13 * dword_4D0E80;
        v15 = *(_DWORD *)(dword_4D0EF4 + 4 * v14);
        if ( v15 != -1 && !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v14)) )
          v54[v8++] = sub_483C30(v15);
        v13 = v53 + 1;
        v53 = v13;
      }
      while ( v13 <= v46 );
      v6 = dword_4B1108;
      v49 = v8;
    }
  }
  v16 = v45 + 1;
  v52 = v45 + 1;
  if ( v45 + 1 < dword_4D0E80 )
  {
    v17 = v44;
    v53 = v44;
    if ( v44 <= v46 )
    {
      while ( 1 )
      {
        v18 = v16 + v17 * dword_4D0E80;
        v19 = *(_DWORD *)(dword_4D0EF4 + 4 * v18);
        if ( v19 != -1 && !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v18)) )
          v54[v8++] = sub_483C30(v19);
        v17 = v53 + 1;
        v53 = v17;
        if ( v17 > v46 )
          break;
        v16 = v52;
      }
      v6 = dword_4B1108;
      v49 = v8;
    }
  }
  if ( !v8 )
    return 0;
  v50 = v50 * v6 - 2;
  v21 = v6 * (v48 + 1);
  v22 = v6 * (v51 + 1);
  v23 = v47 * v6;
  v24 = dword_4C43DC + dword_4C43C8 * *(__int16 *)(v5 + 1620);
  dword_4CC8E8[0] = *(__int16 *)(v5 + 1620);
  v25 = 0;
  v26 = v23 - 2;
  v27 = v21 + 1;
  v28 = v22 + 1;
  v47 = v24;
  dword_4CC8E4[0] = 1;
  v53 = 0;
  if ( v49 <= 0 )
    return 0;
  do
  {
    v29 = v54[v25];
    v30 = dword_4C43DC + v29 * dword_4C43C8;
    v51 = v29;
    if ( *(_BYTE *)(v30 + 2) == *(_BYTE *)(v24 + 2) && *(_BYTE *)(v30 + 3) == 3 )
    {
      v48 = *(__int16 *)(v30 + 16);
      v31 = dword_4CC8E4[0];
      if ( !dword_4CC8E4[0] || v51 != dword_4CC8E4[dword_4CC8E4[0]] )
      {
        dword_4CC8E8[dword_4CC8E4[0]] = v51;
        dword_4CC8E4[0] = v31 + 1;
        v32 = (_DWORD *)(dword_4CCAAC + v48 * dword_4CCA98);
        if ( v32[47] < v26 )
          v26 = v32[47];
        v33 = v32[48];
        v51 = v33;
        if ( v33 < v50 )
          v50 = v33;
        v34 = v32[49];
        if ( v34 + v32[47] - 1 > v27 )
          v27 = v34 + v32[47] - 1;
        v24 = v47;
        v35 = v32[50] + v51 - 1;
        if ( v35 > v28 )
          v28 = v35;
      }
    }
    v25 = v53 + 1;
    v53 = v25;
  }
  while ( v25 < v49 );
  if ( dword_4CC8E4[0] == 1 )
    return 0;
  v36 = v42;
  *v41 = v26;
  v37 = v50;
  *v36 = v50;
  *v40 = v27 - v26 + 1;
  *v39 = v28 - v37 + 1;
  return 1;
}
