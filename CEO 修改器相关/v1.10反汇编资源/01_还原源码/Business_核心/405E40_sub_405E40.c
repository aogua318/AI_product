// 函数 0x405e40  sub_405E40  size=0x78A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_405E40(int this, int a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  _BYTE *v7; // edx
  double *v8; // esi
  double v9; // st7
  bool v10; // zf
  double v11; // st7
  int v12; // esi
  _BYTE *v13; // edi
  int v14; // ebx
  double *v15; // edx
  double v16; // st7
  int v17; // edx
  double v18; // st7
  int v19; // ebx
  int v20; // esi
  int v21; // edi
  __int16 v22; // ax
  double v23; // st5
  double v24; // st6
  int v25; // eax
  int v26; // ecx
  __int16 *v27; // eax
  double v28; // st4
  __int16 v29; // dx
  double v30; // rt0
  double v31; // st5
  double v32; // st6
  double v33; // st7
  unsigned int v34; // ecx
  __int16 v35; // ax
  double v36; // st5
  unsigned int v37; // eax
  double v38; // st5
  double v39; // st3
  double v40; // st5
  double v41; // st4
  double v42; // st5
  unsigned int v43; // eax
  double v44; // st6
  double v45; // st4
  double v46; // st6
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  __int16 *v50; // eax
  double v51; // st6
  double v52; // st5
  __int16 v53; // dx
  double v54; // st7
  unsigned int v55; // ecx
  __int16 v56; // ax
  double v57; // st6
  unsigned int v58; // eax
  double v59; // st6
  double v60; // st4
  double v61; // st6
  double v62; // st5
  double v63; // st6
  unsigned int v64; // eax
  double v65; // st5
  double v66; // st4
  double v67; // st6
  int result; // eax
  double v69; // [esp+Ch] [ebp-6C8h]
  int v70; // [esp+10h] [ebp-6C4h]
  double v71; // [esp+14h] [ebp-6C0h]
  unsigned int v72; // [esp+18h] [ebp-6BCh]
  int v74; // [esp+20h] [ebp-6B4h]
  unsigned int v75; // [esp+24h] [ebp-6B0h]
  int v76; // [esp+24h] [ebp-6B0h]
  int v77; // [esp+28h] [ebp-6ACh]
  int v78; // [esp+2Ch] [ebp-6A8h]
  double v79[106]; // [esp+30h] [ebp-6A4h] BYREF
  double v80[106]; // [esp+380h] [ebp-354h] BYREF

  v2 = this - *(_DWORD *)dword_4C5DF4;
  v77 = v2 / 9208 / dword_4C5DEC;
  v3 = v2 / 9208 % dword_4C5DEC;
  memset(v80, 0, sizeof(v80));
  memset(v79, 0, sizeof(v79));
  v75 = v3 - 1;
  v78 = v3 + 1;
  if ( !__OFSUB__(v3 - 1, v3 + 1) || v3 - 1 == v3 + 1 )
  {
    do
    {
      if ( v75 < dword_4C5DEC )
      {
        v72 = v77 - 1;
        if ( !__OFSUB__(v77 - 1, v77 + 1) || v77 - 1 == v77 + 1 )
        {
          v4 = *(_DWORD *)dword_4C5DF4 + 9208 * (v75 + v72 * dword_4C5DEC);
          v70 = 9208 * dword_4C5DEC;
          do
          {
            if ( v72 < dword_4C5DD8 )
            {
              v5 = 0;
              if ( dword_870818 >= 4 )
              {
                v6 = 7064 - (_DWORD)v80;
                v7 = (_BYTE *)(*(_DWORD *)dword_870814 + 85);
                do
                {
                  if ( *(v7 - 72) )
                  {
                    v8 = &v80[v5];
                    v9 = *(double *)((char *)v8 + v6 + v4);
                    v6 = 7064 - (_DWORD)v80;
                    *v8 = v9 + *v8;
                  }
                  v10 = *v7 == 0;
                  v79[v5] = *(double *)((char *)&v80[v5] + v4 + 7912 - (_DWORD)v80) + v79[v5];
                  if ( !v10 )
                    v80[v5 + 1] = *(double *)(v4 + 8 * v5 + 7072) + v80[v5 + 1];
                  v10 = v7[72] == 0;
                  v79[v5 + 1] = *(double *)(v4 + 8 * v5 + 7920) + v79[v5 + 1];
                  if ( !v10 )
                    v80[v5 + 2] = *(double *)(v4 + 8 * v5 + 7080) + v80[v5 + 2];
                  v10 = v7[144] == 0;
                  v79[v5 + 2] = *(double *)(v4 + 8 * v5 + 7928) + v79[v5 + 2];
                  if ( !v10 )
                    v80[v5 + 3] = *(double *)(v4 + 8 * v5 + 7088) + v80[v5 + 3];
                  v11 = *(double *)(v4 + 8 * v5 + 7936) + v79[v5 + 3];
                  v5 += 4;
                  v12 = dword_870818 - 3;
                  v7 += 288;
                  *((double *)&v77 + v5) = v11;
                }
                while ( v5 < v12 );
              }
              if ( v5 < dword_870818 )
              {
                v13 = (_BYTE *)(*(_DWORD *)dword_870814 + 72 * v5 + 13);
                v14 = 7064 - (_DWORD)v80;
                do
                {
                  if ( *v13 )
                  {
                    v15 = &v80[v5];
                    v16 = *(double *)((char *)v15 + v14 + v4);
                    v14 = 7064 - (_DWORD)v80;
                    *v15 = v16 + *v15;
                  }
                  v17 = v4 + 7912 - (_DWORD)v80 + 8 * v5++;
                  v13 += 72;
                  *((double *)&v77 + v5) = *(double *)((char *)v80 + v17) + *((double *)&v77 + v5);
                }
                while ( v5 < dword_870818 );
              }
            }
            v4 += v70;
            ++v72;
          }
          while ( (int)v72 <= v77 + 1 );
        }
      }
      ++v75;
    }
    while ( (int)v75 <= v78 );
  }
  v18 = 0.0;
  v69 = 0.0;
  v71 = 0.0;
  v19 = *(_DWORD *)dword_4B9910 + 54 * a2;
  v20 = 0;
  v74 = -1;
  v76 = -1;
  if ( dword_870818 > 0 )
  {
    while ( 1 )
    {
      v21 = *(_DWORD *)dword_870814 + 72 * v20;
      if ( !*((_BYTE *)dword_870824 + 112 * v20 + 11) )
        goto LABEL_122;
      if ( *(_BYTE *)(v21 + 13) )
      {
        if ( v18 < v80[v20] )
        {
          sub_4045A0(a2, v20, 1);
          if ( dbl_4C2CD0 >= v18 )
          {
            v22 = word_4B9918[v20];
            if ( v22 || word_4B9E20[v20] <= 0 || word_4B9EF4[v20] )
            {
              v25 = word_4B9C78[v20] + word_4B9D4C[v20] + 4 * v22;
              v77 = 1;
              if ( v25 >= 1 )
                v77 = v25;
              v24 = v80[v20] / (double)v77;
              v23 = 100.0;
            }
            else
            {
              v23 = 100.0;
              v24 = v80[v20] * 100.0;
            }
            v26 = 0;
            v27 = (__int16 *)&unk_52DBA8;
            do
            {
              if ( *(v27 - 94940) == v20 )
                ++v26;
              if ( *v27 == v20 )
                ++v26;
              if ( v27[94940] == v20 )
                ++v26;
              if ( v27[189880] == v20 )
                ++v26;
              if ( v27[284820] == v20 )
                ++v26;
              v27 += 474700;
            }
            while ( (int)v27 < (int)word_8CCE08 );
            v78 = (v26 + 1) * (v26 + 1);
            v28 = (double)v78;
            v29 = word_4C27D8[v20];
            v78 = *(__int16 *)(v19 + 2 * *(char *)(v21 + 12));
            v30 = v23;
            v31 = v24 / v28;
            v32 = v30;
            v33 = v31 / v18 * (double)v78;
            if ( word_4C2B28[v20] == v29 )
              v33 = v33 * v32;
            if ( v29 )
            {
              LOWORD(v34) = word_4C2980[v20];
              if ( (_WORD)v34 )
              {
                v35 = word_4C2A54[v20];
                if ( v35 <= 50 )
                {
                  v33 = 0.0;
                  v42 = 1.0;
                }
                else
                {
                  v78 = v35;
                  v34 = (__int16)v34;
                  v36 = (double)v35;
                  v37 = v34;
                  v38 = v36 / v32;
                  if ( (v34 & 0x8000u) != 0 )
                    v37 = -(__int16)v34;
                  v39 = 1.0;
                  while ( 1 )
                  {
                    if ( (v37 & 1) != 0 )
                      v39 = v39 * v38;
                    v37 >>= 1;
                    if ( !v37 )
                      break;
                    v38 = v38 * v38;
                  }
                  v40 = v39;
                  if ( (v34 & 0x8000u) != 0 )
                    v40 = 1.0 / v39;
                  v41 = v40;
                  v42 = 1.0;
                  v33 = v33 * v41;
                }
              }
              else
              {
                v42 = 1.0;
              }
              v78 = word_4C28AC[v20];
              v43 = v29;
              v44 = (double)v78 / v32;
              if ( v29 < 0 )
                v43 = -v29;
              v45 = v42;
              while ( 1 )
              {
                if ( (v43 & 1) != 0 )
                  v45 = v45 * v44;
                v43 >>= 1;
                if ( !v43 )
                  break;
                v44 = v44 * v44;
              }
              v46 = v45;
              if ( v29 < 0 )
                v46 = v42 / v45;
              v33 = v33 * v46;
            }
            if ( v69 < v33 )
            {
              v69 = v33;
              v74 = v20;
            }
          }
        }
      }
      if ( v79[v20] <= 0.0 )
        goto LABEL_122;
      sub_4045A0(a2, v20, 0);
      if ( dbl_4C2CD0 < 0.0 )
        goto LABEL_122;
      v47 = word_4B9918[v20];
      v48 = word_4B9C78[v20];
      v77 = 1;
      if ( v48 + 4 * v47 >= 1 )
        v77 = v48 + 4 * v47;
      v49 = 0;
      v50 = (__int16 *)&unk_52DBA8;
      v51 = v79[v20] / (double)v77;
      do
      {
        if ( *(v50 - 94940) == v20 )
          ++v49;
        if ( *v50 == v20 )
          ++v49;
        if ( v50[94940] == v20 )
          ++v49;
        if ( v50[189880] == v20 )
          ++v49;
        if ( v50[284820] == v20 )
          ++v49;
        v50 += 474700;
      }
      while ( (int)v50 < (int)word_8CCE08 );
      v78 = (v49 + 1) * (v49 + 1);
      v52 = (double)v78;
      v53 = word_4C27D8[v20];
      v78 = *(__int16 *)(v19 + 2 * *(char *)(v21 + 12));
      v54 = v51 / v52 / 0.0 * (double)v78;
      if ( v53 )
        break;
LABEL_120:
      if ( v71 < v54 )
      {
        v71 = v54;
        v76 = v20;
      }
LABEL_122:
      v18 = 0.0;
      if ( ++v20 >= dword_870818 )
        goto LABEL_123;
    }
    LOWORD(v55) = word_4C2980[v20];
    if ( (_WORD)v55 )
    {
      v56 = word_4C2A54[v20];
      if ( v56 > 50 )
      {
        v78 = v56;
        v55 = (__int16)v55;
        v57 = (double)v56;
        v58 = v55;
        v59 = v57 / 100.0;
        if ( (v55 & 0x8000u) != 0 )
          v58 = -(__int16)v55;
        v60 = 1.0;
        while ( 1 )
        {
          if ( (v58 & 1) != 0 )
            v60 = v60 * v59;
          v58 >>= 1;
          if ( !v58 )
            break;
          v59 = v59 * v59;
        }
        v61 = v60;
        if ( (v55 & 0x8000u) != 0 )
          v61 = 1.0 / v60;
        v62 = v61;
        v63 = 1.0;
        v54 = v54 * v62;
        goto LABEL_109;
      }
      v54 = 0.0;
    }
    v63 = 1.0;
LABEL_109:
    v78 = word_4C28AC[v20];
    v64 = v53;
    v65 = (double)v78 / 100.0;
    if ( v53 < 0 )
      v64 = -v53;
    v66 = v63;
    while ( 1 )
    {
      if ( (v64 & 1) != 0 )
        v66 = v66 * v65;
      v64 >>= 1;
      if ( !v64 )
        break;
      v65 = v65 * v65;
    }
    if ( v53 >= 0 )
      v67 = v66;
    else
      v67 = v63 / v66;
    v54 = v54 * v67;
    goto LABEL_120;
  }
LABEL_123:
  result = this;
  *(_DWORD *)(this + 8760) = v74;
  *(_DWORD *)(this + 8764) = v76;
  if ( v74 == -1 )
    *(double *)(this + 8768) = v18;
  else
    *(double *)(this + 8768) = v69 / (double)*(__int16 *)(v19 + 2 * *(char *)(*(_DWORD *)dword_870814 + 72 * v74 + 12));
  if ( v76 != -1 )
    v18 = v71 / (double)*(__int16 *)(v19 + 2 * *(char *)(*(_DWORD *)dword_870814 + 72 * v76 + 12));
  *(double *)(this + 8776) = v18;
  return result;
}
