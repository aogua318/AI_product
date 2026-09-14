// 函数 0x42c720  sub_42C720  size=0xA73  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42C720(int a1)
{
  int v1; // esi
  __int16 v2; // cx
  char v3; // dl
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  __int16 v7; // ax
  bool v9; // zf
  signed int v10; // eax
  __int16 v11; // ax
  int v12; // ebx
  int v13; // edi
  unsigned __int8 *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  double v19; // st7
  unsigned __int8 *v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int *v27; // ecx
  int v28; // ecx
  int v29; // eax
  int *v30; // ecx
  unsigned __int16 v31; // ax
  bool v32; // zf
  signed int v33; // eax
  __int16 v34; // ax
  int v35; // ecx
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  __int16 v39; // di
  int v40; // edi
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  _DWORD *v44; // edi
  int v45; // ecx
  unsigned int v46; // ebx
  int v47; // ebx
  int v48; // eax
  bool v49; // zf
  signed int v50; // eax
  int v51; // ebx
  int i; // edi
  int v53; // edx
  bool v54; // zf
  signed int v55; // eax
  bool v56; // zf
  signed int v57; // eax
  int v58; // ecx
  int v59; // ebx
  int v60; // eax
  int v61; // [esp+0h] [ebp-40h]
  int v62; // [esp+4h] [ebp-3Ch]
  double v63; // [esp+14h] [ebp-2Ch]
  double v64; // [esp+14h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-24h] BYREF
  double v66; // [esp+20h] [ebp-20h]
  int v67; // [esp+28h] [ebp-18h] BYREF
  int v68; // [esp+2Ch] [ebp-14h]
  char *v69; // [esp+30h] [ebp-10h]
  unsigned __int8 *v70; // [esp+34h] [ebp-Ch]
  unsigned int v71; // [esp+38h] [ebp-8h] BYREF
  unsigned int v72; // [esp+3Ch] [ebp-4h] BYREF
  int v73; // [esp+48h] [ebp+8h]
  _DWORD *v74; // [esp+48h] [ebp+8h]

  v1 = dword_4D10A8 + a1 * dword_4D1094;
  if ( dword_4CD13C && *(char *)(dword_4CCA98 * *(__int16 *)(v1 + 14) + dword_4CCAAC + 224) < 7 )
    return 0;
  v2 = *(_WORD *)(v1 + 18) ^ (*(_WORD *)(v1 + 18) ^ (*(_WORD *)(v1 + 18) + 1)) & 0x7FFF;
  v3 = *(_BYTE *)(v1 + 11) & 0xF;
  *(_WORD *)(v1 + 18) = v2;
  if ( v3 != 2 )
    goto LABEL_60;
  v4 = v2 & 0x7FFF;
  if ( (unsigned __int16)v4 > 0x18u && !*(_BYTE *)(v1 + 12) )
  {
LABEL_6:
    v5 = *(_WORD *)(v1 + 24);
    if ( v5 != -1 )
    {
      *(double *)(*(_DWORD *)dword_4C5DF4 + 9208 * v5 + 8 * *(char *)(v1 + 20) + 24) = (double)*(int *)(v1 + 28)
                                                                                     + *(double *)(*(_DWORD *)dword_4C5DF4
                                                                                                 + 9208 * v5
                                                                                                 + 8
                                                                                                 * *(char *)(v1 + 20)
                                                                                                 + 24);
      v6 = *(__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14) + 2 * *(char *)(v1 + 20) + 240);
      if ( v6 != -1 )
        *(_DWORD *)(dword_4CC8D0 + v6 * dword_4CC8BC + 1272) += *(_DWORD *)(v1 + 28);
      v7 = *(_WORD *)(v1 + 26);
      if ( v7 != -1 )
        *(_BYTE *)(dword_870868 + dword_870854 * v7 + 14) &= ~4u;
    }
    goto LABEL_11;
  }
  if ( (unsigned __int16)v4 > 0xCu )
  {
    v10 = sub_4640D0(v4) & 0x80000007;
    v9 = v10 == 0;
    if ( v10 < 0 )
      v9 = (((_BYTE)v10 - 1) | 0xFFFFFFF8) == -1;
    if ( v9 )
      sub_40C730(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14), *(__int16 *)(v1 + 16), 60, 408, 0, 0);
  }
  v11 = *(_WORD *)(v1 + 26);
  if ( *(_BYTE *)(v1 + 12) != 5 )
  {
    if ( v11 == -1 )
    {
      v36 = *(__int16 *)(v1 + 14);
      v37 = 100
          * *(__int16 *)(dword_4CCAAC + dword_4CCA98 * v36 + 226)
          / (*(_DWORD *)(dword_4CCAAC + dword_4CCA98 * v36 + 196)
           * *(_DWORD *)(dword_4CCAAC + dword_4CCA98 * v36 + 200));
      if ( v37 > 50 )
        *(_WORD *)(v1 + 18) ^= (*(_WORD *)(v1 + 18) ^ ((__int16)(v37 * (*(_WORD *)(v1 + 18) & 0x7FFF)) / 40)) & 0x7FFF;
      if ( *(int *)(v1 + 20) < 0 || (*(_DWORD *)(v1 + 20) & 0xFFFFFF00) == 0 )
      {
LABEL_115:
        sub_42BF60(a1);
        return 0;
      }
      v38 = sub_42C670(v36, *(char *)(v1 + 20));
      v39 = v38;
      if ( v38 != -1 )
      {
        sub_434580(&v72, &v71);
        *(_WORD *)(v1 + 26) = v39;
        sub_42C450((__int16 *)v1, v72, v71, 5, 1);
      }
    }
    else
    {
      if ( *(int *)(v1 + 20) < 0 || (*(_DWORD *)(v1 + 20) & 0xFFFFFF00) == 0 )
      {
LABEL_11:
        sub_42BF60(a1);
        return 0;
      }
      v40 = v11;
      v41 = dword_870854;
      if ( !*(_BYTE *)(dword_870854 * v40 + dword_870868 + 15) )
      {
        v40 = sub_42C670(*(__int16 *)(v1 + 14), *(char *)(v1 + 20));
        v41 = dword_870854;
      }
      if ( v40 != -1 )
      {
        HIDWORD(v66) = dword_870868 + v40 * v41;
        *(_WORD *)(v1 + 26) = v40;
        v42 = sub_42C4D0((__int16 *)v1);
        sub_42C290((__int16 *)v1, (int)&v72, (int)&v71);
        v43 = dword_4B32D0[2 * v42] + v72;
        v71 += dword_4B32D4[2 * v42];
        v72 = v43;
        if ( !sub_42C500((_DWORD *)(dword_4CCAAC + dword_4CCA98 * (__int16)*(_WORD *)HIDWORD(v66)), v43, v71, v40) )
        {
          sub_434580(&v72, &v71);
          sub_42C450((__int16 *)v1, v72, v71, 5, 1);
        }
      }
    }
LABEL_60:
    if ( *(_BYTE *)(v1 + 12) )
    {
      if ( *(_BYTE *)(v1 + 12) == 2 && (*(_BYTE *)(dword_4D0C70 * *(__int16 *)(v1 + 26) + dword_4D0C84 + 18) & 1) == 0 )
        sub_42C3E0(v1, 0, 1);
      goto LABEL_112;
    }
    v44 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14));
    sub_42C290((__int16 *)v1, (int)&v72, (int)&v71);
    if ( (*(_BYTE *)(v1 + 11) & 0x10) == 0 )
    {
      v46 = v71;
      if ( sub_42BC50(*(__int16 *)(v1 + 14), v72, v71) )
      {
        v51 = *(_DWORD *)(v44[34] + 4 * (v72 + v46 * v44[6]));
        if ( v51 != -1 )
        {
          while ( sub_483C00(v51) != 1
               || v51 == *(__int16 *)(v1 + 16)
               || (*(_BYTE *)(v1 + 11) & 0xF) == 2
               && (*(_BYTE *)(sub_483C30(v51) * dword_4D1094 + dword_4D10A8 + 11) & 0xF) == 2 )
          {
            v45 = v51 * v44[40];
            v51 = *(_DWORD *)(v45 + v44[45] + 20);
            if ( v51 == -1 )
              goto LABEL_74;
          }
          for ( i = 0; i < 100; ++i )
          {
            if ( sub_42C590(v1) )
              break;
          }
LABEL_112:
          if ( *(_WORD *)(v1 + 26) != 0xFFFF || *(_WORD *)(v1 + 28) != 0xFFFF || *(_WORD *)(v1 + 30) != 0xFFFF )
            return 0;
          goto LABEL_115;
        }
      }
      else
      {
        sub_42C2F0((__int16 *)v1);
      }
    }
