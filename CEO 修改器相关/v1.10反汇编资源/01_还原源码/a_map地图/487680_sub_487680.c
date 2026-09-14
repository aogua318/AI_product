// 函数 0x487680  sub_487680  size=0x492  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_487680@<eax>(int a1@<ebx>, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  __int16 *v32; // esi
  int v34; // [esp+8h] [ebp-820h]
  int v35; // [esp+Ch] [ebp-81Ch]
  int v36; // [esp+10h] [ebp-818h]
  int NumOfElements; // [esp+14h] [ebp-814h]
  int v38; // [esp+18h] [ebp-810h]
  int v39; // [esp+1Ch] [ebp-80Ch]
  int v40; // [esp+20h] [ebp-808h]
  int Base; // [esp+24h] [ebp-804h] BYREF
  int v42[511]; // [esp+28h] [ebp-800h]

  NumOfElements = 0;
  v38 = dword_8F2B14 - 1;
  if ( dword_8F2B14 - 1 < 0 )
    return -1;
  v4 = a4;
  v5 = dword_4B8234[a4];
  v36 = -dword_8F2B14;
  v35 = dword_8F2B18 + a3 * dword_8F2B14;
  v6 = dword_8F2B28;
  v34 = v5;
  v39 = dword_8F2B18 + (dword_8F2B14 - 1) * dword_8F2B14;
  while ( 1 )
  {
    v40 = 0;
    v7 = 1;
    if ( v4 > 0 )
    {
      do
      {
        v7 *= 2;
        --v4;
      }
      while ( v4 );
    }
    v8 = 1;
    if ( v5 > 0 )
    {
      v9 = v5;
      do
      {
        v8 *= 2;
        --v9;
      }
      while ( v9 );
    }
    v10 = v38;
    if ( (*(char *)(v35 + v38) & v7) != 0 && (*(char *)(v39 + a3) & v8) != 0 )
    {
      v11 = a2 - 1;
      if ( a2 - 1 >= 0 )
      {
        v12 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + v6 * v11));
        v13 = *(__int16 *)(dword_8F2B34 + 2 * v12);
        if ( v12 != -1 && (*(_BYTE *)(v39 + v13) & 1) != 0 )
          v40 = 1;
        if ( (*(_BYTE *)(dword_8F2B18 + v13 * dword_8F2B14 + v38) & 4) != 0 )
          ++v40;
      }
      if ( a1 + 1 < v6 )
      {
        v14 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + a2 * v6) + 2);
        v15 = *(__int16 *)(dword_8F2B34 + 2 * v14);
        if ( v14 != -1 && (*(_BYTE *)(v39 + v15) & 2) != 0 )
          ++v40;
        if ( (*(_BYTE *)(dword_8F2B18 + v15 * dword_8F2B14 + v38) & 8) != 0 )
          ++v40;
      }
      v16 = a2 + 1;
      if ( a2 + 1 < dword_8F2B1C )
      {
        v17 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + v6 * v16));
        v18 = *(__int16 *)(dword_8F2B34 + 2 * v17);
        if ( v17 != -1 && (*(_BYTE *)(v39 + v18) & 4) != 0 )
          ++v40;
        if ( (*(_BYTE *)(dword_8F2B18 + v18 * dword_8F2B14 + v38) & 1) != 0 )
          ++v40;
      }
      if ( a1 - 1 >= 0 )
      {
        v19 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + a2 * v6) - 2);
        v20 = *(__int16 *)(dword_8F2B34 + 2 * v19);
        if ( v19 != -1 && (*(_BYTE *)(v39 + v20) & 8) != 0 )
          ++v40;
        if ( (*(_BYTE *)(dword_8F2B18 + v20 * dword_8F2B14 + v38) & 2) != 0 )
          ++v40;
      }
      if ( a1 - 1 >= 0 && v11 >= 0 )
      {
        v21 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + v6 * v11) - 2);
        v22 = *(__int16 *)(dword_8F2B34 + 2 * v21);
        if ( v21 != -1 && (*(_BYTE *)(v39 + v22) & 0x10) != 0 )
          ++v40;
        if ( (*(_BYTE *)(dword_8F2B18 + v22 * dword_8F2B14 + v38) & 0x40) != 0 )
          ++v40;
      }
      if ( a1 + 1 >= v6 || v11 < 0 )
      {
        v24 = dword_8F2B34;
      }
      else
      {
        v23 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + v6 * v11) + 2);
        v24 = dword_8F2B34;
        v25 = *(__int16 *)(dword_8F2B34 + 2 * v23);
        if ( v23 != -1 && (*(_BYTE *)(v39 + v25) & 0x20) != 0 )
          ++v40;
        if ( *(char *)(dword_8F2B18 + v25 * dword_8F2B14 + v38) < 0 )
          ++v40;
      }
      if ( a1 + 1 < v6 && v16 < dword_8F2B1C )
      {
        v26 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + v6 * v16) + 2);
        v27 = *(__int16 *)(v24 + 2 * v26);
        if ( v26 != -1 && (*(_BYTE *)(v39 + v27) & 0x40) != 0 )
          ++v40;
        if ( (*(_BYTE *)(dword_8F2B18 + v27 * dword_8F2B14 + v38) & 0x10) != 0 )
          ++v40;
      }
      if ( a1 - 1 >= 0 && v16 < dword_8F2B1C )
      {
        v28 = *(__int16 *)(dword_8F2B0C + 2 * (a1 + v6 * v16) - 2);
        v29 = *(__int16 *)(v24 + 2 * v28);
        if ( v28 != -1 && *(char *)(v39 + v29) < 0 )
          ++v40;
        if ( (*(_BYTE *)(dword_8F2B18 + v29 * dword_8F2B14 + v38) & 0x20) != 0 )
          ++v40;
      }
      v42[2 * NumOfElements - 1] = v38;
      v42[2 * NumOfElements++] = v40;
      v10 = v38;
    }
    v39 += v36;
    v38 = v10 - 1;
    if ( v10 - 1 < 0 )
      break;
    v4 = a4;
    v5 = v34;
  }
  v30 = NumOfElements;
  if ( !NumOfElements )
    return -1;
  qsort(&Base, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_487660);
  v31 = 1;
  if ( NumOfElements > 1 )
  {
    while ( v42[2 * v31] >= v42[0] )
    {
      if ( ++v31 >= NumOfElements )
        goto LABEL_72;
    }
    v30 = v31;
  }
LABEL_72:
  v32 = (__int16 *)(dword_8F2B10 + 4 * v42[2 * (sub_4640D0() % v30) - 1]);
  return sub_4640D0() % v32[1] + *v32 / dword_8F2B30;
}
