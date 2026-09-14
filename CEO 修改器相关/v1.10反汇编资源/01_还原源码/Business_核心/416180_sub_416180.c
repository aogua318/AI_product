// 函数 0x416180  sub_416180  size=0x419  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_416180(int *a1, _DWORD *a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // edi
  int v12; // esi
  int v13; // edi
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // edi
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // edx
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  _DWORD *v33; // eax
  char v35[16]; // [esp+Ch] [ebp-FF0h] BYREF
  int *v36; // [esp+1Ch] [ebp-FE0h]
  int v37; // [esp+20h] [ebp-FDCh]
  _DWORD *v38; // [esp+24h] [ebp-FD8h]
  int v39; // [esp+28h] [ebp-FD4h]
  int *v40; // [esp+2Ch] [ebp-FD0h]
  _DWORD *v41; // [esp+30h] [ebp-FCCh]
  _DWORD *v42; // [esp+34h] [ebp-FC8h]
  int v43; // [esp+38h] [ebp-FC4h]
  int v44; // [esp+3Ch] [ebp-FC0h] BYREF
  int v45; // [esp+40h] [ebp-FBCh]
  int v46; // [esp+44h] [ebp-FB8h]
  int v47; // [esp+48h] [ebp-FB4h]
  int v48; // [esp+4Ch] [ebp-FB0h]
  int v49; // [esp+50h] [ebp-FACh]
  int v50; // [esp+54h] [ebp-FA8h]
  _DWORD v51[1000]; // [esp+58h] [ebp-FA4h]

  v40 = a4;
  v36 = a1;
  v38 = a2;
  v41 = a5;
  sub_464B60(&v44);
  sub_464B60(v35);
  v42 = (_DWORD *)(dword_4C43DC + dword_4C43C8 * a3);
  v5 = sub_40CD60(v42);
  sub_464CE0(v5);
  v6 = v45;
  v7 = v44;
  v8 = 0;
  v39 = v44;
  v49 = v45;
  v37 = v46;
  v43 = v47;
  v48 = 0;
  if ( v45 > 0 )
  {
    v50 = v44;
    if ( v44 <= v46 )
    {
      v9 = 4 * (dword_4D0E80 * (v45 - 1) + v44);
      do
      {
        v10 = *(_DWORD *)(v9 + dword_4D0EF4);
        if ( v10 != -1 && !sub_483C00(*(_DWORD *)(v9 + dword_4D0EF4)) )
          v51[v8++] = sub_483C30(v10);
        v9 += 4;
        ++v50;
      }
      while ( v50 <= v46 );
      v6 = v45;
      v7 = v44;
      v48 = v8;
    }
  }
  if ( v47 + 1 < dword_4D0E84 )
  {
    v50 = v7;
    if ( v7 <= v46 )
    {
      v11 = 4 * (dword_4D0E80 * (v47 + 1) + v7);
      do
      {
        v12 = *(_DWORD *)(v11 + dword_4D0EF4);
        if ( v12 != -1 && !sub_483C00(*(_DWORD *)(v11 + dword_4D0EF4)) )
          v51[v8++] = sub_483C30(v12);
        v11 += 4;
        ++v50;
      }
      while ( v50 <= v46 );
      v6 = v45;
      v7 = v44;
      v48 = v8;
    }
  }
  if ( v7 > 0 )
  {
    v50 = v7 - 1;
    v13 = v6;
    if ( v6 <= v47 )
    {
      do
      {
        v14 = v50 + v13 * dword_4D0E80;
        v15 = *(_DWORD *)(dword_4D0EF4 + 4 * v14);
        if ( v15 != -1 && !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v14)) )
          v51[v8++] = sub_483C30(v15);
        ++v13;
      }
      while ( v13 <= v47 );
      v6 = v45;
      v48 = v8;
    }
  }
  v16 = v46 + 1;
  v50 = v46 + 1;
  if ( v46 + 1 < dword_4D0E80 )
  {
    v17 = v6;
    if ( v6 <= v47 )
    {
      while ( 1 )
      {
        v18 = v16 + v17 * dword_4D0E80;
        v19 = *(_DWORD *)(dword_4D0EF4 + 4 * v18);
        if ( v19 != -1 && !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v18)) )
          v51[v8++] = sub_483C30(v19);
        if ( ++v17 > v47 )
          break;
        v16 = v50;
      }
      v48 = v8;
    }
  }
  v20 = v49 * dword_4B1108 - 2;
  v21 = 0;
  v22 = v39 * dword_4B1108 - 2;
  v23 = dword_4B1108 * (v37 + 1) + 1;
  v24 = dword_4B1108 * (v43 + 1) + 1;
  v49 = v20;
  dword_4CC8E4[0] = 0;
  v50 = 0;
  if ( v8 > 0 )
  {
    do
    {
      v25 = dword_4C43DC + v51[v21] * dword_4C43C8;
      if ( *(_BYTE *)(v25 + 2) == *((_BYTE *)v42 + 2) && *(_BYTE *)(v25 + 3) == 3 )
      {
        v26 = *(__int16 *)(v25 + 16);
        v27 = dword_4CC8E4[0];
        if ( !dword_4CC8E4[0] || v51[v50] != dword_4CC8E4[dword_4CC8E4[0]] )
        {
          dword_4CC8E8[dword_4CC8E4[0]] = v51[v50];
          dword_4CC8E4[0] = v27 + 1;
          v28 = (_DWORD *)(dword_4CCAAC + v26 * dword_4CCA98);
          if ( v28[47] < v22 )
            v22 = v28[47];
          v29 = v28[48];
          v43 = v29;
          if ( v29 < v49 )
            v49 = v29;
          v30 = v28[49];
          if ( v30 + v28[47] - 1 > v23 )
            v23 = v30 + v28[47] - 1;
          v31 = v28[50] + v43 - 1;
          if ( v31 > v24 )
            v24 = v31;
        }
      }
      v21 = v50 + 1;
      v50 = v21;
    }
    while ( v21 < v48 );
    v20 = v49;
  }
  *v40 = v22;
  v32 = v24 - v20;
  *v36 = v20;
  v33 = v41;
  *v38 = v23 - v22 + 1;
  *v33 = v32 + 1;
  return 1;
}