LABEL_74:
    if ( (*(_BYTE *)(v1 + 11) & 0xF) == 2 )
    {
      v47 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14);
      v48 = sub_4137E0(a1, &v67, &v65);
      v45 = *(__int16 *)(v1 + 14);
      if ( v45 == dword_4B1028 && dword_4C2D38 == v47 )
      {
        if ( v48 <= 0 )
        {
          if ( v48 >= 0 )
          {
            v55 = sub_4640D0(v45) & 0x8000001F;
            v54 = v55 == 0;
            if ( v55 < 0 )
              v54 = (((_BYTE)v55 - 1) | 0xFFFFFFE0) == -1;
            if ( !v54 )
              goto LABEL_105;
            v67 = *(char *)(v1 + 20);
            v53 = *(__int16 *)(*(_DWORD *)dword_870814 + 72 * v67 + 14) + 870;
          }
          else
          {
            if ( v65 )
            {
              if ( v65 == 1 )
              {
                sub_40C730(v47, *(__int16 *)(v1 + 16), 60, 1357, 0, 0);
              }
              else if ( v65 == 2 )
              {
                sub_40C730(v47, *(__int16 *)(v1 + 16), 60, 1356, 0, 0);
              }
              goto LABEL_105;
            }
            v53 = *(__int16 *)(*(_DWORD *)dword_870814 + 72 * v67 + 14) + 1028;
          }
          sub_40C730(v47, *(__int16 *)(v1 + 16), 60, v53, 0, 0);
        }
        else
        {
          v50 = sub_4640D0(v45) & 0x80000003;
          v49 = v50 == 0;
          if ( v50 < 0 )
            v49 = (((_BYTE)v50 - 1) | 0xFFFFFFFC) == -1;
          if ( v49 )
            sub_40C730(
              v47,
              *(__int16 *)(v1 + 16),
              60,
              *(__int16 *)(*(_DWORD *)dword_870814 + 72 * v67 + 14) + 1180,
              0,
              0);
        }
      }
    }
