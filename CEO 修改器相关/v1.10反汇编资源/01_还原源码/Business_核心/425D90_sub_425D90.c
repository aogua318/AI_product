// 函数 0x425d90  sub_425D90  size=0x527  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_425D90()
{
  int v0; // edi
  char *v1; // eax
  char v2; // cl
  int v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  int v12; // esi
  char *v13; // eax
  int v14; // edx
  char v15; // cl
  char *v16; // eax
  int v17; // edx
  char v18; // cl
  int v19; // ebx
  char *v20; // eax
  int v21; // edx
  char v22; // cl
  char *v23; // eax
  int v24; // edx
  char v25; // cl
  _DWORD *v27; // [esp+10h] [ebp-424h]
  _BYTE v28[12]; // [esp+14h] [ebp-420h] BYREF
  int v29; // [esp+20h] [ebp-414h]
  char String[1024]; // [esp+24h] [ebp-410h] BYREF
  int v31; // [esp+430h] [ebp-4h]

  sub_464410(v28);
  v0 = 0;
  v31 = 0;
  v1 = (char *)sub_47C740("data\\stages.csv");
  if ( sub_464420(v1) )
  {
    v2 = 0;
    v3 = 0;
    for ( dword_4D0C64 = 0; v3 < v29; ++v3 )
    {
      v4 = (char *)sub_4646A0(0, v3);
      v5 = (char *)(String - v4);
      do
      {
        v6 = *v4;
        v4[(_DWORD)v5] = *v4;
        ++v4;
      }
      while ( v6 );
      if ( sub_438150(String) )
      {
        v7 = atoi(String);
        v2 = dword_4D0C64;
        v8 = v7 + 1;
        if ( v8 > dword_4D0C64 )
        {
          v2 = v8;
          dword_4D0C64 = v8;
        }
      }
      else
      {
        v2 = dword_4D0C64;
      }
    }
    *(_DWORD *)dword_4D0C60 = sub_465E40(-120 * v2, (int)"loadstage.cpp", 28);
    if ( v29 > 0 )
    {
      do
      {
        v9 = (char *)sub_4646A0(0, v0);
        v10 = (char *)(String - v9);
        do
        {
          v11 = *v9;
          v9[(_DWORD)v10] = *v9;
          ++v9;
        }
        while ( v11 );
        if ( sub_438150(String) )
        {
          v12 = *(_DWORD *)dword_4D0C60 + 648 * atoi(String);
          v13 = (char *)sub_4646A0(1, v0);
          v14 = v12 - (_DWORD)v13;
          do
          {
            v15 = *v13;
            v13[v14] = *v13;
            ++v13;
          }
          while ( v15 );
          v16 = (char *)sub_4646A0(2, v0);
          v17 = v12 - (_DWORD)v16;
          do
          {
            v18 = *v16;
            v16[v17 + 40] = *v16;
            ++v16;
          }
          while ( v18 );
          *(_WORD *)(v12 + 60) = sub_4646D0(3, v0);
          *(_WORD *)(v12 + 62) = sub_4646D0(4, v0);
          *(double *)(v12 + 64) = sub_464720(5, v0);
          *(double *)(v12 + 72) = sub_464720(6, v0);
          *(double *)(v12 + 80) = sub_464720(7, v0);
          *(_DWORD *)(v12 + 88) = sub_4646D0(8, v0);
          *(_DWORD *)(v12 + 92) = sub_4646D0(9, v0);
          *(_DWORD *)(v12 + 96) = sub_4646D0(10, v0);
          *(_DWORD *)(v12 + 100) = sub_4646D0(11, v0);
          *(_DWORD *)(v12 + 104) = sub_4646D0(12, v0);
          *(_DWORD *)(v12 + 108) = sub_4646D0(13, v0);
          *(_DWORD *)(v12 + 112) = sub_4646D0(14, v0);
          *(_DWORD *)(v12 + 116) = sub_4646D0(15, v0);
          *(_DWORD *)(v12 + 120) = sub_4646D0(16, v0);
          *(_DWORD *)(v12 + 124) = sub_4646D0(17, v0);
          *(_DWORD *)(v12 + 128) = sub_4646D0(18, v0);
          v19 = 0;
          v27 = (_DWORD *)(v12 + 132);
          do
          {
            *v27 = sub_4646D0(v19 + 19, v0);
            ++v19;
            ++v27;
          }
          while ( v19 < 6 );
          v20 = (char *)sub_4646A0(25, v0);
          v21 = v12 - (_DWORD)v20;
          do
          {
            v22 = *v20;
            v20[v21 + 156] = *v20;
            ++v20;
          }
          while ( v22 );
          *(double *)(v12 + 520) = sub_464720(26, v0);
          *(double *)(v12 + 528) = sub_464720(27, v0);
          *(double *)(v12 + 536) = sub_464720(28, v0);
          *(_DWORD *)(v12 + 544) = sub_4646D0(29, v0);
          *(_DWORD *)(v12 + 548) = sub_4646D0(30, v0);
          *(_DWORD *)(v12 + 552) = sub_4646D0(31, v0);
          *(_DWORD *)(v12 + 556) = sub_4646D0(32, v0);
          *(_DWORD *)(v12 + 560) = sub_4646D0(33, v0);
          *(_DWORD *)(v12 + 564) = sub_4646D0(34, v0);
          *(_WORD *)(v12 + 568) = sub_4646D0(44, v0);
          *(_WORD *)(v12 + 570) = sub_4646D0(45, v0);
          v23 = (char *)sub_4646A0(46, v0);
          v24 = v12 - (_DWORD)v23;
          do
          {
            v25 = *v23;
            v23[v24 + 572] = *v23;
            ++v23;
          }
          while ( v25 );
          *(_DWORD *)(v12 + 616) = sub_4646D0(47, v0);
          *(_DWORD *)(v12 + 604) = sub_4646D0(35, v0);
          *(double *)(v12 + 608) = sub_464720(36, v0);
          *(_DWORD *)(v12 + 620) = sub_4646D0(37, v0);
          *(_DWORD *)(v12 + 624) = sub_4646D0(38, v0);
          *(_DWORD *)(v12 + 628) = sub_4646D0(39, v0);
          *(_DWORD *)(v12 + 632) = sub_4646D0(40, v0);
          *(_DWORD *)(v12 + 636) = sub_4646D0(41, v0);
          *(_DWORD *)(v12 + 640) = sub_4646D0(42, v0);
          *(_DWORD *)(v12 + 516) = sub_4646D0(43, v0);
        }
        ++v0;
      }
      while ( v0 < v29 );
    }
    sub_464650(v28);
    v31 = -1;
    sub_464B50(v28);
    return 1;
  }
  else
  {
    v31 = -1;
    sub_464B50(v28);
    return 0;
  }
}
