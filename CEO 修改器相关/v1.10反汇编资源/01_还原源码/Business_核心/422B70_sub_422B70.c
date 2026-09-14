// 函数 0x422b70  sub_422B70  size=0x8AD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_422B70(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  __int16 *v8; // esi
  int v9; // edi
  int j; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // esi
  int v38; // eax
  int v39; // esi
  double *v40; // edi
  int *v41; // esi
  int v42; // eax
  signed int v43; // edi
  int *v44; // esi
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edx
  int *v49; // ebx
  int v50; // edx
  int v51; // edx
  int v52; // esi
  int v53; // eax
  double v54; // [esp+0h] [ebp-A8h]
  int v55; // [esp+4h] [ebp-A4h]
  int v56; // [esp+4h] [ebp-A4h]
  int v57; // [esp+8h] [ebp-A0h]
  int v58; // [esp+8h] [ebp-A0h]
  int v59; // [esp+Ch] [ebp-9Ch]
  int v60; // [esp+Ch] [ebp-9Ch]
  int v61; // [esp+10h] [ebp-98h]
  int v62; // [esp+10h] [ebp-98h]
  int i; // [esp+14h] [ebp-94h]
  int v64; // [esp+14h] [ebp-94h]
  int v65; // [esp+14h] [ebp-94h]
  int v66; // [esp+18h] [ebp-90h] BYREF
  int v67; // [esp+1Ch] [ebp-8Ch]
  int v68; // [esp+20h] [ebp-88h]
  int v69; // [esp+24h] [ebp-84h] BYREF
  int v70; // [esp+28h] [ebp-80h] BYREF
  char Base[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  _BYTE v72[116]; // [esp+30h] [ebp-78h] BYREF

  if ( dword_4C2D18 )
  {
    if ( !a1 )
    {
      v2 = sub_4640D0(v1);
      v1 = 100;
      if ( v2 % 100 < 80 )
      {
        a1 = 1;
        v59 = 200;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
LABEL_6:
    v59 = 200;
    goto LABEL_8;
  }
  if ( a1 )
    goto LABEL_6;
LABEL_7:
  v59 = 10;
LABEL_8:
  if ( dword_4CE004 )
  {
    v66 = (dword_4D048C + dword_4D0490 - dword_4D0474 / 20) / 8 <= 0
        ? 0
        : (dword_4D048C + dword_4D0490 - dword_4D0474 / 20) / 8;
    v3 = dword_4D0460;
    v1 = dword_4CCBE0 + dword_4D0468;
    v68 = dword_4D046C + dword_4CCBE0;
    v4 = (int)((pow((double)dword_4D045C, 0.5)
              * (double)(2 * (5 * dword_4D0460 + 35) / 100)
              * (double)((dword_4D0464 + 50) / 100)
              + (double)v66)
             * (double)(dword_4CCBE0 + dword_4D0468)
             / (double)(dword_4D046C + dword_4CCBE0)
             + (double)dword_4D0468);
    if ( v4 <= dword_4D046C )
      goto LABEL_44;
    v1 = dword_4CD128;
    v5 = (v4 - dword_4D046C) / 30;
    v55 = v5;
    v57 = dword_4CD128;
    if ( dword_4CD128 > 100 )
    {
      v1 = 100;
      v57 = 100;
    }
    v61 = 0;
    if ( v5 <= 0 )
      goto LABEL_44;
    v68 = 100 - v1;
    do
    {
      v6 = sub_4640D0(v1);
      v7 = 0;
      v67 = 88;
      v8 = (__int16 *)(*(_DWORD *)dword_4C4434 + 6406);
      while ( 1 )
      {
        v1 = v57 * *v8 + v68 * *(v8 - 1);
        v7 += v1 / 100;
        if ( v6 % 10000 < v7 )
          break;
        v8 -= 36;
        if ( --v67 < 66 )
          goto LABEL_42;
      }
      for ( i = 0; i < v59; ++i )
      {
        v9 = -9999999;
        v66 = 20;
        do
        {
          for ( j = 0; j < 100; ++j )
          {
            v70 = sub_4640D0(v1) % dword_4D0E80;
            v12 = sub_4640D0(v11) % dword_4D0E84;
            v1 = v70 + v12 * dword_4D0E80;
            v69 = v12;
            v13 = (unsigned __int16)word_870870[*(__int16 *)(dword_4D0EE0 + 2 * v1)];
            if ( *(_DWORD *)(dword_4D0EF4 + 4 * v1) == -1 && v13 != dword_8709EC && v13 != dword_87091C )
              break;
          }
          if ( j != 100 )
          {
            v14 = sub_40D6A0(v67, v70, v12);
            if ( v14 > v9 )
              v9 = v14;
            v12 = v69;
          }
          --v66;
        }
        while ( v66 );
        if ( v9 != -9999999 )
        {
          v15 = v12 / 32;
          if ( v70 / 32 < (unsigned int)dword_4D0C28 )
          {
            if ( v15 < dword_4D0C2C )
            {
              v66 = 0;
              if ( dword_4D0C34 / 8 > 0 )
                memcpy(
                  &v66,
                  (const void *)(*(_DWORD *)(dword_4D0C50 + 4 * v15) + v70 / 32 * (dword_4D0C34 / 8)),
                  dword_4D0C34 / 8);
              v16 = v66;
            }
            else
            {
              v16 = -1;
            }
          }
          else
          {
            v16 = -1;
          }
          if ( !sub_4646D0(v16 + 3, v61 + 29) )
            break;
          v17 = v67;
          if ( !sub_422A40(v67) )
            break;
          v18 = sub_4640D0(v1) % 4;
          if ( sub_410230(v17, v70, v69, v18, a1) != -1 )
            break;
        }
      }
LABEL_42:
      ++v61;
    }
    while ( v61 < v55 );
  }
  v3 = dword_4D0460;
LABEL_44:
  if ( dword_4CE004 )
  {
    v19 = (int)((pow((double)dword_4D045C, 0.5) / 5.0 + 32.0) * (double)(2 * (5 * v3 + 10)) / 50.0) - dword_4CDB50;
    if ( v19 >= 5 )
    {
      v19 = 5;
    }
    else if ( v19 <= 0 )
    {
      v19 = 0;
    }
    if ( v19 > 0 )
    {
      v20 = v19;
      do
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = sub_4640D0(v1);
          v23 = 100;
          if ( v22 % 100 < 60 || (v24 = sub_465530(0), v24 == -1) )
          {
            v70 = sub_4640D0(v23) % dword_4D0E80;
            v33 = sub_4640D0(v34) % dword_4D0E84;
          }
          else
          {
            sub_419920((_DWORD *)(dword_4CCAAC + v24 * dword_4CCA98), &v70, &v69);
            v26 = sub_4640D0(v25) % 16;
            v70 += v26;
            v28 = sub_4640D0(v27) % 16;
            v69 += v28;
            v30 = sub_4640D0(v29) % 16;
            v70 -= v30;
            v32 = sub_4640D0(v31) % 16;
            v33 = v69 - v32;
          }
          v1 = v70;
          v69 = v33;
          if ( v70 < (unsigned int)dword_4D0E80 && v33 < dword_4D0E84 )
          {
            v35 = v70 + v33 * dword_4D0E80;
            v1 = (unsigned __int16)word_870870[*(__int16 *)(dword_4D0EE0 + 2 * v35)];
            if ( *(_DWORD *)(dword_4D0EF4 + 4 * v35) == -1 && v1 != dword_8709EC && v1 != dword_87091C )
            {
              v36 = sub_4640D0(v1) % 7;
              v37 = v36 >= 4 ? (v36 >= 6) + 1 : 0;
              v38 = sub_4640D0(7) % 4;
              if ( sub_410230(v37, v70, v69, v38, 0) != -1 )
                break;
            }
          }
          if ( ++v21 >= 100 )
            goto LABEL_69;
        }
        ++dword_4CDB50;
LABEL_69:
        --v20;
      }
      while ( v20 );
    }
  }
  v39 = 0;
  v40 = (double *)&unk_4D0AE0;
  v62 = 1;
  v58 = 0;
  v60 = 3;
  v67 = (int)dword_4D0B38;
  v68 = (int)&unk_4D0AE0;
  do
  {
    if ( (v62 & dword_4CE008) == 0 )
      goto LABEL_96;
    v41 = (int *)((char *)dword_870824 + v39);
    v54 = (double)v41[17] * 0.00390625;
    v42 = (int)((pow((double)dword_4D045C, 0.5) / 25.0 + 7.0)
              * (3.0
               * v54)
              / ((double)*v41 * 0.00390625 + v54 + v54)
              * (*v40 + 50.0)
              / 150.0
              + 1.0)
        - *(_DWORD *)v67;
    if ( v42 >= 2 )
    {
      v42 = 2;
    }
    else if ( v42 <= 0 )
    {
      goto LABEL_96;
    }
    v66 = v42;
    do
    {
      v43 = 0;
      v64 = 0;
      v44 = (int *)v72;
      do
      {
        v70 = sub_4640D0(v1) % dword_4D0E80;
        v46 = sub_4640D0(v45);
        v1 = v70;
        v47 = v46 % dword_4D0E84;
        v48 = v70 + v47 * dword_4D0E80;
        v69 = v47;
        v56 = (unsigned __int16)word_870870[*(__int16 *)(dword_4D0EE0 + 2 * v48)];
        if ( *(_DWORD *)(dword_4D0EF4 + 4 * v48) == -1 && v56 != dword_8709EC && v56 != dword_87091C )
        {
          *(v44 - 1) = v70;
          *v44 = v47;
          v44[1] = sub_422AD0(v47, v1);
          ++v43;
          v44 += 3;
          if ( v43 >= 10 )
            break;
        }
        ++v64;
      }
      while ( v64 < 100 );
      if ( v43 > 1 )
        qsort(Base, v43, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_422B50);
      v65 = 0;
      if ( v43 > 0 )
      {
        v49 = (int *)v72;
        while ( 1 )
        {
          v50 = *v49;
          v70 = *(v49 - 1);
          v69 = v50;
          v51 = sub_4640D0(v70) % 100;
          v52 = v51 >= 60 ? (v51 >= 90) + 1 : 0;
          v53 = sub_4640D0(100) % 4;
          if ( sub_410230(v52 + v60, v70, v69, v53, 0) != -1 )
            break;
          v49 += 3;
          if ( ++v65 >= v43 )
            goto LABEL_94;
        }
        ++*(_DWORD *)v67;
      }
LABEL_94:
      --v66;
    }
    while ( v66 );
    v40 = (double *)v68;
LABEL_96:
    v62 *= 2;
    v67 += 4;
    v60 += 3;
    ++v40;
    v39 = v58 + 112;
    v58 += 112;
    v68 = (int)v40;
  }
  while ( (int)v40 < (int)&dword_4D0B30 );
}
