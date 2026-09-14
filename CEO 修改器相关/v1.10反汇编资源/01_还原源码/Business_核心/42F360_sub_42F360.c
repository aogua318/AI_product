// 函数 0x42f360  sub_42F360  size=0x114D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_42F360(double *this)
{
  int v2; // esi
  int v3; // edi
  signed int v4; // ecx
  double v5; // st6
  int v6; // ecx
  char *v7; // esi
  char *v8; // edi
  int v9; // edx
  int v10; // esi
  int v11; // edi
  signed int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  char *v16; // edi
  char *v17; // esi
  int v18; // edx
  _WORD *v19; // eax
  int v20; // edi
  int i; // ecx
  int v22; // esi
  int v23; // edx
  int v24; // ecx
  __int16 v25; // ax
  bool v26; // cc
  const char *v27; // eax
  double v28; // st6
  double v29; // st7
  const char *v30; // esi
  const char *v31; // esi
  double v32; // st7
  int v33; // ecx
  int v34; // esi
  int v35; // ecx
  const char *v36; // eax
  int v37; // eax
  int v38; // esi
  int j; // edi
  int v40; // esi
  int v41; // eax
  int v42; // esi
  double v43; // [esp+14h] [ebp-21Ch] BYREF
  double *v44; // [esp+1Ch] [ebp-214h]
  int v45; // [esp+20h] [ebp-210h]
  double *v46; // [esp+24h] [ebp-20Ch] BYREF
  char *v47; // [esp+28h] [ebp-208h]
  char v48[256]; // [esp+2Ch] [ebp-204h] BYREF
  char Buffer[256]; // [esp+12Ch] [ebp-104h] BYREF

  sub_42EB70(this);
  *(this + byte_4CE045 + 1025) = dbl_870330;
  *(this + byte_4CE045 + 1051) = dbl_870320;
  *(this + byte_4CE045 + 1064) = dbl_870360;
  *(this + byte_4CE045 + 1077) = dbl_870318;
  *(this + byte_4CE045 + 1090) = dbl_870398;
  *(this + byte_4CE045 + 1103) = dbl_870348;
  *(this + 6 * byte_4CE045 + 1116) = dbl_870368[0];
  *(this + 6 * byte_4CE045 + 1117) = dbl_870370;
  *(this + 6 * byte_4CE045 + 1118) = dbl_870378;
  *(this + 6 * byte_4CE045 + 1119) = dbl_870380;
  *(this + 6 * byte_4CE045 + 1120) = dbl_870388;
  *(this + 6 * byte_4CE045 + 1121) = dbl_870390;
  qmemcpy(this + 53 * byte_4CE045 + 3870, this + 4559, 0x1A8u);
  qmemcpy(this + 53 * byte_4CE045 + 5990, this + 6679, 0x1A8u);
  qmemcpy(this + 106 * byte_4CE045 + 9488, this + 10866, 0x350u);
  qmemcpy(this + 53 * byte_4CE045 + 12350, this + 13039, 0x1A8u);
  qmemcpy(this + 53 * byte_4CE045 + 14470, this + 15159, 0x1A8u);
  qmemcpy(this + 106 * byte_4CE045 + 17968, this + 19346, 0x350u);
  qmemcpy(this + 53 * byte_4CE045 + 20830, this + 21519, 0x1A8u);
  qmemcpy(this + 53 * byte_4CE045 + 22950, this + 23639, 0x1A8u);
  memset(this + 4559, 0, 0x1A8u);
  memset(this + 6679, 0, 0x1A8u);
  memset(this + 10866, 0, 0x350u);
  memset(this + 13039, 0, 0x1A8u);
  memset(this + 15159, 0, 0x1A8u);
  memset(this + 19346, 0, 0x350u);
  memset(this + 21519, 0, 0x1A8u);
  memset(this + 23639, 0, 0x1A8u);
  if ( dword_4B1120 % 3 == 1 )
  {
    v2 = byte_4CE045;
    v3 = byte_4CE045 - 1 + (byte_4CE045 - 1 < 0 ? 0xD : 0);
    v45 = v3 - 1 + (v3 - 1 < 0 ? 0xD : 0);
    v4 = byte_4CE045;
    if ( byte_4CE045 > 13 )
      v4 = -13 - 13 * ((byte_4CE045 - 14) / 0xDu) + byte_4CE045;
    if ( v4 < 0 )
      v4 += 13 * ((-1 - v4) / 0xDu) + 13;
    v5 = *(this + v4 + 1025);
    v6 = 0;
    *(this + byte_4CE047 + 1012) = v5;
    if ( dword_870818 > 0 )
    {
      HIDWORD(v43) = this + 106 * v45 + 17968;
      v46 = this + 106 * v2 + 17968;
      v44 = this + 106 * v3 + 17968;
      v7 = (char *)(this + 53 * v2 + 5990);
      v47 = (char *)(this + 53 * v3 + 5990);
      v8 = (char *)(this + 53 * v45 + 5990);
      do
      {
        *((_DWORD *)this + 106 * byte_4CE047 + v6 + 6362) = *((_DWORD *)v7 - 4240)
                                                          + *((_DWORD *)v47 - 4240)
                                                          + *((_DWORD *)v8 - 4240);
        *((_DWORD *)this + 106 * byte_4CE047 + v6 + 10602) = *(_DWORD *)v47 + *(_DWORD *)v7 + *(_DWORD *)v8;
        v8 += 4;
        v7 += 4;
        *(this + 106 * byte_4CE047 + v6 + 8110) = *(v44 - 8480) + *(v46 - 8480) + *(double *)(HIDWORD(v43) - 67840);
        *((_DWORD *)this + 106 * byte_4CE047 + v6 + 23322) = *((_DWORD *)v7 + 12719)
                                                           + *((_DWORD *)v47 + 12720)
                                                           + *((_DWORD *)v8 + 12719);
        *((_DWORD *)this + 106 * byte_4CE047 + v6 + 27562) = *((_DWORD *)v7 + 16959)
                                                           + *((_DWORD *)v47 + 16960)
                                                           + *((_DWORD *)v8 + 16959);
        *(this + 106 * byte_4CE047 + v6 + 16590) = *v44 + *v46 + *(double *)HIDWORD(v43);
        *((_DWORD *)this + 106 * byte_4CE047 + v6 + 40282) = *((_DWORD *)v7 + 29679);
        v9 = *((_DWORD *)v7 + 33919) + *((_DWORD *)v47 + 33920) + *((_DWORD *)v8 + 33919);
        v47 += 4;
        *((_DWORD *)this + 106 * byte_4CE047 + v6 + 44522) = v9 / 3;
        ++v44;
        ++v46;
        HIDWORD(v43) += 8;
        ++v6;
      }
      while ( v6 < dword_870818 );
    }
    if ( dword_4B1120 == 1 )
    {
      *(this + byte_4CE048 + 1038) = dbl_870320;
      v10 = byte_4CE047;
      v11 = byte_4CE047 - 1 + (byte_4CE047 - 1 < 0 ? 0xD : 0);
      v45 = v11 - 1 + (v11 - 1 < 0 ? 0xD : 0);
      v12 = byte_4CE047;
      if ( byte_4CE047 > 13 )
        v12 = -13 - 13 * ((byte_4CE047 - 14) / 0xDu) + byte_4CE047;
      if ( v12 < 0 )
        v12 += 13 * ((-1 - v12) / 0xDu) + 13;
      *(this + dword_4CE04C + 12) = *(this + v12 + 1012);
      *(this + byte_4CE048 + 1479) = 0.0;
      v13 = 0;
      if ( dword_870818 > 0 )
      {
        v44 = this + 106 * v45 + 16590;
        v46 = this + 106 * v10 + 16590;
        v14 = (int)(this + 106 * v11 + 16590);
        v15 = (int)(this + 53 * v11 + 5301);
        v16 = (char *)(this + 53 * v45 + 5301);
        HIDWORD(v43) = v14;
        v17 = (char *)(this + 53 * v10 + 5301);
        v47 = (char *)v15;
        v45 = (int)v16;
        do
        {
          *((_DWORD *)this + 106 * byte_4CE048 + v13 + 4984) = *((_DWORD *)v17 - 4240)
                                                             + *((_DWORD *)v47 - 4240)
                                                             + *((_DWORD *)v16 - 4240);
          *((_DWORD *)this + 106 * byte_4CE048 + v13 + 9224) = *(_DWORD *)v17 + *(_DWORD *)v16 + *(_DWORD *)v47;
          *(this + 106 * byte_4CE048 + v13 + 6732) = *(double *)(HIDWORD(v43) - 67840) + *(v46 - 8480) + *(v44 - 8480);
          *((_DWORD *)this + 106 * byte_4CE048 + v13 + 21944) = *((_DWORD *)v17 + 12720)
                                                              + *((_DWORD *)v47 + 12720)
                                                              + *((_DWORD *)v16 + 12720);
          *((_DWORD *)this + 106 * byte_4CE048 + v13 + 26184) = *((_DWORD *)v17 + 16960)
                                                              + *((_DWORD *)v47 + 16960)
                                                              + *((_DWORD *)v16 + 16960);
          *(this + 106 * byte_4CE048 + v13 + 15212) = *v46 + *(double *)HIDWORD(v43) + *v44;
          *((_DWORD *)this + 106 * byte_4CE048 + v13 + 38904) = *((_DWORD *)v17 + 29680);
          *((_DWORD *)this + 106 * byte_4CE048 + v13 + 43144) = (*((_DWORD *)v17 + 33920)
                                                               + *((_DWORD *)v47 + 33920)
                                                               + *((_DWORD *)v16 + 33920))
                                                              / 3;
          *(this + byte_4CE048 + 1479) = *(this + 106 * byte_4CE048 + v13 + 6732) + *(this + byte_4CE048 + 1479);
          *(this + byte_4CE048 + 1479) = *(this + 106 * byte_4CE048 + v13 + 15212) + *(this + byte_4CE048 + 1479);
          *((_WORD *)this + byte_4CE048 + 4776) = *((_WORD *)this + 45);
          *((_WORD *)this + byte_4CE048 + 4789) = 0;
          *((_WORD *)this + byte_4CE048 + 4802) = 0;
          *((_WORD *)this + byte_4CE048 + 4815) = 0;
          v18 = *((__int16 *)this + 44);
          if ( v18 != -1 )
          {
            do
            {
              v19 = (_WORD *)(dword_4CCAAC + v18 * dword_4CCA98);
              *((_WORD *)this + byte_4CE048 + 4789) += v19[232] + v19[233] + v19[241];
              *((_WORD *)this + byte_4CE048 + 4802) += v19[370];
              *((_WORD *)this + byte_4CE048 + 4815) += v19[374];
              v18 = (__int16)v19[809];
            }
            while ( v18 != -1 );
            v16 = (char *)v45;
          }
          v47 += 4;
          HIDWORD(v43) += 8;
          ++v46;
          ++v44;
          ++v13;
          v16 += 4;
          v17 += 4;
          v45 = (int)v16;
        }
        while ( v13 < dword_870818 );
      }
    }
  }
  v20 = 0;
  *(this + byte_4CE046 + 1455) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) + *(this + 1207);
  *(this + byte_4CE046 + 1208) = *(this + 1207);
  *(this + 1207) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - *(this + 1232);
  *(this + byte_4CE046 + 1233) = *(this + 1232);
  *(this + 1232) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - *(this + 1257);
  *(this + byte_4CE046 + 1258) = *(this + 1257);
  *(this + 1257) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - *(this + 1282);
  *(this + byte_4CE046 + 1283) = *(this + 1282);
  *(this + 1282) = 0.0;
  *(this + byte_4CE046 + 1307) = 0.0;
  for ( i = *((__int16 *)this + 44); i != -1; i = *(__int16 *)(v22 + 1618) )
  {
    v22 = dword_4CCAAC + i * dword_4CCA98;
    *(this + byte_4CE046 + 1307) = (double)*(int *)(v22 + 4 * byte_4CE046 + 1216) + *(this + byte_4CE046 + 1307);
    *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - (double)*(int *)(v22 + 4 * byte_4CE046 + 1216);
    if ( !*(_BYTE *)this && dword_4B1120 % 3 == 1 )
    {
      v23 = *(__int16 *)(v22 + 474);
      v24 = *(__int16 *)(v22 + 472);
      if ( v24
         + v23
         + *(__int16 *)(v22 + 476)
         - *(__int16 *)(v22 + 482)
         - *(__int16 *)(v22 + 466)
         - *(__int16 *)(v22 + 464) > v20 )
        v20 = v24
            + v23
            + *(__int16 *)(v22 + 476)
            - *(__int16 *)(v22 + 482)
            - *(__int16 *)(v22 + 466)
            - *(__int16 *)(v22 + 464);
      v25 = *(_WORD *)(v22 + 742);
      if ( !v25 )
      {
        v26 = *(_WORD *)(v22 + 766) > 0;
LABEL_30:
        if ( v26 )
          nullsub_2(v24);
        continue;
      }
      v26 = v25 < *(_WORD *)(v22 + 766);
      if ( v25 != *(_WORD *)(v22 + 766) )
        goto LABEL_30;
      v27 = (const char *)sub_436F10(15, 0);
      if ( v27 )
      {
        sprintf(Buffer, v27, v22 + 204);
        sub_419920((_DWORD *)v22, (int *)&v46, (int *)&v43 + 1);
        sub_437150(Buffer, 0, v46, HIDWORD(v43));
      }
    }
  }
  if ( *(this + 9) > 0.0 && !dword_4CD13C )
  {
    v28 = flt_8703A4 * *(this + 9);
    v43 = v28;
    if ( v28 > 0.0 )
    {
      sub_42EDA0((char *)this, -v28);
      v29 = v43;
      *(this + byte_4CE046 + 1356) = v43;
      *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - v29;
      if ( *(char *)this == dword_8703A0 )
      {
        v30 = (const char *)sub_436F10(24, *(char *)this);
        if ( v30 )
        {
          sprintf(Buffer, v30, (int)v43);
          sub_437150(Buffer, *(char *)this, -1, -1);
        }
      }
      if ( dword_4B1130 && *(char *)this != dword_8703A0 && *(this + 9) < *(this + 1) )
        sub_42F130(this, *(this + 9));
    }
  }
  if ( *(char *)this == dword_8703A0 && *(this + 1331) > 0.0 )
  {
    v31 = (const char *)sub_436F10(25, *(char *)this);
    if ( v31 )
    {
      sprintf(Buffer, v31, (int)*(this + 1331));
      sub_437150(Buffer, *(char *)this, -1, -1);
    }
  }
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - *(this + 1331);
  *(this + byte_4CE046 + 1332) = *(this + 1331);
  v32 = 0.0;
  *(this + 1331) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + 1380) + *(this + byte_4CE046 + 1455);
  *(this + byte_4CE046 + 1381) = *(this + 1380);
  *(this + 1380) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - *(this + 1405);
  *(this + byte_4CE046 + 1406) = *(this + 1405);
  *(this + 1405) = 0.0;
  *(this + byte_4CE046 + 1455) = *(this + byte_4CE046 + 1455) - *(this + 1430);
  *(this + byte_4CE046 + 1431) = *(this + 1430);
  *(this + 1430) = 0.0;
  v33 = dword_4B1120;
  if ( dword_4B1120 == 1 )
  {
    v34 = 0;
    *(this + dword_4CE04C + 1492) = 0.0;
    do
    {
      v35 = byte_4CE046 - v34;
      if ( v35 > 24 )
        v35 += -24 - 24 * ((v35 - 25) / 0x18u);
      if ( v35 < 0 )
        v35 += 24 * ((-1 - v35) / 0x18u) + 24;
      ++v34;
      *(this + dword_4CE04C + 1492) = *(this + v35 + 1455) + *(this + dword_4CE04C + 1492);
    }
    while ( v34 < 12 );
    if ( *(_BYTE *)this )
      goto LABEL_61;
    if ( *(this + dword_4CE04C + 1492) <= 0.0 )
    {
      if ( *(this + dword_4CE04C + 1492) >= 0.0 )
      {
LABEL_61:
        v32 = 0.0;
        *((_WORD *)this + 94874) = 0;
        v33 = dword_4B1120;
        goto LABEL_62;
      }
      v36 = (const char *)sub_436F10(10, 0);
    }
    else
    {
      v36 = (const char *)sub_436F10(9, 0);
    }
    if ( v36 )
    {
      sprintf(Buffer, v36, (int)*(this + dword_4CE04C + 1492));
      sub_437150(Buffer, 0, -1, -1);
    }
    goto LABEL_61;
  }
