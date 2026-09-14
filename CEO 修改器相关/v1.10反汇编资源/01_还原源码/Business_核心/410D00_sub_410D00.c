// 函数 0x410d00  sub_410D00  size=0x91F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_410D00()
{
  char *v0; // eax
  char v1; // al
  int v2; // esi
  char *v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // eax
  int v7; // eax
  int i; // edi
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  int v12; // esi
  char *v13; // eax
  char *v14; // edx
  char v15; // cl
  char *v16; // eax
  char *v17; // edx
  char v18; // cl
  char *v19; // eax
  char *v20; // edx
  char v21; // cl
  char *v22; // eax
  char *v23; // edx
  char v24; // cl
  char *v25; // eax
  char *v26; // edx
  char v27; // cl
  char *v28; // eax
  char *v29; // edx
  char v30; // cl
  char *v31; // eax
  char *v32; // edx
  char v33; // cl
  char *v34; // eax
  char *v35; // edx
  char v36; // cl
  char *v37; // eax
  char *v38; // edx
  char v39; // cl
  char *v40; // eax
  char *v41; // edx
  char v42; // cl
  char *v43; // eax
  char v44; // cl
  char *v45; // eax
  char *v46; // edx
  char v47; // cl
  char *v48; // eax
  char *v49; // edx
  char v50; // cl
  char *v51; // eax
  char *v52; // edx
  char v53; // cl
  char *v54; // eax
  char *v55; // edx
  char v56; // cl
  char *v57; // eax
  char *v58; // edx
  char v59; // cl
  char *v60; // eax
  char *v61; // edx
  char v62; // cl
  char *v63; // eax
  char *v64; // edx
  char v65; // cl
  char *v66; // eax
  char *v67; // edx
  char v68; // cl
  char *v69; // eax
  char *v70; // edx
  char v71; // cl
  int v72; // ebx
  char *v73; // eax
  char *v74; // edx
  char v75; // cl
  int v76; // ebx
  __int16 *v77; // edi
  char *v78; // eax
  char *v79; // edx
  char v80; // cl
  int v81; // eax
  int j; // esi
  char *v83; // eax
  char *v84; // edx
  char v85; // cl
  int k; // esi
  char *v87; // eax
  char *v88; // edx
  char v89; // cl
  __int16 *v90; // edi
  int m; // esi
  char *v92; // eax
  char *v93; // edx
  char v94; // cl
  int v96; // [esp+10h] [ebp-428h]
  __int16 *v97; // [esp+14h] [ebp-424h]
  int v98; // [esp+14h] [ebp-424h]
  _BYTE v99[12]; // [esp+18h] [ebp-420h] BYREF
  int v100; // [esp+24h] [ebp-414h]
  char String[1024]; // [esp+28h] [ebp-410h] BYREF
  int v102; // [esp+434h] [ebp-4h]

  sub_464410(v99);
  v102 = 0;
  v0 = (char *)sub_47C740("data\\building.csv");
  if ( sub_464420(v0) )
  {
    v1 = 0;
    v2 = 0;
    dword_4C4438 = 0;
    if ( v100 > 0 )
    {
      do
      {
        v3 = (char *)sub_4646A0(0, v2);
        v4 = (char *)(String - v3);
        do
        {
          v5 = *v3;
          v3[(_DWORD)v4] = *v3;
          ++v3;
        }
        while ( v5 );
        if ( sub_438150(String) )
        {
          v6 = atoi(String) + 1;
          if ( v6 > dword_4C4438 )
            dword_4C4438 = v6;
        }
        ++v2;
      }
      while ( v2 < v100 );
      v1 = dword_4C4438;
    }
    *(_DWORD *)dword_4C4434 = sub_465E40(72 * v1, (int)"building_type.cpp", 35);
    v7 = v100;
    for ( i = 0; i < v100; ++i )
    {
      v9 = (char *)sub_4646A0(0, i);
      v10 = (char *)(String - v9);
      do
      {
        v11 = *v9;
        v9[(_DWORD)v10] = *v9;
        ++v9;
      }
      while ( v11 );
      if ( sub_438150(String) )
      {
        v12 = *(_DWORD *)dword_4C4434 + 72 * atoi(String);
        v13 = (char *)sub_4646A0(1, i);
        v14 = (char *)(String - v13);
        do
        {
          v15 = *v13;
          v13[(_DWORD)v14] = *v13;
          ++v13;
        }
        while ( v15 );
        *(_WORD *)v12 = atoi(String);
        v16 = (char *)sub_4646A0(2, i);
        v17 = (char *)(String - v16);
        do
        {
          v18 = *v16;
          v16[(_DWORD)v17] = *v16;
          ++v16;
        }
        while ( v18 );
        *(_WORD *)(v12 + 2) = atoi(String);
        v19 = (char *)sub_4646A0(4, i);
        v20 = (char *)(String - v19);
        do
        {
          v21 = *v19;
          v19[(_DWORD)v20] = *v19;
          ++v19;
        }
        while ( v21 );
        *(_DWORD *)(v12 + 4) = atoi(String);
        v22 = (char *)sub_4646A0(5, i);
        v23 = (char *)(String - v22);
        do
        {
          v24 = *v22;
          v22[(_DWORD)v23] = *v22;
          ++v22;
        }
        while ( v24 );
        *(_DWORD *)(v12 + 8) = atoi(String);
        v25 = (char *)sub_4646A0(6, i);
        v26 = (char *)(String - v25);
        do
        {
          v27 = *v25;
          v25[(_DWORD)v26] = *v25;
          ++v25;
        }
        while ( v27 );
        *(_DWORD *)(v12 + 12) = atoi(String);
        v28 = (char *)sub_4646A0(7, i);
        v29 = (char *)(String - v28);
        do
        {
          v30 = *v28;
          v28[(_DWORD)v29] = *v28;
          ++v28;
        }
        while ( v30 );
        *(_DWORD *)(v12 + 16) = atoi(String);
        v31 = (char *)sub_4646A0(8, i);
        v32 = (char *)(String - v31);
        do
        {
          v33 = *v31;
          v31[(_DWORD)v32] = *v31;
          ++v31;
        }
        while ( v33 );
        *(_DWORD *)(v12 + 20) = atoi(String);
        v34 = (char *)sub_4646A0(9, i);
        v35 = (char *)(String - v34);
        do
        {
          v36 = *v34;
          v34[(_DWORD)v35] = *v34;
          ++v34;
        }
        while ( v36 );
        *(_DWORD *)(v12 + 24) = atoi(String);
        v37 = (char *)sub_4646A0(10, i);
        v38 = (char *)(String - v37);
        do
        {
          v39 = *v37;
          v37[(_DWORD)v38] = *v37;
          ++v37;
        }
        while ( v39 );
        *(_DWORD *)(v12 + 28) = atoi(String);
        v40 = (char *)sub_4646A0(11, i);
        v41 = (char *)(String - v40);
        do
        {
          v42 = *v40;
          v40[(_DWORD)v41] = *v40;
          ++v40;
        }
        while ( v42 );
        v43 = String;
        do
        {
          v44 = *v43;
          v43[v12 - (_DWORD)String + 40] = *v43;
          ++v43;
        }
        while ( v44 );
        v45 = (char *)sub_4646A0(3, i);
        v46 = (char *)(String - v45);
        do
        {
          v47 = *v45;
          v45[(_DWORD)v46] = *v45;
          ++v45;
        }
        while ( v47 );
        if ( !strcmp(String, byte_4A2928) )
        {
          *(_WORD *)(v12 + 32) = 0;
          v48 = (char *)sub_4646A0(11, i);
          v49 = (char *)(String - v48);
          do
          {
            v50 = *v48;
            v48[(_DWORD)v49] = *v48;
            ++v48;
          }
          while ( v50 );
          *(_WORD *)(v12 + 34) = sub_438030(String);
          v51 = (char *)sub_4646A0(12, i);
          v52 = (char *)(String - v51);
          do
          {
            v53 = *v51;
            v51[(_DWORD)v52] = *v51;
            ++v51;
          }
          while ( v53 );
          *(_DWORD *)(v12 + 36) = atoi(String);
        }
        if ( !strcmp(String, byte_4A2920) )
        {
          *(_WORD *)(v12 + 32) = 1;
          v54 = (char *)sub_4646A0(11, i);
          v55 = (char *)(String - v54);
          do
          {
            v56 = *v54;
            v54[(_DWORD)v55] = *v54;
            ++v54;
          }
          while ( v56 );
          *(_WORD *)(v12 + 34) = sub_438030(String);
          v57 = (char *)sub_4646A0(12, i);
          v58 = (char *)(String - v57);
          do
          {
            v59 = *v57;
            v57[(_DWORD)v58] = *v57;
            ++v57;
          }
          while ( v59 );
          *(_DWORD *)(v12 + 36) = atoi(String);
        }
        else if ( !strcmp(String, byte_4A2918) )
        {
          *(_WORD *)(v12 + 32) = 2;
          *(_WORD *)(v12 + 34) = -1;
          *(_WORD *)(v12 + 56) = sub_4646D0(12, i);
          *(_WORD *)(v12 + 58) = sub_4646D0(13, i);
          *(_WORD *)(v12 + 60) = sub_4646D0(14, i);
          *(_WORD *)(v12 + 62) = sub_4646D0(15, i);
          *(_DWORD *)(v12 + 64) = sub_4646D0(16, i);
          *(_WORD *)(v12 + 68) = sub_4646D0(17, i);
          *(_WORD *)(v12 + 70) = sub_4646D0(18, i);
        }
        else if ( !strcmp(String, byte_4A2910) )
        {
          *(_WORD *)(v12 + 32) = 3;
          v60 = (char *)sub_4646A0(11, i);
          v61 = (char *)(String - v60);
          do
          {
            v62 = *v60;
            v60[(_DWORD)v61] = *v60;
            ++v60;
          }
          while ( v62 );
          *(_WORD *)(v12 + 56) = sub_438090(String);
          v63 = (char *)sub_4646A0(12, i);
          v64 = (char *)(String - v63);
          do
          {
            v65 = *v63;
            v63[(_DWORD)v64] = *v63;
            ++v63;
          }
          while ( v65 );
          *(_DWORD *)(v12 + 60) = atoi(String);
          v66 = (char *)sub_4646A0(13, i);
          v67 = (char *)(String - v66);
          do
          {
            v68 = *v66;
            v66[(_DWORD)v67] = *v66;
            ++v66;
          }
          while ( v68 );
          *(_WORD *)(v12 + 64) = atoi(String);
          v69 = (char *)sub_4646A0(14, i);
          v70 = (char *)(String - v69);
          do
          {
            v71 = *v69;
            v69[(_DWORD)v70] = *v69;
            ++v69;
          }
          while ( v71 );
          *(_WORD *)(v12 + 66) = atoi(String);
        }
      }
      v7 = v100;
    }
    v72 = 0;
    if ( v7 > 0 )
    {
      do
      {
        v73 = (char *)sub_4646A0(0, v72);
        v74 = (char *)(String - v73);
        do
        {
          v75 = *v73;
          v73[(_DWORD)v74] = *v73;
          ++v73;
        }
        while ( v75 );
        if ( !strcmp(String, byte_4A2908) )
          break;
        ++v72;
      }
      while ( v72 < v100 );
    }
    v76 = v72 + 1;
    v77 = word_4C43EC;
    v97 = word_4C43E4;
    do
    {
      v78 = (char *)sub_4646A0(1, v76);
      v79 = (char *)(String - v78);
      do
      {
        v80 = *v78;
        v78[(_DWORD)v79] = *v78;
        ++v78;
      }
      while ( v80 );
      v81 = atoi(String);
      *v97 = sub_40CD00((__int16 *)(*(_DWORD *)dword_4C4434 + 72 * v81));
      for ( j = 0; j < 6; ++j )
      {
        v83 = (char *)sub_4646A0(j + 2, v76);
        v84 = (char *)(String - v83);
        do
        {
          v85 = *v83;
          v83[(_DWORD)v84] = *v83;
          ++v83;
        }
        while ( v85 );
        *v77++ = atoi(String);
      }
      ++v76;
      ++v97;
    }
    while ( (int)v97 < (int)&word_4C43EA );
    for ( k = 0; k < v100; ++k )
    {
      v87 = (char *)sub_4646A0(0, k);
      v88 = (char *)(String - v87);
      do
      {
        v89 = *v87;
        v87[(_DWORD)v88] = *v87;
        ++v87;
      }
      while ( v89 );
      if ( !strcmp(String, byte_4A2900) )
        break;
    }
    v96 = k + 1;
    v98 = 0;
    v90 = word_4C4410;
    do
    {
      for ( m = 0; m < 6; ++m )
      {
        v92 = (char *)sub_4646A0(m + 2, v96 + v98);
        v93 = (char *)(String - v92);
        do
        {
          v94 = *v92;
          v93[(_DWORD)v92] = *v92;
          ++v92;
        }
        while ( v94 );
        *v90++ = atoi(String);
      }
      ++v98;
    }
    while ( (int)v90 < (int)dword_4C4434 );
    sub_464650(v99);
    v102 = -1;
    sub_464B50(v99);
    return 1;
  }
  else
  {
    v102 = -1;
    sub_464B50(v99);
    return 0;
  }
}
