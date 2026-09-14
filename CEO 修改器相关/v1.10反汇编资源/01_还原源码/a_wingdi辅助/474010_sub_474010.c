// 函数 0x474010  sub_474010  size=0x555  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_474010(
        int *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int **a7,
        unsigned int *a8,
        int a9,
        unsigned int *a10)
{
  unsigned int v10; // esi
  int result; // eax
  unsigned int v12; // edx
  unsigned int i; // ecx
  unsigned int v14; // esi
  int j; // edi
  int v16; // edi
  int *v17; // ebx
  int v18; // ecx
  int v19; // edi
  int v20; // ecx
  unsigned int v21; // esi
  int v22; // edi
  int *v23; // esi
  unsigned int v24; // edi
  int v25; // ecx
  int v26; // esi
  unsigned int v27; // edi
  int v28; // ebx
  int v29; // esi
  int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  int *v35; // edi
  unsigned int v36; // edi
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // edx
  int *v40; // edi
  unsigned int v41; // esi
  char v42; // dl
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // eax
  int v47; // edx
  unsigned int v48; // eax
  int *v49; // ecx
  unsigned int k; // eax
  int v51; // eax
  _DWORD v52[15]; // [esp+Ch] [ebp-114h] BYREF
  int **v53; // [esp+48h] [ebp-D8h]
  int **v54; // [esp+4Ch] [ebp-D4h]
  int v55; // [esp+50h] [ebp-D0h]
  unsigned int v56; // [esp+54h] [ebp-CCh]
  int v57; // [esp+58h] [ebp-C8h]
  unsigned int *v58; // [esp+5Ch] [ebp-C4h]
  unsigned int *v59; // [esp+60h] [ebp-C0h]
  unsigned int v60; // [esp+64h] [ebp-BCh]
  int v61; // [esp+68h] [ebp-B8h]
  int v62; // [esp+6Ch] [ebp-B4h]
  unsigned int v63; // [esp+70h] [ebp-B0h]
  unsigned int v64; // [esp+74h] [ebp-ACh]
  int *v65; // [esp+78h] [ebp-A8h]
  signed int v66; // [esp+7Ch] [ebp-A4h]
  unsigned int v67; // [esp+80h] [ebp-A0h]
  int v68; // [esp+84h] [ebp-9Ch]
  int *v69; // [esp+88h] [ebp-98h]
  int v70; // [esp+8Ch] [ebp-94h]
  unsigned int *v71; // [esp+90h] [ebp-90h]
  signed int v72; // [esp+94h] [ebp-8Ch]
  unsigned int v73; // [esp+98h] [ebp-88h]
  int v74; // [esp+9Ch] [ebp-84h]
  _DWORD v75[15]; // [esp+A0h] [ebp-80h]
  int v76; // [esp+DCh] [ebp-44h] BYREF
  _DWORD v77[15]; // [esp+E0h] [ebp-40h] BYREF

  v57 = a9;
  v10 = a3;
  v59 = a10;
  result = 0;
  v69 = a1;
  v63 = a3;
  v54 = a7;
  v58 = a2;
  v76 = 0;
  memset(v77, 0, sizeof(v77));
  do
  {
    ++v77[*a1++ - 1];
    --v10;
  }
  while ( v10 );
  if ( v76 == v63 )
  {
    *a7 = 0;
    *a8 = 0;
    return 0;
  }
  v12 = *a8;
  v73 = *a8;
  for ( i = 1; i <= 0xF; ++i )
  {
    if ( v77[i - 1] )
      break;
  }
  v72 = i;
  if ( v12 < i )
  {
    v73 = i;
    v12 = i;
  }
  v14 = 15;
  do
  {
    if ( v77[v14 - 1] )
      break;
    --v14;
  }
  while ( v14 );
  v66 = v14;
  if ( v12 > v14 )
  {
    v73 = v14;
    v12 = v14;
  }
  *a8 = v12;
  for ( j = 1 << i; i < v14; j = 2 * v16 )
  {
    v16 = j - v77[i - 1];
    if ( v16 < 0 )
      return -3;
    ++i;
  }
  v17 = &v77[v14 - 1];
  v67 = 4 * v14;
  v18 = *v17;
  v19 = j - *v17;
  v55 = v19;
  if ( v19 < 0 )
    return -3;
  *v17 = v19 + v18;
  v20 = 0;
  v21 = v14 - 1;
  v75[0] = 0;
  if ( v21 )
  {
    v22 = 0;
    do
    {
      v20 += v77[v22++];
      --v21;
      v75[v22] = v20;
    }
    while ( v21 );
  }
  v23 = v69;
  v24 = 0;
  do
  {
    v25 = *v23++;
    v71 = (unsigned int *)v23;
    if ( v25 )
    {
      v26 = v75[v25 - 1];
      v59[v26] = v24;
      v75[v25 - 1] = v26 + 1;
      v23 = (int *)v71;
    }
    ++v24;
  }
  while ( v24 < v63 );
  v63 = *(_DWORD *)((char *)&v75[-1] + v67);
  v71 = v59;
  v27 = 0;
  v28 = -v12;
  v64 = 0;
  v74 = 0;
  v70 = -1;
  v52[0] = 0;
  v69 = 0;
  v67 = 0;
  if ( v72 > v66 )
  {
LABEL_66:
    if ( v55 )
    {
      if ( v66 != 1 )
        return -5;
    }
  }
  else
  {
    v29 = v62;
    v65 = &v77[v72 - 1];
    while ( 1 )
    {
      v68 = *v65;
      if ( v68 )
        break;
LABEL_64:
      ++v65;
      if ( ++v72 > v66 )
      {
        result = 0;
        goto LABEL_66;
      }
    }
    while ( 1 )
    {
      --v68;
      v30 = v28 + v12;
      if ( v72 > (int)(v28 + v12) )
        break;
LABEL_48:
      BYTE1(v61) = v72 - v28;
      if ( v71 < &v59[v63] )
      {
        v45 = *v71;
        if ( *v71 >= a4 )
        {
          v46 = 4 * (v45 - a4);
          LOBYTE(v61) = *(_BYTE *)(v46 + a6) + 80;
          v29 = *(_DWORD *)(v46 + a5);
        }
        else
        {
          LOBYTE(v61) = v45 < 0x100 ? 0 : 96;
          v29 = v45;
        }
        ++v71;
      }
      else
      {
        LOBYTE(v61) = -64;
      }
      v47 = 1 << (v72 - v28);
      v48 = v27 >> v28;
      if ( v27 >> v28 < v67 )
      {
        v49 = &v69[2 * v48];
        do
        {
          *v49 = v61;
          v49[1] = v29;
          v48 += v47;
          v49 += 2 * v47;
        }
        while ( v48 < v67 );
        v27 = v64;
      }
      for ( k = 1 << (v72 - 1); (k & v27) != 0; k >>= 1 )
        v27 ^= k;
      v27 ^= k;
      v51 = v70;
      v64 = v27;
      if ( (v27 & ((1 << v28) - 1)) != v75[v70 - 1] )
      {
        do
        {
          v28 -= v73;
          --v51;
        }
        while ( (v27 & ((1 << v28) - 1)) != v75[v51 - 1] );
        v70 = v51;
      }
      v12 = v73;
      if ( !v68 )
        goto LABEL_64;
    }
    v56 = v68 + 1;
    v60 = v28 - v12;
    while ( 1 )
    {
      v60 += v12;
      ++v70;
      v28 = v30;
      v31 = v66 - v30;
      if ( v66 - v30 > v73 )
        v31 = v73;
      v32 = v72 - v30;
      v33 = 1 << (v72 - v30);
      if ( v33 > v56 )
      {
        v34 = -1 - v68 + v33;
        v35 = v65;
        if ( v32 < v31 && ++v32 < v31 )
        {
          while ( 1 )
          {
            v69 = v35 + 1;
            v36 = v35[1];
            v37 = 2 * v34;
            if ( v37 <= v36 )
              break;
            ++v32;
            v34 = v37 - v36;
            if ( v32 >= v31 )
              break;
            v35 = v69;
          }
        }
      }
      v38 = *v58;
      v67 = 1 << v32;
      v39 = v38 + (1 << v32);
      if ( v39 > 0x5A0 )
        return -4;
      v40 = (int *)(v57 + 8 * v38);
      v53 = (int **)&v52[v70];
      *v53 = v40;
      *v58 = v39;
      v69 = v40;
      if ( v70 )
      {
        v41 = v64;
        v42 = v73;
        v75[v70 - 1] = v64;
        LOBYTE(v61) = v32;
        v43 = v41 >> v60;
        v44 = (int)*(v53 - 1);
        BYTE1(v61) = v42;
        v29 = (((int)v40 - v44) >> 3) - (v41 >> v60);
        *(_DWORD *)(v44 + 8 * v43) = v61;
        *(_DWORD *)(v44 + 8 * v43 + 4) = v29;
      }
      else
      {
        *v54 = v40;
      }
      v30 = v28 + v73;
      if ( v72 <= (int)(v28 + v73) )
      {
        v27 = v64;
        goto LABEL_48;
      }
      v12 = v73;
    }
  }
  return result;
}
