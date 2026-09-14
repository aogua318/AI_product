// 函数 0x423b90  sub_423B90  size=0x1463  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_423B90(const char *a1, int a2)
{
  const char *v2; // ebx
  char *v3; // eax
  int v4; // edx
  char v5; // cl
  unsigned int v6; // eax
  char *v7; // edi
  char *v9; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edi
  int v14; // edx
  int *v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  signed int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // eax
  unsigned int i; // edi
  int v27; // esi
  int v28; // ecx
  char *v29; // eax
  char *v30; // edx
  char v31; // cl
  unsigned int v32; // eax
  char *v33; // edi
  char *v35; // eax
  int j; // edi
  int k; // esi
  signed int v39; // ebx
  int *v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // edx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // ebx
  char *v48; // eax
  int v49; // edx
  char v50; // cl
  unsigned int v51; // eax
  char *v52; // edi
  char *v54; // eax
  int v56; // ebx
  int v57; // edi
  int v58; // eax
  int v59; // esi
  int v60; // eax
  unsigned int v61; // eax
  char *v62; // eax
  int v63; // edx
  char v64; // cl
  unsigned int v65; // eax
  char *v66; // edi
  char *v68; // eax
  int v70; // esi
  int v71; // edi
  int v72; // edi
  int v73; // esi
  unsigned int v74; // ebx
  int v75; // eax
  char *v76; // eax
  char *v77; // edx
  char v78; // cl
  unsigned int v79; // eax
  char *v80; // edi
  char *v82; // eax
  int v84; // ecx
  int v85; // ebx
  int v86; // edi
  unsigned int v87; // esi
  int v88; // ecx
  int v89; // eax
  int v90; // esi
  int v91; // ecx
  int v92; // edi
  int v93; // eax
  int v94; // eax
  int v95; // ebx
  int v96; // eax
  int v97; // esi
  int v98; // edi
  int v99; // eax
  int v100; // eax
  int v101; // esi
  int v102; // edi
  int v103; // eax
  int v104; // eax
  int v105; // esi
  int v106; // edi
  int v107; // eax
  int v108; // eax
  int n; // ebx
  int v110; // eax
  int v111; // esi
  int v112; // edi
  int v113; // eax
  int m; // ebx
  int v115; // eax
  int v116; // esi
  int v117; // edi
  int v118; // eax
  unsigned int v120; // [esp+10h] [ebp-594h] BYREF
  unsigned int v121; // [esp+14h] [ebp-590h]
  int v122; // [esp+1Ch] [ebp-588h]
  int v123; // [esp+38h] [ebp-56Ch]
  unsigned int v124; // [esp+40h] [ebp-564h] BYREF
  unsigned int v125; // [esp+44h] [ebp-560h]
  int v126; // [esp+4Ch] [ebp-558h]
  int v127; // [esp+68h] [ebp-53Ch]
  int v128; // [esp+70h] [ebp-534h]
  const char *v129; // [esp+74h] [ebp-530h]
  int *v130; // [esp+78h] [ebp-52Ch]
  int v131; // [esp+7Ch] [ebp-528h]
  int v132; // [esp+80h] [ebp-524h] BYREF
  __int64 v133; // [esp+84h] [ebp-520h]
  unsigned int v134; // [esp+8Ch] [ebp-518h]
  int Src; // [esp+90h] [ebp-514h] BYREF
  _BYTE v136[1023]; // [esp+94h] [ebp-510h] BYREF
  char v137; // [esp+493h] [ebp-111h] BYREF
  int v138[64]; // [esp+494h] [ebp-110h] BYREF
  int v139; // [esp+5A0h] [ebp-4h]

  v2 = a1;
  v129 = a1;
  sub_468830(&v124);
  v139 = 0;
  sub_468830(&v120);
  LOBYTE(v139) = 1;
  v3 = (char *)sub_47C740("maps\\");
  v4 = (char *)v138 - v3;
  do
  {
    v5 = *v3;
    v3[v4] = *v3;
    ++v3;
  }
  while ( v5 );
  v6 = strlen(a1) + 1;
  v7 = &v137;
  while ( *++v7 )
    ;
  qmemcpy(v7, a1, v6);
  v9 = &v137;
  while ( *++v9 )
    ;
  strcpy(v9, "g.tga");
  v11 = 0;
  v128 = dword_4D0E80 * dword_4D0E84;
  v131 = 0;
  if ( !sub_469910((int)v138, 0) )
    goto LABEL_162;
  v12 = dword_4D0E84;
  if ( dword_4D0E84 <= 0 )
    goto LABEL_91;
LABEL_9:
  v13 = 0;
  if ( dword_4D0E80 <= 0 )
    goto LABEL_89;
LABEL_10:
  if ( dword_4CCC40 )
  {
    ++v131;
    sub_45D840(5 * v131 / v128 + 1);
  }
  if ( v13 < v124 )
  {
    if ( v11 < v125 )
    {
      v14 = *(_DWORD *)(v127 + 4 * v11);
      v132 = 0;
      if ( v126 / 8 > 0 )
        memcpy(&v132, (const void *)(v14 + v13 * (v126 / 8)), v126 / 8);
      v134 = v132;
    }
    else
    {
      v134 = -1;
    }
  }
  else
  {
    v134 = -1;
  }
  while ( 2 )
  {
    switch ( v134 )
    {
      case 0u:
        sub_488230(v13, v11, 0, 0);
        goto LABEL_87;
      case 1u:
        sub_488230(v13, v11, 1, 0);
        goto LABEL_87;
      case 2u:
        v15 = dword_4B32D4;
        v133 = 1;
        v132 = 0;
        v130 = dword_4B32D4;
        do
        {
          v16 = v13 + *(v15 - 1);
          v17 = v11 + *v15;
          v134 = v17;
          if ( v16 < v124 && v17 < v125 )
          {
            Src = 0;
            if ( v126 / 8 > 0 )
            {
              memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * v134) + v16 * (v126 / 8)), v126 / 8);
              if ( Src == 2 )
                HIDWORD(v133) |= v133;
              v15 = v130;
            }
          }
          v15 += 2;
          LODWORD(v133) = 2 * v133;
          v130 = v15;
        }
        while ( (int)v15 < (int)dword_4B32F4 );
        v134 = v11 - 1;
        if ( __OFSUB__(v11 - 1, v11 + 1) && v11 - 1 != v11 + 1 )
          goto LABEL_42;
        v18 = v13 + 1;
        do
        {
          v19 = v13 - 1;
          LODWORD(v133) = v13 - 1;
          if ( (int)(v13 - 1) <= v18 )
          {
            do
            {
              if ( v19 < v124 && v134 < v125 )
              {
                Src = 0;
                if ( v126 / 8 > 0 )
                {
                  memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * v134) + v19 * (v126 / 8)), v126 / 8);
                  if ( Src == 9 || Src == 10 )
                    ++v132;
                  v19 = v133;
                }
              }
              ++v19;
              v18 = v13 + 1;
              LODWORD(v133) = v19;
            }
            while ( (int)v19 <= (int)(v13 + 1) );
          }
          ++v134;
        }
        while ( (int)v134 <= (int)(v11 + 1) );
        if ( v132 >= 2 )
        {
          sub_488230(v13, v11, 16, 0);
        }
        else
        {
LABEL_42:
          switch ( HIDWORD(v133) )
          {
            case 1:
              sub_488230(v13, v11, 12, 0);
              break;
            case 2:
              sub_488230(v13, v11, 15, 0);
              break;
            case 3:
              sub_488230(v13, v11, 6, 0);
              break;
            case 4:
              sub_488230(v13, v11, 14, 0);
              break;
            case 5:
              sub_488230(v13, v11, 1, 0);
              break;
            case 6:
              sub_488230(v13, v11, 5, 0);
              break;
            case 7:
              sub_488230(v13, v11, 10, 0);
              break;
            case 8:
              sub_488230(v13, v11, 13, 0);
              break;
            case 9:
              sub_488230(v13, v11, 7, 0);
              break;
            case 0xA:
              sub_488230(v13, v11, 2, 0);
              break;
            case 0xB:
              sub_488230(v13, v11, 11, 0);
              break;
            case 0xC:
              sub_488230(v13, v11, 4, 0);
              break;
            case 0xD:
              sub_488230(v13, v11, 8, 0);
              break;
            case 0xE:
              sub_488230(v13, v11, 9, 0);
              break;
            case 0xF:
              sub_488230(v13, v11, 3, 0);
              break;
            default:
              break;
          }
        }
        if ( v13 < v124 && v11 - 1 < v125 )
        {
          v20 = 0;
          Src = 0;
          if ( v126 / 8 > 0 )
          {
            memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * v11 - 4) + v13 * (v126 / 8)), v126 / 8);
            v20 = Src;
          }
          v134 = v20;
          if ( v20 < 2 || v20 == 9 || v20 == 10 )
            goto LABEL_72;
        }
        if ( v13 - 1 < v124 && v11 - 1 < v125 )
        {
          v21 = 0;
          Src = 0;
          if ( v126 / 8 > 0 )
          {
            memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * v11 - 4) + (v13 - 1) * (v126 / 8)), v126 / 8);
            v21 = Src;
          }
          v134 = v21;
          if ( v21 < 2 || v21 == 9 || v21 == 10 )
          {
LABEL_72:
            if ( v134 <= 0x11 )
              continue;
          }
        }
        goto LABEL_87;
      case 9u:
        sub_488230(v13, v11, 14, 0);
        goto LABEL_87;
      case 0xAu:
        sub_488230(v13, v11, 27, 0);
        goto LABEL_87;
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
        v22 = v13 + v11 * dword_4D0E80;
        if ( *(_DWORD *)(dword_4D0EF4 + 4 * v22) != -1 )
          goto LABEL_87;
        HIDWORD(v133) = v13 + 7;
        v23 = v11 + 7;
        v24 = sub_4640D0(v22) % 4;
        switch ( v24 )
        {
          case 1:
            goto LABEL_84;
          case 2:
            ++HIDWORD(v133);
LABEL_84:
            v23 = v11 + 8;
            break;
          case 3:
            ++HIDWORD(v133);
            break;
        }
        v25 = sub_486480(v134 + 116, HIDWORD(v133), v23, v24, 0, 1, 0, 0, 0);
        if ( v25 != -1 )
          sub_483BD0(v25, 4, -1);