LABEL_62:
  if ( !*(_BYTE *)this )
  {
    if ( v32 <= *(this + 1) )
    {
      if ( *(this + 1) < 1000000.0 && v33 % 3 == 1 )
      {
        v37 = sub_436F10(12, 0);
        if ( v37 )
          goto LABEL_69;
      }
    }
    else
    {
      v37 = sub_436F10(13, 0);
      if ( v37 )
LABEL_69:
        sub_437150(v37, 0, -1, -1);
    }
  }
  if ( (*((_BYTE *)this + 1) & 1) != 0 && *((_DWORD *)this + 20) && dword_4CD11C - *((_DWORD *)this + 21) > 13824 )
  {
    while ( *((_WORD *)this + 44) != 0xFFFF )
      sub_41A9F0(*((__int16 *)this + 44));
    v38 = 0;
    for ( j = 0; v38 < dword_4C43CC; ++v38 )
    {
      if ( sub_464E90(v38) )
      {
        if ( *(_BYTE *)(v38 * dword_4C43C8 + dword_4C43DC + 2) == *(_BYTE *)this )
        {
          sub_40F920(v38);
          if ( dword_4B1024 == v38 )
            dword_4B1024 = -1;
        }
        if ( ++j >= dword_4C43D4 )
          break;
      }
    }
    if ( *(char *)this >= 7 )
    {
      if ( *(this + 1) < 0.0 )
      {
        sub_42F280((char *)this);
        v42 = *(_DWORD *)dword_4D1088 + 5104;
        sprintf(v48, (const char *const)(*(_DWORD *)dword_4D1088 + 5112), this + 2);
        sub_42B930(-1, -1, *(char *)this, v48, v42);
      }
    }
    else
    {
      *((_BYTE *)this + 1) &= ~1u;
      v40 = *(_DWORD *)dword_4D1088 + 88;
      sprintf(v48, (const char *const)(*(_DWORD *)dword_4D1088 + 96), this + 2);
      sub_42B930(-1, -1, *(char *)this, v48, v40);
      v41 = sub_436F10(8, *(char *)this);
      if ( v41 )
        sub_437150(v41, *(char *)this, -1, -1);
    }
  }
}
