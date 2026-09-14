// 函数 0x427aa0  sub_427AA0  size=0x178D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_427AA0(int *a1)
{
  int *v1; // edi
  __int16 *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  __int16 v6; // cx
  int v8; // eax
  char v9; // cl
  __int16 v10; // ax
  __int16 *v11; // edi
  int v12; // edi
  int v13; // edx
  __int16 *v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int16 v20; // ax
  int v21; // ebx
  int v22; // edi
  bool v23; // zf
  int v24; // edx
  int v25; // eax
  __int16 *v26; // ecx
  _DWORD *v27; // edx
  __int16 v28; // bx
  int v29; // ecx
  _WORD *v30; // edi
  int v31; // edi
  int v32; // ecx
  _WORD *v33; // edx
  int v34; // ecx
  int *v35; // eax
  int v36; // eax
  unsigned __int8 *v37; // ebx
  unsigned __int8 v38; // al
  int v39; // eax
  _WORD *v40; // edi
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  __int16 v44; // dx
  __int16 v45; // ax
  int v46; // ebx
  int v47; // edi
  const char *v48; // eax
  _DWORD *v49; // ecx
  BOOL v50; // eax
  int v51; // ebx
  int v52; // edi
  int v53; // ecx
  int v54; // edx
  unsigned __int8 v55; // cl
  int v56; // eax
  int v57; // edi
  int v58; // ebx
  int v59; // edi
  int v60; // ecx
  int v61; // edx
  int v62; // edx
  unsigned __int8 v63; // cl
  int v64; // eax
  __int16 v65; // bx
  int v66; // edi
  int v67; // ebx
  _DWORD *v68; // eax
  int v69; // eax
  unsigned __int8 *v70; // ebx
  unsigned __int8 v71; // al
  _DWORD *v72; // edi
  int v73; // eax
  int v74; // ebx
  int v75; // eax
  double *v76; // ecx
  int v77; // eax
  _WORD *v78; // edi
  int v79; // eax
  int v80; // eax
  __int16 v81; // dx
  unsigned __int8 *v82; // edi
  int v83; // eax
  int v84; // eax
  __int16 v85; // di
  _WORD *v86; // ebx
  __int16 v87; // dx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  __int16 v91; // ax
  __int16 v92; // ax
  int v93; // eax
  int v94; // [esp-14h] [ebp-184h]
  int v95; // [esp-8h] [ebp-178h]
  int v96; // [esp+Ch] [ebp-164h]
  __int16 v97; // [esp+Ch] [ebp-164h]
  int v98; // [esp+10h] [ebp-160h]
  int v99; // [esp+10h] [ebp-160h]
  int v100; // [esp+14h] [ebp-15Ch]
  int v101; // [esp+18h] [ebp-158h]
  int v102; // [esp+1Ch] [ebp-154h]
  _DWORD *v103; // [esp+1Ch] [ebp-154h]
  int v104; // [esp+20h] [ebp-150h] BYREF
  int v105; // [esp+24h] [ebp-14Ch]
  _DWORD *v106; // [esp+28h] [ebp-148h]
  int v107; // [esp+2Ch] [ebp-144h]
  int v108; // [esp+30h] [ebp-140h]
  int v109; // [esp+34h] [ebp-13Ch]
  int v110; // [esp+38h] [ebp-138h]
  int v111; // [esp+3Ch] [ebp-134h] BYREF
  int v112; // [esp+40h] [ebp-130h] BYREF
  int v113; // [esp+44h] [ebp-12Ch]
  int v114; // [esp+48h] [ebp-128h] BYREF
  int *v115; // [esp+4Ch] [ebp-124h]
  __int16 *v116; // [esp+50h] [ebp-120h]
  int v117; // [esp+54h] [ebp-11Ch] BYREF
  int v118; // [esp+58h] [ebp-118h] BYREF
  _DWORD v119[4]; // [esp+5Ch] [ebp-114h]
  char Buffer[256]; // [esp+6Ch] [ebp-104h] BYREF

  v1 = a1;
  v2 = (__int16 *)(dword_4D0C84 + dword_4D0C70 * (_DWORD)a1);
  v115 = a1;
  v3 = dword_4CCAAC + dword_4CCA98 * v2[1];
  v110 = v3;
  if ( dword_4CD13C && *(char *)(v3 + 224) < 7 )
    return 0;
  v4 = *(char *)(v3 + 224);
  v108 = v3;
  if ( v4 == dword_8703A0 && (v2[9] & 8) != 0 && dword_4CD11C - *((_DWORD *)v2 + 52) > 4608 )
  {
    *((_DWORD *)v2 + 52) = dword_4CD11C;
    v5 = *(_DWORD *)dword_4D1088 + 3080;
    sub_419920((_DWORD *)v3, &v114, &v112);
    sprintf(Buffer, (const char *const)(v5 + 8), v3 + 204);
    sub_42B930(v114, v112, *(char *)(v3 + 224), Buffer, v5);
    v1 = v115;
  }
  v6 = v2[9];
  if ( (v6 & 1) == 0 )
  {
    if ( *((_DWORD *)v2 + 49) <= dword_4CCB58[0] )
    {
      sub_40C730(v3, v2[8], 60, 400, 0, 0);
      if ( !dword_4B1130 )
        return 0;
      if ( dword_8CAF68 )
        return 0;
      v8 = *(char *)(v3 + 224);
      if ( v8 == dword_8703A0 || (byte_4D10B9[189880 * v8] & 1) == 0 )
        return 0;
      v9 = *((_BYTE *)v2 + 128);
      if ( v9 == -1 )
      {
        if ( *(_BYTE *)(388 * *v2 + *(_DWORD *)dword_4D0C8C + 78) == 2 )
        {
          sub_4265C0(v2);
          sub_4266F0((int)v1);
          if ( !*(_WORD *)(v3 + 740) )
          {
            sub_41A9F0(v2[1]);
            return 0;
          }
        }
        return 0;
      }
      v10 = v2[65];
      if ( v10 != -1 )
      {
        v11 = (__int16 *)(dword_4CC8D0
                        + dword_4CC8BC
                        * *(__int16 *)(v3 + 2 * *(unsigned __int8 *)(dword_4D0B98 * v10 + dword_4D0BAC) + 240));
        if ( *(_WORD *)(v3 + 766) == *(_WORD *)(v3 + 742) && !v11[14] )
        {
          if ( v11[13] <= 0 )
            sub_4271F0(v2[1], -1);
          else
            sub_4271F0(v2[1], *(char *)v11);
        }
        if ( *(_WORD *)(v3 + 766) < *(_WORD *)(v3 + 742) && v11[13] + v11[17] < sub_415180((int)v11) )
          goto LABEL_26;
        return 0;
      }
      v12 = *(_DWORD *)dword_87081C
          + 116
          * *(__int16 *)(*(_DWORD *)dword_4D0C94
                       + 2 * (v9 + 34 * *(char *)(388 * *v2 + *(_DWORD *)dword_4D0C8C + 78))
                       + 24);
      v13 = 0;
      v110 = 0;
      v14 = (__int16 *)(v12 + 20);
      while ( 1 )
      {
        v15 = *v14;
        if ( v15 == -1 )
        {
          ++v110;
        }
        else
        {
          v16 = *(__int16 *)(v3 + 2 * v15 + 240);
          if ( v16 != -1 )
          {
            v17 = dword_4CC8D0 + v16 * dword_4CC8BC;
            if ( *(_WORD *)(v17 + 1258) )
            {
              v18 = dword_4CD11C;
              *(_BYTE *)(v17 + 8) &= ~1u;
              *(_DWORD *)(v17 + 36) = v18;
              *(_BYTE *)(v17 + 10) = 2;
            }
            if ( *(__int16 *)(v17 + 24) > 0 )
            {
              sub_427A10((int)v2);
LABEL_34:
              if ( v110 == 4 )
              {
LABEL_26:
                sub_427A10((int)v2);
                return 0;
              }
              return 0;
            }
          }
        }
        ++v13;
        ++v14;
        if ( v13 >= 4 )
          goto LABEL_34;
      }
    }
LABEL_9:
    sub_40C730(v3, v2[8], 60, 404, 0, 0);
    sub_444710(v1);
    return 0;
  }
  v2[101] += *((char *)v2 + 23);
  v19 = 388 * *v2;
  v2[100] += *((char *)v2 + 22);
  v105 = *(_DWORD *)dword_4D0C8C + v19;
  v20 = v2[65];
  if ( v20 == -1 )
  {
    if ( *((_DWORD *)v2 + 49) > dword_4CCB58[0] )
      goto LABEL_9;
    v21 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(v105 + 78);
    v98 = *(__int16 *)(v21 + 2 * *((char *)v2 + 128) + 24);
    v22 = *(_DWORD *)dword_87081C + 116 * v98;
    v102 = 0;
    v100 = v22;
    v101 = *(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v22 + 1);
    sub_426CB0(v2, (int)&v118, (int)&v117);
    v23 = (v2[9] & 4) == 0;
    v111 = 0;
    if ( v23 )
    {
      if ( *((_BYTE *)v2 + 128) == *((_BYTE *)v2 + 129) )
        goto LABEL_62;
      sub_4272D0(v2);
      *((_DWORD *)v2 + 47) = 0;
      *((_DWORD *)v2 + 48) = 0;
      *((_DWORD *)v2 + 55) = 0;
      *((_DWORD *)v2 + 56) = 0;
      *((_DWORD *)v2 + 57) = 0;
      v24 = *((char *)v2 + 129);
      v2[108] = 0;
      v25 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(v21 + 2 * v24 + 24);
      v113 = 0;
      v114 = *(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v25 + 1);
      v26 = (__int16 *)(v22 + 20);
      v27 = v2 + 66;
      v112 = v22 + 20;
      v107 = v22 + 20;
      v116 = v2 + 66;
      do
      {
        v28 = *v26;
        if ( *v26 != -1 && *(_DWORD *)v116 )
        {
          v29 = 0;
          v30 = (_WORD *)(v25 + 20);
          do
          {
            if ( *v30 == v28 )
              break;
            ++v29;
            ++v30;
          }
          while ( v29 < 4 );
          if ( v29 == 4 )
          {
            v111 = 1;
            sub_420940((int)v115, v113);
            goto LABEL_62;
          }
        }
        v116 += 2;
        v26 = (__int16 *)(v107 + 2);
        ++v113;
        v107 += 2;
      }
      while ( v113 < 4 );
      v119[0] = *v27;
      v119[1] = *((_DWORD *)v2 + 34);
      v119[2] = *((_DWORD *)v2 + 35);
      v119[3] = *((_DWORD *)v2 + 36);
      *v27 = 0;
      *((_DWORD *)v2 + 34) = 0;
      *((_DWORD *)v2 + 35) = 0;
      *((_DWORD *)v2 + 36) = 0;
      v31 = 0;
      v116 = (__int16 *)v112;
      do
      {
        if ( *v116 != -1 )
        {
          v32 = 0;
          v33 = (_WORD *)(v25 + 20);
          while ( *v116 != *v33 )
          {
            ++v32;
            ++v33;
            if ( v32 >= 4 )
              goto LABEL_59;
          }
          *(_DWORD *)&v2[2 * v32 + 66] = v119[v31];
        }
LABEL_59:
        ++v116;
        ++v31;
      }
      while ( v31 < 4 );
      v34 = v114;
      v100 = v25;
      v35 = v115;
      *((_BYTE *)v2 + 128) = *((_BYTE *)v2 + 129);
      v101 = v34;
      if ( v35 == (int *)dword_4B1198 )
        sub_43B560();
LABEL_62:
      sub_4270C0(v2);
      if ( v111 )
        return 0;
      v22 = v100;
    }
    v23 = *(_BYTE *)(v105 + 78) == 2;
    v112 = 0;
    v114 = 1;
    if ( v23 )
      goto LABEL_88;
    v113 = v22 + 20;
    v106 = v2 + 66;
    v116 = (__int16 *)(v22 + 28);
    v96 = 4;
    while ( 1 )
    {
      if ( *v106 < *(_DWORD *)v116 * *(__int16 *)(v105 + 2 * *((char *)v2 + 128) + 140) )
      {
        v95 = *(__int16 *)v113;
        v94 = v2[1];
        v114 = 0;
        v36 = sub_420D80(v94, v118, v117, v95, 0);
        v107 = v36;
        if ( v36 == -1 )
        {
          v45 = v2[9];
          if ( (v45 & 0x10) == 0 )
          {
            v2[9] = v45 | 0x10;
            *((_DWORD *)v2 + 53) = dword_4CD11C;
            if ( dword_4CD11C - *((_DWORD *)v2 + 53) > 4608 )
            {
              v46 = v110;
              *((_DWORD *)v2 + 53) = dword_4CD11C;
              v47 = *(_DWORD *)dword_4D1088 + 3256;
              sub_419920((_DWORD *)v46, &v104, &v111);
              v107 = v46 + 204;
              sprintf(Buffer, (const char *const)(v47 + 8), v46 + 204, v101);
              sub_42B930(v104, v111, *(char *)(v46 + 224), Buffer, v47);
              if ( *(char *)(v46 + 224) == dword_8703A0 )
              {
                v48 = (const char *)sub_436F10(18, 0);
                if ( v48 )
                {
                  sprintf(Buffer, v48, v107);
                  sub_437150(Buffer, 0, v104, v111);
                }
              }
            }
          }
          sub_40C730(v108, v2[8], 60, 401, 0, 0);
          goto LABEL_86;
        }
        v37 = (unsigned __int8 *)(dword_4D0BAC + v36 * dword_4D0B98);
        v112 = 1;
        v38 = v37[10];
        if ( v38 )
        {
          if ( v38 == 3 )
          {
            sub_40C3F0((__int16 *)(dword_4C4378 + dword_4C4364 * *((__int16 *)v37 + 6)), &v118, &v117);
          }
          else if ( v38 == 6 )
          {
            sub_483D50(*(__int16 *)(dword_8703BC * *((__int16 *)v37 + 6) + dword_8703D0 + 6), 0, -1, &v118, &v117);
          }
        }
        else
        {
          sub_426CB0((__int16 *)(dword_4D0C84 + dword_4D0C70 * *((__int16 *)v37 + 6)), (int)&v118, (int)&v117);
        }
        v39 = sub_426F20(3, v118, v117, (int)v115, 0, (char)v37[10], *((__int16 *)v37 + 6));
        v109 = v39;
        if ( v39 == -1 )
        {
          if ( !*((_BYTE *)v2 + 23) )
            sub_40C730(v108, v2[8], 60, 403, 0, 0);
LABEL_79:
          v2[9] &= ~0x10u;
          goto LABEL_86;
        }
        v40 = (_WORD *)(dword_4D10A8 + v39 * dword_4D1094);
        if ( !sub_42C450(v118, v117, 3, 1) )
          goto LABEL_79;
        v41 = *v37;
        v110 = dword_4CCAAC + dword_4CCA98 * v2[1];
        v42 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v110 + 2 * v41 + 240);
        ++*(_WORD *)(v42 + 30);
        v43 = v107;
        v40[10] = v107;
        v40[11] = (char)v37[10];
        v44 = v109;
        v40[12] = *((_WORD *)v37 + 6);
        sub_421B20(dword_4D0BAC + v43 * dword_4D0B98, v2[8], v44);
        v40[9] &= 0x8000u;
        v2[9] &= ~0x10u;
      }
LABEL_86:
      v113 += 2;
      v116 += 2;
      ++v106;
      if ( !--v96 )
      {
        if ( v114 )
        {
LABEL_88:
          ++v2[108];
          sub_426BF0(v2, (int)&v118, (int)&v117);
          v49 = (_DWORD *)v110;
          v23 = *(_BYTE *)(v101 + 12) == 1;
          v110 = *(__int16 *)(*(_DWORD *)(v110 + 120) + 2 * (v118 + v117 * *(_DWORD *)(v110 + 24))) / 3;
          v111 = 128;
          if ( v23 )
          {
            sub_4198B0(v49, v118, v117, &v114, &v112);
            v50 = *(char *)(v101 + 46) == *(char *)(v114 + dword_4D0E80 * v112 + *(_DWORD *)dword_4D0B64) / 3;
            v111 = dword_4CCB1C
                 / (dword_4CCB0C * (dword_4CCB08 + dword_4CCB04 * v50)
                  + dword_4CCB18 * (dword_4CCB14 + v50 * dword_4CCB10));
          }
          v2[9] |= 4u;
          v51 = v105;
          v52 = 0;
          v107 = 1;
          v109 = 0;
          v106 = 0;
          v104 = 0;
          v113 = 0;
          v116 = v2 + 52;
          do
          {
            if ( sub_426D10(v2, v52, (int)&v118, (int)&v117) )
            {
              v53 = *(char *)(v52 + v51 + 28) * *(__int16 *)(v51 + 2 * *((char *)v2 + 128) + 80);
              ++v104;
              v54 = (unsigned __int64)(1717986919LL * v53) >> 32;
              v55 = *(_BYTE *)(v101 + 12);
              v56 = (v54 >> 2) + ((unsigned int)v54 >> 31);
              if ( v55 < 2u )
              {
                v56 = (v111 * v56) >> 7;
                if ( v110 != 5 )
                {
                  if ( v110 == 6 )
                  {
                    v56 = 8 * v56 / 10;
                  }
                  else if ( v110 != 4 )
                  {
                    v56 *= 5;
                  }
                }
              }
              else if ( v55 != 2 && v110 > 4 )
              {
                v56 *= 2;
              }
              if ( dword_4CD13C )
                v56 >>= 8;
              v97 = *v116;
              if ( *v116 >= v56 )
              {
                sub_426F00(v117, v118, (int)v115);
              }
              else
              {
                v57 = v117;
                v107 = 0;
                if ( sub_426DD0((int)v115, v118, v117) )
                {
                  *v116 = v97 + 1;
                  v102 = 1;
                  v109 = 1;
                }
                else
                {
                  v58 = sub_426F20(2, v118, v57, (int)v115, 1, -1, -1);
                  if ( v58 != -1 )
                  {
                    sub_42C450(v118, v57, 2, 1);
                    *(_WORD *)(v58 * dword_4D1094 + dword_4D10A8 + 18) &= 0x8000u;
                    v109 = 1;
                  }
                }
                v106 = (_DWORD *)((char *)v106 + 1);
                v52 = v113;
                v51 = v105;
              }
            }
            ++v116;
            v113 = ++v52;
          }
          while ( v52 < 4 );
          if ( v106 && !v109 && v104 && !*((_BYTE *)v2 + 22) )
            sub_40C730(v108, v2[8], 60, 419, 0, 0);
          v59 = 0;
          v109 = 0;
          v106 = 0;
          v104 = 0;
          v113 = 0;
          v116 = v2 + 56;
          do
          {
            if ( sub_426D70(v2, v59, (int)&v118, (int)&v117) )
            {
              v60 = *(__int16 *)(v51 + 2 * *((char *)v2 + 128) + 80);
              v61 = *(char *)(v59 + v51 + 48);
              ++v104;
              v62 = (unsigned __int64)(1717986919LL * v61 * v60) >> 32;
              v63 = *(_BYTE *)(v101 + 12);
              v64 = (v62 >> 2) + ((unsigned int)v62 >> 31);
              if ( v63 < 2u )
              {
                v64 = (v111 * v64) >> 7;
                if ( v110 != 5 )
                {
                  if ( v110 == 6 )
                  {
                    v64 = 8 * v64 / 10;
                  }
                  else if ( v110 != 4 )
                  {
                    v64 *= 5;
                  }
                }
              }
              else if ( v63 != 2 && v110 > 4 )
              {
                v64 *= 2;
              }
              if ( dword_4CD13C )
                v64 >>= 8;
              v65 = *v116;
              if ( *v116 >= v64 )
              {
                sub_426F00(v117, v118, (int)v115);
              }
              else
              {
                v66 = v117;
                v107 = 0;
                if ( sub_426DD0((int)v115, v118, v117) )
                {
                  *v116 = v65 + 1;
                  v102 = 1;
                  v109 = 1;
                }
                else
                {
                  v67 = sub_426F20(2, v118, v66, (int)v115, 0, -1, -1);
                  if ( v67 != -1 )
                  {
                    sub_42C450(v118, v66, 2, 1);
                    *(_WORD *)(v67 * dword_4D1094 + dword_4D10A8 + 18) &= 0x8000u;
                    v109 = 1;
                  }
                }
                v106 = (_DWORD *)((char *)v106 + 1);
              }
              v51 = v105;
              v59 = v113;
            }
            ++v116;
            v113 = ++v59;
          }
          while ( v59 < 8 );
          if ( v106 && !v109 && v104 && !*((_BYTE *)v2 + 23) )
            sub_40C730(v108, v2[8], 60, 403, 0, 0);
          if ( v107 )
          {
            sub_421020(v115, v98);
            ++v2[94];
          }
          if ( !v102 )
            goto LABEL_144;
        }
        else
        {
          if ( !v112 && dword_4B1130 && !dword_8CAF68 )
          {
            v72 = (_DWORD *)v110;
            v73 = *(char *)(v110 + 224);
            if ( v73 != dword_8703A0 && (byte_4D10B9[189880 * v73] & 1) != 0 && sub_427670((char *)v2) )
              sub_427A30((int)v2);
            sub_419920(v72, &v112, &v114);
            v74 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v112 >> 5) + (v114 >> 5) * dword_4C5DEC);
            v114 >>= 5;
            v112 >>= 5;
            v75 = sub_4275A0((char *)v2);
            v76 = (double *)(v74 + 8 * *(__int16 *)(v100 + 28) + 6216);
            *v76 = ((double)(2 * *(_DWORD *)(v100 + 44) * *(__int16 *)(v105 + 2 * *((char *)v2 + 128) + 140))
                  - (double)*((int *)v2 + 37))
                 / 100.0
                 + *v76;
            *(double *)(v74 + 8 * v75 + 6216) = *(double *)(v74 + 8 * v75 + 6216) - 1.0;
          }
LABEL_144:
          if ( (v2[9] & 2) == 0 )
            sub_426B30(v2, 1);
        }
        if ( *(_BYTE *)(v105 + 78) == 2 )
          return 0;
        v68 = (_DWORD *)(v100 + 28);
        v111 = v100 + 20;
        v103 = v2 + 66;
        v112 = v100 + 28;
        v114 = 4;
        do
        {
          if ( *v103 < 2 * *v68 * *(__int16 *)(v105 + 2 * *((char *)v2 + 128) + 140) )
          {
            v69 = sub_420D80(v2[1], v118, v117, *(__int16 *)v111, 0);
            v107 = v69;
            if ( v69 != -1 )
            {
              v70 = (unsigned __int8 *)(dword_4D0BAC + v69 * dword_4D0B98);
              v71 = v70[10];
              if ( v71 )
              {
                if ( v71 == 3 )
                {
                  sub_40C3F0((__int16 *)(dword_4C4378 + dword_4C4364 * *((__int16 *)v70 + 6)), &v118, &v117);
                }
                else if ( v71 == 6 )
                {
                  sub_483D50(*(__int16 *)(dword_8703BC * *((__int16 *)v70 + 6) + dword_8703D0 + 6), 0, -1, &v118, &v117);
                }
              }
              else
              {
                sub_426CB0((__int16 *)(dword_4D0C84 + dword_4D0C70 * *((__int16 *)v70 + 6)), (int)&v118, (int)&v117);
              }
              v77 = sub_426F20(3, v118, v117, (int)v115, 0, (char)v70[10], *((__int16 *)v70 + 6));
              v109 = v77;
              if ( v77 != -1 )
              {
                v78 = (_WORD *)(dword_4D10A8 + v77 * dword_4D1094);
                if ( sub_42C450(v118, v117, 3, 1) )
                {
                  v79 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(dword_4CCAAC + dword_4CCA98 * v2[1] + 2 * *v70 + 240);
                  ++*(_WORD *)(v79 + 30);
                  v80 = v107;
                  v78[10] = v107;
                  v78[11] = (char)v70[10];
                  v81 = v109;
                  v78[12] = *((_WORD *)v70 + 6);
                  sub_421B20(dword_4D0BAC + v80 * dword_4D0B98, v2[8], v81);
                  v78[9] &= 0x8000u;
                }
              }
            }
          }
          ++v103;
          v111 += 2;
          v68 = (_DWORD *)(v112 + 4);
          v23 = v114-- == 1;
          v112 += 4;
        }
        while ( !v23 );
        return 0;
      }
    }
  }
  v2[9] = v6 & 0xFFFB;
  v82 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v20);
  if ( v82[11] != 0xFF )
  {
    ++v2[108];
    return 0;
  }
  v83 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *v82 + 240);
  v108 = v83;
  if ( dword_4B1130 && *(char *)(v3 + 224) != dword_8703A0 )
  {
    if ( !*(_WORD *)(v3 + 2 * *(unsigned __int8 *)(v83 + 1256) + 768) )
    {
      sub_426CB0(v2, (int)&v118, (int)&v117);
      sub_401480(v2[1], v118, v117, 8, *(unsigned __int8 *)(v108 + 1256));
      v83 = v108;
    }
    if ( !*(_WORD *)(v3 + 2 * *(unsigned __int8 *)(v83 + 1256) + 768) )
    {
      sub_40C560(v2[1], v118, v117, *v82);
      v83 = v108;
    }
  }
  if ( *(_WORD *)(v3 + 2 * *(unsigned __int8 *)(v83 + 1256) + 784) >= *(_WORD *)(v3
                                                                               + 2 * *(unsigned __int8 *)(v83 + 1256)
                                                                               + 768)
    || *(__int16 *)(v108 + 26) + *(__int16 *)(v108 + 34) >= sub_415180(v108) )
  {
    v92 = v2[9];
    if ( (v92 & 8) == 0 )
    {
      v2[9] = v92 | 8;
      *((_DWORD *)v2 + 52) = dword_4CD11C;
    }
    sub_40C730(v3, v2[8], 60, *(unsigned __int8 *)(v108 + 1256) + 1332, 0, 0);
    if ( !dword_4B1130 )
      return 0;
    if ( dword_8CAF68 )
      return 0;
    v93 = *(char *)(v3 + 224);
    if ( v93 == dword_8703A0 || (byte_4D10B9[189880 * v93] & 1) == 0 || !sub_427670((char *)v2) )
      return 0;
    sub_427A30((int)v2);
    return 0;
  }
  else
  {
    if ( !sub_426CB0(v2, (int)&v118, (int)&v117) )
      return 0;
    v99 = sub_40C2E0(v2[1], v118, v117, *v82);
    if ( v99 == -1 )
    {
      sub_40C730(
        v3,
        v2[8],
        60,
        *(unsigned __int8 *)(dword_4CC8BC * *(__int16 *)(v3 + 2 * *v82 + 240) + dword_4CC8D0 + 1256) + 1332,
        0,
        0);
      if ( dword_4B1130 )
      {
        if ( !dword_8CAF68 )
        {
          v88 = *(char *)(v3 + 224);
          if ( v88 != dword_8703A0 && (byte_4D10B9[189880 * v88] & 1) != 0 && sub_427670((char *)v2) )
          {
            sub_427A30((int)v2);
            v89 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * sub_4275A0((char *)v2) + 240);
            v90 = dword_4CD11C;
            *(_BYTE *)(v89 + 8) &= ~1u;
            *(_DWORD *)(v89 + 36) = v90;
            *(_BYTE *)(v89 + 10) = 0;
          }
        }
      }
      v91 = v2[9];
      if ( (v91 & 8) != 0 )
        return 0;
      v2[9] = v91 | 8;
      *((_DWORD *)v2 + 52) = dword_4CD11C;
      return 0;
    }
    else
    {
      v84 = sub_426F20(3, v118, v117, (int)v115, 0, 0, (int)v115);
      v85 = v84;
      if ( v84 == -1 )
      {
        if ( !*((_BYTE *)v2 + 23) )
          sub_40C730(v3, v2[8], 60, 403, 0, 0);
      }
      else
      {
        v86 = (_WORD *)(dword_4D10A8 + v84 * dword_4D1094);
        if ( sub_42C450(v118, v117, 3, 1) )
        {
          v87 = (__int16)v115;
          v86[10] = v2[65];
          v86[11] = 0;
          v86[12] = v87;
          sub_421B20(dword_4D0BAC + dword_4D0B98 * v2[65], *(__int16 *)(dword_4C4364 * v99 + dword_4C4378 + 8), v85);
          v86[9] &= 0x8000u;
          v2[9] &= ~8u;
          return 0;
        }
      }
      v2[9] &= ~8u;
      return 0;
    }
  }
}
