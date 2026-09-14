// 函数 0x412f40  sub_412F40  size=0x7DF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_412F40(int a1)
{
  int result; // eax
  int v2; // ebx
  int v3; // edx
  double v4; // st7
  bool v5; // c0
  bool v6; // c3
  int v7; // esi
  int v8; // edi
  int v9; // eax
  double v10; // st7
  char *v11; // esi
  double v12; // st3
  unsigned int v13; // eax
  double v14; // st2
  __int16 v15; // ax
  double v16; // st3
  double v17; // st2
  unsigned int v18; // eax
  double v19; // st1
  double v20; // st2
  unsigned int v21; // eax
  double v22; // st3
  double v23; // st1
  int v24; // eax
  double v25; // st7
  int v26; // esi
  double v27; // st6
  int v28; // edi
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  double v32; // st7
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  double v44; // [esp+4h] [ebp-C058h]
  int *v45; // [esp+10h] [ebp-C04Ch]
  int v46; // [esp+14h] [ebp-C048h]
  int v47; // [esp+1Ch] [ebp-C040h]
  int v48; // [esp+20h] [ebp-C03Ch]
  int v49; // [esp+24h] [ebp-C038h]
  int v50; // [esp+2Ch] [ebp-C030h]
  int v51; // [esp+30h] [ebp-C02Ch]
  int v52; // [esp+34h] [ebp-C028h]
  int v53; // [esp+38h] [ebp-C024h]
  int v54; // [esp+3Ch] [ebp-C020h]
  int v55; // [esp+40h] [ebp-C01Ch]
  int v56; // [esp+44h] [ebp-C018h]
  int v57; // [esp+44h] [ebp-C018h]
  int v58; // [esp+48h] [ebp-C014h]
  size_t v59; // [esp+4Ch] [ebp-C010h]
  int v60; // [esp+4Ch] [ebp-C010h]
  int v61; // [esp+50h] [ebp-C00Ch]
  char *v62; // [esp+50h] [ebp-C00Ch]
  int v63; // [esp+54h] [ebp-C008h]
  signed int v64; // [esp+54h] [ebp-C008h]
  _BYTE Base[2]; // [esp+58h] [ebp-C004h] BYREF
  char v66; // [esp+5Ah] [ebp-C002h] BYREF
  char v67; // [esp+60h] [ebp-BFFCh] BYREF

  result = a1;
  v2 = *(_DWORD *)dword_4C5DF4 + 9208 * a1;
  v46 = *(_DWORD *)v2 + *(_DWORD *)(v2 + 4) + *(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 12);
  if ( v46 )
  {
    dword_4C5DDC = (int)Base;
    dword_4C5DE4 = 32 * (a1 % dword_4C5DEC) + 15;
    v3 = 0;
    dword_4C5DE0 = 32 * (a1 / dword_4C5DEC) + 15;
    v58 = 0;
    if ( dword_870818 > 0 )
    {
      v4 = 10000.0;
      while ( 1 )
      {
        v5 = v4 < *(double *)(v2 + 8 * v3 + 24);
        v6 = v4 == *(double *)(v2 + 8 * v3 + 24);
        v7 = 112 * v3;
        v8 = *(_DWORD *)dword_870814 + 72 * v3;
        dword_4C5DE8 = v3;
        v54 = v8;
        v45 = (int *)((char *)dword_870824 + 112 * v3);
        if ( !v5 && !v6 )
        {
          v35 = 0;
          goto LABEL_85;
        }
        v9 = sub_412490((int *)v2, v3);
        v53 = 0;
        dword_4C5DF0 = 0;
        v51 = v9 / v46 / 10000 + 1;
        sub_464ED0(sub_4121C0);
        if ( !dword_4C5DF0 )
          break;
        v63 = (*(_DWORD *)((char *)dword_870824 + v7) + 128) / 256;
        v61 = 0;
        if ( (int)dword_4C5DF0 <= 0 )
          break;
        v10 = (double)v51;
        v56 = (*(_DWORD *)((char *)dword_870824 + v7) + 128) / 256 / 4;
        v11 = &v66;
        v59 = dword_4C5DF0;
        do
        {
          v12 = (double)((*(__int16 *)v11 - 20) & ((*(__int16 *)v11 - 20 <= 0) - 1));
          v13 = 2;
          v14 = 1.0;
          while ( 1 )
          {
            if ( (v13 & 1) != 0 )
              v14 = v14 * v12;
            v13 >>= 1;
            if ( !v13 )
              break;
            v12 = v12 * v12;
          }
          v15 = *((_WORD *)v11 - 1);
          v16 = v14 * (double)(*(_DWORD *)(v2 + 16) + 30000) / 60000.0;
          if ( *(_WORD *)(v2 + 6088) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6092);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6100) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6104);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6112) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6116);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6124) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6128);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6136) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6140);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6148) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6152);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6160) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6164);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6172) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6176);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6184) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6188);
          else
            *(_DWORD *)(v11 + 14) = 0;
          if ( *(_WORD *)(v2 + 6196) == v15 )
            *(_DWORD *)(v11 + 14) = *(_DWORD *)(v2 + 6200);
          else
            *(_DWORD *)(v11 + 14) = 0;
          v17 = (double)v63 * v10 * 5.0 * 0.25;
          v18 = 2;
          v19 = 1.0;
          while ( 1 )
          {
            if ( (v18 & 1) != 0 )
              v19 = v19 * v17;
            v18 >>= 1;
            if ( !v18 )
              break;
            v17 = v17 * v17;
          }
          v20 = v19;
          v21 = 2;
          v22 = v16 + (double)(v56 + *(_DWORD *)(v11 + 6)) * v10;
          v23 = 1.0;
          while ( 1 )
          {
            if ( (v21 & 1) != 0 )
              v23 = v23 * v22;
            v21 >>= 1;
            if ( !v21 )
              break;
            v22 = v22 * v22;
          }
          v24 = (int)(v20
                    * 10000.0
                    / v23
                    * (double)(*((__int16 *)v11 + 5) + 100)
                    * (double)(*(_DWORD *)(v2 + 16) + 30000)
                    / 9000000.0
                    * (double)(*((__int16 *)v11 + 6) + 5)
                    / 85.0
                    * (double)(*(_DWORD *)(v11 + 14) + 100)
                    / 100.0);
          v61 += v24;
          *(_DWORD *)(v11 + 18) = v24;
          v11 += 24;
          --v59;
        }
        while ( v59 );
        v4 = 10000.0;
        if ( v61 > 0 )
        {
          qsort(Base, dword_4C5DF0, 0x18u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_412360);
          v64 = 0;
          if ( (int)dword_4C5DF0 <= 0 )
            break;
          v25 = (double)v61;
          v62 = &v67;
          v44 = v25;
          v4 = 10000.0;
          do
          {
            v26 = (int)((double)*((int *)v62 + 3)
                      * (*(double *)(v2 + 8 * v58 + 24)
                       * (double)*((int *)v62 + 3))
                      / v44
                      / v4
                      / v4);
            v27 = (double)*v45
                * 0.00390625
                * (double)v26
                * (double)*(int *)(v2 + 16)
                / 30000.0
                * (double)dword_4D0B34
                / 100.0
                / (double)*(int *)v62;
            if ( v26 > (int)v27 )
              v26 = (int)v27;
            if ( v26 > 0 )
            {
              v28 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)v62 - 4);
              v29 = v26;
              v55 = v26;
              if ( v26 > *(_DWORD *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v28 + 2 * v58 + 240) + 20)
                       + *(_DWORD *)(v54 + 24) )
              {
                v29 = *(_DWORD *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v28 + 2 * v58 + 240) + 20)
                    + *(_DWORD *)(v54 + 24);
                v55 = v29;
              }
              v30 = (*v45 + 128) / 256;
              v50 = 1;
              if ( 50000 / v30 >= 1 )
                v50 = 50000 / v30;
              if ( v29 > 0 )
              {
                v48 = v58 < 0 ? 0 : v58;
                do
                {
                  v31 = v50;
                  if ( v55 <= v50 )
                  {
                    v31 = v55;
                    v55 = 0;
                  }
                  else
                  {
                    v55 -= v50;
                  }
                  v60 = v31;
                  v57 = 10000 * v31;
                  v52 = 0;
                  v32 = (double)(10000 * v31);
                  *(double *)(v2 + 8 * v48 + 24) = *(double *)(v2 + 8 * v48 + 24) - v32;
                  *(double *)(32 * v48 + v2 + 872) = v32 + *(double *)(32 * v48 + v2 + 872);
                  do
                  {
                    v47 = sub_4640D0() % *(_DWORD *)(v28 + 24);
                    v49 = sub_4640D0() % *(_DWORD *)(v28 + 28);
                    v33 = sub_4640D0() % 4;
                    v34 = sub_412390((_DWORD *)v2);
                    if ( sub_42D1B0(*((__int16 *)v62 - 4), v47, v49, v33, v34, v58, a1, v60, v57, *(_DWORD *)v62) != -1 )
                      break;
                    ++v52;
                  }
                  while ( v52 < 100 );
                  if ( v52 != 100 )
                    v53 += v60;
                }
                while ( v55 > 0 );
                v4 = 10000.0;
              }
            }
            v62 += 24;
            ++v64;
          }
          while ( v64 < (int)dword_4C5DF0 );
        }
