// 函数 0x431060  sub_431060  size=0x1076  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_431060(int a1)
{
  __int16 *v1; // ebx
  __int16 v2; // ax
  int v3; // edi
  char v4; // al
  int v5; // eax
  _WORD *v6; // ecx
  int v7; // edx
  int v8; // eax
  _WORD *v9; // ecx
  int v10; // eax
  __int16 *v11; // esi
  char v12; // al
  int v13; // ecx
  __int16 v14; // ax
  int v15; // ecx
  unsigned __int8 v17; // al
  int v18; // esi
  int v19; // ecx
  __int16 v20; // ax
  int v21; // eax
  __int16 v22; // dx
  __int16 v23; // dx
  __int16 v24; // dx
  unsigned int v25; // ecx
  double v26; // st7
  __int16 *v27; // eax
  double v28; // st7
  double v29; // st4
  __int16 v30; // ax
  int v31; // eax
  bool v32; // zf
  double v33; // st7
  char v34; // al
  int v35; // ecx
  _DWORD *v36; // eax
  double v37; // st7
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  double v41; // st7
  unsigned int v42; // ecx
  double v43; // st7
  __int16 *v44; // eax
  double v45; // st7
  double v46; // st4
  __int16 v47; // ax
  int v48; // eax
  __int16 v49; // ax
  char v50; // al
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // edx
  __int16 v55; // cx
  int v56; // edx
  int v57; // eax
  char *v58; // ecx
  int v59; // ecx
  double v60; // st7
  int *v61; // esi
  double v62; // st6
  double v63; // st5
  int v64; // esi
  int v65; // eax
  int v66; // ecx
  double v67; // st7
  double v68; // st6
  double v69; // st7
  int v70; // eax
  char *v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // eax
  unsigned __int8 *v75; // esi
  int v76; // eax
  int v77; // esi
  int v78; // ecx
  __int16 *v79; // edx
  int v80; // eax
  int v81; // esi
  unsigned __int8 *v82; // eax
  char *v83; // edx
  int v84; // edi
  const char *v85; // eax
  int v86; // [esp+0h] [ebp-15Ch]
  int v87; // [esp+4h] [ebp-158h]
  int v88; // [esp+4h] [ebp-158h]
  int v89; // [esp+4h] [ebp-158h]
  int v90; // [esp+14h] [ebp-148h] BYREF
  int v91; // [esp+18h] [ebp-144h] BYREF
  double v92; // [esp+1Ch] [ebp-140h]
  int v93; // [esp+24h] [ebp-138h] BYREF
  _DWORD *v94; // [esp+28h] [ebp-134h]
  int v95; // [esp+2Ch] [ebp-130h]
  int v96; // [esp+30h] [ebp-12Ch] BYREF
  int v97; // [esp+34h] [ebp-128h]
  int v98; // [esp+38h] [ebp-124h]
  unsigned int v99; // [esp+3Ch] [ebp-120h] BYREF
  _DWORD *v100; // [esp+40h] [ebp-11Ch] BYREF
  char *v101; // [esp+44h] [ebp-118h]
  int v102; // [esp+48h] [ebp-114h]
  int v103; // [esp+4Ch] [ebp-110h]
  int v104; // [esp+50h] [ebp-10Ch] BYREF
  int v105; // [esp+54h] [ebp-108h]
  char Buffer[256]; // [esp+58h] [ebp-104h] BYREF

  v1 = (__int16 *)(dword_8703D0 + dword_8703BC * a1);
  v2 = v1[14];
  if ( v2 == -1 )
    return 0;
  v3 = dword_89E57C + dword_89E568 * v2;
  v4 = *(_BYTE *)(v3 + 19) & 0xF;
  if ( v4 != 2 )
  {
    if ( v4 == 3 )
    {
      if ( sub_430BA0((__int16 *)(dword_8703D0 + dword_8703BC * a1)) == -1 )
      {
        sub_4864E0(v1[12]);
        sub_4864E0(v1[13]);
        v1[12] = -1;
        v1[13] = -1;
      }
      else
      {
        v105 = sub_430BC0(v1);
        if ( v105 != -1 )
        {
          v74 = sub_430E70(v1);
          v101 = (char *)v74;
          if ( v74 == -1 )
          {
            if ( !sub_430F50(v1) )
              sub_40C730(dword_4CCAAC + dword_4CCA98 * *v1, v1[3], 90, 410, 0, 0);
          }
          else
          {
            v32 = *(_BYTE *)(dword_4D10A8 + v74 * dword_4D1094 + 12) == 0;
            v96 = dword_4D10A8 + v74 * dword_4D1094;
            if ( v32 )
            {
              sub_430CA0(v1, (int)&v99, (int)&v100);
              v75 = (unsigned __int8 *)(dword_4D0BAC + v105 * dword_4D0B98);
              if ( dword_4B1130 )
                sub_40C560(*v1, v99, (int)v100, *v75);
              v102 = sub_40C2E0(*v1, v99, (int)v100, *v75);
              if ( v102 == -1 )
              {
                sub_40C730(
                  dword_4CCAAC + dword_4CCA98 * *v1,
                  v1[3],
                  90,
                  *(unsigned __int8 *)(dword_4CC8BC * *(__int16 *)(dword_4CCAAC + dword_4CCA98 * *v1 + 2 * *v75 + 240)
                                     + dword_4CC8D0
                                     + 1256)
                + 1340,
                  0,
                  0);
              }
              else
              {
                sub_483D50(v1[3], 0, -1, &v99, &v100);
                if ( sub_42C450((__int16 *)v96, v99, (unsigned int)v100, 3, 1) )
                {
                  v76 = v96;
                  v77 = dword_4D0BAC + v105 * dword_4D0B98;
                  *(_WORD *)(v96 + 20) = v105;
                  *(_WORD *)(v76 + 22) = *(char *)(v77 + 10);
                  *(_WORD *)(v76 + 24) = *(_WORD *)(v77 + 12);
                  sub_421B20(v77, *(__int16 *)(dword_4C4364 * v102 + dword_4C4378 + 8), (__int16)v101);
                  sub_415CC0(
                    (_DWORD *)(dword_4CC8D0
                             + dword_4CC8BC
                             * *(__int16 *)(dword_4CCAAC
                                          + dword_4CCA98 * *(__int16 *)(v3 + 6)
                                          + 2 * *(unsigned __int8 *)(v3 + 16)
                                          + 240)),
                    *(int *)(v77 + 16) >> 8);
                  *(_DWORD *)(v3 + 24) = dword_4CD11C;
                }
              }
            }
          }
        }
        if ( dword_4CD11C - *(_DWORD *)(v3 + 24) <= 4608 )
          return 0;
        v78 = 0;
        v79 = v1 + 4;
        do
        {
          v80 = *v79;
          if ( v80 != -1 && *(_BYTE *)(dword_4D0B98 * v80 + dword_4D0BAC + 11) != 0xFF )
            break;
          ++v78;
          ++v79;
        }
        while ( v78 < 4 );
        if ( v78 != 4 )
          return 0;
        v81 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v3 + 6);
        v88 = v1[12];
        v102 = dword_4CCAAC + dword_4CCA98 * *v1;
        sub_4864E0(v88);
        sub_4864E0(v1[13]);
        v1[12] = -1;
        v1[13] = -1;
        v96 = 4;
        do
        {
          v105 = sub_430BA0(v1);
          if ( v105 != -1 )
          {
            v82 = (unsigned __int8 *)(dword_4D0BAC + v105 * dword_4D0B98);
            v89 = *((_DWORD *)v82 + 5);
            v102 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v81 + 2 * *v82 + 240);
            sub_415C20(v102, v89);
            sub_420B10(v105);
            --*(_WORD *)(v102 + 34);
          }
          --v96;
        }
        while ( v96 );
        sub_419920((_DWORD *)v81, &v104, &v93);
        v83 = &byte_4D10C8[189880 * *(char *)(v81 + 224)];
        v102 = *(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v3 + 16);
        v84 = *(_DWORD *)dword_4D1088 + 3608;
        v96 = v81 + 204;
        sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 3616), v83, v81 + 204, v102);
        sub_42B930(v104, v93, -1, Buffer, v84);
        if ( *(char *)(v81 + 224) == dword_8703A0 )
        {
          v85 = (const char *)sub_436F10(17, 0);
          if ( v85 )
          {
            sprintf(Buffer, v85, v96, v102);
            sub_437150(Buffer, 0, v104, v93);
          }
        }
      }
      sub_438C20(v1[14]);
      *((_BYTE *)v1 + 30) = 0;
      v1[14] = -1;
    }
    return 0;
  }
  v5 = 0;
  v6 = (_WORD *)(v3 + 8);
  do
  {
    if ( *v6 == 0xFFFF )
      break;
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  v7 = *(unsigned __int8 *)(v3 + 17);
  if ( v5 < v7 )
  {
    v8 = 0;
    v9 = v1 + 4;
    do
    {
      if ( *v9 == 0xFFFF )
        break;
      ++v8;
      ++v9;
    }
    while ( v8 < 4 );
    v103 = v8;
    if ( v8 < v7 )
    {
      v97 = 0;
      if ( v7 - v8 > 0 )
      {
        do
        {
          v10 = sub_430E70(v1);
          v101 = (char *)v10;
          if ( v10 == -1 )
          {
            if ( !sub_430F50(v1) )
            {
              sub_439000(1);
              sub_40C730(dword_4CCAAC + dword_4CCA98 * *v1, v1[3], 90, 410, 0, 0);
            }
          }
          else
          {
            v11 = (__int16 *)(dword_4D10A8 + v10 * dword_4D1094);
            sub_430CA0(v1, (int)&v99, (int)&v100);
            v105 = sub_420D80(*v1, v99, (int)v100, *(unsigned __int8 *)(v3 + 16), 1);
            if ( v105 == -1 )
            {
              sub_40C730(dword_4CCAAC + dword_4CCA98 * *v1, v1[3], 90, 411, 0, 0);
              if ( dword_4CD11C - *(_DWORD *)(v3 + 24) > 384 )
              {
                sub_439000(1);
                *(_DWORD *)(v3 + 24) = dword_4CD11C;
              }
            }
            else
            {
              v98 = dword_4D0BAC + v105 * dword_4D0B98;
              v12 = *(_BYTE *)(v98 + 10);
              if ( v12 )
              {
                if ( v12 == 3 )
                  sub_40C3F0((__int16 *)(dword_4C4378 + dword_4C4364 * *(__int16 *)(v98 + 12)), &v99, &v100);
              }
              else
              {
                sub_426CB0((__int16 *)(dword_4D0C84 + dword_4D0C70 * *(__int16 *)(v98 + 12)), (int)&v99, (int)&v100);
              }
              if ( sub_42C450(v11, v99, (unsigned int)v100, 3, 1) )
              {
                v13 = v98;
                v11[10] = v105;
                v11[11] = *(char *)(v13 + 10);
                v14 = (__int16)v101;
                v11[12] = *(_WORD *)(v13 + 12);
                sub_421B20(v13, v1[3], v14);
                *(_DWORD *)(v3 + 24) = dword_4CD11C;
              }
            }
          }
          v15 = *(unsigned __int8 *)(v3 + 17) - v103;
          ++v97;
        }
        while ( v97 < v15 );
        return 0;
      }
    }
    return 0;
  }
  sub_40C730(dword_4CCAAC + dword_4CCA98 * *v1, v1[3], 60, 399, 0, 0);
  v17 = *(_BYTE *)(v3 + 17);
  if ( v17 )
  {
    v18 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v3 + 4);
    sub_419C10((__int16 *)v18, *(unsigned __int8 *)(v3 + 16), -v17);
    v19 = dword_4D0B98;
    v101 = (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v18 + 2 * *(unsigned __int8 *)(v3 + 16) + 240));
    v20 = *(_WORD *)(v3 + 8);
    v103 = 0;
    if ( v20 == -1 )
    {
      v21 = v103;
    }
    else
    {
      v21 = *(_DWORD *)(dword_4D0B98 * v20 + dword_4D0BAC + 20);
      v103 = v21;
    }
    v22 = *(_WORD *)(v3 + 10);
    if ( v22 != -1 )
    {
      v21 += *(_DWORD *)(dword_4D0B98 * v22 + dword_4D0BAC + 20);
      v19 = dword_4D0B98;
      v103 = v21;
    }
    v23 = *(_WORD *)(v3 + 12);
    if ( v23 != -1 )
    {
      v21 += *(_DWORD *)(v19 * v23 + dword_4D0BAC + 20);
      v19 = dword_4D0B98;
      v103 = v21;
    }
    v24 = *(_WORD *)(v3 + 14);
    if ( v24 != -1 )
      v103 = *(_DWORD *)(v19 * v24 + dword_4D0BAC + 20) + v21;
    v92 = 0.0;
    sub_419920((_DWORD *)v18, &v93, &v96);
    if ( *(_BYTE *)(v3 + 18) )
    {
      v94 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v3 + 6));
      sub_419920(v94, &v90, &v91);
      v105 = 400;
      v25 = abs32(v96 - v91) + abs32(v93 - v90);
      if ( (int)(40 * v25) >= 400 )
        v105 = 40 * v25;
      v26 = (double)*(int *)(v3 + 28);
      v27 = (__int16 *)(v3 + 8);
      v95 = v3 + 8;
      v104 = 4;
      v28 = v26 * 0.25;
      v29 = v92;
      do
      {
        v30 = *v27;
        if ( v30 != -1 )
        {
          v98 = dword_4D0BAC + dword_4D0B98 * v30;
          v31 = (int)(v28 * 256.0);
          v97 = v31;
          *(_DWORD *)(v98 + 16) = v31;
          v29 = v29 + (double)v31 * 0.00390625;
        }
        v27 = (__int16 *)(v95 + 2);
        v32 = v104-- == 1;
        v95 += 2;
      }
      while ( !v32 );
      v33 = v29;
      v34 = *((_BYTE *)v94 + 224);
      v92 = v29;
      if ( v34 != *(_BYTE *)(v18 + 224) )
      {
        sub_42EDA0(
          (char *)&unk_4D10B8 + 189880 * *(char *)(dword_4CCA98 * *(__int16 *)(v3 + 6) + dword_4CCAAC + 224),
          -v29);
        sub_42EDA0((char *)&unk_4D10B8 + 189880 * *(char *)(v18 + 224), v92);
        v33 = v92;
      }
      v35 = *(char *)(v18 + 224);
      *(_DWORD *)(v18 + 816) += (int)v33;
      dbl_4D3670[23735 * v35] = v33 + dbl_4D3670[23735 * v35];
      v98 = (int)v33;
      sub_41A5C0((char *)v18, *(__int16 *)(v3 + 6), (int)v33);
      sub_41A610((char *)v94, *(__int16 *)(v3 + 4), v98);
      v36 = v94;
      v94[229] += v98;
      dbl_4D3738[23735 * *((char *)v36 + 224)] = dbl_4D3738[23735 * *((char *)v36 + 224)] + v92;
      v37 = (double)v105;
      v38 = v105;
      v36[254] += v105;
      dbl_4D3800[23735 * *((char *)v36 + 224)] = v37 + dbl_4D3800[23735 * *((char *)v36 + 224)];
      v39 = dword_4CCA98 * *(__int16 *)(v3 + 6);
      v104 = -v38;
      v40 = *(char *)(v39 + dword_4CCAAC + 224);
      v41 = (double)v104;
    }
    else
    {
      sub_40D7C0((_DWORD *)(dword_4C43DC + dword_4C43C8 * *(__int16 *)(v3 + 6)), (int)&v90, (int)&v91);
      v105 = 400;
      v42 = abs32(v96 - v91) + abs32(v93 - v90);
      if ( (int)(40 * v42) >= 400 )
        v105 = 40 * v42;
      v43 = (double)*(int *)(v3 + 28);
      v44 = (__int16 *)(v3 + 8);
      v104 = v3 + 8;
      v95 = 4;
      v45 = v43 * 0.25;
      v46 = v92;
      do
      {
        v47 = *v44;
        if ( v47 != -1 )
        {
          v98 = dword_4D0BAC + dword_4D0B98 * v47;
          v48 = (int)(v45 * 256.0);
          v97 = v48;
          *(_DWORD *)(v98 + 16) = v48;
          v46 = v46 + (double)v48 * 0.00390625;
        }
        v44 = (__int16 *)(v104 + 2);
        v32 = v95-- == 1;
        v104 += 2;
      }
      while ( !v32 );
      v41 = v46;
      v92 = v46;
      *(_DWORD *)(v18 + 816) += (int)v46;
      v98 = (int)v46;
      dbl_4D3670[23735 * *(char *)(v18 + 224)] = dbl_4D3670[23735 * *(char *)(v18 + 224)] + v46;
      v49 = *(_WORD *)(v3 + 6);
      if ( v49 != -1 )
      {
        v95 = dword_4C43DC + dword_4C43C8 * v49;
        v50 = *(_BYTE *)(v95 + 2);
        if ( v50 != -1 )
        {
          sub_42EDA0((char *)&unk_4D10B8 + 189880 * v50, -v46);
          v51 = 189880 * *(char *)(v95 + 2);
          v104 = -v105;
          sub_42EDA0((char *)&unk_4D10B8 + v51, (double)-v105);
          v41 = v92;
        }
      }
      v40 = *(char *)(v18 + 224);
    }
    sub_42EDA0((char *)&unk_4D10B8 + 189880 * v40, v41);
    v32 = *(_BYTE *)(v3 + 18) == 0;
    v97 = 0;
    if ( v32 )
    {
      sub_40D7C0((_DWORD *)(dword_4C43DC + dword_4C43C8 * *(__int16 *)(v3 + 6)), (int)&v99, (int)&v100);
      v52 = *(char *)(dword_4C43C8 * *(__int16 *)(v3 + 6) + dword_4C43DC + 2);
    }
    else
    {
      sub_419920((_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v3 + 6)), (int *)&v99, (int *)&v100);
      v52 = *(char *)(dword_4CCA98 * *(__int16 *)(v3 + 6) + dword_4CCAAC + 224);
    }
    v53 = *(char *)(dword_4CCA98 * *(__int16 *)(v3 + 4) + dword_4CCAAC + 224);
    v104 = v52;
    if ( v53 == v52 )
      v97 = 1;
    v54 = *(unsigned __int8 *)(v3 + 17);
    v94 = v100;
    v102 = v54;
    v95 = v99;
    memcpy_0((void *)(v18 + 1712), (const void *)(v18 + 1704), 0x48u);
    v55 = (__int16)v94;
    v56 = v102;
    *(_WORD *)(v18 + 1704) = v95;
    v87 = v104;
    v57 = v98;
    *(_WORD *)(v18 + 1706) = v55;
    v86 = v97;
    v58 = v101;
    *(_DWORD *)(v18 + 1708) = v56;
    sub_415260(v58, v103, -v57, 1, v86, v87);
    v60 = v92 / (double)v103;
    v61 = (int *)((char *)dword_870824 + 112 * *(unsigned __int8 *)(v3 + 16));
    v92 = v60;
    v62 = 0.00390625;
    v63 = ((double)v61[17] * 0.00390625 * 3.0 + v60) * 0.25;
    if ( v63 >= 4194304.0 )
    {
      nullsub_2(v59);
      v60 = v92;
      v62 = 0.00390625;
    }
    else
    {
      v61[17] = (int)(v63 * 256.0);
    }
    v64 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v90 >> 5) + dword_4C5DEC * (v91 >> 5));
    v102 = v105 / v103;
    v65 = *v101;
    v66 = *(_DWORD *)(v64 + 4 * v65 + 5112);
    v102 = v66;
    v67 = v60 + (double)(v105 / v103);
    if ( v66 )
      v68 = v62 * (double)v102;
    else
      v68 = v62 * (double)*((int *)dword_870824 + 28 * v65 + 17);
    v69 = (v67 + v68 * 3.0) * 0.25;
    if ( v69 >= 4194304.0 )
      nullsub_2(v66);
    else
      *(_DWORD *)(v64 + 4 * *v101 + 5112) = (int)(v69 * 256.0);
    sub_415160((int)v101, v103, 1);
    v70 = (*(unsigned __int8 *)(v3 + 17) + v105 - 1) / *(unsigned __int8 *)(v3 + 17);
    v103 = 0;
    v104 = v70;
    v101 = (char *)(v3 + 8);
    v102 = (int)v1 - v3;
    do
    {
      if ( *(_WORD *)v101 == 0xFFFF )
        break;
      v71 = v101;
      *(_WORD *)&v101[v102] = -1;
      v72 = dword_4D0BAC + dword_4D0B98 * *(__int16 *)v71;
      sub_421C70((unsigned __int8 *)v72, 5, -1);
      v73 = v103;
      v101 += 2;
      *(_DWORD *)(v72 + 16) += v104 << 8;
      *(_BYTE *)(v72 + 1) |= 0x80u;
      *(_DWORD *)(v72 + 24) = 0;
      v103 = v73 + 1;
    }
    while ( v73 + 1 < 4 );
  }
  sub_4864E0(v1[12]);
  sub_4864E0(v1[13]);
  v1[12] = -1;
  v1[13] = -1;
  *(_BYTE *)(v3 + 19) = *(_BYTE *)(v3 + 19) & 0xF0 | 1;
  *((_BYTE *)v1 + 30) = 0;
  if ( *(_BYTE *)(v3 + 17) )
    sub_4868E0(*(_DWORD *)(v3 + 20), *(__int16 *)(dword_4D0F08 * *(_DWORD *)(v3 + 20) + dword_4D0F1C + 6) | 4);
  else
    sub_438C20(v1[14]);
  v1[14] = -1;
  return 0;
}
