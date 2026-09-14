// 函数 0x477950  sub_477950  size=0x5FF  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_477950@<eax>(int a1@<eax>, int a2@<ecx>, int a3, int a4, _DWORD *a5, int a6)
{
  char *v6; // esi
  int v7; // edi
  int v8; // eax
  int result; // eax
  float v10; // eax
  int v11; // edx
  char *v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  double v16; // st7
  double v17; // st6
  float *v18; // eax
  unsigned int v19; // edx
  double v20; // st5
  double v21; // st5
  double v22; // st5
  double v23; // st5
  float *v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // esi
  double v28; // st7
  double v29; // st6
  unsigned int v30; // ecx
  float *v31; // eax
  double v32; // st5
  double v33; // st5
  double v34; // st5
  double v35; // st5
  float *v36; // eax
  int v37; // esi
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  double v41; // st7
  double v42; // st6
  unsigned int v43; // esi
  float *v44; // eax
  double v45; // st5
  double v46; // st5
  double v47; // st5
  double v48; // st5
  int v49; // ebx
  int v50; // ecx
  int v51; // edx
  int v52; // eax
  double v53; // st7
  double v54; // st6
  unsigned int v55; // esi
  float *v56; // eax
  double v57; // st5
  double v58; // st5
  double v59; // st5
  double v60; // st5
  int v61; // esi
  double v62; // st7
  double v63; // st6
  unsigned int v64; // edx
  double v65; // st5
  double v66; // st5
  double v67; // st5
  double v68; // st5
  _DWORD *v69; // [esp+10h] [ebp-1Ch]
  int v70; // [esp+10h] [ebp-1Ch]
  int v71; // [esp+14h] [ebp-18h]
  BOOL v72; // [esp+18h] [ebp-14h]
  int v73; // [esp+1Ch] [ebp-10h]
  char *v74; // [esp+20h] [ebp-Ch]
  float *v75; // [esp+24h] [ebp-8h]
  float *v76; // [esp+28h] [ebp-4h]
  float v77; // [esp+3Ch] [ebp+10h]
  float v78; // [esp+3Ch] [ebp+10h]
  float v79; // [esp+3Ch] [ebp+10h]
  float v80; // [esp+3Ch] [ebp+10h]
  float v81; // [esp+3Ch] [ebp+10h]
  float v82; // [esp+3Ch] [ebp+10h]
  float v83; // [esp+40h] [ebp+14h]
  float v84; // [esp+40h] [ebp+14h]
  float v85; // [esp+40h] [ebp+14h]
  float v86; // [esp+40h] [ebp+14h]
  int v87; // [esp+40h] [ebp+14h]
  char *v88; // [esp+40h] [ebp+14h]

  v6 = (char *)&unk_4B77A8 + 144 * a1;
  v7 = 0;
  v74 = v6;
  if ( a6 )
  {
    v8 = (a5[3] & 1) << 6;
    if ( a2 )
    {
      v76 = (float *)((char *)&unk_8EA2C8 + v8);
      v75 = (float *)((char *)&unk_8EA950 + v8);
    }
    else
    {
      v76 = (float *)((char *)flt_8EB4B0 + v8);
      v75 = (float *)((char *)&unk_8EE968 + v8);
    }
  }
  else if ( a2 )
  {
    v76 = flt_8EB530;
    v75 = flt_8ECB60;
  }
  else
  {
    v76 = flt_8EADD0;
    v75 = flt_8ED5E0;
  }
  if ( a5[4] == 2 )
  {
    v72 = a5[5] != 0;
    result = (int)(a5 + 12);
    v73 = 0;
    v69 = a5 + 12;
    do
    {
      v10 = *(float *)result;
      if ( SLODWORD(v10) > 3 )
        v72 = 0;
      if ( SLODWORD(v10) < 12 )
      {
        v11 = 3 * LODWORD(v10);
        v71 = 3 * LODWORD(v10);
        v12 = &v74[2 * LODWORD(v10) + 90];
        do
        {
          v13 = *(_DWORD *)(a4 + 4 * (v7 + v11 - a5[5]));
          if ( v13 != 7 )
          {
            v14 = *((__int16 *)v12 + 14);
            v15 = v7 + *(__int16 *)v12;
            v16 = v76[v13];
            v17 = v75[v13];
            if ( v14 >= 4 )
            {
              v18 = (float *)(a3 + 4 * v15 + 12);
              v19 = ((unsigned int)(v14 - 4) >> 2) + 1;
              v14 -= 4 * v19;
              v15 += 12 * v19;
              do
              {
                v20 = *(v18 - 3);
                v18 += 12;
                --v19;
                v83 = v20;
                *(v18 - 15) = v83 * v16;
                v18[561] = v83 * v17;
                v21 = *(v18 - 12);
                *(v18 - 12) = v21 * v16;
                v18[564] = v21 * v17;
                v22 = *(v18 - 9);
                *(v18 - 9) = v22 * v16;
                v18[567] = v22 * v17;
                v23 = *(v18 - 6);
                *(v18 - 6) = v23 * v16;
                v18[570] = v23 * v17;
              }
              while ( v19 );
              v11 = v71;
            }
            v7 = v73;
            if ( v14 > 0 )
            {
              v24 = (float *)(a3 + 4 * v15);
              do
              {
                --v14;
                v84 = *v24;
                v24 += 3;
                *(v24 - 3) = v84 * v16;
                v24[573] = v84 * v17;
              }
              while ( v14 > 0 );
            }
          }
          v11 += 3;
          v12 += 2;
          v71 = v11;
        }
        while ( v11 < 36 );
      }
      v25 = *(_DWORD *)(a4 + 4 * (v7 - a5[5]) + 132);
      v26 = *((__int16 *)v74 + 71);
      v27 = v7 + *((__int16 *)v74 + 57);
      if ( v25 != 7 )
      {
        v28 = v76[v25];
        v29 = v75[v25];
        if ( v26 >= 4 )
        {
          v30 = ((unsigned int)(v26 - 4) >> 2) + 1;
          v26 -= 4 * v30;
          v31 = (float *)(a3 + 4 * v27 + 12);
          v27 += 12 * v30;
          do
          {
            v32 = *(v31 - 3);
            v31 += 12;
            --v30;
            v85 = v32;
            *(v31 - 15) = v85 * v28;
            v31[561] = v85 * v29;
            v33 = *(v31 - 12);
            *(v31 - 12) = v33 * v28;
            v31[564] = v33 * v29;
            v34 = *(v31 - 9);
            *(v31 - 9) = v34 * v28;
            v31[567] = v34 * v29;
            v35 = *(v31 - 6);
            *(v31 - 6) = v35 * v28;
            v31[570] = v35 * v29;
          }
          while ( v30 );
        }
        if ( v26 > 0 )
        {
          v36 = (float *)(a3 + 4 * v27);
          do
          {
            --v26;
            v86 = *v36;
            v36 += 3;
            *(v36 - 3) = v86 * v28;
            v36[573] = v86 * v29;
          }
          while ( v26 > 0 );
        }
      }
      ++v7;
      result = (int)(v69 + 1);
      v73 = v7;
      ++v69;
    }
    while ( v7 < 3 );
    if ( v72 )
    {
      v37 = a5[15];
      result = (int)v74;
      v38 = *(__int16 *)&v74[2 * v37];
      v87 = v37;
      if ( v37 < 8 )
      {
        result = (int)&v74[2 * v37 + 46];
        v70 = result;
        do
        {
          v39 = *(__int16 *)result;
          v40 = *(_DWORD *)(a4 + 4 * v37);
          if ( v40 == 7 )
          {
            v38 += v39;
          }
          else
          {
            v41 = v76[v40];
            v42 = v75[v40];
            if ( v39 >= 4 )
            {
              v43 = ((unsigned int)(v39 - 4) >> 2) + 1;
              v44 = (float *)(a3 + 4 * v38 + 4);
              v38 += 4 * v43;
              v39 -= 4 * v43;
              do
              {
                v45 = *(v44 - 1);
                v44 += 4;
                --v43;
                v77 = v45;
                *(v44 - 5) = v77 * v41;
                v44[571] = v77 * v42;
                v46 = *(v44 - 4);
                *(v44 - 4) = v46 * v41;
                v44[572] = v46 * v42;
                v47 = *(v44 - 3);
                *(v44 - 3) = v47 * v41;
                v44[573] = v47 * v42;
                v48 = *(v44 - 2);
                *(v44 - 2) = v48 * v41;
                v44[574] = v48 * v42;
              }
              while ( v43 );
              v37 = v87;
            }
            for ( ; v39 > 0; *(float *)(a3 + 4 * v38 + 2300) = v78 * v42 )
            {
              --v39;
              v78 = *(float *)(a3 + 4 * v38++);
              *(float *)(a3 + 4 * v38 - 4) = v78 * v41;
            }
          }
          ++v37;
          result = v70 + 2;
          v87 = v37;
          v70 += 2;
        }
        while ( v37 < 8 );
      }
    }
  }
  else
  {
    v49 = a5[15];
    v50 = *(__int16 *)&v6[2 * v49];
    if ( v49 < 21 )
    {
      v88 = &v6[2 * v49 + 46];
      do
      {
        v51 = *(__int16 *)v88;
        v52 = *(_DWORD *)(a4 + 4 * v49);
        if ( v52 == 7 )
        {
          v50 += v51;
        }
        else
        {
          v53 = v76[v52];
          v54 = v75[v52];
          if ( v51 >= 4 )
          {
            v55 = ((unsigned int)(v51 - 4) >> 2) + 1;
            v56 = (float *)(a3 + 4 * v50 + 4);
            v50 += 4 * v55;
            v51 -= 4 * v55;
            do
            {
              v57 = *(v56 - 1);
              v56 += 4;
              --v55;
              v79 = v57;
              *(v56 - 5) = v79 * v53;
              v56[571] = v79 * v54;
              v58 = *(v56 - 4);
              *(v56 - 4) = v58 * v53;
              v56[572] = v58 * v54;
              v59 = *(v56 - 3);
              *(v56 - 3) = v59 * v53;
              v56[573] = v59 * v54;
              v60 = *(v56 - 2);
              *(v56 - 2) = v60 * v53;
              v56[574] = v60 * v54;
            }
            while ( v55 );
          }
          for ( ; v51 > 0; *(float *)(a3 + 4 * v50 + 2300) = v80 * v54 )
          {
            --v51;
            v80 = *(float *)(a3 + 4 * v50++);
            *(float *)(a3 + 4 * v50 - 4) = v80 * v53;
          }
          v6 = v74;
        }
        v88 += 2;
        ++v49;
      }
      while ( v49 < 21 );
    }
    result = *(_DWORD *)(a4 + 80);
    if ( result != 7 )
    {
      v61 = *((__int16 *)v6 + 44);
      v62 = v76[result];
      v63 = v75[result];
      if ( v61 >= 4 )
      {
        v64 = ((unsigned int)(v61 - 4) >> 2) + 1;
        result = a3 + 4 * v50 + 4;
        v50 += 4 * v64;
        v61 -= 4 * v64;
        do
        {
          v65 = *(float *)(result - 4);
          result += 16;
          --v64;
          v81 = v65;
          *(float *)(result - 20) = v81 * v62;
          *(float *)(result + 2284) = v81 * v63;
          v66 = *(float *)(result - 16);
          *(float *)(result - 16) = v66 * v62;
          *(float *)(result + 2288) = v66 * v63;
          v67 = *(float *)(result - 12);
          *(float *)(result - 12) = v67 * v62;
          *(float *)(result + 2292) = v67 * v63;
          v68 = *(float *)(result - 8);
          *(float *)(result - 8) = v68 * v62;
          *(float *)(result + 2296) = v68 * v63;
        }
        while ( v64 );
      }
      if ( v61 > 0 )
      {
        result = a3 + 4 * v50;
        do
        {
          --v61;
          v82 = *(float *)result;
          result += 4;
          *(float *)(result - 4) = v82 * v62;
          *(float *)(result + 2300) = v82 * v63;
        }
        while ( v61 > 0 );
      }
    }
  }
  return result;
}
