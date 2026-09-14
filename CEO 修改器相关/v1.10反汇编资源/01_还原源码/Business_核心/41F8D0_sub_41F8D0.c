// 函数 0x41f8d0  sub_41F8D0  size=0xFF9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_41F8D0()
{
  int v0; // ecx
  int v1; // edx
  int v2; // ecx
  int *v3; // eax
  double v4; // st7
  int v5; // esi
  double v6; // st3
  unsigned int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // esi
  signed int v11; // ecx
  double v12; // st3
  double v13; // st6
  int v14; // ebx
  double v15; // st5
  int v16; // esi
  unsigned int v17; // edi
  int v18; // ecx
  double v19; // st5
  int v20; // ecx
  bool v21; // zf
  double v22; // st5
  int v23; // esi
  unsigned int v24; // edi
  int v25; // ebx
  int v26; // ecx
  int v27; // ebx
  int v28; // esi
  unsigned int v29; // edi
  int v30; // ecx
  double v31; // st5
  int v32; // ecx
  int v33; // ebx
  int v34; // esi
  unsigned int v35; // edi
  int v36; // ecx
  double v37; // st5
  int v38; // ecx
  int v39; // ebx
  int v40; // esi
  unsigned int v41; // edi
  int v42; // ecx
  double v43; // st5
  int v44; // ecx
  int j; // ebx
  int v46; // esi
  unsigned int v47; // edi
  int v48; // ecx
  double v49; // st5
  int v50; // ecx
  int v51; // ecx
  int v52; // ebx
  char v53; // al
  int v54; // esi
  unsigned int v55; // edi
  int v56; // ecx
  double v57; // st5
  int v58; // ecx
  int v59; // eax
  int v60; // esi
  int v61; // ebx
  int v62; // edi
  char *v63; // eax
  int v64; // eax
  int v65; // ebx
  int v66; // ecx
  int k; // esi
  int v68; // eax
  int v69; // ecx
  int v70; // esi
  int v71; // eax
  int m; // eax
  int v73; // edx
  int n; // ecx
  int v75; // eax
  int v76; // esi
  int ii; // edi
  __int16 *v78; // eax
  __int16 v79; // cx
  unsigned int v80; // edx
  int v81; // esi
  int jj; // edi
  __int16 *v83; // eax
  __int16 v84; // cx
  int v85; // esi
  int kk; // edi
  __int16 *v87; // eax
  __int16 v88; // cx
  int v89; // esi
  int mm; // edi
  __int16 *v91; // eax
  __int16 v92; // cx
  int v93; // eax
  int v94; // edx
  int v95; // eax
  int v96; // eax
  char v97; // cl
  int v98; // esi
  double v99; // st7
  unsigned int v100; // edi
  int v101; // ebx
  int v102; // ecx
  double v103; // st6
  double v104; // st7
  double v105; // st6
  int v106; // [esp+Ch] [ebp-14h]
  char *v107; // [esp+Ch] [ebp-14h]
  int v108; // [esp+10h] [ebp-10h]
  int i; // [esp+10h] [ebp-10h]
  int v110; // [esp+10h] [ebp-10h]
  int v111; // [esp+10h] [ebp-10h]
  int v112; // [esp+10h] [ebp-10h]
  int v113; // [esp+10h] [ebp-10h]
  int v114; // [esp+10h] [ebp-10h]
  char *v115; // [esp+14h] [ebp-Ch]
  _BYTE *v116; // [esp+14h] [ebp-Ch]
  _BYTE *v117; // [esp+14h] [ebp-Ch]
  _BYTE *v118; // [esp+14h] [ebp-Ch]
  char *v119; // [esp+14h] [ebp-Ch]
  int v120; // [esp+18h] [ebp-8h]
  int v121; // [esp+1Ch] [ebp-4h]

  if ( dword_4D0B70 )
  {
    dword_4D0B70 = 0;
LABEL_270:
    sub_45A6B0();
    dword_4D0DB4 = 0;
    sub_47C920(4);
    if ( sub_423630(1) )
      sub_43A2C0();
    return;
  }
  if ( dword_8CAF68 )
    return;
  v120 = 23735 * dword_8703A0;
  if ( (byte_4D10B9[189880 * dword_8703A0] & 1) == 0 )
  {
LABEL_274:
    sub_45A1B0();
    dword_4D0DB4 = 0;
    return;
  }
  v121 = 0;
  if ( dword_4CDF34[0] == -1 )
    goto LABEL_23;
  dword_4CDFC4 = 0;
  if ( dword_4CDF34[0] )
  {
    v0 = dword_4FF600[47470 * dword_8703A0];
    if ( v0 >= 10 || v0 >= dword_4FF600[47470 * dword_4CDF34[0]] )
      goto LABEL_24;
    dword_4CDFC4 = 100;
    goto LABEL_23;
  }
  v1 = dword_4FF600[47470 * dword_8703A0];
  v2 = 0;
  v3 = (int *)&unk_52DBB8;
  do
  {
    if ( v1 < *(v3 - 47470) )
      ++v2;
    if ( v1 < *v3 )
      ++v2;
    if ( v1 < v3[47470] )
      ++v2;
    if ( v1 < v3[94940] )
      ++v2;
    if ( v1 < v3[142410] )
      ++v2;
    v3 += 237350;
  }
  while ( (int)v3 < (int)dword_8CCE18 );
  dword_4CDFC4 = 100 * v2 / 19;
  if ( dword_4CDFC4 == 100 )
LABEL_23:
    v121 = 1;
LABEL_24:
  if ( dword_4CDF38 == -1 )
  {
    ++v121;
  }
  else if ( dword_4D5E98[47470 * dword_8703A0 + 106 * byte_4CE048 + dword_4CDF38] <= 0 )
  {
    dword_4CDFC8 = 0;
  }
  else
  {
    ++v121;
    dword_4CDFC8 = 100;
  }
  if ( -1.0 == dbl_4CDF40 )
  {
    ++v121;
    v4 = 0.0;
  }
  else
  {
    v5 = byte_4CE046;
    v6 = 0.0;
    v7 = byte_4CE046 - 25;
    v8 = 12;
    do
    {
      v9 = v5;
      if ( v5 > 24 )
        v9 = v5 - 8 * (3 * (v7 / 0x18) + 3);
      if ( v9 < 0 )
        v9 += 24 * ((-1 - v9) / 0x18u) + 24;
      --v5;
      --v7;
      --v8;
      v6 = v6 + (double)(__int64)(unsigned __int64)dbl_4D3E30[v9 + v120];
    }
    while ( v8 );
    if ( v6 < dbl_4CDF40 )
    {
      v4 = 0.0;
      dword_4CDFCC = (int)(v6 * 100.0 / dbl_4CDF40);
    }
    else
    {
      ++v121;
      v4 = 0.0;
      dword_4CDFCC = 100;
    }
  }
  if ( -1.0 == dbl_4CDF48 )
  {
    ++v121;
    v10 = 23735 * dword_8703A0;
  }
  else
  {
    v11 = byte_4CE045;
    if ( byte_4CE045 > 13 )
      v11 = -13 - 13 * ((byte_4CE045 - 14) / 0xDu) + byte_4CE045;
    if ( v11 < 0 )
      v11 += 13 * ((-1 - v11) / 0xDu) + 13;
    v10 = 23735 * dword_8703A0;
    v12 = dbl_4D30C0[v11 + v120];
    if ( v12 < dbl_4CDF48 )
    {
      dword_4CDFD0 = (int)(v12 * 100.0 / dbl_4CDF48);
    }
    else
    {
      ++v121;
      dword_4CDFD0 = 100;
    }
  }
  if ( dbl_4CDF50 == -1.0 )
  {
    ++v121;
    v13 = 100.0;
  }
  else
  {
    v13 = 100.0;
    if ( dbl_4CDF50 > dbl_4D10C0[v10] )
    {
      dword_4CDFD4 = (int)(dbl_4D10C0[v10] * 100.0 / dbl_4CDF50);
    }
    else
    {
      ++v121;
      dword_4CDFD4 = 100;
    }
  }
  if ( dword_4CDF58 == -1 )
  {
    ++v121;
  }
  else
  {
    v14 = 0;
    v15 = v4;
    if ( dword_870818 > 0 )
    {
      v115 = (char *)(*(_DWORD *)dword_870814 + 12);
      do
      {
        if ( *v115 == dword_4CDF58 )
        {
          v16 = byte_4CE045;
          v17 = byte_4CE045 - 14;
          v108 = 12;
          do
          {
            v18 = v16;
            if ( v16 > 13 )
              v18 = v16 - 13 * (v17 / 0xD + 1);
            if ( v18 < 0 )
              v18 += 13 * ((-1 - v18) / 0xDu) + 13;
            v19 = v15 + dbl_4E3938[106 * v18 + v14 + v120];
            v20 = v16;
            if ( v16 > 13 )
              v20 = v16 - 13 * (v17 / 0xD + 1);
            if ( v20 < 0 )
              v20 += 13 * ((-1 - v20) / 0xDu) + 13;
            --v16;
            --v17;
            v21 = v108-- == 1;
            v15 = v19 + dbl_4F4238[106 * v20 + v14 + v120];
          }
          while ( !v21 );
        }
        v115 += 72;
        ++v14;
      }
      while ( v14 < dword_870818 );
    }
    if ( dbl_4CDF60 > v15 )
    {
      dword_4CDFD8 = (int)(v15 * v13 / dbl_4CDF60);
    }
    else
    {
      ++v121;
      dword_4CDFD8 = 100;
    }
  }
  if ( dword_4CDF68 == -1 )
  {
    ++v121;
  }
  else
  {
    v22 = v4;
    switch ( dword_4CDF68 )
    {
      case 0:
        for ( i = 0; i < dword_870818; ++i )
        {
          v23 = byte_4CE045;
          v24 = byte_4CE045 - 14;
          v25 = 12;
          do
          {
            v26 = v23;
            if ( v23 > 13 )
              v26 = v23 - 13 * (v24 / 0xD + 1);
            if ( v26 < 0 )
              v26 += 13 * ((-1 - v26) / 0xDu) + 13;
            --v23;
            --v24;
            --v25;
            v22 = v22 + dbl_4F4238[106 * v26 + i + v120];
          }
          while ( v25 );
        }
        break;
      case 1:
        v27 = 0;
        if ( dword_870818 > 0 )
        {
          v116 = (_BYTE *)(*(_DWORD *)dword_870814 + 12);
          do
          {
            if ( *v116 == 1 )
            {
              v28 = byte_4CE045;
              v29 = byte_4CE045 - 14;
              v110 = 12;
              do
              {
                v30 = v28;
                if ( v28 > 13 )
                  v30 = v28 - 13 * (v29 / 0xD + 1);
                if ( v30 < 0 )
                  v30 += 13 * ((-1 - v30) / 0xDu) + 13;
                v31 = v22 + dbl_4E3938[106 * v30 + v27 + v120];
                v32 = v28;
                if ( v28 > 13 )
                  v32 = v28 - 13 * (v29 / 0xD + 1);
                if ( v32 < 0 )
                  v32 += 13 * ((-1 - v32) / 0xDu) + 13;
                --v28;
                --v29;
                v21 = v110-- == 1;
                v22 = v31 + dbl_4F4238[106 * v32 + v27 + v120];
              }
              while ( !v21 );
            }
            v116 += 72;
            ++v27;
          }
          while ( v27 < dword_870818 );
        }
        break;
      case 2:
        v33 = 0;
        if ( dword_870818 > 0 )
        {
          v117 = (_BYTE *)(*(_DWORD *)dword_870814 + 12);
          do
          {
            if ( !*v117 )
            {
              v34 = byte_4CE045;
              v35 = byte_4CE045 - 14;
              v111 = 12;
              do
              {
                v36 = v34;
                if ( v34 > 13 )
                  v36 = v34 - 13 * (v35 / 0xD + 1);
                if ( v36 < 0 )
                  v36 += 13 * ((-1 - v36) / 0xDu) + 13;
                v37 = v22 + dbl_4E3938[106 * v36 + v33 + v120];
                v38 = v34;
                if ( v34 > 13 )
                  v38 = v34 - 13 * (v35 / 0xD + 1);
                if ( v38 < 0 )
                  v38 += 13 * ((-1 - v38) / 0xDu) + 13;
                --v34;
                --v35;
                v21 = v111-- == 1;
                v22 = v37 + dbl_4F4238[106 * v38 + v33 + v120];
              }
              while ( !v21 );
            }
            v117 += 72;
            ++v33;
          }
          while ( v33 < dword_870818 );
        }
        break;
      case 3:
        v39 = 0;
        if ( dword_870818 > 0 )
        {
          v118 = (_BYTE *)(*(_DWORD *)dword_870814 + 12);
          do
          {
            if ( *v118 == 2 )
            {
              v40 = byte_4CE045;
              v41 = byte_4CE045 - 14;
              v112 = 12;
              do
              {
                v42 = v40;
                if ( v40 > 13 )
                  v42 = v40 - 13 * (v41 / 0xD + 1);
                if ( v42 < 0 )
                  v42 += 13 * ((-1 - v42) / 0xDu) + 13;
                v43 = v22 + dbl_4E3938[106 * v42 + v39 + v120];
                v44 = v40;
                if ( v40 > 13 )
                  v44 = v40 - 13 * (v41 / 0xD + 1);
                if ( v44 < 0 )
                  v44 += 13 * ((-1 - v44) / 0xDu) + 13;
                --v40;
                --v41;
                v21 = v112-- == 1;
                v22 = v43 + dbl_4F4238[106 * v44 + v39 + v120];
              }
              while ( !v21 );
            }
            v118 += 72;
            ++v39;
          }
          while ( v39 < dword_870818 );
        }
        break;
      case 4:
        for ( j = 0; j < 7; ++j )
        {
          v46 = byte_4CE045;
          v47 = byte_4CE045 - 14;
          v113 = 12;
          do
          {
            v48 = v46;
            if ( v46 > 13 )
              v48 = v46 - 13 * (v47 / 0xD + 1);
            if ( v48 < 0 )
              v48 += 13 * ((-1 - v48) / 0xDu) + 13;
            v49 = v22 + dbl_4E3938[106 * v48 + j + v120];
            v50 = v46;
            if ( v46 > 13 )
              v50 = v46 - 13 * (v47 / 0xD + 1);
            if ( v50 < 0 )
              v50 += 13 * ((-1 - v50) / 0xDu) + 13;
            --v46;
            --v47;
            v21 = v113-- == 1;
            v22 = v49 + dbl_4F4238[106 * v50 + j + v120];
          }
          while ( !v21 );
        }
        break;
      case 5:
        v51 = 0;
        v52 = 0;
        v106 = 0;
        if ( dword_870818 > 0 )
        {
          v119 = (char *)(*(_DWORD *)dword_870814 + 12);
          do
          {
            v53 = *v119;
            if ( *v119 != 1 && v53 && v53 != 2 )
            {
              if ( v51 < 7 && v52 == dword_4B10E4[v51] )
              {
                v106 = ++v51;
              }
              else
              {
                v54 = byte_4CE048;
                v55 = byte_4CE048 - 14;
                v114 = 12;
                do
                {
                  v56 = v54;
                  if ( v54 > 13 )
                    v56 = v54 - 13 * (v55 / 0xD + 1);
                  if ( v56 < 0 )
                    v56 += 13 * ((-1 - v56) / 0xDu) + 13;
                  v57 = v22 + dbl_4DE318[106 * v56 + v52 + v120];
                  v58 = v54;
                  if ( v54 > 13 )
                    v58 = v54 - 13 * (v55 / 0xD + 1);
                  if ( v58 < 0 )
                    v58 += 13 * ((-1 - v58) / 0xDu) + 13;
                  --v54;
                  --v55;
                  v21 = v114-- == 1;
                  v22 = v57 + dbl_4EEC18[106 * v58 + v52 + v120];
                }
                while ( !v21 );
                v51 = v106;
              }
            }
            v119 += 72;
            ++v52;
          }
          while ( v52 < dword_870818 );
        }
        break;
      default:
        break;
    }
    if ( dbl_4CDF70 > v22 )
    {
      dword_4CDFDC = (int)(v22 * v13 / dbl_4CDF70);
    }
    else
    {
      ++v121;
      dword_4CDFDC = 100;
    }
  }
  if ( dword_4CDF78 == -1 || dbl_4CDF80 == v4 )
    goto LABEL_171;
  v59 = (int)(v13 * (dbl_4CDF80 - dbl_4D1100[23735 * dword_8703A0]) / dbl_4CDF80);
  dword_4CDFE0 = v59;
  if ( v59 > 100 )
  {
    dword_4CDFE0 = 100;
LABEL_171:
    ++v121;
    goto LABEL_172;
  }
  if ( v59 == 100 )
    goto LABEL_171;
LABEL_172:
  if ( dword_4CDF88 == -1 || dword_4CDFE4 == 100 )
    ++v121;
  if ( dword_4CDF8C == -1 )
  {
    ++v121;
    goto LABEL_189;
  }
  v60 = 0;
  v61 = 0;
  v62 = 0;
  for ( dword_4CDFE8 = 0; v60 < dword_4C43CC; ++v60 )
  {
    if ( sub_464E90(v60) )
    {
      v63 = (char *)(dword_4C43DC + v60 * dword_4C43C8);
      if ( v63[2] == dword_8703A0 && v63[7] == 2 && v63[3] == 3 )
        ++v61;
      if ( ++v62 >= dword_4C43D4 )
        break;
    }
  }
  v64 = 100 * v61 / dword_4CDF8C;
  dword_4CDFE8 = v64;
  if ( v64 <= 100 )
  {
    if ( v64 != 100 )
      goto LABEL_189;
  }
  else
  {
    dword_4CDFE8 = 100;
  }
  ++v121;
LABEL_189:
  if ( dword_4CDF90 == -1 )
  {
    ++v121;
  }
  else
  {
    v71 = 100 * sub_41F500() / dword_4CDF90;
    dword_4CDFEC = v71;
    if ( v71 <= 100 )
    {
      if ( v71 == 100 )
        ++v121;
    }
    else
    {
      ++v121;
      dword_4CDFEC = 100;
    }
  }
  v65 = dword_4CCAAC;
  if ( dword_4CDF94 == -1 )
    goto LABEL_197;
  v66 = word_4D1110[94940 * dword_8703A0];
  for ( k = 0; v66 != -1; v66 = *(__int16 *)(v68 + 1618) )
  {
    v68 = v65 + v66 * dword_4CCA98;
    v69 = *(__int16 *)(2 * (dword_4CDF94 < 0 ? 0 : dword_4CDF94) + 240 + v68);
    if ( v69 != -1 )
    {
      v65 = dword_4CCAAC;
      k += *(__int16 *)(v69 * dword_4CC8BC + dword_4CC8D0 + 28);
    }
  }
  dword_4CDFF0 = k / 10;
  if ( k / 10 > 100 )
LABEL_197:
    ++v121;
  v70 = dword_4CDF98;
  if ( dword_4CDF98 == -1 || (dword_4CDFF4 = 100 * sub_41F560(word_4CDF9C, word_4CDF9E) / v70, dword_4CDFF4 > 100) )
    ++v121;
  if ( dword_4CDFC0 == -1 )
  {
    ++v121;
  }
  else
  {
    dword_4CDFF8 = 0;
    switch ( dword_4CDFC0 )
    {
      case 0:
        for ( m = word_4D1110[94940 * dword_8703A0]; m != -1; m = *(__int16 *)(v73 + 1618) )
        {
          v73 = dword_4CCAAC + m * dword_4CCA98;
          for ( n = *(__int16 *)(v73 + 1620); n != -1; n = *(__int16 *)(v75 + dword_4C43DC + 20) )
          {
            v75 = n * dword_4C43C8;
            if ( *(_WORD *)(n * dword_4C43C8 + dword_4C43DC + 4) == 8 && *(_BYTE *)(v75 + dword_4C43DC + 7) == 5 )
              goto LABEL_224;
          }
        }
        goto LABEL_269;
      case 1:
        v76 = 0;
        for ( ii = 0; v76 < dword_4C4368; ++v76 )
        {
          if ( sub_464E90(v76) )
          {
            v78 = (__int16 *)(dword_4C4378 + v76 * dword_4C4364);
            v79 = v78[1];
            if ( v79 != -1
              && *(char *)(dword_4CCA98 * *v78 + dword_4CCAAC + 224) == dword_8703A0
              && *(_BYTE *)(dword_4D0B98 * v79 + dword_4D0BAC) == 8 )
            {
              ++ii;
            }
          }
        }
        v80 = (int)((unsigned __int64)(229064922500LL * ii) >> 32) >> 4;
        goto LABEL_223;
      case 2:
        v81 = 0;
        for ( jj = 0; v81 < dword_4C4368; ++v81 )
        {
          if ( sub_464E90(v81) )
          {
            v83 = (__int16 *)(dword_4C4378 + v81 * dword_4C4364);
            v84 = v83[1];
            if ( v84 != -1
              && *(char *)(dword_4CCA98 * *v83 + dword_4CCAAC + 224) == dword_8703A0
              && *(_BYTE *)(dword_4D0B98 * v84 + dword_4D0BAC) == 10 )
            {
              ++jj;
            }
          }
        }
        v80 = (int)((unsigned __int64)(171798691900LL * jj) >> 32) >> 3;
        goto LABEL_223;
      case 3:
        v85 = 0;
        for ( kk = 0; v85 < dword_4C4368; ++v85 )
        {
          if ( sub_464E90(v85) )
          {
            v87 = (__int16 *)(dword_4C4378 + dword_4C4364 * v85);
            v88 = v87[1];
            if ( v88 != -1
              && *(char *)(dword_4CCA98 * *v87 + dword_4CCAAC + 224) == dword_8703A0
              && *(_BYTE *)(dword_4D0B98 * v88 + dword_4D0BAC) == 3 )
            {
              ++kk;
            }
          }
        }
        v80 = (int)((unsigned __int64)(171798691900LL * kk) >> 32) >> 3;
        goto LABEL_223;
      case 4:
        v89 = 0;
        for ( mm = 0; v89 < dword_4C4368; ++v89 )
        {
          if ( sub_464E90(v89) )
          {
            v91 = (__int16 *)(dword_4C4378 + dword_4C4364 * v89);
            v92 = v91[1];
            if ( v92 != -1
              && *(char *)(dword_4CCA98 * *v91 + dword_4CCAAC + 224) == dword_8703A0
              && *(_BYTE *)(dword_4D0B98 * v92 + dword_4D0BAC) == 64 )
            {
              ++mm;
            }
          }
        }
        v80 = (int)((unsigned __int64)(229064922500LL * mm) >> 32) >> 3;
LABEL_223:
        if ( (int)(v80 + (v80 >> 31)) > 100 )
        {
LABEL_224:
          dword_4CDFF8 = 100;
          goto LABEL_268;
        }
        dword_4CDFF8 = v80 + (v80 >> 31);
        goto LABEL_267;
      case 5:
        v107 = (char *)&unk_4D10B8 + 189880 * dword_8703A0;
        v93 = *((__int16 *)v107 + 44);
        dword_4CDFF8 = 0;
        if ( v93 == -1 )
          goto LABEL_258;
        break;
      default:
        goto LABEL_269;
    }
    while ( 1 )
    {
      v94 = v65 + dword_4CCA98 * v93;
      v95 = *(__int16 *)(v94 + 1620);
      if ( v95 != -1 )
        break;
LABEL_255:
      v93 = *(__int16 *)(v94 + 1618);
      if ( v93 == -1 )
        goto LABEL_258;
    }
    while ( 1 )
    {
      v96 = dword_4C43DC + dword_4C43C8 * v95;
      v97 = *(_BYTE *)(v96 + 7);
      if ( v97 == 1 || v97 == 2 )
        break;
      v95 = *(__int16 *)(v96 + 20);
      if ( v95 == -1 )
        goto LABEL_255;
    }
    dword_4CDFF8 = 50;
LABEL_258:
    v98 = byte_4CE046;
    v99 = 0.0;
    v100 = byte_4CE046 - 25;
    v101 = 12;
    do
    {
      v102 = v98;
      if ( v98 > 24 )
        v102 = v98 - 8 * (3 * (v100 / 0x18) + 3);
      if ( v102 < 0 )
        v102 += 24 * ((-1 - v102) / 0x18u) + 24;
      v99 = v99 + *(double *)&v107[8 * v102 + 9664];
      --v98;
      --v100;
      --v101;
    }
    while ( v101 );
    v103 = v99 * 50.0;
    v104 = 50.0;
    v105 = v103 / 3000000.0;
    if ( v105 <= 50.0 )
      v104 = v105;
    dword_4CDFF8 += (int)v104;
LABEL_267:
    if ( dword_4CDFF8 == 100 )
LABEL_268:
      ++v121;
  }
LABEL_269:
  if ( v121 == 14 )
    goto LABEL_270;
  if ( dword_4CD128 >= dword_4CDF14 - 1950 || (byte_4D10B9[189880 * dword_8703A0] & 1) == 0 )
    goto LABEL_274;
}