LABEL_87:
        if ( (int)++v13 < dword_4D0E80 )
          goto LABEL_10;
        v12 = dword_4D0E84;
LABEL_89:
        if ( (int)++v11 < v12 )
          goto LABEL_9;
        v2 = v129;
LABEL_91:
        for ( i = 0; (int)i < v12; ++i )
        {
          v27 = 0;
          if ( dword_4D0E80 > 0 )
          {
            do
            {
              if ( v27 < v124 && i < v125 )
              {
                v28 = 0;
                Src = 0;
                if ( v126 / 8 > 0 )
                {
                  memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * i) + v27 * (v126 / 8)), v126 / 8);
                  v28 = Src;
                }
                switch ( v28 )
                {
                  case 0:
                    sub_488230(v27, i, 0, 1);
                    break;
                  case 1:
                    sub_488230(v27, i, 1, 1);
                    break;
                  case 9:
                    sub_488230(v27, i, 14, 1);
                    break;
                  case 10:
                    sub_488230(v27, i, 27, 1);
                    break;
                  default:
                    break;
                }
              }
              ++v27;
            }
            while ( v27 < dword_4D0E80 );
            v12 = dword_4D0E84;
          }
        }
        v29 = (char *)sub_47C740("maps\\");
        v30 = (char *)((char *)v138 - v29);
        do
        {
          v31 = *v29;
          v30[(_DWORD)v29] = *v29;
          ++v29;
        }
        while ( v31 );
        v32 = strlen(v2) + 1;
        v33 = &v137;
        while ( *++v33 )
          ;
        qmemcpy(v33, v2, v32);
        v35 = &v137;
        while ( *++v35 )
          ;
        strcpy(v35, "r.tga");
        if ( sub_469910((int)v138, 0) )
        {
          for ( j = 0; j < dword_4D0E84; ++j )
          {
            for ( k = 0; k < dword_4D0E80; ++k )
            {
              if ( k < v120 && j < v121 )
              {
                v39 = v122 / 8;
                Src = 0;
                if ( v122 / 8 > 0 )
                {
                  memcpy(&Src, (const void *)(*(_DWORD *)(v123 + 4 * j) + k * v39), v122 / 8);
                  if ( Src == 2 )
                  {
                    v40 = dword_4B32D4;
                    v133 = 1;
                    v131 = (int)dword_4B32D4;
                    do
                    {
                      v41 = k + *(v40 - 1);
                      v42 = j + *v40;
                      if ( v41 < v120 )
                      {
                        if ( v42 < v121 )
                        {
                          v44 = 0;
                          Src = 0;
                          if ( v39 > 0 )
                          {
                            memcpy(&Src, (const void *)(*(_DWORD *)(v123 + 4 * v42) + v41 * v39), v39);
                            v44 = Src;
                          }
                          v43 = v44;
                          if ( v44 == 2 )
                            HIDWORD(v133) |= v133;
                        }
                        else
                        {
                          v43 = -1;
                        }
                      }
                      else
                      {
                        v43 = -1;
                      }
                      LODWORD(v133) = 2 * v133;
                      v40 = (int *)(v131 + 8);
                      v131 = (int)v40;
                    }
                    while ( (int)v40 < (int)dword_4B32F4 );
                    v134 = j - 1;
                    if ( !__OFSUB__(j - 1, j + 1) || j - 1 == j + 1 )
                    {
                      v45 = k + 1;
                      v131 = k - 1;
                      v46 = v134;
                      do
                      {
                        v47 = v131;
                        LODWORD(v133) = v131;
                        if ( v131 <= v45 )
                        {
                          do
                          {
                            if ( v47 < v124 )
                            {
                              if ( v46 < v125 )
                              {
                                Src = 0;
                                if ( v126 / 8 > 0 )
                                {
                                  memcpy(
                                    &Src,
                                    (const void *)(*(_DWORD *)(v127 + 4 * v134) + v47 * (v126 / 8)),
                                    v126 / 8);
                                  v47 = v133;
                                  v46 = v134;
                                }
                                v43 = Src;
                              }
                              else
                              {
                                v43 = -1;
                              }
                            }
                            else
                            {
                              v43 = -1;
                            }
                            ++v47;
                            v45 = k + 1;
                            LODWORD(v133) = v47;
                          }
                          while ( (int)v47 <= k + 1 );
                        }
                        v134 = ++v46;
                      }
                      while ( (int)v46 <= j + 1 );
                    }
                    if ( v43 == 9 || v43 == 10 )
                    {
                      sub_488230(k, j, 16, 0);
                    }
                    else
                    {
                      switch ( HIDWORD(v133) )
                      {
                        case 1:
                          sub_488230(k, j, 12, 0);
                          break;
                        case 2:
                          sub_488230(k, j, 15, 0);
                          break;
                        case 3:
                          sub_488230(k, j, 6, 0);
                          break;
                        case 4:
                          sub_488230(k, j, 14, 0);
                          break;
                        case 5:
                          sub_488230(k, j, 1, 0);
                          break;
                        case 6:
                          sub_488230(k, j, 5, 0);
                          break;
                        case 7:
                          sub_488230(k, j, 10, 0);
                          break;
                        case 8:
                          sub_488230(k, j, 13, 0);
                          break;
                        case 9:
                          sub_488230(k, j, 7, 0);
                          break;
                        case 0xA:
                          sub_488230(k, j, 2, 0);
                          break;
                        case 0xB:
                          sub_488230(k, j, 11, 0);
                          break;
                        case 0xC:
                          sub_488230(k, j, 4, 0);
                          break;
                        case 0xD:
                          sub_488230(k, j, 8, 0);
                          break;
                        case 0xE:
                          sub_488230(k, j, 9, 0);
                          break;
                        case 0xF:
                          sub_488230(k, j, 3, 0);
                          break;
                        default:
                          continue;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        sub_4688B0(&v120);
        sub_4688B0(&v124);
        v2 = v129;
LABEL_162:
        v48 = (char *)sub_47C740("maps\\");
        v49 = (char *)v138 - v48;
        do
        {
          v50 = *v48;
          v48[v49] = *v48;
          ++v48;
        }
        while ( v50 );
        v51 = strlen(v2) + 1;
        v52 = &v137;
        while ( *++v52 )
          ;
        qmemcpy(v52, v2, v51);
        v54 = &v137;
        while ( *++v54 )
          ;
        strcpy(v54, "s.tga");
        if ( sub_469910((int)v138, v136) )
        {
          word_4D0BB4 = (v136[0] >> 3) | (4 * (v136[1] & 0xF8 | (32 * (v136[2] & 0xF8))));
          word_4D0BB6 = (v136[4] >> 3) | (4 * (v136[5] & 0xF8 | (32 * (v136[6] & 0xF8))));
          word_4D0BB8 = (v136[8] >> 3) | (4 * (v136[9] & 0xF8 | (32 * (v136[10] & 0xF8))));
          word_4D0BBA = (v136[12] >> 3) | (4 * (v136[13] & 0xF8 | (32 * (v136[14] & 0xF8))));
          word_4D0BBC = (v136[16] >> 3) | (4 * (v136[17] & 0xF8 | (32 * (v136[18] & 0xF8))));
          word_4D0BBE = (v136[20] >> 3) | (4 * (v136[21] & 0xF8 | (32 * (v136[22] & 0xF8))));
          word_4D0BC0 = (v136[24] >> 3) | (4 * (v136[25] & 0xF8 | (32 * (v136[26] & 0xF8))));
          word_4D0BC2 = (v136[28] >> 3) | (4 * (v136[29] & 0xF8 | (32 * (v136[30] & 0xF8))));
          v56 = 0;
          v57 = 0;
          word_4D0BC4 = (v136[32] >> 3) | (4 * (v136[33] & 0xF8 | (32 * (v136[34] & 0xF8))));
          if ( dword_4D0E84 > 0 )
          {
            v58 = dword_4D0E80;
            do
            {
              v59 = 0;
              if ( v58 > 0 )
              {
                do
                {
                  if ( v59 < v124 )
                  {
                    if ( v57 < v125 )
                    {
                      Src = 0;
                      if ( v126 / 8 > 0 )
                        memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * v57) + v59 * (v126 / 8)), v126 / 8);
                      v60 = Src;
                    }
                    else
                    {
                      v60 = -1;
                    }
                  }
                  else
                  {
                    v60 = -1;
                  }
                  v61 = v60 - 3;
                  if ( v61 >= 6 )
                    LOBYTE(v61) = 0;
                  *(_BYTE *)(*(_DWORD *)dword_4D0B64 + v56) = v61;
                  v58 = dword_4D0E80;
                  ++v59;
                  ++v56;
                }
                while ( v59 < dword_4D0E80 );
              }
              ++v57;
            }
            while ( v57 < dword_4D0E84 );
          }
          sub_4688B0(&v124);
          v2 = v129;
        }
        if ( dword_4CCC40 )
          sub_45D840(7);
        v62 = (char *)sub_47C740("maps\\");
        v63 = (char *)v138 - v62;
        do
        {
          v64 = *v62;
          v62[v63] = *v62;
          ++v62;
        }
        while ( v64 );
        v65 = strlen(v2) + 1;
        v66 = &v137;
        while ( *++v66 )
          ;
        qmemcpy(v66, v2, v65);
        v68 = &v137;
        while ( *++v68 )
          ;
        strcpy(v68, "h.tga");
        v70 = (dword_4D0E84 + 31) / 32;
        v71 = (dword_4D0E80 + 31) / 32;
        v132 = v71;
        v130 = (int *)v70;
        sub_469880(v71, v70, 8, 0);
        sub_468D20(0, 0, v71, v70, 7);
        if ( sub_469910((int)v138, 0) )
        {
          v72 = 0;
          if ( v70 > 0 )
          {
            HIDWORD(v133) = 1;
            do
            {
              v73 = 0;
              if ( v132 > 0 )
              {
                v74 = 1;
                v131 = 1;
                do
                {
                  if ( v74 < v124 )
                  {
                    if ( HIDWORD(v133) < v125 )
                    {
                      Src = 0;
                      if ( v126 / 8 > 0 )
                      {
                        memcpy(&Src, (const void *)(*(_DWORD *)(v127 + 4 * HIDWORD(v133)) + v126 / 8 * v74), v126 / 8);
                        v74 = v131;
                      }
                      v75 = Src;
                    }
                    else
                    {
                      v75 = -1;
                    }
                  }
                  else
                  {
                    v75 = -1;
                  }
                  Src = v75;
                  if ( v73 >= dword_4D0C3C
                    && v72 >= dword_4D0C40
                    && v73 < dword_4D0C44
                    && v72 < dword_4D0C48
                    && dword_4D0C34 / 8 > 0 )
                  {
                    memcpy(
                      (void *)(*(_DWORD *)(dword_4D0C50 + 4 * v72) + v73 * (dword_4D0C34 / 8)),
                      &Src,
                      dword_4D0C34 / 8);
                  }
                  ++v73;
                  v74 += 32;
                  v131 = v74;
                }
                while ( v73 < v132 );
              }
              HIDWORD(v133) += 32;
              ++v72;
            }
            while ( v72 < (int)v130 );
            v2 = v129;
          }
          sub_4688B0(&v124);
        }
        sub_423750(v2, a2);
        if ( dword_4CCC40 )
          sub_45D840(8);
        v76 = (char *)sub_47C740("maps\\");
        v77 = (char *)((char *)v138 - v76);
        do
        {
          v78 = *v76;
          v77[(_DWORD)v76] = *v76;
          ++v76;
        }
        while ( v78 );
        v79 = strlen(v2) + 1;
        v80 = &v137;
        while ( *++v80 )
          ;
        qmemcpy(v80, v2, v79);
        v82 = &v137;
        while ( *++v82 )
          ;
        strcpy(v82, "t.tga");
        v85 = 0;
        if ( sub_469910((int)v138, 0) )
        {
          if ( dword_4D0E80 * dword_4D0E84 > 0 )
          {
            v86 = 0;
            do
            {
              if ( dword_4CCC40 )
                sub_45D840(v86 / v128 + 8);
              if ( (v85 & 0x7F) == 0 )
                sub_40B240();
              v87 = sub_4640D0(v84) % dword_4D0E80;
              v89 = sub_4640D0(v88);
              sub_423A20(v87, v89 % dword_4D0E84);
              v84 = dword_4D0E80 * dword_4D0E84;
              ++v85;
              v86 += 10;
            }
            while ( v85 < dword_4D0E80 * dword_4D0E84 );
          }
        }
        else
        {
          Src = 0;
          if ( dword_4D0E80 * dword_4D0E84 > 0 )
          {
            v132 = 0;
            do
            {
              if ( dword_4CCC40 )
                sub_45D840(v132 / v128 + 8);
              if ( (v85 & 0x7F) == 0 )
                sub_40B240();
              v90 = sub_4640D0(v84) % dword_4D0E80;
              v92 = sub_4640D0(v91) % dword_4D0E84;
              v93 = sub_42B3B0(v90, v92);
              if ( v93 == dword_870918 )
              {
                v94 = sub_4640D0(v84);
                v84 = 9;
                v95 = 0;
                if ( v94 % 9 >= 3 )
                {
                  if ( v94 % 9 >= 6 )
                  {
                    do
                    {
                      v104 = sub_4640D0(v84);
                      if ( sub_438420(v90, v92, 134, v104 % 11) )
                        break;
                      v105 = sub_4640D0(v84) % 3 + v90;
                      v90 = v105 - sub_4640D0(3) % 3;
                      v106 = sub_4640D0(3) % 3 + v92;
                      v107 = sub_4640D0(3);
                      v84 = 3;
                      ++v95;
                      v92 = v106 - v107 % 3;
                    }
                    while ( v95 < 5 );
                  }
                  else
                  {
                    do
                    {
                      v100 = sub_4640D0(v84) % 8;
                      if ( sub_438420(v90, v92, 127, v100) )
                        break;
                      v101 = sub_4640D0(v84) % 3 + v90;
                      v90 = v101 - sub_4640D0(3) % 3;
                      v102 = sub_4640D0(3) % 3 + v92;
                      v103 = sub_4640D0(3);
                      v84 = 3;
                      ++v95;
                      v92 = v102 - v103 % 3;
                    }
                    while ( v95 < 5 );
                  }
                }
                else
                {
                  do
                  {
                    v96 = sub_4640D0(v84);
                    if ( sub_438420(v90, v92, 126, v96 % 9) )
                      break;
                    v97 = sub_4640D0(v84) % 3 + v90;
                    v90 = v97 - sub_4640D0(3) % 3;
                    v98 = sub_4640D0(3) % 3 + v92;
                    v99 = sub_4640D0(3);
                    v84 = 3;
                    ++v95;
                    v92 = v98 - v99 % 3;
                  }
                  while ( v95 < 5 );
                }
              }
              else if ( v93 == dword_8709E8 )
              {
                v108 = sub_4640D0(v84);
                v84 = 20;
                if ( v108 % 20 >= 3 )
                {
                  if ( v108 % 20 < 6 )
                  {
                    for ( m = 0; m < 5; ++m )
                    {
                      v115 = sub_4640D0(v84) % 8;
                      if ( sub_438420(v90, v92, 136, v115) )
                        break;
                      v116 = sub_4640D0(v84) % 3 + v90;
                      v90 = v116 - sub_4640D0(3) % 3;
                      v117 = sub_4640D0(3) % 3 + v92;
                      v118 = sub_4640D0(3);
                      v84 = 3;
                      v92 = v117 - v118 % 3;
                    }
                  }
                }
                else
                {
                  for ( n = 0; n < 5; ++n )
                  {
                    v110 = sub_4640D0(v84) % 8;
                    if ( sub_438420(v90, v92, 135, v110) )
                      break;
                    v111 = sub_4640D0(v84) % 3 + v90;
                    v90 = v111 - sub_4640D0(3) % 3;
                    v112 = sub_4640D0(3) % 3 + v92;
                    v113 = sub_4640D0(3);
                    v84 = 3;
                    v92 = v112 - v113 % 3;
                  }
                }
              }
              v132 += 10;
              v85 = Src + 1;
              Src = v85;
            }
            while ( v85 < dword_4D0E80 * dword_4D0E84 );
          }
        }
        sub_486D40(0, 0);
        sub_486D40(1, 1);
        sub_487220(&unk_4C42A0);
        LOBYTE(v139) = 0;
        sub_469860(&v120);
        v139 = -1;
        return sub_469860(&v124);
      default:
        goto LABEL_87;
    }
  }
}