LABEL_105:
    v57 = sub_4640D0(v45) & 0x80000007;
    v56 = v57 == 0;
    if ( v57 < 0 )
      v56 = (((_BYTE)v57 - 1) | 0xFFFFFFF8) == -1;
    if ( v56 && ((*(_BYTE *)(v1 + 11) & 0x10) != 0 || !sub_42C590(v1)) )
    {
      v58 = v44[40] * *(__int16 *)(v1 + 16);
      v59 = *(unsigned __int8 *)(v58 + v44[45] + 8);
      v60 = sub_4640D0(v58);
      sub_4867D0(*(__int16 *)(v1 + 16), v60 % 3 + v59 - 1);
      if ( (*(_BYTE *)(v1 + 11) & 0xF) != 2 )
        sub_40C730((int)v44, *(__int16 *)(v1 + 16), 60, 415, 0, 0);
    }
    goto LABEL_112;
  }
  if ( v11 != -1 )
  {
    v12 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14);
    v13 = dword_870868 + dword_870854 * v11;
    LOBYTE(v4) = *(_BYTE *)(v13 + 15);
    if ( !(_BYTE)v4 || *(_WORD *)(v13 + 12) == 0xFFFF )
    {
      v31 = *(_WORD *)(v1 + 18) & 0x7FFF;
      if ( v31 > 0x18u )
        goto LABEL_6;
      if ( v31 <= 0x14u )
      {
        if ( v12 == dword_4C2D38 )
        {
          v74 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * *(__int16 *)(v1 + 24));
          if ( !(_BYTE)v4 || *(_WORD *)(v13 + 12) == 0xFFFF )
            goto LABEL_49;
          v33 = sub_4640D0(v4) & 0x80000001;
          v32 = v33 == 0;
          if ( v33 < 0 )
            v32 = (((_BYTE)v33 - 1) | 0xFFFFFFFE) == -1;
          if ( v32 )
          {
LABEL_49:
            v64 = (double)*((int *)dword_870824 + 28 * *(char *)(v1 + 20)) * 0.00390625;
            if ( v64
               + (double)(4
                        * *(_DWORD *)(dword_4CC8BC * *(__int16 *)(v12 + 2 * *(char *)(v1 + 20) + 240) + dword_4CC8D0 + 16)) > sub_4042E0(v74, *(char *)(v1 + 20)) * 3.0 + v64 + v64 )
              sub_40C730(v12, *(__int16 *)(v1 + 16), 60, 405, 0, 0);
          }
          else if ( 60000 * (*(char *)(dword_4D0B98 * *(__int16 *)(v13 + 10) + dword_4D0BAC + 2) + 100) < 150 * (v74[4] + 30000) )
          {
            sub_40C730(v12, *(__int16 *)(v1 + 16), 60, 406, 0, 0);
          }
        }
      }
      else
      {
        sub_40C730(v12, *(__int16 *)(v1 + 16), 60, 407, 0, 0);
      }
    }
    else
    {
      v70 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * *(__int16 *)(v13 + 10));
      if ( (*(_WORD *)(v1 + 18) & 0x7FFF) > *(__int16 *)(*(_DWORD *)dword_870814 + 72 * *v70 + 54) )
      {
        v14 = v70;
        v69 = (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v12 + 2 * *v70 + 240));
        v15 = *(_DWORD *)(v1 + 36);
        if ( v15 )
        {
          v16 = (v15 + 300) * (*(int *)(v1 + 20) >> 8) / 300;
          *(_DWORD *)(v1 + 36) = 0;
        }
        else
        {
          v16 = *(int *)(v1 + 20) >> 8;
        }
        v17 = *((_DWORD *)v14 + 5);
        v73 = v16;
        if ( v16 > v17 )
          v73 = v17;
        v67 = v73 * *((_DWORD *)v69 + 4);
        v63 = (double)v67;
        sub_42EDA0(v63);
        if ( dword_4C2D38 == v12 )
          sub_435570(36, 0);
        v18 = *((_DWORD *)v70 + 4);
        v65 = *((_DWORD *)v70 + 5);
        HIDWORD(v66) = v18;
        v68 = v65 - v73;
        v19 = (double)(v65 - v73) * (double)v18 / (double)v65;
        v20 = v70;
        v21 = v65 - v73;
        *((_DWORD *)v70 + 4) = (int)v19;
        *((_DWORD *)v20 + 5) = v21;
        v22 = *(_DWORD *)(v1 + 20);
        v23 = *(_DWORD *)(v1 + 28);
        v68 = v23;
        if ( v22 >> 8 <= v73 )
        {
          *(_DWORD *)(v1 + 28) = 0;
          *(_DWORD *)(v1 + 20) = (unsigned __int8)v22;
        }
        else
        {
          v24 = v23 * ((v22 >> 8) - v73) / (v22 >> 8);
          v68 -= v24;
          *(_DWORD *)(v1 + 28) = v24;
          v23 = v68;
          *(_DWORD *)(v1 + 20) = (unsigned __int8)*(_DWORD *)(v1 + 20)
                               ^ ((*(_DWORD *)(v1 + 20) & 0xFFFFFF00) - (v73 << 8));
        }
        if ( v23 > 0 )
        {
          v12 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14);
          v25 = *(__int16 *)(v12 + 2 * *(char *)(v1 + 20) + 240);
          if ( v25 != -1 )
          {
            v26 = dword_4CC8D0 + v25 * dword_4CC8BC;
            *(_DWORD *)(v26 + 1276) += v23;
            v69 = (char *)v26;
          }
        }
        *(_DWORD *)(v13 + 20) += v73;
        v65 = HIDWORD(v66) - *((_DWORD *)v70 + 4);
        sub_415260(v69, v73, -v67, 0, 0, -1);
        v27 = (int *)((char *)dword_870824 + 112 * *v70);
        v66 = v63 / (double)v73;
        sub_42BB40(v27, v66);
        sub_42BB90((_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * *(__int16 *)(v1 + 24)), *v69, v66);
        v28 = v67;
        v29 = 23735 * *(char *)(v12 + 224);
        *(_DWORD *)(v12 + 816) += v67;
        dbl_4D3670[v29] = v63 + dbl_4D3670[v29];
        *(_DWORD *)(v13 + 48) += v28 - (v65 + 128) / 256;
        sub_415160((int)v69, v73, 0);
        sub_40C730(v12, *(__int16 *)(v13 + 6), 60, 399, 0, 0);
        *(_WORD *)(v1 + 26) = -1;
        sub_42C3E0(v1, 0, 1);
        sub_42C590(v1);
        v30 = (int *)v70;
        *(_BYTE *)(v13 + 14) &= ~4u;
        if ( v30[5] <= 0 )
        {
          v62 = *(__int16 *)(v13 + 10);
          *(_BYTE *)(v13 + 15) = 0;
          sub_420B10(v62);
          v61 = *(__int16 *)(v13 + 6);
          *(_WORD *)(v13 + 10) = -1;
          sub_4868E0(v61, 1);
          sub_42C3E0(dword_4D10A8 + dword_4D1094 * *(__int16 *)(v13 + 12), 0, 1);
        }
        sub_43CAB0();
      }
    }
    v34 = *(_WORD *)(v13 + 12);
    if ( v34 != -1 )
    {
      v35 = dword_4D10A8 + dword_4D1094 * v34;
      if ( *(_BYTE *)(v35 + 12) == 4 )
      {
        sub_42C3E0(v35, 0, 0);
        return 0;
      }
    }
  }
  return 0;
}
