// 函数 0x4790c0  sub_4790C0  size=0x5C5  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4790C0(_DWORD *a1, int a2, int **a3)
{
  _DWORD *v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // esi
  int *v9; // edi
  int v10; // eax
  int v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st6
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st6
  double v27; // st7
  double v28; // st6
  double v29; // st7
  double v30; // st6
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // ecx
  float *v34; // eax
  int v35; // ecx
  double v36; // st7
  float *v37; // eax
  int v38; // ecx
  double v39; // st7
  int v40; // ebx
  int v41; // esi
  int v42; // edi
  float *v43; // edx
  char *v44; // esi
  int v45; // eax
  int v46; // eax
  int v47; // ebx
  int v48; // [esp+Ch] [ebp-324h]
  int v49; // [esp+14h] [ebp-31Ch]
  int v50; // [esp+1Ch] [ebp-314h]
  int v51; // [esp+20h] [ebp-310h]
  int v52; // [esp+2Ch] [ebp-304h]
  int v53; // [esp+30h] [ebp-300h]
  int v54; // [esp+34h] [ebp-2FCh]
  int *v55; // [esp+38h] [ebp-2F8h] BYREF
  int v56; // [esp+3Ch] [ebp-2F4h]
  int v57; // [esp+40h] [ebp-2F0h]
  float v58; // [esp+44h] [ebp-2ECh]
  float v59; // [esp+48h] [ebp-2E8h]
  size_t Size[54]; // [esp+4Ch] [ebp-2E4h] BYREF
  _BYTE v61[208]; // [esp+124h] [ebp-20Ch] BYREF
  int v62[39]; // [esp+1F4h] [ebp-13Ch] BYREF
  int v63[39]; // [esp+290h] [ebp-A0h] BYREF

  v3 = a1;
  v4 = a1[13];
  v5 = a1[4];
  v6 = a1[6];
  v57 = 0;
  v48 = v5;
  v56 = v6;
  v52 = v4;
  if ( v5 == 1 )
  {
    v53 = 1;
    v56 = 0;
    v6 = 0;
  }
  else
  {
    v53 = (v6 < 0) + 1;
  }
  if ( a1[16] == 1 )
  {
    v7 = a1[17] & 2;
    v54 = a1[17] & 1;
    v51 = v7;
  }
  else
  {
    v54 = 0;
    v51 = 0;
    v7 = 0;
  }
  if ( a1[7] )
  {
    v50 = 1;
    sub_476B30(Size, v5, v7, v4, v6);
  }
  else
  {
    v50 = 2;
    sub_4768D0(Size, v5, v7, v4, v6);
  }
  if ( sub_4753A0(Size[0]) == -1 )
    return 0;
  v49 = 0;
  v9 = (int *)v61;
  v55 = (int *)v61;
  while ( 1 )
  {
    v10 = v3[7] ? sub_476F30(v9 - 52, v62, 0) : sub_476D50(v62, v9 - 52);
    if ( sub_477020(flt_8E90C8, v52, v62, v9 - 52, v10) )
      break;
    if ( v48 == 2 )
    {
      if ( v3[7] )
        v11 = sub_476F30(v9, v63, v54);
      else
        v11 = sub_476D50(v63, v9);
      if ( sub_477020(flt_8E99C8, v52, v63, v9, v11) )
        return v57;
      if ( v7 )
      {
        v12 = flt_8E90C8;
        do
        {
          v58 = *v12;
          v59 = v12[576];
          v13 = v58;
          v14 = v59;
          v12[576] = v58 - v59;
          *v12 = v13 + v14;
          v58 = v12[1];
          v59 = v12[577];
          v15 = v58;
          v16 = v59;
          v12[577] = v58 - v59;
          v12[1] = v15 + v16;
          v58 = v12[2];
          v59 = v12[578];
          v17 = v58;
          v18 = v59;
          v12[578] = v58 - v59;
          v12[2] = v17 + v18;
          v58 = v12[3];
          v59 = v12[579];
          v19 = v58;
          v20 = v59;
          v12[579] = v58 - v59;
          v12[3] = v19 + v20;
          v58 = v12[4];
          v59 = v12[580];
          v21 = v58;
          v22 = v59;
          v12[580] = v58 - v59;
          v12[4] = v21 + v22;
          v58 = v12[5];
          v59 = v12[581];
          v23 = v58;
          v24 = v59;
          v12[581] = v58 - v59;
          v12[5] = v23 + v24;
          v58 = v12[6];
          v59 = v12[582];
          v12 += 9;
          v25 = v58;
          v26 = v59;
          v12[573] = v58 - v59;
          *(v12 - 3) = v25 + v26;
          v58 = *(v12 - 2);
          v59 = v12[574];
          v27 = v58;
          v28 = v59;
          v12[574] = v58 - v59;
          *(v12 - 2) = v27 + v28;
          v58 = *(v12 - 1);
          v59 = v12[575];
          v29 = v58;
          v30 = v59;
          v12[575] = v58 - v59;
          *(v12 - 1) = v29 + v30;
        }
        while ( (int)v12 < (int)flt_8E99C8 );
      }
      if ( v54 )
        sub_477950(v52, v7, (int)flt_8E90C8, (int)v63, v9, v3[7]);
      if ( v7 || v54 || v56 == 3 )
      {
        v31 = *(v9 - 36);
        v32 = v9[16];
        if ( v32 <= v31 )
          v9[16] = v31;
        else
          *(v9 - 36) = v32;
      }
      if ( v56 == 1 )
      {
        v37 = flt_8E90C8;
        if ( 18 * v9[16] > 0 )
        {
          v38 = 18 * v9[16];
          do
          {
            v39 = v37[576];
            ++v37;
            --v38;
            *(v37 - 1) = v39;
          }
          while ( v38 );
        }
      }
      else if ( v56 == 3 )
      {
        v33 = v9[16];
        v34 = flt_8E90C8;
        if ( 18 * v33 > 0 )
        {
          v35 = 18 * v33;
          do
          {
            v36 = v34[576];
            ++v34;
            --v35;
            *(v34 - 1) = v36 + *(v34 - 1);
          }
          while ( v35 );
        }
      }
    }
    v40 = 0;
    if ( v53 > 0 )
    {
      v41 = (int)(v9 - 52);
      v42 = 0;
      do
      {
        sub_477F50(v41, (int)&flt_8E90C8[v42]);
        sub_478EC0(v40++, v43, (float *)((char *)&unk_8ED740 + v42 * 4), v41);
        v41 += 208;
        v42 += 576;
      }
      while ( v40 < v53 );
      v9 = v55;
    }
    v44 = (char *)&unk_8ED740;
    do
    {
      if ( v56 < 0 )
      {
        v55 = *a3;
        v46 = sub_47A8E0(v44, 0, a2, &v55);
        v47 = v46 + v57;
        v57 = sub_47A8E0(v44 + 2304, 1, a2, a3) + v47;
      }
      else
      {
        v45 = sub_47ACD0(v44, a2, a3);
        v57 += v45;
      }
      v44 += 128;
    }
    while ( (int)v44 < (int)byte_8EE040 );
    v9 += 26;
    ++v49;
    v55 = v9;
    if ( v49 >= v50 )
      break;
    v7 = v51;
    v3 = a1;
  }
  return v57;
}
