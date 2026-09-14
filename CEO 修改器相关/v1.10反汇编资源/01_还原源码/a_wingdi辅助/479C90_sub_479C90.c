// 函数 0x479c90  sub_479C90  size=0xB1A  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_479C90(float *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // edx
  float *v5; // ebx
  int v7; // ecx
  int *v8; // eax
  float *v9; // edi
  float *v10; // ebx
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int *v16; // eax
  int v17; // ecx
  float *v18; // edi
  int v19; // ecx
  float *v20; // ebx
  int v21; // ecx
  float *v22; // edi
  int v23; // ecx
  float *v24; // ebx
  int v25; // ecx
  float *v26; // edi
  int v27; // ecx
  float *v28; // ebx
  int v29; // ecx
  int v30; // ecx
  bool v31; // zf
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  float *v35; // edi
  float *v36; // ebx
  double v37; // st6
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  float *v41; // edi
  float *v42; // ebx
  double v43; // st6
  int v44; // ecx
  int v45; // edx
  int v46; // ecx
  float *v47; // edi
  float *v48; // ebx
  double v49; // st6
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  double v53; // st6
  int v54; // ecx
  int v55; // edx
  int result; // eax
  int *v57; // edi
  int v58; // eax
  unsigned int v59; // eax
  int *v60; // edx
  _DWORD *v61; // eax
  int v62; // ecx
  int v63; // edx
  int v64; // ecx
  float *v65; // ebx
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  float *v69; // ebx
  int v70; // ecx
  int v71; // edx
  int v72; // ecx
  float *v73; // ebx
  int v74; // ecx
  int v75; // edx
  int v76; // ecx
  float *v77; // ebx
  int v78; // ecx
  int v79; // edx
  int v80; // ecx
  float *v81; // ebx
  int v82; // ecx
  int v83; // edx
  int v84; // ecx
  float *v85; // ebx
  int v86; // ecx
  int v87; // edx
  int v88; // ecx
  float *v89; // ebx
  int v90; // ecx
  int v91; // edx
  int v92; // ecx
  int v93; // [esp+14h] [ebp-11Ch]
  unsigned int v94; // [esp+14h] [ebp-11Ch]
  int v95; // [esp+18h] [ebp-118h]
  int v96; // [esp+18h] [ebp-118h]
  int v97; // [esp+18h] [ebp-118h]
  int v98; // [esp+18h] [ebp-118h]
  int v99; // [esp+18h] [ebp-118h]
  int v100; // [esp+18h] [ebp-118h]
  int v101; // [esp+18h] [ebp-118h]
  int v102; // [esp+18h] [ebp-118h]
  int v103; // [esp+1Ch] [ebp-114h]
  int v104; // [esp+1Ch] [ebp-114h]
  int v105; // [esp+1Ch] [ebp-114h]
  int v106; // [esp+1Ch] [ebp-114h]
  int v107; // [esp+1Ch] [ebp-114h]
  unsigned int *v108; // [esp+20h] [ebp-110h]
  unsigned int v109; // [esp+20h] [ebp-110h]
  float v110; // [esp+20h] [ebp-110h]
  float v111; // [esp+20h] [ebp-110h]
  float v112; // [esp+20h] [ebp-110h]
  float v113; // [esp+20h] [ebp-110h]
  float v114; // [esp+20h] [ebp-110h]
  unsigned int *v115; // [esp+20h] [ebp-110h]
  int *v116; // [esp+20h] [ebp-110h]
  _DWORD *v117; // [esp+24h] [ebp-10Ch]
  int *v118; // [esp+24h] [ebp-10Ch]
  int *v119; // [esp+24h] [ebp-10Ch]
  int *v120; // [esp+24h] [ebp-10Ch]
  int *v121; // [esp+24h] [ebp-10Ch]
  int *v122; // [esp+24h] [ebp-10Ch]
  int *v123; // [esp+24h] [ebp-10Ch]
  int *v124; // [esp+24h] [ebp-10Ch]
  int *v125; // [esp+24h] [ebp-10Ch]
  int *v126; // [esp+24h] [ebp-10Ch]
  int *v127; // [esp+24h] [ebp-10Ch]
  int *v128; // [esp+24h] [ebp-10Ch]
  int v129; // [esp+28h] [ebp-108h]
  int v130; // [esp+28h] [ebp-108h]
  int v131; // [esp+28h] [ebp-108h]
  int v132; // [esp+28h] [ebp-108h]
  int v133; // [esp+28h] [ebp-108h]
  int v134; // [esp+28h] [ebp-108h]
  int v135; // [esp+28h] [ebp-108h]
  int v136; // [esp+28h] [ebp-108h]
  int v137; // [esp+28h] [ebp-108h]
  int v138; // [esp+28h] [ebp-108h]
  int v139; // [esp+28h] [ebp-108h]
  int v140; // [esp+28h] [ebp-108h]
  int v141; // [esp+28h] [ebp-108h]
  int v142; // [esp+28h] [ebp-108h]
  int v143; // [esp+28h] [ebp-108h]
  int v144; // [esp+28h] [ebp-108h]
  int v145; // [esp+28h] [ebp-108h]
  int v146; // [esp+28h] [ebp-108h]
  _BYTE v147[256]; // [esp+2Ch] [ebp-104h] BYREF

  v4 = a2;
  v5 = a1;
  if ( a4[4] )
  {
    v7 = a4[5];
    v8 = a2;
    v9 = a1;
    v93 = v7;
    v10 = a1 + 32;
    v108 = (unsigned int *)v147;
    if ( v7 > 0 )
    {
      v95 = a4[5];
      do
      {
        v11 = *v8;
        v12 = v8 + 1;
        v117 = v12;
        if ( v11 )
        {
          *v108 = sub_474DE0(v11 + 1);
          v12 = v117;
          ++v108;
          v7 = v93;
        }
        v13 = *v12;
        v8 = v12 + 1;
        v118 = v8;
        if ( v13 )
        {
          *v108 = sub_474DE0(v13 + 1);
          v8 = v118;
          ++v108;
          v7 = v93;
        }
        --v95;
      }
      while ( v95 );
    }
    if ( v7 < 32 )
    {
      v96 = 32 - v7;
      do
      {
        v14 = *v8++;
        v119 = v8;
        if ( v14 )
        {
          *v108 = sub_474DE0(v14 + 1);
          v8 = v119;
          ++v108;
          v7 = v93;
        }
        --v96;
      }
      while ( v96 );
    }
    v15 = 0;
    v120 = a2;
    v16 = (int *)v147;
    if ( v7 >= 4 )
    {
      v109 = ((unsigned int)(v7 - 4) >> 2) + 1;
      v97 = 4 * v109;
      do
      {
        v17 = *v120;
        v121 = v120 + 1;
        if ( v17 )
        {
          v18 = v9 + 1;
          ++a3;
          v129 = *v16++ - (1 << v17) + 1;
          *(v18 - 1) = (double)v129 * flt_8F47A0[64 * v17 + *(a3 - 1)];
        }
        else
        {
          *v9 = 0.0;
          v18 = v9 + 1;
        }
        v19 = *v121;
        v122 = v121 + 1;
        if ( v19 )
        {
          v20 = v10 + 1;
          ++a3;
          v130 = *v16++ - (1 << v19) + 1;
          *(v20 - 1) = (double)v130 * flt_8F47A0[64 * v19 + *(a3 - 1)];
        }
        else
        {
          *v10 = 0.0;
          v20 = v10 + 1;
        }
        v21 = *v122;
        v123 = v122 + 1;
        if ( v21 )
        {
          v22 = v18 + 1;
          ++a3;
          v131 = *v16++ - (1 << v21) + 1;
          *(v22 - 1) = (double)v131 * flt_8F47A0[64 * v21 + *(a3 - 1)];
        }
        else
        {
          *v18 = 0.0;
          v22 = v18 + 1;
        }
        v23 = *v123;
        v124 = v123 + 1;
        if ( v23 )
        {
          v24 = v20 + 1;
          ++a3;
          v132 = *v16++ - (1 << v23) + 1;
          *(v24 - 1) = (double)v132 * flt_8F47A0[64 * v23 + *(a3 - 1)];
        }
        else
        {
          *v20 = 0.0;
          v24 = v20 + 1;
        }
        v25 = *v124;
        v125 = v124 + 1;
        if ( v25 )
        {
          v26 = v22 + 1;
          ++a3;
          v133 = *v16++ - (1 << v25) + 1;
          *(v26 - 1) = (double)v133 * flt_8F47A0[64 * v25 + *(a3 - 1)];
        }
        else
        {
          *v22 = 0.0;
          v26 = v22 + 1;
        }
        v27 = *v125;
        v126 = v125 + 1;
        if ( v27 )
        {
          v28 = v24 + 1;
          ++a3;
          v134 = *v16++ - (1 << v27) + 1;
          *(v28 - 1) = (double)v134 * flt_8F47A0[64 * v27 + *(a3 - 1)];
        }
        else
        {
          *v24 = 0.0;
          v28 = v24 + 1;
        }
        v29 = *v126;
        v127 = v126 + 1;
        if ( v29 )
        {
          v9 = v26 + 1;
          ++a3;
          v135 = *v16++ - (1 << v29) + 1;
          *(v9 - 1) = (double)v135 * flt_8F47A0[64 * v29 + *(a3 - 1)];
        }
        else
        {
          *v26 = 0.0;
          v9 = v26 + 1;
        }
        v30 = *v127;
        v120 = v127 + 1;
        if ( v30 )
        {
          v10 = v28 + 1;
          ++a3;
          v136 = *v16++ - (1 << v30) + 1;
          *(v10 - 1) = (double)v136 * flt_8F47A0[64 * v30 + *(a3 - 1)];
        }
        else
        {
          *v28 = 0.0;
          v10 = v28 + 1;
        }
        v31 = v109-- == 1;
        v7 = v93;
      }
      while ( !v31 );
      v15 = v97;
    }
    if ( v15 < v7 )
    {
      v98 = v7 - v15;
      do
      {
        v32 = *v120;
        v128 = v120 + 1;
        if ( v32 )
        {
          ++v9;
          ++a3;
          v137 = *v16++ - (1 << v32) + 1;
          *(v9 - 1) = (double)v137 * flt_8F47A0[64 * v32 + *(a3 - 1)];
        }
        else
        {
          *v9++ = 0.0;
        }
        v33 = *v128;
        v120 = v128 + 1;
        if ( v33 )
        {
          ++v10;
          ++a3;
          v138 = *v16++ - (1 << v33) + 1;
          *(v10 - 1) = (double)v138 * flt_8F47A0[64 * v33 + *(a3 - 1)];
        }
        else
        {
          *v10++ = 0.0;
        }
        --v98;
      }
      while ( v98 );
      v7 = v93;
    }
    v99 = v7;
    if ( v7 < 32 )
    {
      if ( 32 - v7 >= 4 )
      {
        v94 = ((unsigned int)(28 - v7) >> 2) + 1;
        v99 = v7 + 4 * v94;
        do
        {
          v103 = *v120;
          if ( *v120 )
          {
            v34 = *v16++;
            v35 = v9 + 1;
            v110 = (float)(v34 - (1 << *v120) + 1);
            v36 = v10 + 1;
            *(v35 - 1) = flt_8F47A0[64 * v103 + *a3] * v110;
            v37 = v110 * flt_8F47A0[64 * v103 + a3[1]];
            a3 += 2;
            *(v36 - 1) = v37;
          }
          else
          {
            *v10 = 0.0;
            v35 = v9 + 1;
            *(v35 - 1) = 0.0;
            v36 = v10 + 1;
          }
          v38 = v120[1];
          v104 = v38;
          if ( v38 )
          {
            v39 = 1 << v38;
            v40 = *v16++;
            v41 = v35 + 1;
            v111 = (float)(v40 - v39 + 1);
            v42 = v36 + 1;
            *(v41 - 1) = flt_8F47A0[64 * v104 + *a3] * v111;
            v43 = v111 * flt_8F47A0[64 * v104 + a3[1]];
            a3 += 2;
            *(v42 - 1) = v43;
          }
          else
          {
            *v36 = 0.0;
            v41 = v35 + 1;
            *(v41 - 1) = 0.0;
            v42 = v36 + 1;
          }
          v44 = v120[2];
          v105 = v44;
          if ( v44 )
          {
            v45 = 1 << v44;
            v46 = *v16++;
            v47 = v41 + 1;
            v112 = (float)(v46 - v45 + 1);
            v48 = v42 + 1;
            *(v47 - 1) = flt_8F47A0[64 * v105 + *a3] * v112;
            v49 = v112 * flt_8F47A0[64 * v105 + a3[1]];
            a3 += 2;
            *(v48 - 1) = v49;
          }
          else
          {
            *v42 = 0.0;
            v47 = v41 + 1;
            *(v47 - 1) = 0.0;
            v48 = v42 + 1;
          }
          v50 = v120[3];
          v106 = v50;
          if ( v50 )
          {
            v51 = 1 << v50;
            v52 = *v16++;
            v9 = v47 + 1;
            v113 = (float)(v52 - v51 + 1);
            v10 = v48 + 1;
            *(v9 - 1) = flt_8F47A0[64 * v106 + *a3] * v113;
            v53 = v113 * flt_8F47A0[64 * v106 + a3[1]];
            a3 += 2;
            *(v10 - 1) = v53;
          }
          else
          {
            *v48 = 0.0;
            v9 = v47 + 1;
            *(v9 - 1) = 0.0;
            v10 = v48 + 1;
          }
          v120 += 4;
          --v94;
        }
        while ( v94 );
      }
      if ( v99 < 32 )
      {
        v100 = 32 - v99;
        do
        {
          v107 = *v120;
          if ( *v120 )
          {
            v54 = *v16++;
            ++v9;
            v114 = (float)(v54 - (1 << *v120) + 1);
            ++v10;
            *(v9 - 1) = flt_8F47A0[64 * v107 + *a3] * v114;
            v55 = (v107 << 6) + a3[1];
            a3 += 2;
            *(v10 - 1) = v114 * flt_8F47A0[v55];
          }
          else
          {
            *v10 = 0.0;
            *v9++ = 0.0;
            ++v10;
          }
          ++v120;
          --v100;
        }
        while ( v100 );
      }
    }
    for ( result = a4[1]; result < 32; a1[result - 1] = 0.0 )
      a1[result++ + 32] = 0.0;
  }
  else
  {
    v57 = a2;
    v115 = (unsigned int *)v147;
    v101 = 32;
    do
    {
      v58 = *v57++;
      if ( v58 )
      {
        v59 = sub_474DE0(v58 + 1);
        v4 = a2;
        *v115++ = v59;
      }
      --v101;
    }
    while ( v101 );
    v60 = v4 + 2;
    v61 = v147;
    v116 = v60;
    v102 = 4;
    do
    {
      v62 = *(v60 - 2);
      if ( v62 )
      {
        v63 = 1 << v62;
        v64 = *a3 + (v62 << 6);
        v65 = v5 + 1;
        v139 = *v61 - v63 + 1;
        ++a3;
        ++v61;
        *(v65 - 1) = (double)v139 * flt_8F47A0[v64];
      }
      else
      {
        *v5 = 0.0;
        v65 = v5 + 1;
      }
      v66 = *(v116 - 1);
      if ( v66 )
      {
        v67 = 1 << v66;
        v68 = *a3 + (v66 << 6);
        v69 = v65 + 1;
        v140 = *v61 - v67 + 1;
        ++a3;
        ++v61;
        *(v69 - 1) = (double)v140 * flt_8F47A0[v68];
      }
      else
      {
        *v65 = 0.0;
        v69 = v65 + 1;
      }
      v70 = *v116;
      if ( *v116 )
      {
        v71 = 1 << v70;
        v72 = *a3 + (v70 << 6);
        v73 = v69 + 1;
        v141 = *v61 - v71 + 1;
        ++a3;
        ++v61;
        *(v73 - 1) = (double)v141 * flt_8F47A0[v72];
      }
      else
      {
        *v69 = 0.0;
        v73 = v69 + 1;
      }
      v74 = v116[1];
      if ( v74 )
      {
        v75 = 1 << v74;
        v76 = *a3 + (v74 << 6);
        v77 = v73 + 1;
        v142 = *v61 - v75 + 1;
        ++a3;
        ++v61;
        *(v77 - 1) = (double)v142 * flt_8F47A0[v76];
      }
      else
      {
        *v73 = 0.0;
        v77 = v73 + 1;
      }
      v78 = v116[2];
      if ( v78 )
      {
        v79 = 1 << v78;
        v80 = *a3 + (v78 << 6);
        v81 = v77 + 1;
        v143 = *v61 - v79 + 1;
        ++a3;
        ++v61;
        *(v81 - 1) = (double)v143 * flt_8F47A0[v80];
      }
      else
      {
        *v77 = 0.0;
        v81 = v77 + 1;
      }
      v82 = v116[3];
      if ( v82 )
      {
        v83 = 1 << v82;
        v84 = *a3 + (v82 << 6);
        v85 = v81 + 1;
        v144 = *v61 - v83 + 1;
        ++a3;
        ++v61;
        *(v85 - 1) = (double)v144 * flt_8F47A0[v84];
      }
      else
      {
        *v81 = 0.0;
        v85 = v81 + 1;
      }
      v86 = v116[4];
      if ( v86 )
      {
        v87 = 1 << v86;
        v88 = *a3 + (v86 << 6);
        v89 = v85 + 1;
        v145 = *v61 - v87 + 1;
        ++a3;
        ++v61;
        *(v89 - 1) = (double)v145 * flt_8F47A0[v88];
      }
      else
      {
        *v85 = 0.0;
        v89 = v85 + 1;
      }
      v90 = v116[5];
      if ( v90 )
      {
        v91 = 1 << v90;
        v92 = *a3 + (v90 << 6);
        v5 = v89 + 1;
        v146 = *v61 - v91 + 1;
        ++a3;
        ++v61;
        *(v5 - 1) = (double)v146 * flt_8F47A0[v92];
      }
      else
      {
        *v89 = 0.0;
        v5 = v89 + 1;
      }
      v60 = v116 + 8;
      v31 = v102-- == 1;
      v116 += 8;
    }
    while ( !v31 );
    result = a4[1];
    if ( result < 32 )
    {
      memset(&a1[result], 0, 4 * (32 - result));
      return 0;
    }
  }
  return result;
}
