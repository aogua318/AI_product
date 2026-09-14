// 函数 0x477020  sub_477020  size=0x92E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_477020(float *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  double v11; // st7
  int v12; // edi
  int *v13; // esi
  int v14; // ecx
  double v15; // st6
  int v16; // eax
  int v17; // edx
  double v18; // st6
  int v19; // edi
  int v20; // eax
  int v21; // edi
  double v22; // st7
  double v23; // rt0
  double v24; // st6
  double v25; // st7
  float *v26; // ebx
  unsigned int v27; // edi
  double v28; // st6
  __int16 *v29; // edi
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  int v33; // edx
  int v34; // ecx
  float *v35; // ebx
  int v36; // ecx
  int v37; // edx
  int v38; // esi
  int v39; // edi
  int v40; // ecx
  int v41; // ecx
  double v42; // st7
  double v43; // st6
  int v44; // edi
  __int16 *v45; // edi
  int j; // esi
  int v47; // edi
  int v48; // esi
  unsigned int v49; // edi
  double v50; // st7
  double v51; // rt2
  double v52; // st6
  double v53; // st7
  float *v54; // ebx
  unsigned int v55; // esi
  double v56; // st6
  double v57; // st6
  double v58; // st6
  __int16 *v59; // esi
  __int16 v60; // di
  int v61; // ecx
  int v62; // edx
  int v63; // ecx
  bool v64; // sf
  int k; // eax
  unsigned int v66; // esi
  FILE *v68; // eax
  const char *v69; // [esp+4h] [ebp-6Ch]
  int v71; // [esp+10h] [ebp-60h]
  float *v72; // [esp+14h] [ebp-5Ch]
  int v73; // [esp+18h] [ebp-58h]
  int v74; // [esp+1Ch] [ebp-54h]
  _DWORD *v75; // [esp+20h] [ebp-50h]
  int *v76; // [esp+20h] [ebp-50h]
  unsigned int v77; // [esp+24h] [ebp-4Ch]
  int v78; // [esp+24h] [ebp-4Ch]
  char *v79; // [esp+28h] [ebp-48h]
  _DWORD *v80; // [esp+28h] [ebp-48h]
  int v81; // [esp+30h] [ebp-40h]
  int v82; // [esp+30h] [ebp-40h]
  int v83; // [esp+30h] [ebp-40h]
  int v84; // [esp+34h] [ebp-3Ch]
  int v85; // [esp+34h] [ebp-3Ch]
  int v86; // [esp+38h] [ebp-38h]
  int v87; // [esp+38h] [ebp-38h]
  int v88; // [esp+3Ch] [ebp-34h]
  int v89; // [esp+3Ch] [ebp-34h]
  int v90; // [esp+3Ch] [ebp-34h]
  float v91; // [esp+40h] [ebp-30h]
  int *v92; // [esp+40h] [ebp-30h]
  int v93; // [esp+44h] [ebp-2Ch]
  int v94; // [esp+44h] [ebp-2Ch]
  float v95; // [esp+44h] [ebp-2Ch]
  float v96; // [esp+44h] [ebp-2Ch]
  __int16 *i; // [esp+48h] [ebp-28h]
  int v98; // [esp+48h] [ebp-28h]
  unsigned int v99; // [esp+48h] [ebp-28h]
  __int16 v100; // [esp+48h] [ebp-28h]
  _DWORD *v101; // [esp+48h] [ebp-28h]
  int v102; // [esp+4Ch] [ebp-24h]
  int v103; // [esp+50h] [ebp-20h]
  int v104; // [esp+54h] [ebp-1Ch]
  int v105; // [esp+58h] [ebp-18h]
  int v106; // [esp+5Ch] [ebp-14h]
  int v107; // [esp+60h] [ebp-10h]
  int v108; // [esp+64h] [ebp-Ch]
  int v109; // [esp+68h] [ebp-8h]

  v73 = a4[20] + 1;
  v6 = a4[17];
  v102 = a4[1] - a5;
  v8 = a4[2];
  v74 = (288 - v8) >> 1;
  v72 = a1;
  if ( v8 > v6 )
  {
    v9 = a4[18];
    v103 = a4[17];
    if ( v8 > v9 )
    {
      v10 = v8 - a4[18];
      v104 = v9 - v6;
      v105 = v10;
    }
    else
    {
      v104 = v8 - v6;
      v105 = 0;
    }
  }
  else
  {
    v103 = a4[2];
    v104 = 0;
    v105 = 0;
  }
  if ( a4[4] == 2 )
  {
    v11 = 0.0;
    v12 = 3 * a2;
    v91 = 0.0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    if ( a4[5] )
    {
      v13 = (int *)dword_8E9030[v12];
      v108 = 2;
      v107 = 2;
      v106 = 2;
      v14 = dword_8EB440[v12];
      v109 = -1;
    }
    else
    {
      v13 = (int *)dword_8E9034[v12];
      v109 = -1;
      v108 = -1;
      v107 = -1;
      v106 = -1;
      v14 = dword_8EB444[v12];
    }
    v15 = v91;
    v77 = v14;
    v93 = 0;
    v81 = 0;
    v75 = a4 + 6;
    do
    {
      v71 = *(&v103 + v81);
      v79 = (char *)&unk_4B7698 + 8 * *v75;
      if ( v71 )
      {
        while ( 1 )
        {
          if ( !v93 )
          {
            a1 = &v72[v13[1]];
            v16 = v13[2];
            v93 = *v13;
            v17 = v13[3];
            v13 += 4;
            v86 = v16;
            v88 = v17;
            if ( v16 == 3 )
            {
              v18 = *(float *)(a4[25] + 4 * (*a3++ << v73));
              v84 = 1;
            }
            else
            {
              v18 = *(float *)(a4[v16 + 22] + 4 * (*a3++ << v73));
              v84 = 3;
            }
            v91 = v18;
            v15 = v91;
          }
          v19 = **((__int16 **)v79 + 1);
          for ( i = (__int16 *)*((_DWORD *)v79 + 1); v19 < 0; --v102 )
          {
            ++i;
            if ( sub_475D00() )
              i -= v19;
            v19 = *i;
          }
          v20 = v19 >> 4;
          v21 = v19 & 0xF;
          v98 = v20;
          if ( v20 == 15 )
            break;
          if ( !v20 )
            goto LABEL_25;
          v25 = v15;
          *(&v106 + v86) = v88;
          --v102;
          if ( sub_475D00() )
            v24 = -flt_8DFA70[v98] * v15;
          else
            v24 = flt_8DFA70[v98] * v15;
LABEL_26:
          *a1 = v24;
          v26 = &a1[v84];
          if ( v21 == 15 )
          {
            *(&v106 + v86) = v88;
            v102 += -1 - *(_DWORD *)v79;
            v27 = sub_474DE0(*(_DWORD *)v79);
            if ( sub_475D00() )
            {
              v28 = -flt_8DFAAC[v27] * v91;
              v25 = v91;
            }
            else
            {
              v28 = flt_8DFAAC[v27] * v91;
              v25 = v91;
            }
          }
          else if ( v21 )
          {
            *(&v106 + v86) = v88;
            --v102;
            if ( sub_475D00() )
              v28 = -flt_8DFA70[v21] * v25;
            else
              v28 = flt_8DFA70[v21] * v25;
          }
          else
          {
            v28 = 0.0;
          }
          *v26 = v28;
          --v93;
          v15 = v25;
          v11 = 0.0;
          a1 = &v26[v84];
          if ( !--v71 )
            goto LABEL_41;
        }
        *(&v106 + v86) = v88;
        v102 += -1 - *(_DWORD *)v79;
        v99 = sub_474DE0(*(_DWORD *)v79) + 15;
        if ( sub_475D00() )
          v22 = -flt_8DFA70[v99];
        else
          v22 = flt_8DFA70[v99];
        v15 = v91;
        v11 = v22 * v91;
LABEL_25:
        v23 = v15;
        v24 = v11;
        v25 = v23;
        goto LABEL_26;
      }
LABEL_41:
      ++v75;
      ++v81;
    }
    while ( v81 < 2 );
    if ( !v74 )
      goto LABEL_69;
LABEL_43:
    if ( v102 <= 0 )
      goto LABEL_69;
    v29 = (__int16 *)*(&off_4B779C + 2 * a4[21]);
    v100 = *v29;
    if ( *v29 < 0 )
    {
      while ( 1 )
      {
        ++v29;
        if ( --v102 < 0 )
          break;
        if ( sub_475D00() )
          v29 -= v100;
        v100 = *v29;
        if ( *v29 >= 0 )
          goto LABEL_51;
      }
      ++v102;
      v100 = 0;
    }
LABEL_51:
    LOBYTE(v30) = 0;
    v82 = 0;
    while ( 1 )
    {
      if ( (v30 & 1) != 0 )
      {
        v31 = v86;
      }
      else if ( v93 )
      {
        v31 = v86;
        --v93;
        LOBYTE(v30) = v82;
      }
      else
      {
        a1 = &v72[v13[1]];
        v88 = v13[3];
        v94 = *v13;
        v31 = v13[2];
        v32 = *a3 << v73;
        v13 += 4;
        v86 = v31;
        ++a3;
        v93 = v94 - 1;
        LOBYTE(v30) = v82;
        if ( v31 == 3 )
        {
          v15 = *(float *)(a4[25] + 4 * v32);
          v84 = 1;
        }
        else
        {
          v15 = *(float *)(a4[v31 + 22] + 4 * v32);
          v84 = 3;
        }
      }
      if ( ((8 >> v30) & v100) != 0 )
      {
        *(&v106 + v31) = v88;
        if ( --v102 < 0 )
        {
          ++v102;
LABEL_68:
          if ( !--v74 )
          {
LABEL_69:
            if ( (unsigned int)v13 < v77 )
            {
              v33 = v84;
              v34 = v93;
              do
              {
                if ( !v34 )
                {
                  v34 = *v13;
                  a1 = &v72[v13[1]];
                  v33 = 1;
                  if ( v13[2] != 3 )
                    v33 = 3;
                  v13 += 4;
                }
                *a1 = v11;
                v35 = &a1[v33];
                *v35 = v11;
                --v34;
                a1 = &v35[v33];
              }
              while ( (unsigned int)v13 < v77 );
            }
            v36 = v106;
            a4[12] = v106 + 1;
            v37 = v107;
            a4[13] = v107 + 1;
            v38 = v108;
            a4[14] = v108 + 1;
            v39 = v109;
            a4[15] = v109 + 1;
            if ( v36 <= v37 )
              v36 = v37;
            if ( v36 <= v38 )
              v36 = v38;
            v40 = v36 + 1;
            if ( v40 )
              v41 = dword_8F44A0[14 * a2 + v40];
            else
              v41 = dword_8F4164[23 * a2 + v39];
            a4[16] = v41;
            goto LABEL_145;
          }
          goto LABEL_43;
        }
        if ( sub_475D00() )
          *a1 = -v15;
        else
          *a1 = v15;
      }
      else
      {
        *a1 = v11;
      }
      v30 = v82 + 1;
      a1 += v84;
      v82 = v30;
      if ( v30 >= 4 )
        goto LABEL_68;
    }
  }
  v101 = &unk_4B7D70;
  if ( !a4[19] )
    v101 = &unk_8EE9F0;
  v42 = 0.0;
  v95 = 0.0;
  v43 = (float)0.0;
  v87 = -1;
  v83 = 0;
  v92 = (int *)dword_8E9038[3 * a2];
  v85 = 0;
  v89 = 0;
  v80 = a4 + 6;
  do
  {
    v78 = *(&v103 + v89);
    v76 = (int *)((char *)&unk_4B7698 + 8 * *v80);
    if ( v78 )
    {
      while ( 1 )
      {
        if ( !v85 )
        {
          v85 = *v92;
          v44 = (*v101++ + *a3) << v73;
          v95 = *(float *)(a4[25] + 4 * v44);
          v43 = v95;
          ++a3;
          v83 = v92[1];
          v92 += 2;
        }
        v45 = (__int16 *)v76[1];
        for ( j = *v45; j < 0; --v102 )
        {
          ++v45;
          if ( sub_475D00() )
            v45 -= j;
          j = *v45;
        }
        v47 = j >> 4;
        v48 = j & 0xF;
        if ( v47 == 15 )
          break;
        if ( !v47 )
          goto LABEL_98;
        v53 = v43;
        v87 = v83;
        v54 = a1 + 1;
        --v102;
        if ( sub_475D00() )
          v57 = -flt_8DFA70[v47] * v43;
        else
          v57 = flt_8DFA70[v47] * v43;
        *(v54 - 1) = v57;
LABEL_99:
        if ( v48 == 15 )
        {
          v87 = v83;
          v102 += -1 - *v76;
          v55 = sub_474DE0(*v76);
          if ( sub_475D00() )
          {
            v56 = -flt_8DFAAC[v55] * v95;
            v53 = v95;
          }
          else
          {
            v56 = flt_8DFAAC[v55] * v95;
            v53 = v95;
          }
        }
        else
        {
          if ( v48 )
          {
            v87 = v83;
            a1 = v54 + 1;
            --v102;
            if ( sub_475D00() )
              v58 = -flt_8DFA70[v48] * v53;
            else
              v58 = flt_8DFA70[v48] * v53;
            *(a1 - 1) = v58;
            goto LABEL_116;
          }
          v56 = 0.0;
        }
        *v54 = v56;
        a1 = v54 + 1;
LABEL_116:
        --v85;
        v43 = v53;
        v42 = 0.0;
        if ( !--v78 )
          goto LABEL_117;
      }
      v87 = v83;
      v102 += -1 - *v76;
      v49 = sub_474DE0(*v76);
      if ( sub_475D00() )
        v50 = -flt_8DFAAC[v49];
      else
        v50 = flt_8DFAAC[v49];
      v43 = v95;
      v42 = v50 * v95;
LABEL_98:
      v51 = v43;
      v52 = v42;
      v53 = v51;
      v54 = a1 + 1;
      *(v54 - 1) = v52;
      goto LABEL_99;
    }
LABEL_117:
    ++v80;
    ++v89;
  }
  while ( v89 < 3 );
  if ( !v74 )
    goto LABEL_142;
  do
  {
    if ( v102 <= 0 )
      break;
    v59 = (__int16 *)*(&off_4B779C + 2 * a4[21]);
    v60 = *v59;
    if ( *v59 < 0 )
    {
      while ( 1 )
      {
        ++v59;
        if ( --v102 < 0 )
          break;
        if ( sub_475D00() )
          v59 -= v60;
        v60 = *v59;
        if ( *v59 >= 0 )
          goto LABEL_127;
      }
      ++v102;
      v60 = 0;
    }
LABEL_127:
    LOBYTE(v61) = 0;
    v90 = 0;
    while ( 1 )
    {
      if ( (v61 & 1) == 0 )
      {
        v62 = v85;
        if ( !v85 )
        {
          v63 = v92[1];
          v62 = *v92;
          v92 += 2;
          v83 = v63;
          v96 = *(float *)(a4[25] + 4 * ((*v101++ + *a3) << v73));
          v43 = v96;
          ++a3;
        }
        LOBYTE(v61) = v90;
        v85 = v62 - 1;
      }
      if ( ((8 >> v61) & v60) != 0 )
        break;
      *a1 = v42;
LABEL_138:
      v61 = v90 + 1;
      ++a1;
      v90 = v61;
      if ( v61 >= 4 )
        goto LABEL_141;
    }
    v64 = --v102 < 0;
    v87 = v83;
    if ( !v64 )
    {
      if ( sub_475D00() )
        *a1 = -v43;
      else
        *a1 = v43;
      goto LABEL_138;
    }
    ++v102;
LABEL_141:
    --v74;
  }
  while ( v74 );
LABEL_142:
  for ( k = ((char *)v72 - (char *)a1 + 2304) >> 3; k; *(a1 - 1) = v42 )
  {
    *a1 = v42;
    a1 += 2;
    --k;
  }
  a4[15] = v87 + 1;
  a4[16] = dword_8F4160[23 * a2 + 1 + v87];
LABEL_145:
  if ( v102 > 16 )
  {
    v66 = ((unsigned int)(v102 - 17) >> 4) + 1;
    v102 += -16 * v66;
    do
    {
      sub_474DE0(16);
      --v66;
    }
    while ( v66 );
  }
  if ( v102 > 0 )
  {
    sub_474DE0(v102);
    return 0;
  }
  if ( v102 >= 0 )
    return 0;
  v68 = (FILE *)sub_48C44A("mpg123: Can't rewind stream by %d bits!\n", -v102);
  fprintf(v68 + 2, v69);
  return 1;
}