LABEL_80:
        v35 = v51;
        v8 = v54;
        if ( v51 <= 0 )
        {
          v3 = v58;
LABEL_85:
          if ( *(_BYTE *)(v8 + 13) )
            v35 = 50;
          goto LABEL_87;
        }
        v3 = v58;
        if ( 50 * v53 / v51 <= 100 )
          v35 = 50 * v53 / v51;
        else
          v35 = 100;
LABEL_87:
        *(_DWORD *)(v2 + 5976) += v35 * *(__int16 *)(v8 + 56);
        *(_DWORD *)(v2 + 5980) += v35 * *(__int16 *)(v8 + 58);
        *(_DWORD *)(v2 + 5984) += v35 * *(__int16 *)(v8 + 60);
        *(_DWORD *)(v2 + 5988) += v35 * *(__int16 *)(v8 + 62);
        v58 = ++v3;
        if ( v3 >= dword_870818 )
          goto LABEL_88;
      }
      v4 = 10000.0;
      goto LABEL_80;
    }
LABEL_88:
    v36 = *(_DWORD *)(v2 + 5976) / dword_870778;
    v37 = 3 * *(_DWORD *)(v2 + 5960);
    *(_DWORD *)(v2 + 5976) = 0;
    *(_DWORD *)(v2 + 5960) = (v37 + v36) / 4;
    v38 = *(_DWORD *)(v2 + 5980) / dword_87077C;
    v39 = 3 * *(_DWORD *)(v2 + 5964);
    *(_DWORD *)(v2 + 5980) = 0;
    v40 = 3 * *(_DWORD *)(v2 + 5968);
    *(_DWORD *)(v2 + 5964) = (v39 + v38) / 4;
    v41 = *(_DWORD *)(v2 + 5984) / dword_870780;
    *(_DWORD *)(v2 + 5984) = 0;
    *(_DWORD *)(v2 + 5968) = (v40 + v41) / 4;
    v42 = *(_DWORD *)(v2 + 5988) / dword_870784;
    v43 = *(_DWORD *)(v2 + 5972);
    *(_DWORD *)(v2 + 5988) = 0;
    result = (3 * v43 + v42) / 4;
    *(_DWORD *)(v2 + 5972) = result;
  }
  return result;
}
