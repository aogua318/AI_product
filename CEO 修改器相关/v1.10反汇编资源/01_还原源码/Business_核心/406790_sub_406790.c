// 函数 0x406790  sub_406790  size=0x13FD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_406790(int a1)
{
  double *v1; // esi
  int v2; // ebx
  double v3; // st7
  _BYTE *v4; // esi
  char v5; // al
  char v6; // al
  char v7; // al
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  char *v13; // esi
  int v14; // edx
  int v15; // edi
  int v16; // ebx
  int v17; // edi
  __int16 *v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int i; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // edx
  int v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // esi
  char *k; // ebx
  __int16 *v35; // ebx
  double v36; // st7
  __int16 v37; // ax
  int v38; // edi
  double v39; // st6
  int v40; // ebx
  int v41; // ecx
  int v42; // eax
  int v43; // esi
  int v44; // eax
  int v45; // eax
  int v46; // esi
  double *v47; // eax
  __int16 v48; // cx
  int v49; // edi
  char *v50; // esi
  int v51; // edi
  int v52; // eax
  double v53; // st6
  int v54; // ecx
  double *v55; // esi
  unsigned int v56; // ebx
  int v57; // eax
  int v58; // edx
  double v59; // st5
  int v60; // eax
  int v61; // edx
  double v62; // st5
  int v63; // eax
  int v64; // edx
  double v65; // st5
  int v66; // eax
  int v67; // edx
  double v68; // st5
  int v69; // esi
  int v70; // ecx
  int v71; // ebx
  int v72; // eax
  int v73; // edx
  double v74; // st5
  int v75; // esi
  int v76; // eax
  int v77; // ebx
  __int16 *v78; // edi
  int v79; // eax
  int v80; // esi
  int v81; // [esp+1Ch] [ebp-570h] BYREF
  int v82; // [esp+20h] [ebp-56Ch] BYREF
  double v83; // [esp+24h] [ebp-568h]
  int v84; // [esp+2Ch] [ebp-560h]
  double v85; // [esp+30h] [ebp-55Ch]
  int v86; // [esp+38h] [ebp-554h]
  int v87; // [esp+3Ch] [ebp-550h]
  int v88; // [esp+40h] [ebp-54Ch]
  int v89; // [esp+44h] [ebp-548h]
  int v90; // [esp+48h] [ebp-544h]
  int v91; // [esp+4Ch] [ebp-540h]
  __int16 *v92; // [esp+50h] [ebp-53Ch]
  double *v93; // [esp+54h] [ebp-538h]
  int v94; // [esp+58h] [ebp-534h]
  int v95; // [esp+5Ch] [ebp-530h] BYREF
  int v96; // [esp+60h] [ebp-52Ch]
  int v97; // [esp+64h] [ebp-528h]
  int j; // [esp+68h] [ebp-524h] BYREF
  int v99; // [esp+6Ch] [ebp-520h]
  int v100; // [esp+70h] [ebp-51Ch]
  int v101; // [esp+74h] [ebp-518h]
  int v102; // [esp+78h] [ebp-514h]
  int v103; // [esp+7Ch] [ebp-510h] BYREF
  int v104; // [esp+80h] [ebp-50Ch]
  int v105; // [esp+84h] [ebp-508h]
  __int16 v106; // [esp+88h] [ebp-504h]
  int v107; // [esp+8Ch] [ebp-500h]
  _DWORD v108[212]; // [esp+90h] [ebp-4FCh] BYREF
  _DWORD v109[106]; // [esp+3E0h] [ebp-1ACh] BYREF

  v1 = (double *)((char *)&unk_4D10B8 + 189880 * a1);
  v101 = a1;
  v2 = 0;
  v93 = v1;
  sub_4065D0(a1, 144);
  if ( v1[1] < 0.0 )
  {
    v3 = sub_42ED60(v1) - v1[9];
    if ( v3 > 0.0 )
    {
      sub_42F0A0(v3);
      if ( v1[1] < 0.0 )
        sub_4065D0(a1, 0);
    }
  }
  v85 = sub_405A30(v1);
  dbl_4C2CD0 = v85;
  memset(byte_4B9FC8, 0, dword_4C5DEC * dword_4C5DD8);
  dword_4BA7C8 = 0;
  memset(word_4B9918, 0, sizeof(word_4B9918));
  memset(word_4B99EC, 0, sizeof(word_4B99EC));
  sub_404800();
  sub_41F4A0(a1 >= 7);
  dword_4B9C70 = 0;
  dword_4B9C74 = 0;
  dword_4B9C6C = 0;
  memset(word_4B9AC4, 0, sizeof(word_4B9AC4));
  memset(word_4B9B98, 0, sizeof(word_4B9B98));
  v102 = 0;
  v100 = 0;
  if ( dword_4C43CC > 0 )
  {
    while ( !sub_464E90(v100) )
    {
      v8 = dword_4C5DEC;
LABEL_33:
      if ( ++v100 >= dword_4C43CC )
        goto LABEL_36;
    }
    v4 = (_BYTE *)(dword_4C43DC + v100 * dword_4C43C8);
    v5 = v4[2];
    if ( v5 == -1 )
    {
      if ( v4[3] != 2 )
      {
        v2 = 1;
        goto LABEL_28;
      }
    }
    else if ( v5 != dword_8703A0 )
    {
      v2 = 1;
      if ( v4[85] == 0xFF )
      {
        if ( v4[84] != 0xFF )
        {
          ++word_4B99EC[(char)v4[84]];
          ++word_4B9AC2;
        }
      }
      else
      {
        ++word_4B9918[(char)v4[85]];
        ++word_4B9AC0;
      }
      if ( (char)v4[2] == v101 )
      {
        v6 = v4[3];
        if ( v6 == 3 )
        {
          v7 = v4[7];
          if ( v7 == 1 || v7 == 2 )
            ++dword_4B9C74;
          else
            ++dword_4B9C70;
        }
        else if ( v6 == 1 )
        {
          sub_40FC00(v100);
        }
        else if ( v4[85] == 0xFF )
        {
          if ( v4[84] != 0xFF )
          {
            ++word_4B9B98[(char)v4[84]];
            ++HIWORD(dword_4B9C6C);
          }
        }
        else
        {
          ++word_4B9AC4[(char)v4[85]];
          LOWORD(dword_4B9C6C) = dword_4B9C6C + 1;
        }
      }
      goto LABEL_28;
    }
    if ( !v2 )
    {
      v8 = dword_4C5DEC;
LABEL_30:
      if ( ++v102 >= dword_4C43D4 )
        goto LABEL_36;
      goto LABEL_33;
    }
LABEL_28:
    sub_40D7C0(&v95, &j);
    v8 = dword_4C5DEC;
    v9 = j >> 5;
    v10 = v95 >> 5;
    byte_4B9FC8[(j >> 5) * dword_4C5DEC + v10] = v2;
    ++dword_4BA7C8;
    v95 = v10;
    j = v9;
    goto LABEL_30;
  }
  v8 = dword_4C5DEC;
LABEL_36:
  v89 = (__int16)dword_4B9C6C + SHIWORD(dword_4B9C6C);
  if ( v85 / 10000000.0 < (double)v89 )
    return;
  v11 = 0;
  memset(word_4B9C78, 0, sizeof(word_4B9C78));
  memset(word_4B9D4C, 0, sizeof(word_4B9D4C));
  memset(word_4B9E20, 0, sizeof(word_4B9E20));
  memset(word_4B9EF4, 0, sizeof(word_4B9EF4));
  v102 = 0;
  if ( dword_4CC8C0 > 0 )
  {
    do
    {
      if ( sub_464E90(v11) )
      {
        v12 = dword_4CCA98;
        v13 = (char *)(dword_4CC8D0 + v11 * dword_4CC8BC);
        v14 = dword_4CCAAC;
        v15 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)v13 + 1);
        if ( !dword_4D0B68 || *(char *)(v15 + 224) >= 7 )
        {
          if ( v13[10] != 2 )
          {
            if ( *(char *)(v15 + 224) != dword_8703A0 )
              ++word_4B9C78[*v13];
            if ( *(char *)(v12 * *((__int16 *)v13 + 1) + v14 + 224) == v101 )
              ++word_4B9E20[*v13];
          }
          if ( sub_415A00(v13) )
          {
            if ( *(char *)(v15 + 224) != dword_8703A0 )
              ++word_4B9D4C[*v13];
            if ( *(char *)(dword_4CCA98 * *((__int16 *)v13 + 1) + dword_4CCAAC + 224) == v101 )
              ++word_4B9EF4[*v13];
          }
        }
        if ( ++v102 >= dword_4CC8C8 )
          break;
      }
      ++v11;
    }
    while ( v11 < dword_4CC8C0 );
    v8 = dword_4C5DEC;
  }
  memset(v108, 0, 0x1A8u);
  memset(v109, 0, sizeof(v109));
  memset(word_4C27D8, 0, sizeof(word_4C27D8));
  memset(word_4C28AC, 0, sizeof(word_4C28AC));
  memset(word_4C2980, 0, sizeof(word_4C2980));
  memset(word_4C2A54, 0, sizeof(word_4C2A54));
  memset(word_4C2B28, 0, sizeof(word_4C2B28));
  memset(word_4C2BFC, 0, sizeof(word_4C2BFC));
  v16 = 0;
  v17 = 0;
  if ( dword_4D0C74 > 0 )
  {
    do
    {
      if ( sub_464E90(v16) )
      {
        v18 = (__int16 *)(dword_4D0C84 + v16 * dword_4D0C70);
        if ( !dword_4D0B68 || *(char *)(dword_4CCA98 * v18[1] + dword_4CCAAC + 224) >= 7 )
        {
          v19 = sub_4275A0(dword_4D0C84 + v16 * dword_4D0C70);
          v20 = *(char *)(dword_4CCA98 * v18[1] + dword_4CCAAC + 224);
          if ( v20 == v101 )
          {
            ++word_4C2980[v19];
            v109[v19] += v18[110] + v18[111] + v18[112] + v18[113] + v18[114] + v18[115];
          }
          else if ( v20 == dword_8703A0 )
          {
            ++word_4C2B28[v19];
            v108[v19 + 106] += v18[110] + v18[111] + v18[112] + v18[113] + v18[114] + v18[115];
          }
          ++word_4C27D8[v19];
          v108[v19] += v18[110] + v18[111] + v18[112] + v18[113] + v18[114] + v18[115];
        }
        if ( ++v17 >= dword_4D0C7C )
          break;
      }
      ++v16;
    }
    while ( v16 < dword_4D0C74 );
    v8 = dword_4C5DEC;
  }
  v21 = dword_870818;
  for ( i = 0; i < v21; ++i )
  {
    v23 = word_4C2980[i];
    if ( v23 > 0 )
      word_4C2A54[i] = 100 * v109[i] / (144 * v23);
    v24 = word_4C27D8[i];
    if ( v24 > 0 )
      word_4C28AC[i] = 100 * v108[i] / (144 * v24);
    v25 = word_4C2B28[i];
    if ( v25 > 0 )
      word_4C2BFC[i] = 100 * v108[i + 106] / (144 * v25);
  }
  memset(&unk_4D04B0, 0, 0x400u);
  v26 = dword_4C5DD8;
  for ( j = 0; j < v26; ++j )
  {
    v27 = 0;
    v95 = 0;
    if ( v8 > 0 )
    {
      do
      {
        v28 = *(_DWORD *)dword_4C5DF4 + 9208 * (v27 + j * v8);
        memset((void *)(v28 + 7064), 0, 0x350u);
        memset((void *)(v28 + 7912), 0, 0x350u);
        *(double *)(v28 + 8768) = 0.0;
        *(double *)(v28 + 8776) = 0.0;
        *(_DWORD *)(v28 + 8760) = -1;
        *(_DWORD *)(v28 + 8764) = -1;
        sub_404320((char *)v28);
        memset((void *)(v28 + 6216), 0, 0x350u);
        v8 = dword_4C5DEC;
        v27 = v95 + 1;
        v95 = v27;
      }
      while ( v27 < dword_4C5DEC );
      v26 = dword_4C5DD8;
    }
  }
  v29 = 0;
  NumOfElements = 0;
  dword_4C27D4 = 0;
  j = 0;
  if ( v26 > 0 )
  {
    v30 = v101;
    do
    {
      v31 = 0;
      v95 = 0;
      if ( v8 > 0 )
      {
        do
        {
          v32 = v31 + v29 * v8;
          if ( byte_4B9FC8[v32] )
          {
            v33 = *(_DWORD *)dword_4C5DF4 + 9208 * v32;
            sub_405E40(v33, v30);
            v29 = j;
            v31 = v95;
            if ( *(_DWORD *)(v33 + 8760) != -1 )
            {
              word_4BA7D0[8 * NumOfElements] = 32 * v95 + 16;
              word_4BA7D2[8 * NumOfElements] = 32 * v29 + 16;
              word_4BA7D4[8 * NumOfElements] = *(_WORD *)(v33 + 8760);
              dbl_4BA7D8[2 * NumOfElements++] = *(double *)(v33 + 8768);
            }
            if ( *(_DWORD *)(v33 + 8764) != -1 )
            {
              word_4BE7D0[8 * dword_4C27D4] = 32 * v31 + 16;
              word_4BE7D2[8 * dword_4C27D4] = 32 * v29 + 16;
              word_4BE7D4[8 * dword_4C27D4] = *(_WORD *)(v33 + 8764);
              dbl_4BE7D8[2 * dword_4C27D4++] = *(double *)(v33 + 8776);
            }
            v8 = dword_4C5DEC;
          }
          v95 = ++v31;
        }
        while ( v31 < v8 );
        v26 = dword_4C5DD8;
      }
      j = ++v29;
    }
    while ( v29 < v26 );
  }
  qsort(word_4BA7D0, NumOfElements, 0x10u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
  qsort(word_4BE7D0, dword_4C27D4, 0x10u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
  v102 = 0;
  v100 = -1;
  for ( k = (char *)&unk_4BA7C4; ; k = (char *)v92 )
  {
    ++v100;
    v35 = (__int16 *)(k + 16);
    v92 = v35;
    v36 = sub_405A30(v93);
    v85 = v36;
    v37 = *((_WORD *)v93 + 94876);
    if ( v37 != -1 )
    {
      v38 = v37;
      if ( word_4B9D4C[v37] <= 0 )
      {
        if ( v37 != *v35 && (word_4B9AC4[v37] > 0 || v93[23720] * 10.0 >= *(double *)(v35 + 2)) )
        {
          v41 = *((__int16 *)v93 + 94878);
          v39 = v93[23720];
          v40 = *((__int16 *)v93 + 94877);
          v96 = v41;
          goto LABEL_98;
        }
      }
      else
      {
        *((_WORD *)v93 + 94876) = -1;
      }
    }
    if ( v100 >= (int)NumOfElements )
      break;
    v39 = *(double *)(v92 + 2);
    v40 = *(v92 - 2);
    v38 = *v92;
    v96 = *(v92 - 1);
    v41 = v96;
LABEL_98:
    v83 = v39;
    if ( *((int *)dword_870824 + 28 * v38 + 4) > 0 && *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * v38 + 13) )
      v42 = sub_405950(v38, v101, v40, v41, v38, v36, &v103, 1);
    else
      v42 = sub_405950(v38, v101, v40, v41, v38, v36, &v103, 0);
    if ( v42 )
    {
      if ( v107 == -1 )
      {
        LOBYTE(v45) = v105;
        if ( v105 != -1 )
        {
          v46 = dword_4C43DC + v104 * dword_4C43C8;
          if ( *(_BYTE *)(v46 + 85) == 0xFF )
          {
            if ( *(char *)(v46 + 2) != v101 )
            {
              if ( word_4B9AC4[v105] > 0 )
                goto LABEL_124;
              sub_40F9F0(v104, v101);
              sub_40DF20(v104, v103);
              v45 = v105;
              ++word_4B9918[v105];
              ++word_4B9AC0;
              ++word_4B9AC4[v45];
              LOWORD(dword_4B9C6C) = dword_4B9C6C + 1;
            }
            *(_BYTE *)(v46 + 85) = v45;
            *(_WORD *)(v46 + 86) = v106;
            *(_BYTE *)(v46 + 84) = -1;
            if ( !*(_BYTE *)(*(_DWORD *)dword_870814 + 72 * v105 + 13) || v105 == v38 )
            {
              v47 = v93;
              v48 = v96;
              v93[23720] = v83;
              *((_WORD *)v47 + 94876) = v38;
              *((_WORD *)v47 + 94877) = v40;
              *((_WORD *)v47 + 94878) = v48;
            }
            ++v102;
          }
        }
      }
      else
      {
        v43 = dword_4C43DC + v104 * dword_4C43C8;
        if ( *(_BYTE *)(v43 + 84) == 0xFF )
        {
          if ( *(_BYTE *)(v43 + 2) == 0xFF )
          {
            if ( word_4B9B98[v105] > 0 )
              goto LABEL_124;
            sub_40F9F0(v104, v101);
            sub_40DF20(v104, v103);
            v44 = v105;
            ++word_4B99EC[v105];
            ++word_4B9AC2;
            ++word_4B9B98[v44];
            ++HIWORD(dword_4B9C6C);
          }
          ++v102;
          *(_BYTE *)(v43 + 85) = -1;
          *(_WORD *)(v43 + 86) = -1;
          *(_BYTE *)(v43 + 84) = v107;
        }
      }
    }
    if ( v102 > 0 && v85 < 10000000.0 )
      break;
LABEL_124:
    if ( v100 >= (int)(2 * NumOfElements - 2) / 3 )
      break;
  }
  v49 = 0;
  v102 = 0;
  v100 = 0;
  if ( dword_4CC8C0 > 0 )
  {
    while ( 1 )
    {
      if ( sub_464E90(v49) )
      {
        v50 = (char *)(dword_4CC8D0 + v49 * dword_4CC8BC);
        v51 = 0;
        v92 = (__int16 *)v50;
        if ( dword_4D0B68 && *(char *)(dword_4CCA98 * *((__int16 *)v50 + 1) + dword_4CCAAC + 224) < 7 )
          goto LABEL_178;
        if ( v50[10] == 2 || !*((_WORD *)v50 + 631) && word_4B99EC[*v50] + word_4B9D4C[*v50] )
          goto LABEL_178;
        if ( sub_4640D0() % dword_4CC8C0 >= 10 )
          goto LABEL_178;
        v52 = *v50;
        if ( !*(_BYTE *)(*(_DWORD *)dword_870814 + 72 * v52 + 13) )
          goto LABEL_178;
        if ( word_4B9B98[v52] + word_4B9EF4[v52] )
          goto LABEL_178;
        if ( word_4B99EC[v52] )
          goto LABEL_178;
        v85 = sub_405A30(v93);
        sub_419920(&v82, &v81);
        v53 = 0.0;
        v84 = v82 >> 5;
        if ( dword_4C5DD8 <= 0 )
          goto LABEL_178;
        v96 = -(v81 >> 5);
        v87 = 0;
        v94 = 16;
        v86 = 0;
        HIDWORD(v83) = 9208 * dword_4C5DEC;
        v89 = dword_4C5DD8;
        do
        {
          v88 = 0;
          if ( dword_4C5DEC >= 4 )
          {
            v54 = abs32(v96);
            v55 = (double *)(*(_DWORD *)dword_4C5DF4 + v86 + 8 * *(char *)v92 + 7064);
            v51 = 2 - v84;
            v56 = ((unsigned int)(dword_4C5DEC - 4) >> 2) + 1;
            v99 = 48;
            v88 = 4 * v56;
            do
            {
              v57 = abs32(v51 - 2);
              if ( v57 < v54 )
                v58 = v54 + (v57 >> 1);
              else
                v58 = v57 + (v54 >> 1);
              v97 = 1000 - v58;
              v59 = (double)(1000 - v58) * *v55;
              if ( v59 > v53 )
              {
                v53 = v59;
                v91 = v99 - 32;
                v90 = v94;
              }
              v60 = abs32(v51 - 1);
              if ( v60 < v54 )
                v61 = v54 + (v60 >> 1);
              else
                v61 = v60 + (v54 >> 1);
              v97 = 1000 - v61;
              v62 = (double)(1000 - v61) * v55[1151];
              if ( v62 > v53 )
              {
                v53 = v62;
                v91 = v99;
                v90 = v94;
              }
              v63 = abs32(v51);
              if ( v63 < v54 )
                v64 = v54 + (v63 >> 1);
              else
                v64 = v63 + (v54 >> 1);
              v97 = 1000 - v64;
              v65 = (double)(1000 - v64) * v55[2302];
              if ( v65 > v53 )
              {
                v53 = v65;
                v91 = v99 + 32;
                v90 = v94;
              }
              v66 = abs32(v51 + 1);
              if ( v66 < v54 )
                v67 = v54 + (v66 >> 1);
              else
                v67 = v66 + (v54 >> 1);
              v97 = 1000 - v67;
              v68 = (double)(1000 - v67) * v55[3453];
              if ( v68 > v53 )
              {
                v53 = v68;
                v91 = v99 + 64;
                v90 = v94;
              }
              v99 += 128;
              v55 += 4604;
              v51 += 4;
              --v56;
            }
            while ( v56 );
          }
          if ( v88 < dword_4C5DEC )
          {
            v69 = abs32(v96);
            v51 = v88 - v84;
            v70 = 32 * v88 + 16;
            v71 = dword_4C5DEC - v88;
            v99 = *(_DWORD *)dword_4C5DF4 + 8 * (*(char *)v92 + 1151 * (v88 + v87)) + 7064;
            do
            {
              v72 = abs32(v51);
              if ( v72 < v69 )
                v73 = v69 + (v72 >> 1);
              else
                v73 = v72 + (v69 >> 1);
              v97 = 1000 - v73;
              v74 = (double)(1000 - v73) * *(double *)v99;
              if ( v74 > v53 )
              {
                v53 = v74;
                v91 = v70;
                v90 = v94;
              }
              v99 += 9208;
              ++v51;
              v70 += 32;
              --v71;
            }
            while ( v71 );
          }
          v87 += dword_4C5DEC;
          v86 += HIDWORD(v83);
          v94 += 32;
          ++v96;
          --v89;
        }
        while ( v89 );
        if ( v53 == 0.0 )
          goto LABEL_178;
        if ( !sub_405950(v51, v101, v91, v90, *(char *)v92, v85, &v103, 1) )
          goto LABEL_178;
        if ( v107 == -1 )
          goto LABEL_178;
        v75 = dword_4C43DC + v104 * dword_4C43C8;
        if ( *(_BYTE *)(v75 + 84) != 0xFF )
          goto LABEL_178;
        if ( *(_BYTE *)(v75 + 2) != 0xFF )
          goto LABEL_177;
        if ( word_4B9B98[v105] <= 0 )
          break;
      }
LABEL_179:
      v49 = v100 + 1;
      v100 = v49;
      if ( v49 >= dword_4CC8C0 )
        goto LABEL_180;
    }
    sub_40F9F0(v104, v101);
    sub_40DF20(v104, v103);
    v76 = v105;
    ++word_4B99EC[v105];
    ++word_4B9AC2;
    ++word_4B9B98[v76];
    ++HIWORD(dword_4B9C6C);
LABEL_177:
    *(_BYTE *)(v75 + 85) = -1;
    *(_WORD *)(v75 + 86) = -1;
    *(_BYTE *)(v75 + 84) = v107;
LABEL_178:
    if ( ++v102 >= dword_4CC8C8 )
      goto LABEL_180;
    goto LABEL_179;
  }
LABEL_180:
  v77 = 0;
  v102 = 0;
  if ( (int)(2 * dword_4C27D4) / 3 > 0 )
  {
    v78 = word_4BE7D2;
    do
    {
      v85 = sub_405A30(v93);
      if ( sub_405950((int)v78, v101, *(v78 - 1), *v78, v78[1], v85, &v103, 0) )
      {
        LOBYTE(v79) = v105;
        if ( v105 != -1 )
        {
          v80 = dword_4C43DC + v104 * dword_4C43C8;
          if ( *(_BYTE *)(v80 + 85) == 0xFF )
          {
            if ( *(char *)(v80 + 2) != v101 )
            {
              if ( word_4B9AC4[v105] > 0 )
                goto LABEL_191;
              sub_40F9F0(v104, v101);
              sub_40DF20(v104, v103);
              v79 = v105;
              ++word_4B9918[v105];
              ++word_4B9AC0;
              ++word_4B9AC4[v79];
              LOWORD(dword_4B9C6C) = dword_4B9C6C + 1;
            }
            ++v102;
            *(_BYTE *)(v80 + 85) = v79;
            *(_WORD *)(v80 + 86) = v106;
            *(_BYTE *)(v80 + 84) = -1;
          }
        }
      }
      if ( v102 > 0 && v85 < 10000000.0 )
        return;
LABEL_191:
      ++v77;
      v78 += 8;
    }
    while ( v77 < (int)(2 * dword_4C27D4) / 3 );
  }
}
