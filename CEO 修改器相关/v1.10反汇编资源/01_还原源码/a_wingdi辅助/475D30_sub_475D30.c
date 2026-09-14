// 函数 0x475d30  sub_475D30  size=0xB9E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_475D30(int a1)
{
  int v1; // esi
  int v2; // esi
  double v3; // st7
  double *v4; // esi
  int v5; // edi
  long double v6; // st7
  long double v7; // st6
  int v8; // esi
  float *v9; // edi
  long double v10; // st7
  int v11; // esi
  float *v12; // edi
  long double v13; // st7
  int v14; // esi
  int v15; // esi
  float *v16; // edi
  long double v17; // st7
  int v18; // esi
  float *v19; // edi
  long double v20; // st7
  float *v21; // esi
  int i; // edi
  int v23; // ebx
  int v24; // esi
  int *v25; // edi
  int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  double v29; // st7
  int v30; // eax
  unsigned int v31; // ecx
  double v32; // st7
  int v33; // ebx
  long double v34; // st7
  int v35; // esi
  long double v36; // st6
  int v37; // edi
  double v38; // st7
  long double v39; // st7
  double v40; // st6
  long double v41; // st5
  long double v42; // st7
  double v43; // rt2
  long double v44; // st6
  __int16 *v45; // ebx
  int v46; // edi
  _DWORD *v47; // ecx
  int v48; // edx
  int v49; // esi
  int v50; // edx
  int v51; // esi
  int v52; // edx
  int v53; // esi
  int v54; // edx
  int v55; // esi
  int v56; // edx
  int v57; // esi
  int v58; // edx
  int v59; // esi
  int v60; // edx
  int v61; // esi
  int v62; // edx
  int *v63; // eax
  __int16 *v64; // ebx
  int v65; // esi
  int v66; // edi
  int v67; // edi
  int v68; // edi
  int v69; // edx
  int v70; // edi
  int v71; // edx
  int v72; // edx
  int v73; // edi
  int *v74; // eax
  int v75; // esi
  __int16 *v76; // edi
  int v77; // edx
  int *v78; // eax
  int j; // edx
  int v80; // esi
  int *v81; // edi
  char *v82; // ebx
  int v83; // eax
  int *v84; // esi
  __int16 *v85; // ebx
  int v86; // edx
  int v87; // edx
  int *v88; // ecx
  int k; // esi
  int v90; // edx
  int *v91; // ecx
  int m; // esi
  int v93; // edx
  int n; // eax
  int v95; // esi
  int *v96; // ecx
  int ii; // edi
  int jj; // edx
  int v99; // edx
  int *v100; // ecx
  int kk; // esi
  int result; // eax
  double v103; // [esp+8h] [ebp-24h]
  float v104; // [esp+Ch] [ebp-20h]
  float v105; // [esp+Ch] [ebp-20h]
  char *v106; // [esp+Ch] [ebp-20h]
  int v107; // [esp+Ch] [ebp-20h]
  int v108; // [esp+Ch] [ebp-20h]
  int v109; // [esp+14h] [ebp-18h]
  int v110; // [esp+14h] [ebp-18h]
  int v111; // [esp+14h] [ebp-18h]
  int v112; // [esp+14h] [ebp-18h]
  int v113; // [esp+14h] [ebp-18h]
  int v114; // [esp+14h] [ebp-18h]
  int *v115; // [esp+14h] [ebp-18h]
  int *v116; // [esp+1Ch] [ebp-10h]
  float *v117; // [esp+20h] [ebp-Ch]
  int *v118; // [esp+20h] [ebp-Ch]
  int v119; // [esp+24h] [ebp-8h]
  __int16 *v120; // [esp+24h] [ebp-8h]
  char *v121; // [esp+24h] [ebp-8h]
  __int16 *v122; // [esp+24h] [ebp-8h]
  int v123; // [esp+28h] [ebp-4h]
  int v124; // [esp+28h] [ebp-4h]
  int v125; // [esp+28h] [ebp-4h]
  int v126; // [esp+28h] [ebp-4h]
  int v127; // [esp+28h] [ebp-4h]
  int v128; // [esp+28h] [ebp-4h]

  v1 = -256;
  do
  {
    flt_8EA768[v1] = pow(2.0, (double)(v1 + 210) * -0.25);
    ++v1;
  }
  while ( v1 < 122 );
  v2 = 0;
  v123 = 0;
  do
  {
    flt_8DFA70[v2++] = pow((double)v123, 1.333333333333333);
    v123 = v2;
  }
  while ( v2 < 8207 );
  v3 = 1.0;
  v4 = (double *)&unk_4B7CB8;
  v5 = 0;
  do
  {
    v6 = sqrt(v3 + *v4 * *v4);
    ++v4;
    flt_8EA344[++v5] = 1.0 / v6;
    v7 = *(v4 - 1) / v6;
    v3 = 1.0;
    flt_8E9098[v5] = v7;
  }
  while ( (int)v4 < (int)dbl_4B7CF8 );
  v8 = 19;
  v9 = &flt_8DF830;
  v109 = 19;
  do
  {
    v104 = sin((double)(v8 - 18) * 0.04363323129985824) * 0.5 / cos((double)v109 * 3.141592653589793 / 72.0);
    v9[36] = v104;
    *v9 = v104;
    v10 = sin((double)(v8 + 18) * 0.04363323129985824) * 0.5 / cos((double)(v8 + 36) * 3.141592653589793 / 72.0);
    v8 += 2;
    ++v9;
    v109 = v8;
    v105 = v10;
    v9[125] = v105;
    v9[17] = v105;
  }
  while ( v8 < 55 );
  v11 = 43;
  v12 = (float *)&unk_8DFA10;
  v110 = 43;
  do
  {
    *(v12 - 66) = 0.5 / cos((double)(v11 + 12) * 3.141592653589793 / 72.0);
    *v12 = 0.5 / cos((double)v110 * 3.141592653589793 / 72.0);
    *(v12 - 60) = sin((double)(v11 - 30) * 0.1308996938995747)
                * 0.5
                / cos((double)(v11 + 24) * 3.141592653589793 / 72.0);
    *(v12 - 12) = 0.0;
    *(v12 - 54) = 0.0;
    v13 = sin((double)(v11 - 42) * 0.1308996938995747) * 0.5 / cos((double)(v11 - 12) * 3.141592653589793 / 72.0);
    v11 += 2;
    ++v12;
    v110 = v11;
    *(v12 - 7) = v13;
  }
  while ( v11 < 55 );
  v14 = 0;
  v124 = 0;
  do
  {
    flt_8E7AAC[v14++] = cos((double)v124 * 0.1745329251994329);
    v124 = v14;
  }
  while ( v14 < 9 );
  v15 = 1;
  v16 = &flt_8EE944;
  v111 = 1;
  do
  {
    v17 = 0.5 / cos((double)v111 * 3.141592653589793 / 36.0);
    v15 += 2;
    ++v16;
    v111 = v15;
    *(v16 - 1) = v17;
  }
  while ( v15 < 19 );
  v18 = 1;
  v19 = &flt_8E90BC;
  v112 = 1;
  do
  {
    v20 = 0.5 / cos((double)v112 * 3.141592653589793 / 12.0);
    v18 += 2;
    ++v19;
    v112 = v18;
    *(v19 - 1) = v20;
  }
  while ( v18 < 7 );
  flt_8EE940 = cos(0.5235987755982988);
  flt_8EB4AC = cos(1.047197551196598);
  v119 = 7;
  v21 = (float *)&unk_8ED620;
  v117 = (float *)&unk_8DF950;
  for ( i = 14; i < 62; i += 4 )
  {
    v125 = v119;
    v23 = 6;
    *v117 = sin((double)(v119 - 6) * 0.1308996938995747) * 0.5 / cos((double)v119 * 3.141592653589793 / 24.0);
    do
    {
      *v21 = cos((double)v125 * 0.1308996938995747);
      v125 += i;
      ++v21;
      --v23;
    }
    while ( v23 );
    ++v117;
    v119 += 2;
  }
  v24 = 0;
  v25 = (int *)dbl_4B7CF8;
  do
  {
    v26 = *v25;
    if ( *v25 > 0 )
    {
      v27 = v24;
      v28 = ((unsigned int)(v26 - 1) >> 1) + 1;
      do
      {
        v29 = *(float *)((char *)&flt_8DF830 + v27);
        v27 += 8;
        --v28;
        *(float *)((char *)&flt_8ED398 + v27) = v29;
      }
      while ( v28 );
    }
    if ( v26 > 1 )
    {
      v30 = v24;
      v31 = ((unsigned int)(v26 - 2) >> 1) + 1;
      do
      {
        v32 = *(float *)((char *)&flt_8DF834 + v30);
        v30 += 8;
        --v31;
        *(float *)((char *)&flt_8ED39C + v30) = -v32;
      }
      while ( v31 );
    }
    ++v25;
    v24 += 144;
  }
  while ( (int)v25 < (int)&byte_4B7D08 );
  v33 = 0;
  v126 = 0;
  do
  {
    v103 = (double)v126;
    v34 = tan(v103 * 3.141592653589793 / 12.0);
    v35 = v33;
    v36 = v34 + 1.0;
    v37 = 0;
    v113 = 0;
    flt_8EADD0[v35] = v34 / (v34 + 1.0);
    flt_8ED5E0[v35] = 1.0 / (v34 + 1.0);
    flt_8EB530[v35] = v34 * 1.414213562373095 / (v34 + 1.0);
    v38 = 1.0;
    flt_8ECB60[v35] = 1.414213562373095 / v36;
    do
    {
      v39 = pow(2.0, (v38 + (double)v113) * -0.25);
      v40 = 1.0;
      v41 = 1.0;
      if ( v33 <= 0 )
      {
        v42 = 1.0;
      }
      else if ( (v33 & 1) != 0 )
      {
        v40 = 1.0;
        v41 = pow(v39, (v103 + 1.0) * 0.5);
        v42 = 1.0;
      }
      else
      {
        v42 = pow(v39, v103 * 0.5);
        v41 = 1.0;
        v40 = 1.0;
      }
      flt_8EB4B0[v35] = v41;
      ++v37;
      v35 += 16;
      flt_8EE928[v35] = v42;
      v113 = v37;
      flt_8EA288[v35] = v41 * 1.414213562373095;
      v43 = v40;
      v44 = 1.414213562373095 * v42;
      v38 = v43;
      flt_8EA910[v35] = v44;
    }
    while ( v37 < 2 );
    v126 = ++v33;
  }
  while ( v33 < 16 );
  v45 = (__int16 *)&unk_4B77DA;
  v46 = 0;
  v116 = (int *)&unk_8EAE10;
  v118 = (int *)&unk_8EB570;
  v106 = (char *)&unk_4B77DA;
  v47 = &unk_8E7B48;
  v114 = 0;
  do
  {
    v48 = *(v45 - 2);
    *(int *)((char *)&dword_8E9030 + v46) = (int)(v47 - 30);
    *(v47 - 30) = v48 >> 1;
    *(v47 - 29) = 0;
    *(v47 - 28) = 3;
    *(v47 - 27) = 0;
    v49 = *(v45 - 1);
    *(v47 - 26) = v49 >> 1;
    *(v47 - 25) = v48;
    *(v47 - 24) = 3;
    *(v47 - 23) = 1;
    v50 = v49 + v48;
    v51 = *v45;
    *(v47 - 22) = v51 >> 1;
    *(v47 - 21) = v50;
    *(v47 - 20) = 3;
    v52 = v51 + v50;
    v53 = v45[1];
    *(v47 - 19) = 2;
    *(v47 - 18) = v53 >> 1;
    *(v47 - 17) = v52;
    *(v47 - 16) = 3;
    v54 = v53 + v52;
    v55 = v45[2];
    *(v47 - 15) = 3;
    *(v47 - 14) = v55 >> 1;
    *(v47 - 13) = v54;
    v56 = v55 + v54;
    v57 = v45[3];
    *(v47 - 12) = 3;
    *(v47 - 11) = 4;
    *(v47 - 10) = v57 >> 1;
    *(v47 - 9) = v56;
    v58 = v57 + v56;
    v59 = v45[4];
    *(v47 - 8) = 3;
    *(v47 - 7) = 5;
    *(v47 - 6) = v59 >> 1;
    *(v47 - 5) = v58;
    v60 = v59 + v58;
    v61 = v45[5];
    *(v47 - 4) = 3;
    *(v47 - 3) = 6;
    *(v47 - 2) = v61 >> 1;
    *(v47 - 1) = v60;
    *v47 = 3;
    v47[1] = 7;
    v62 = v61 + v60;
    v63 = v47 + 2;
    v64 = v45 + 37;
    v120 = v64;
    v65 = 5;
    do
    {
      v66 = *v64 >> 1;
      *v63 = v66;
      v63[1] = v62;
      v63[2] = 0;
      v63[3] = v65 - 2;
      v63[4] = v66;
      v63[5] = v62 + 1;
      v63[6] = 1;
      v63[7] = v65 - 2;
      v63[8] = v66;
      v63[9] = v62 + 2;
      v63[10] = 2;
      v127 = v62 + 6 * v66;
      v63[11] = v65 - 2;
      v67 = v120[1] >> 1;
      v63[12] = v67;
      v63[13] = v127;
      v63[14] = 0;
      v63[15] = v65 - 1;
      v63[16] = v67;
      v63[17] = v127 + 1;
      v63[18] = 1;
      v63[19] = v65 - 1;
      v63[20] = v67;
      v63[21] = v127 + 2;
      v63[22] = 2;
      v63[23] = v65 - 1;
      v68 = v127 + 6 * v67;
      v69 = v120[2] >> 1;
      v63[24] = v69;
      v63[25] = v68;
      v63[26] = 0;
      v63[27] = v65;
      v63[28] = v69;
      v63[29] = v68 + 1;
      v63[30] = 1;
      v63[31] = v65;
      v63[32] = v69;
      v63[33] = v68 + 2;
      v70 = v68 + 6 * v69;
      v71 = v120[3];
      v63[34] = 2;
      v63[35] = v65;
      v71 >>= 1;
      v63[36] = v71;
      v63[37] = v70;
      v63[38] = 0;
      v63[39] = v65 + 1;
      v63[40] = v71;
      v63[41] = v70 + 1;
      v63[42] = 1;
      v63[43] = v65 + 1;
      v63[44] = v71;
      v63[45] = v70 + 2;
      v63[46] = 2;
      v63[47] = v65 + 1;
      v72 = v70 + 6 * v71;
      v73 = v120[4] >> 1;
      v63[48] = v73;
      v63[49] = v72;
      v63[50] = 0;
      v63[51] = v65 + 2;
      v63[52] = v73;
      v63[53] = v72 + 1;
      v63[54] = 1;
      v63[55] = v65 + 2;
      v63[56] = v73;
      v63[57] = v72 + 2;
      v63[58] = 2;
      v63[59] = v65 + 2;
      v65 += 5;
      v62 = v72 + 6 * v73;
      v64 = v120 + 5;
      v63 += 60;
      v120 += 5;
    }
    while ( v65 - 2 < 13 );
    dword_8EB440[v114] = (int)v63;
    v74 = v118;
    v75 = 0;
    dword_8E9034[v114] = (int)v118;
    v76 = (__int16 *)(v106 + 68);
    v128 = 0;
    while ( 1 )
    {
      v77 = *v76 >> 1;
      *v74 = v77;
      v74[1] = v75;
      v74[2] = 0;
      v74[3] = v128;
      v74[4] = v77;
      v74[5] = v75 + 1;
      v74[6] = 1;
      v74[7] = v128;
      v74[8] = v77;
      v74[9] = v75 + 2;
      v74[10] = 2;
      v74[11] = v128;
      v74 += 12;
      v75 += 6 * v77;
      if ( ++v128 >= 13 )
        break;
      ++v76;
    }
    dword_8EB444[v114] = (int)v74;
    v78 = v116;
    v121 = v106 - 4;
    dword_8E9038[v114] = (int)v116;
    for ( j = 0; j < 22; j += 2 )
    {
      *v78 = *(__int16 *)v121 >> 1;
      v80 = *((__int16 *)v121 + 1);
      v121 += 4;
      v78[1] = j;
      v78[2] = v80 >> 1;
      v78[3] = j + 1;
      v78 += 4;
    }
    v118 += 156;
    v116 += 44;
    dword_8EB448[v114] = (int)v78;
    v45 = (__int16 *)(v106 + 144);
    v47 += 152;
    v46 = v114 * 4 + 12;
    v106 += 144;
    v114 += 3;
  }
  while ( (int)v47 < (int)&flt_8E90A8 );
  v122 = (__int16 *)&unk_4B7802;
  v115 = &dword_8F44A0;
  v81 = &dword_8F4160;
  do
  {
    v82 = (char *)(v122 - 45);
    v107 = 23;
    do
    {
      v83 = (*(__int16 *)v82 + 7) / 18 + 1;
      *v81 = v83;
      if ( v83 > a1 )
        *v81 = a1;
      v82 += 2;
      ++v81;
      --v107;
    }
    while ( v107 );
    v84 = v115;
    v85 = v122;
    v108 = 14;
    do
    {
      v86 = (*v85 - 1) / 18 + 1;
      *v84 = v86;
      if ( v86 > a1 )
        *v84 = a1;
      ++v85;
      ++v84;
      --v108;
    }
    while ( v108 );
    v122 += 72;
    v115 = v84;
  }
  while ( (int)v81 < (int)&dword_8F449C );
  v87 = 0;
  v88 = (int *)&unk_8EA9D4;
  do
  {
    for ( k = 0; k < 6; ++k )
    {
      *(v88 - 1) = v87 | (8 * (k | 0x600));
      *v88 = v87 | (8 * (k | 0x600)) | 0x40;
      v88[1] = v87 | (8 * (k | 0x600)) | 0x80;
      v88[2] = v87 | (8 * (k | 0x600)) | 0xC0;
      v88[3] = v87 | (8 * (k | 0x600)) | 0x100;
      v88[4] = v87 | (8 * (k | 0x600)) | 0x140;
      v88 += 6;
    }
    ++v87;
  }
  while ( (int)v88 < (int)dword_8EACA4 );
  v90 = 0;
  v91 = dword_8EACA4;
  do
  {
    for ( m = 0; m < 4; ++m )
    {
      *(v91 - 1) = v90 | (8 * (m | 0x800));
      *v91 = v90 | (8 * (m | 0x800)) | 0x40;
      v91[1] = v90 | (8 * (m | 0x800)) | 0x80;
      v91[2] = v90 | (8 * (m | 0x800)) | 0xC0;
      v91 += 4;
    }
    ++v90;
  }
  while ( (int)v91 < (int)dword_8EADA4 );
  v93 = 0;
  for ( n = 0; n < 12; n += 3 )
  {
    dword_8EADA0[n] = v93 | 0x5000;
    dword_8ED370[n] = v93 | 0xA000;
    dword_8ED374[n] = v93 | 0xA008;
    dword_8EADA4[n] = v93 | 0x5008;
    dword_8EADA8[n] = v93 | 0x5010;
    dword_8ED378[n] = v93++ | 0xA010;
  }
  v95 = 0;
  v96 = (int *)&unk_8ECBA4;
  do
  {
    for ( ii = 0; ii < 5; ++ii )
    {
      for ( jj = 0; jj < 4; ++jj )
      {
        *(v96 - 1) = v95 | (8 * (ii | (8 * jj)));
        *v96 = v95 | (8 * (ii | (8 * jj))) | 0x200;
        v96[1] = v95 | (8 * (ii | (8 * jj))) | 0x400;
        v96[2] = v95 | (8 * (ii | (8 * jj))) | 0x600;
        v96 += 4;
      }
    }
    ++v95;
  }
  while ( (int)v96 < (int)dword_8ED1E4 );
  v99 = 0;
  v100 = dword_8ED1E4;
  do
  {
    for ( kk = 0; kk < 5; ++kk )
    {
      *(v100 - 1) = v99 | (8 * (kk | 0x200));
      *v100 = v99 | (8 * (kk | 0x200)) | 0x40;
      result = v99 | (8 * (kk | 0x200)) | 0xC0;
      v100[1] = v99 | (8 * (kk | 0x200)) | 0x80;
      v100[2] = result;
      v100 += 4;
    }
    ++v99;
  }
  while ( (int)v100 < (int)dword_8ED374 );
  return result;
}
