// 函数 0x425230  sub_425230  size=0x6EA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_425230()
{
  int v0; // esi
  unsigned int v1; // eax
  int v2; // ecx
  int v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  int *v7; // ebx
  int *v8; // edi
  double v9; // rt2
  double v10; // st5
  double v11; // st6
  double v12; // st5
  int v13; // esi
  char v14; // al
  int v15; // eax
  int v16; // edi
  double v17; // st6
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  double v22; // st5
  int v23; // eax
  int v24; // ecx
  double v25; // st5
  int v26; // eax
  double v27; // st5
  int v28; // eax
  int v29; // eax
  double v30; // st7
  int v31; // eax
  int v32; // ecx
  __int16 *v33; // edx
  __int16 v34; // cx
  double v35; // st7
  __int16 v36; // cx
  __int16 v37; // cx
  __int16 v38; // cx
  int v39; // esi
  double v40; // st5
  int v41; // esi
  char v42; // al
  int v43; // eax
  int v44; // edi
  double v45; // st7
  double v46; // st7
  double v47; // st4
  int v48; // eax
  int v49; // edx
  double v50; // st6
  int *v51; // edi
  int v52; // eax
  int v53; // esi
  int v54; // eax
  int *v55; // eax
  double v56; // st5
  double v57; // st6
  double v58; // st5
  int v59; // eax
  int v60; // ecx
  int *v61; // edx
  int v62; // eax
  _BYTE v64[48]; // [esp+10h] [ebp-88h] BYREF
  long double v65; // [esp+40h] [ebp-58h]
  double v66; // [esp+48h] [ebp-50h]
  double v67; // [esp+50h] [ebp-48h]
  double v68; // [esp+58h] [ebp-40h]
  int v69; // [esp+60h] [ebp-38h]
  int v70; // [esp+64h] [ebp-34h]
  int v71; // [esp+68h] [ebp-30h]
  int v72; // [esp+6Ch] [ebp-2Ch]
  __int16 *v73; // [esp+70h] [ebp-28h]
  __int16 *v74; // [esp+74h] [ebp-24h]
  int v75; // [esp+78h] [ebp-20h]
  int v76; // [esp+7Ch] [ebp-1Ch]
  int v77; // [esp+80h] [ebp-18h]
  int v78; // [esp+84h] [ebp-14h]
  int *v79; // [esp+88h] [ebp-10h]
  int v80; // [esp+94h] [ebp-4h]

  sub_468830(v64);
  v0 = 0;
  v1 = 0;
  v80 = 0;
  if ( dword_870818 > 0 )
  {
    v2 = 0;
    do
    {
      if ( v1 >= 0xA )
        *(_DWORD *)((char *)dword_870824 + v2) = 0;
      ++v1;
      v2 += 112;
    }
    while ( (int)v1 < dword_870818 );
  }
  v69 = dword_4D0C5C + dword_4D0C58;
  v3 = 0;
  v78 = 0;
  v73 = 0;
  v70 = 0;
  v4 = 256.0;
  v65 = pow((double)(dword_4D0C5C + dword_4D0C58), 0.5) * 15.0 * 40.0 * 0.25 * 256.0;
  v5 = 0.00390625;
  v6 = 0.0;
  while ( 1 )
  {
    v7 = (int *)((char *)dword_870824 + v3);
    v8 = (int *)((char *)v73 + *(_DWORD *)dword_870814);
    v9 = v6;
    v10 = v5 * (double)*(int *)((char *)dword_870824 + v3);
    v11 = v9;
    v79 = (int *)((char *)v73 + *(_DWORD *)dword_870814);
    v77 = 0;
    v68 = v10 * v4 * (double)*(int *)((char *)v73 + *(_DWORD *)dword_870814 + 24);
    v12 = v9;
    v67 = v9;
    if ( dword_4D0C90 > 0 )
    {
      v71 = 0;
      do
      {
        v13 = *(_DWORD *)dword_4D0C8C + v0;
        v14 = *((_BYTE *)v8 + 12);
        if ( *(_BYTE *)(v13 + 78) == v14 )
        {
          v15 = *(_DWORD *)dword_4D0C94 + 68 * v14;
          v16 = 0;
          v72 = v15;
          if ( *(__int16 *)(v15 + 64) > 0 )
          {
            v17 = v12;
            v74 = (__int16 *)(v13 + 180);
            v75 = v15 + 24;
            do
            {
              if ( *(__int16 *)v75 == v78 )
              {
                v18 = sub_42A100(v16);
                v19 = *(char *)(v13 + 15);
                v76 = v18 + 10;
                v69 = ++v19;
                v69 = *(char *)(v13 + 14);
                v66 = (double)dword_4CCAE4 * 256.0 * (double)(v18 + 10) * (double)v19 / 24.0
                    + (double)(v18 + 10) * (256.0 * (double)dword_4CCAE0) * (double)v69 / 24.0;
                v20 = sub_42A0F0(v13);
                v4 = 256.0;
                v69 = *(_DWORD *)(v13 + 220) * *v74 / 100000;
                v17 = (double)v20 * 256.0 / 360.0 + (double)v69 + v66;
                if ( v67 >= v17 )
                  v17 = v67;
                else
                  v67 = v17;
              }
              v21 = *(__int16 *)(v72 + 64);
              v75 += 2;
              ++v74;
              ++v16;
            }
            while ( v16 < v21 );
            v12 = v17;
            v11 = 0.0;
          }
          v8 = v79;
          if ( v12 > v11 )
            break;
        }
        v0 = v71 + 388;
        ++v77;
        v71 += 388;
      }
      while ( v77 < dword_4D0C90 );
    }
    v22 = v12 + v68;
    v23 = (int)(v22 / (double)v8[6]);
    v0 = 0;
    v7[20] = v23;
    if ( !v23 )
      v7[20] = 1;
    v7[19] = v7[20];
    v24 = v8[16] * (int)(v22 * (double)dword_4CCAD8[0] / (double)dword_4CCADC / (double)v8[6]);
    *v7 = v24 / 10;
    if ( !(v24 / 10) )
      *v7 = 1;
    v25 = (double)*v7;
    v7[18] = *v7;
    v26 = (int)v25;
    v27 = (double)*v7;
    v7[17] = v26;
    v7[21] = 50;
    v28 = (int)(v27 * 0.00390625 * (double)v8[6]);
    ++v78;
    v73 += 36;
    v7[22] = v28;
    v7[23] = v28;
    v3 = v70 + 112;
    v70 = v3;
    if ( v3 >= 1120 )
      break;
    v6 = v11;
    v5 = 0.00390625;
  }
  v29 = dword_870818;
  v30 = 0.00390625;
  do
  {
    v69 = 0;
    v78 = 10;
    if ( v29 <= 10 )
      break;
    v71 = 720;
    v75 = 1120;
    do
    {
      v79 = (int *)(v71 + *(_DWORD *)dword_870814);
      v31 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(v71 + *(_DWORD *)dword_870814 + 16);
      v7 = (int *)((char *)dword_870824 + v75);
      if ( !*((_DWORD *)dword_870824 + 28 * *(unsigned __int8 *)(v31 + 1)) )
      {
        v32 = 0;
        v33 = (__int16 *)(v31 + 20);
        do
        {
          if ( *v33 != -1 && !*((_DWORD *)dword_870824 + 28 * *v33) )
          {
            v69 = 1;
            goto LABEL_68;
          }
          ++v32;
          ++v33;
        }
        while ( v32 < 4 );
        v34 = *(_WORD *)(v31 + 20);
        v35 = v11;
        v68 = v11;
        if ( v34 != -1 )
        {
          v11 = (double)*((int *)dword_870824 + 28 * v34) * (double)*(int *)(v31 + 28) + v11;
          v68 = v11;
        }
        v36 = *(_WORD *)(v31 + 22);
        if ( v36 != -1 )
        {
          v11 = v11 + (double)*((int *)dword_870824 + 28 * v36) * (double)*(int *)(v31 + 32);
          v68 = v11;
        }
        v37 = *(_WORD *)(v31 + 24);
        if ( v37 != -1 )
        {
          v11 = v11 + (double)*((int *)dword_870824 + 28 * v37) * (double)*(int *)(v31 + 36);
          v68 = v11;
        }
        v38 = *(_WORD *)(v31 + 26);
        if ( v38 != -1 )
        {
          v11 = v11 + (double)*((int *)dword_870824 + 28 * v38) * (double)*(int *)(v31 + 40);
          v68 = v11;
        }
        v39 = 0;
        v40 = v35;
        v67 = v35;
        v77 = 0;
        if ( dword_4D0C90 > 0 )
        {
          v70 = 0;
          do
          {
            v41 = *(_DWORD *)dword_4D0C8C + v39;
            v42 = *((_BYTE *)v79 + 12);
            if ( *(_BYTE *)(v41 + 78) == v42 )
            {
              v43 = *(_DWORD *)dword_4D0C94 + 68 * v42;
              v44 = 0;
              v72 = v43;
              if ( *(__int16 *)(v43 + 64) > 0 )
              {
                v45 = v40;
                v74 = (__int16 *)(v41 + 180);
                v73 = (__int16 *)(v43 + 24);
                do
                {
                  if ( *v73 == v78 )
                  {
                    v76 = sub_42A100(v44) + 6;
                    if ( v76 <= 0 )
                      v76 = 1;
                    v46 = (double)v76;
                    v76 = *(char *)(v41 + 14);
                    v47 = (double)v76;
                    v76 = *(char *)(v41 + 15);
                    v66 = (double)dword_4CCAE0 * 256.0 * v46 * v47 / 24.0
                        + v46 * (256.0 * (double)dword_4CCAE4) * (double)v76 / 24.0;
                    v48 = sub_42A0F0(v41);
                    v76 = *(_DWORD *)(v41 + 220) * *v74 / 100000;
                    v45 = (double)v48 * 256.0 / 360.0 + (double)v76 + v66;
                    if ( v67 >= v45 )
                      v45 = v67;
                    else
                      v67 = v45;
                  }
                  v49 = *(__int16 *)(v72 + 64);
                  ++v73;
                  ++v74;
                  ++v44;
                }
                while ( v44 < v49 );
                v11 = v68;
                v40 = v45;
                v35 = 0.0;
              }
            }
            v39 = v70 + 388;
            ++v77;
            v70 += 388;
          }
          while ( v77 < dword_4D0C90 );
        }
        v50 = v11 + v40;
        if ( v50 <= v35 )
          v50 = 1.0;
        v51 = v79;
        v52 = (int)(v50 / (double)v79[6]);
        v7[20] = v52;
        if ( !v52 )
          v7[20] = 1;
        v7[19] = v7[20];
        v53 = (int)((double)dword_4CCAD8[0] * v50 / (double)dword_4CCADC / (double)v51[6] * (double)v79[16] / 10.0);
        *v7 = v53;
        v54 = (int)(v65 / (double)v51[6]);
        *v7 = v53 + v54;
        if ( !(v53 + v54) )
          *v7 = 1;
        v55 = v79;
        v7[18] = *v7;
        if ( *((_BYTE *)v55 + 13) )
        {
          v56 = v50 / (double)v51[6];
          v57 = (double)*v7 * 0.8;
          v58 = v56 * 1.4;
          if ( v58 > v57 )
            v57 = v58;
        }
        else
        {
          v57 = (double)*v7;
        }
        v7[17] = (int)v57;
        v11 = v35;
        v30 = 0.00390625;
      }
LABEL_68:
      v59 = (int)((double)*v7 * v30 * (double)v79[6]);
      v60 = v78;
      v75 += 112;
      v71 += 72;
      v7[22] = v59;
      v7[23] = v59;
      v29 = dword_870818;
      v78 = v60 + 1;
    }
    while ( v60 + 1 < dword_870818 );
    v8 = v79;
    v0 = 0;
  }
  while ( v69 );
  v78 = 0;
  if ( v29 > 0 )
  {
    v69 = (int)(v8 + 6);
    do
    {
      v61 = (int *)v69;
      *(_DWORD *)((char *)dword_870824 + v0) = (int)((double)*(int *)((char *)dword_870824 + v0)
                                                   * (double)dword_4CCAE8
                                                   / 100.0);
      *(_DWORD *)((char *)dword_870824 + v0 + 72) = *(_DWORD *)((char *)dword_870824 + v0);
      v62 = (int)((double)*v7 * v30 * (double)*v61);
      v7[22] = v62;
      v7[23] = v62;
      v0 += 112;
      ++v78;
    }
    while ( v78 < dword_870818 );
  }
  v80 = -1;
  return sub_469860(v64);
}
