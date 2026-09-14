// 函数 0x412580  sub_412580  size=0x9BC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_412580()
{
  int v0; // ecx
  size_t v1; // esi
  int v2; // eax
  int v3; // edx
  int v4; // edi
  int *v5; // ecx
  int v6; // ecx
  __int16 *v7; // edi
  double *v8; // ebx
  int v9; // edi
  int i; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  double *v17; // ebx
  size_t v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // edi
  bool v23; // zf
  signed int v24; // eax
  int v25; // edx
  double *v26; // ecx
  double v27; // st7
  double v28; // st6
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // ebx
  __int16 *v35; // edi
  char v36; // al
  _DWORD *v37; // ebx
  unsigned int v38; // edi
  unsigned int v39; // eax
  int v40; // ebx
  char *v41; // edi
  signed int v42; // eax
  int v43; // edx
  double v44; // [esp+Ch] [ebp-C4h]
  int v45; // [esp+14h] [ebp-BCh] BYREF
  int v46; // [esp+18h] [ebp-B8h]
  int v47; // [esp+1Ch] [ebp-B4h] BYREF
  double *v48; // [esp+20h] [ebp-B0h]
  int v49; // [esp+24h] [ebp-ACh]
  int v50; // [esp+28h] [ebp-A8h]
  double *v51; // [esp+2Ch] [ebp-A4h]
  int v52; // [esp+30h] [ebp-A0h]
  int k; // [esp+34h] [ebp-9Ch]
  int j; // [esp+38h] [ebp-98h]
  size_t Size; // [esp+3Ch] [ebp-94h]
  _DWORD v56[20]; // [esp+40h] [ebp-90h] BYREF
  int Src; // [esp+90h] [ebp-40h] BYREF
  int v58; // [esp+94h] [ebp-3Ch] BYREF
  int v59; // [esp+98h] [ebp-38h]
  int v60; // [esp+9Ch] [ebp-34h]
  int v61; // [esp+A0h] [ebp-30h]
  int v62; // [esp+A4h] [ebp-2Ch] BYREF
  int v63; // [esp+A8h] [ebp-28h] BYREF
  int v64; // [esp+ACh] [ebp-24h]
  int v65; // [esp+B0h] [ebp-20h]
  int v66; // [esp+B4h] [ebp-1Ch]
  int v67; // [esp+B8h] [ebp-18h]
  int v68; // [esp+BCh] [ebp-14h]
  int v69; // [esp+C0h] [ebp-10h]
  int v70; // [esp+C4h] [ebp-Ch]
  int v71; // [esp+C8h] [ebp-8h]

  v0 = 0;
  v1 = Size;
  dword_4D0498 = 0;
  dword_4D0478 = 0;
  v49 = 0;
  if ( dword_4C5DD8 > 0 )
  {
    v2 = dword_4C5DEC;
    while ( 1 )
    {
      v3 = 0;
      k = 0;
      if ( v2 > 0 )
        break;
LABEL_64:
      if ( ++v49 >= dword_4C5DD8 )
        goto LABEL_65;
    }
    while ( 1 )
    {
      v1 = *(_DWORD *)dword_4C5DF4 + 9208 * (v3 + v49 * v2);
      v4 = 0;
      if ( dword_870818 > 0 )
      {
        v5 = (int *)(v1 + 8784);
        do
        {
          *v5 = 9 * *v5 / 10;
          ++v4;
          ++v5;
        }
        while ( v4 < dword_870818 );
        v0 = dword_4D0478;
      }
      dword_4D0498 += *(_DWORD *)v1;
      dword_4D0478 = *(_DWORD *)v1 + v0;
      dword_4D0478 += *(_DWORD *)(v1 + 4);
      dword_4D0478 += *(_DWORD *)(v1 + 8);
      v6 = *(_DWORD *)(v1 + 12) + dword_4D0478;
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      dword_4D0478 = v6;
      memset(v56, 0, sizeof(v56));
      j = 0;
      if ( dword_870818 > 0 )
      {
        v7 = &word_8703DE;
        v8 = (double *)(v1 + 872);
        do
        {
          memcpy_0(v8 + 1, v8, 0x18u);
          *v8 = 0.0;
          if ( *(v7 - 1) != -1
            && (int)(*(double *)(32 * *(_DWORD *)(v7 - 3) + v1 + 888)
                   + *(double *)(32 * *(_DWORD *)(v7 - 3) + v1 + 880)
                   + *(double *)(32 * (*(_DWORD *)(v7 - 3) + 28) + v1)) > 0 )
          {
            ++v56[*v7];
          }
          v8 += 4;
          v7 += 4;
          ++j;
        }
        while ( j < dword_870818 );
      }
      v9 = 0;
      v52 = -1;
      for ( i = 0; i < 20; i += 5 )
      {
        if ( v56[i] )
        {
          v11 = dword_870728[i] < 0 ? 0 : dword_870728[i];
          ++*(&v67 + v11);
        }
        if ( v56[i + 1] )
        {
          v12 = dword_87072C[i] < 0 ? 0 : dword_87072C[i];
          ++*(&v67 + v12);
        }
        if ( v56[i + 2] )
        {
          v13 = dword_870730[i] < 0 ? 0 : dword_870730[i];
          ++*(&v67 + v13);
        }
        if ( v56[i + 3] )
        {
          v14 = dword_870734[i] < 0 ? 0 : dword_870734[i];
          ++*(&v67 + v14);
        }
        if ( v56[i + 4] )
        {
          v15 = dword_870738[i] < 0 ? 0 : dword_870738[i];
          ++*(&v67 + v15);
        }
      }
      if ( v67 >= dword_870800 )
        v52 = 0;
      if ( v68 >= dword_870804 )
        v52 = 1;
      if ( v69 >= dword_870808 )
        v52 = 2;
      if ( v70 >= dword_87080C )
        v52 = 3;
      if ( v71 >= dword_870810 )
        v52 = 4;
      Src = -1;
      v58 = -1;
      v59 = -1;
      v60 = -1;
      v61 = -1;
      v16 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      j = 0;
      if ( dword_870818 > 0 )
        break;
LABEL_63:
      *(_BYTE *)(v1 + 6020) = Src;
      *(_DWORD *)(v1 + 6028) = v62;
      *(_BYTE *)(v1 + 6021) = v58;
      *(_DWORD *)(v1 + 6032) = v63;
      *(_BYTE *)(v1 + 6022) = v59;
      *(_DWORD *)(v1 + 6036) = v64;
      *(_BYTE *)(v1 + 6023) = v60;
      *(_DWORD *)(v1 + 6040) = v65;
      *(_BYTE *)(v1 + 6024) = v61;
      *(_DWORD *)(v1 + 6044) = v66;
      *(_DWORD *)(v1 + 5992) = 0;
      *(_DWORD *)(v1 + 5996) = 0;
      *(_DWORD *)(v1 + 6000) = 0;
      *(_DWORD *)(v1 + 6004) = 0;
      *(_DWORD *)(v1 + 6008) = 0;
      *(_DWORD *)(v1 + 6012) = 0;
      *(_DWORD *)(v1 + 6016) = 0;
      memset((void *)(v1 + 4264), 0, 0x350u);
      *(_DWORD *)(v1 + 6092) = 5 * *(_DWORD *)(v1 + 6092) / 6;
      v29 = *(_DWORD *)(v1 + 6116);
      *(_DWORD *)(v1 + 6104) = 5 * *(_DWORD *)(v1 + 6104) / 6;
      *(_DWORD *)(v1 + 6116) = 5 * v29 / 6;
      v30 = *(_DWORD *)(v1 + 6140);
      *(_DWORD *)(v1 + 6128) = 5 * *(_DWORD *)(v1 + 6128) / 6;
      *(_DWORD *)(v1 + 6140) = 5 * v30 / 6;
      v31 = *(_DWORD *)(v1 + 6164);
      *(_DWORD *)(v1 + 6152) = 5 * *(_DWORD *)(v1 + 6152) / 6;
      *(_DWORD *)(v1 + 6164) = 5 * v31 / 6;
      v32 = *(_DWORD *)(v1 + 6188);
      *(_DWORD *)(v1 + 6176) = 5 * *(_DWORD *)(v1 + 6176) / 6;
      *(_DWORD *)(v1 + 6188) = 5 * v32 / 6;
      v33 = k;
      *(_DWORD *)(v1 + 6200) = 5 * *(_DWORD *)(v1 + 6200) / 6;
      v2 = dword_4C5DEC;
      v0 = dword_4D0478;
      v3 = v33 + 1;
      k = v3;
      if ( v3 >= dword_4C5DEC )
        goto LABEL_64;
    }
    v17 = (double *)(v1 + 880);
    v50 = 0;
    v46 = 0;
    v51 = (double *)(v1 + 24);
    v48 = (double *)(v1 + 880);
    while ( 1 )
    {
      v18 = *(_DWORD *)dword_870814 + v16;
      v23 = *((_BYTE *)dword_870824 + v50 + 11) == 0;
      Size = v18;
      if ( !v23 )
        break;
LABEL_62:
      ++v51;
      v50 += 112;
      v9 = j + 1;
      v16 = v46 + 72;
      v17 += 4;
      j = v9;
      v46 += 72;
      v48 = v17;
      if ( v9 >= dword_870818 )
        goto LABEL_63;
    }
    if ( dword_4CDFFC && *(__int16 *)(v18 + 68) > v52 + 1 && !(sub_4640D0() % 100) )
      *v51 = 0.0;
    *(_DWORD *)(v1 + 6208) = v52;
    v44 = (double)sub_412490((int *)v1, v9);
    v19 = (int)(v44 * 3.0);
    if ( v19 <= 0 )
    {
      v21 = 0;
    }
    else
    {
      v20 = *(__int16 *)(Size + 68);
      v21 = 100 * (v19 - (int)(v17[1] + *v17 + v17[2])) / v19;
      if ( v52 < v20 )
        v21 /= v20 - v52 + 1;
    }
    v22 = 0;
    while ( v21 <= 0 || v21 < *(&v62 + v22) )
    {
      if ( ++v22 >= 5 )
        goto LABEL_60;
    }
    if ( v22 == 4 )
    {
      if ( v21 == v66 )
      {
        v24 = sub_4640D0() & 0x80000001;
        v23 = v24 == 0;
        if ( v24 < 0 )
          v23 = (((_BYTE)v24 - 1) | 0xFFFFFFFE) == -1;
        if ( !v23 )
          goto LABEL_60;
      }
    }
    else
    {
      Size = 4 * (4 - v22);
      memcpy_0(&v58 + v22, &Src + v22, Size);
      memcpy_0(&v63 + v22, &v62 + v22, Size);
    }
    v25 = j;
    *(&v62 + v22) = v21;
    *(&Src + v22) = v25;
LABEL_60:
    v26 = v51;
    v17 = v48;
    v27 = *v51 + v44;
    *v51 = v27;
    v28 = (double)dword_4CCB24;
    if ( 1100000.0 / v28 < v27 )
      *v26 = v27 * (v28 / 100.0);
    goto LABEL_62;
  }
LABEL_65:
  v34 = 0;
  k = 0;
  for ( j = 0; v34 < dword_4C43CC; j = ++v34 )
  {
    if ( sub_464E90(v34) )
    {
      v35 = (__int16 *)(dword_4C43DC + v34 * dword_4C43C8);
      v36 = *((_BYTE *)v35 + 3);
      if ( v36 >= 4 && v36 <= 6 )
      {
        v37 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v35);
        sub_40D7C0(v35, (int)&v47, (int)&v45);
        v1 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v47 >> 5) + dword_4C5DEC * (v45 >> 5));
        *(_DWORD *)(v1 + 5992) += (v37[3]
                                 - (*((_DWORD *)v35 + 8) & 0x3FFFFFFu)
                                 + *(_DWORD *)(*(_DWORD *)dword_870814 + 168)
                                 - 1)
                                / *(_DWORD *)(*(_DWORD *)dword_870814 + 168)
                                - ((*((_DWORD *)v35 + 8) >> 26) & 0xF);
        *(_DWORD *)(v1 + 5996) += (v37[1]
                                 - (*((_DWORD *)v35 + 4) & 0x3FFFFFFu)
                                 + *(_DWORD *)(*(_DWORD *)dword_870814 + 600)
                                 - 1)
                                / *(_DWORD *)(*(_DWORD *)dword_870814 + 600)
                                - ((*((_DWORD *)v35 + 4) >> 26) & 0xF);
        *(_DWORD *)(v1 + 6000) += (v37[2]
                                 - (*((_DWORD *)v35 + 6) & 0x3FFFFFFu)
                                 + *(_DWORD *)(*(_DWORD *)dword_870814 + 672)
                                 - 1)
                                / *(_DWORD *)(*(_DWORD *)dword_870814 + 672)
                                - ((*((_DWORD *)v35 + 6) >> 26) & 0xF);
        *(_DWORD *)(v1 + 6004) += (v37[7]
                                 - (*((_DWORD *)v35 + 16) & 0x3FFFFFFu)
                                 + *(_DWORD *)(*(_DWORD *)dword_870814 + 888)
                                 - 1)
                                / *(_DWORD *)(*(_DWORD *)dword_870814 + 888)
                                - ((*((_DWORD *)v35 + 16) >> 26) & 0xF);
        *(_DWORD *)(v1 + 6008) += (v37[5]
                                 - (*((_DWORD *)v35 + 12) & 0x3FFFFFFu)
                                 + *(_DWORD *)(*(_DWORD *)dword_870814 + 1032)
                                 - 1)
                                / *(_DWORD *)(*(_DWORD *)dword_870814 + 1032)
                                - ((*((_DWORD *)v35 + 12) >> 26) & 0xF);
        *(_DWORD *)(v1 + 6012) += (v37[4]
                                 - (*((_DWORD *)v35 + 10) & 0x3FFFFFFu)
                                 + *(_DWORD *)(*(_DWORD *)dword_870814 + 1104)
                                 - 1)
                                / *(_DWORD *)(*(_DWORD *)dword_870814 + 1104)
                                - ((*((_DWORD *)v35 + 10) >> 26) & 0xF);
        v38 = *((_DWORD *)v35 + 14);
        v39 = (v37[6] - (v38 & 0x3FFFFFF) + *(_DWORD *)(*(_DWORD *)dword_870814 + 2112) - 1)
            / *(_DWORD *)(*(_DWORD *)dword_870814 + 2112);
        v34 = j;
        *(_DWORD *)(v1 + 6016) += v39 - ((v38 >> 26) & 0xF);
      }
      if ( ++k >= dword_4C43D4 )
        break;
    }
  }
  v40 = 0;
  for ( k = 0; v40 < dword_4CC8C0; ++v40 )
  {
    if ( sub_464E90(v40) )
    {
      v41 = (char *)(dword_4CC8D0 + v40 * dword_4CC8BC);
      if ( v41[9] != 2 )
      {
        sub_419920(&v47, &v45);
        v42 = sub_4151B0(v41);
        v43 = *v41;
        Size = v42;
        *(double *)(v1 + 8 * v43 + 4264) = (double)v42 + *(double *)(v1 + 8 * v43 + 4264);
      }
      if ( ++k >= dword_4CC8C8 )
        break;
    }
  }
}
