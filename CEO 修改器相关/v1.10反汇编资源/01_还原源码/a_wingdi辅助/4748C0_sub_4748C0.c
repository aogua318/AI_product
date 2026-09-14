// 函数 0x4748c0  sub_4748C0  size=0x313  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4748C0(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 **a6)
{
  unsigned int v6; // esi
  unsigned int v7; // eax
  _BYTE *v8; // edi
  unsigned int v9; // edx
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  int v13; // esi
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  unsigned int v17; // eax
  unsigned int i; // edx
  int v19; // ebx
  int v20; // ebx
  int v21; // esi
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // ebx
  int v25; // edi
  int v26; // edi
  char v27; // cl
  unsigned int v28; // ebx
  int v29; // ecx
  _BYTE *v30; // esi
  _BYTE *v31; // esi
  unsigned int v32; // ecx
  int v33; // esi
  unsigned int v34; // ecx
  int v35; // ecx
  _DWORD *v37; // ecx
  unsigned int v38; // ecx
  int v39; // ecx
  unsigned int v40; // esi
  unsigned __int8 *v41; // edx
  int v42; // [esp+Ch] [ebp-18h]
  int v43; // [esp+10h] [ebp-14h]
  _BYTE *v44; // [esp+14h] [ebp-10h]
  unsigned int v45; // [esp+18h] [ebp-Ch]
  unsigned int v46; // [esp+1Ch] [ebp-8h]
  unsigned __int8 *v47; // [esp+20h] [ebp-4h]
  unsigned __int8 *v48; // [esp+20h] [ebp-4h]
  unsigned __int8 *v49; // [esp+20h] [ebp-4h]
  unsigned __int8 *v50; // [esp+20h] [ebp-4h]
  unsigned int v51; // [esp+2Ch] [ebp+8h]
  unsigned int v52; // [esp+30h] [ebp+Ch]
  unsigned int v53; // [esp+30h] [ebp+Ch]

  v47 = *a6;
  v6 = a5[12];
  v7 = a5[7];
  v8 = (_BYTE *)a5[13];
  v46 = (unsigned int)a6[1];
  v9 = a5[8];
  v44 = v8;
  if ( (unsigned int)v8 >= v6 )
    v45 = a5[11] - (_DWORD)v8;
  else
    v45 = v6 - (_DWORD)v8 - 1;
  v43 = dword_4B4BF8[a1];
  v42 = dword_4B4BF8[a2];
  while ( 1 )
  {
    for ( ; v7 < 0x14; v9 |= v11 )
    {
      v10 = *v47;
      --v46;
      ++v47;
      v11 = v10 << v7;
      v7 += 8;
    }
    v12 = *(unsigned __int8 *)(a3 + 8 * (v9 & v43));
    v13 = a3 + 8 * (v9 & v43);
    v14 = *(unsigned __int8 *)(v13 + 1);
    v9 >>= v14;
    if ( !v12 )
    {
LABEL_29:
      v7 -= v14;
      *v8++ = *(_BYTE *)(v13 + 4);
      --v45;
      goto LABEL_30;
    }
    v7 -= *(unsigned __int8 *)(v13 + 1);
    if ( (v12 & 0x10) == 0 )
      break;
LABEL_12:
    v16 = v12 & 0xF;
    v17 = v7 - v16;
    v52 = *(_DWORD *)(v13 + 4) + (v9 & dword_4B4BF8[v16]);
    for ( i = v9 >> v16; v17 < 0xF; i |= v19 )
    {
      --v46;
      v19 = *v47 << v17;
      v17 += 8;
      ++v47;
    }
    v20 = *(unsigned __int8 *)(a4 + 8 * (i & v42));
    v21 = a4 + 8 * (i & v42);
    v9 = i >> *(_BYTE *)(v21 + 1);
    v7 = v17 - *(unsigned __int8 *)(v21 + 1);
    if ( (v20 & 0x10) == 0 )
    {
      while ( (v20 & 0x40) == 0 )
      {
        v22 = *(_DWORD *)(v21 + 4) + (v9 & dword_4B4BF8[v20]);
        v20 = *(unsigned __int8 *)(v21 + 8 * v22);
        v21 += 8 * v22;
        v23 = *(unsigned __int8 *)(v21 + 1);
        v9 >>= v23;
        v7 -= v23;
        if ( (v20 & 0x10) != 0 )
          goto LABEL_17;
      }
      v37 = a6;
      a6[6] = "invalid distance code";
      goto LABEL_41;
    }
LABEL_17:
    v24 = v20 & 0xF;
    if ( v7 < v24 )
    {
      do
      {
        v25 = *v47;
        --v46;
        ++v47;
        v26 = v25 << v7;
        v7 += 8;
        v9 |= v26;
      }
      while ( v7 < v24 );
      v8 = v44;
    }
    v7 -= v24;
    v51 = *(_DWORD *)(v21 + 4) + (v9 & dword_4B4BF8[v24]);
    v27 = v24;
    v28 = v52;
    v45 -= v52;
    v9 >>= v27;
    v29 = a5[10];
    if ( (unsigned int)&v8[-v29] < v51 )
    {
      v32 = v51 + v29 - (_DWORD)v8;
      v31 = (_BYTE *)(a5[11] - v32);
      if ( v52 > v32 )
      {
        v53 = v52 - v32;
        do
        {
          *v8++ = *v31++;
          --v32;
        }
        while ( v32 );
        v31 = (_BYTE *)a5[10];
        v28 = v53;
      }
    }
    else
    {
      v30 = &v8[-v51];
      v8 += 2;
      *(v8 - 2) = *v30;
      *(v8 - 1) = v30[1];
      v31 = v30 + 2;
      v28 = v52 - 2;
    }
    v33 = v31 - v8;
    do
    {
      *v8 = v8[v33];
      ++v8;
      --v28;
    }
    while ( v28 );
LABEL_30:
    v44 = v8;
    if ( v45 < 0x102 || v46 < 0xA )
    {
      v34 = (unsigned int)&a6[1][-v46];
      if ( v7 >> 3 < v34 )
        v34 = v7 >> 3;
      v48 = &v47[-v34];
      a5[8] = v9;
      a5[7] = v7 - 8 * v34;
      a6[1] = (unsigned __int8 *)(v46 + v34);
      v35 = v48 - *a6;
      *a6 = v48;
      a6[2] += v35;
      a5[13] = v8;
      return 0;
    }
  }
  while ( (v12 & 0x40) == 0 )
  {
    v15 = *(_DWORD *)(v13 + 4) + (v9 & dword_4B4BF8[v12]);
    v12 = *(unsigned __int8 *)(v13 + 8 * v15);
    v13 += 8 * v15;
    v14 = *(unsigned __int8 *)(v13 + 1);
    v9 >>= v14;
    if ( !v12 )
      goto LABEL_29;
    v7 -= *(unsigned __int8 *)(v13 + 1);
    if ( (v12 & 0x10) != 0 )
      goto LABEL_12;
  }
  if ( (v12 & 0x20) == 0 )
  {
    v37 = a6;
    a6[6] = "invalid literal/length code";
LABEL_41:
    v40 = v37[1] - v46;
    if ( v7 >> 3 < v40 )
      v40 = v7 >> 3;
    v50 = &v47[-v40];
    a5[8] = v9;
    a5[7] = v7 - 8 * v40;
    v41 = &v50[-*v37];
    *v37 = v50;
    v37[2] += v41;
    v37[1] = v46 + v40;
    a5[13] = v8;
    return -3;
  }
  v38 = (unsigned int)&a6[1][-v46];
  if ( v7 >> 3 < v38 )
    v38 = v7 >> 3;
  v49 = &v47[-v38];
  a5[8] = v9;
  a5[7] = v7 - 8 * v38;
  a6[1] = (unsigned __int8 *)(v46 + v38);
  v39 = v49 - *a6;
  *a6 = v49;
  a6[2] += v39;
  a5[13] = v8;
  return 1;
}
