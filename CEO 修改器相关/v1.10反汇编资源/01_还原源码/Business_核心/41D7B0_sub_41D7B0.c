// 函数 0x41d7b0  sub_41D7B0  size=0x974  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41D7B0(const char *a1)
{
  int v1; // ebx
  const char *v2; // eax
  const char *v3; // eax
  int v4; // edi
  int i; // esi
  int v6; // edi
  int j; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v14; // [esp-8h] [ebp-144h]
  int v15; // [esp+10h] [ebp-12Ch] BYREF
  int v16; // [esp+14h] [ebp-128h] BYREF
  int v17; // [esp+18h] [ebp-124h] BYREF
  char v18[16]; // [esp+1Ch] [ebp-120h] BYREF
  char Buffer[256]; // [esp+2Ch] [ebp-110h] BYREF
  int v20; // [esp+138h] [ebp-4h]

  sub_466190(v18);
  v1 = 0;
  v20 = 0;
  dword_4CCC40 = 1;
  dword_4C2D34 = 0;
  if ( dword_4CDEBC == 1 )
  {
    v2 = (const char *)sub_47C740("save");
    sprintf(Buffer, "%s\\%s", v2, a1);
  }
  else
  {
    v14 = dword_4CDEC0;
    v3 = (const char *)sub_47C740("save");
    sprintf(Buffer, "%s\\slot%d\\%s", v3, v14, a1);
  }
  if ( sub_4661F0(Buffer) )
  {
    sub_45D7C0();
    sub_45D840(1);
    sub_466380(Buffer);
    sub_466380(&dword_4CDEA8);
    sub_425A00(dword_4CDEB8, &v15, &v16);
    sub_42B240(v15, v16);
    if ( *(_DWORD *)dword_4D0B64 )
    {
      sub_465FE0(dword_4D0B64[0], (int)"game_data.cpp", 486);
      *(_DWORD *)dword_4D0B64 = sub_465E40(v16 * v15, (int)"game_data.cpp", 487);
    }
    sub_423B90(&unk_4D03D4, 0);
    sub_466380(&dword_4B1010);
    sub_466380(&dword_4B1024);
    sub_466380(&dword_4B1028);
    sub_466380(&dword_89E550);
    sub_466380(&dword_4B1198);
    sub_466380(&dword_4B32B0);
    sub_466380(&dword_4B1100);
    sub_466380(&dword_4B32BC);
    sub_466380(&dword_4B101C);
    sub_466380(&dword_4B1170);
    sub_466380(&dword_4B32B4);
    sub_466380(&dword_4B32A0);
    sub_466380(&dword_4CD11C);
    sub_466380(&dword_4CD120);
    sub_466380(&dword_4CD124);
    sub_466380(&dword_4B111C);
    sub_466380(&dword_4B1120);
    sub_466380(&dword_4CD128);
    sub_466380(&dword_8703A0);
    sub_4664F0(&unk_4D10B8, 0x2E5B8u, 0);
    v4 = 0;
    for ( i = 0; i < dword_4CCA9C; ++i )
    {
      if ( sub_464E90(i) )
      {
        sub_4834C0((void *)(dword_4CCAAC + i * dword_4CCA98));
        if ( ++v4 >= dword_4CCAA4 )
          break;
      }
    }
    sub_465320(v18);
    sub_4653E0(2120);
    v6 = 0;
    for ( j = 0; j < dword_4CCA9C; v1 += 67 )
    {
      if ( sub_464E90(j) )
      {
        memset((void *)(dword_4CCAAC + j * dword_4CCA98), 0, 0xBCu);
        sub_485CC0(v18);
        sub_483B80(&unk_4CCC58);
        sub_483A60(0, &unk_4CCEAC, 0);
        sub_483A60(1, &unk_4CCC44, 0);
        if ( ++v6 >= dword_4CCAA4 )
          break;
      }
      sub_45D840(v1 / dword_4CCA9C + 18);
      ++j;
    }
    sub_465320(v18);
    sub_4653E0(1304);
    sub_45D840(85);
    sub_485CC0(v18);
    sub_483B80(&unk_4D0F38);
    sub_483A60(0, &unk_4D0E58, 0);
    sub_483A60(1, &unk_4D0F24, 0);
    sub_45D840(86);
    sub_465320(v18);
    sub_4653E0(96);
    sub_45D840(87);
    sub_465320(v18);
    sub_4653E0(32);
    sub_45D840(88);
    sub_465320(v18);
    sub_4653E0(12);
    sub_45D840(89);
    sub_465320(v18);
    sub_4653E0(8);
    sub_45D840(90);
    sub_465320(v18);
    sub_4653E0(76);
    sub_45D840(91);
    sub_465320(v18);
    sub_4653E0(32);
    sub_45D840(92);
    sub_465320(v18);
    sub_4653E0(232);
    sub_45D840(93);
    sub_465320(v18);
    sub_4653E0(12);
    sub_45D840(94);
    sub_465320(v18);
    sub_4653E0(40);
    sub_45D840(95);
    sub_465320(v18);
    sub_4653E0(36);
    sub_45D840(96);
    sub_465320(v18);
    sub_4653E0(16);
    sub_45D840(97);
    sub_4629A0();
    sub_4629D0();
    sub_466380(&v17);
    sub_460F50();
    sub_45D840(98);
    if ( *(_DWORD *)dword_4D0B64 )
    {
      sub_465FE0(dword_4D0B64[0], (int)"game_data.cpp", 620);
      *(_DWORD *)dword_4D0B64 = 0;
    }
    *(_DWORD *)dword_4D0B64 = sub_465E40(dword_4D0E80 * dword_4D0E84, (int)"game_data.cpp", 623);
    sub_466380(*(_DWORD *)dword_4D0B64);
    sub_466380(&word_4D0BB4);
    sub_45D840(99);
    v8 = (dword_4D0E80 + 31) >> 5;
    v9 = (dword_4D0E84 + 31) >> 5;
    dword_4C5DEC = v8;
    dword_4C5DD8 = v9;
    if ( *(_DWORD *)dword_4C5DF4 )
    {
      sub_465FE0(dword_4C5DF4[0], (int)"game_data.cpp", 633);
      LOBYTE(v8) = dword_4C5DEC;
      LOBYTE(v9) = dword_4C5DD8;
      *(_DWORD *)dword_4C5DF4 = 0;
    }
    *(_DWORD *)dword_4C5DF4 = sub_465E40(-8 * v8 * v9, (int)"game_data.cpp", 636);
    sub_4664F0(*(void **)dword_4C5DF4, 0x23F8u, 0);
    sub_45D840(100);
    sub_4664F0(dword_870824, 0x70u, 0);
    sub_466380(&dword_4B3900);
    sub_465320(v18);
    sub_4059D0();
    sub_466230(v18);
    v17 &= 3u;
    dword_4C2D38 = 0;
    if ( v17 == 1 )
    {
      sub_4090C0((int)dword_4D0E68, 1);
      if ( dword_4B1010 != -1 )
      {
        v10 = sub_483C30(dword_4B1010);
        sub_40DD00(v10);
      }
    }
    else
    {
      v11 = sub_40CD40(dword_4C43DC + dword_4B1024 * dword_4C43C8);
      sub_4090C0(v11, 1);
      sub_444300(1);
      sub_43FB60(1);
      sub_444460(1);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
        sub_4453F0(1);
      sub_45ACF0(0);
      sub_45B050(0);
      if ( dword_4B1198 != -1 )
        sub_43C340(1);
      if ( dword_4B1100 != -1 )
        sub_43B130(1);
      if ( dword_4B32BC != -1 )
        sub_43D660(1);
      if ( dword_4B101C != -1 )
        sub_43AEE0(1);
      if ( dword_4B32B4 != -1 )
        sub_43C9C0(1);
      if ( dword_4B32A0 != -1 )
        sub_43C4D0(1);
    }
    if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
    {
      sub_45EEF0(1);
      sub_4449E0(0);
    }
    else
    {
      sub_45EEF0(0);
      sub_4449E0(1);
    }
    sub_4095B0();
    if ( dword_4C2D3C && sub_461900(v12) )
    {
      sub_486D40(0, 0);
      sub_486D40(1, 1);
      sub_487220(&unk_4C42A0);
    }
    sub_409200();
    sub_4091E0();
    sub_47C950(0);
    dword_4CD10C = GetTickCount();
    sub_45D8B0();
  }
  dword_4CCC40 = 0;
  v20 = -1;
  return sub_4665D0();
}
