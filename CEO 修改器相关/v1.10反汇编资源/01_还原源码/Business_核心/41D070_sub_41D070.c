// 函数 0x41d070  sub_41D070  size=0x5FB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41D070(const char *a1, int a2)
{
  int v2; // ebx
  const char *v3; // eax
  const char *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // edi
  int v10; // [esp-8h] [ebp-1A0h]
  int v11; // [esp+10h] [ebp-188h] BYREF
  char v12[16]; // [esp+14h] [ebp-184h] BYREF
  char Buffer[256]; // [esp+24h] [ebp-174h] BYREF
  CHAR Text[100]; // [esp+124h] [ebp-74h] BYREF
  int v15; // [esp+194h] [ebp-4h]

  sub_466190(v12);
  v2 = 0;
  v15 = 0;
  if ( dword_4CDEBC == 1 )
  {
    v3 = (const char *)sub_47C740("save");
    sprintf(Buffer, "%s\\%s", v3, a1);
  }
  else
  {
    v10 = dword_4CDEC0;
    v4 = (const char *)sub_47C740("save");
    sprintf(Buffer, "%s\\slot%d\\%s", v4, v10, a1);
  }
  sub_4095B0();
  if ( sub_4661B0(Buffer) )
  {
    sub_45D8F0();
    sub_466260(a2, 40);
    sub_466260(&dword_4CDEA8, 11408);
    sub_466260(&dword_4B1010, 4);
    sub_466260(&dword_4B1024, 4);
    sub_466260(&dword_4B1028, 4);
    sub_466260(&dword_89E550, 4);
    sub_466260(&dword_4B1198, 4);
    sub_466260(&dword_4B32B0, 4);
    sub_466260(&dword_4B1100, 4);
    sub_466260(&dword_4B32BC, 4);
    sub_466260(&dword_4B101C, 4);
    sub_466260(&dword_4B1170, 4);
    sub_466260(&dword_4B32B4, 4);
    sub_466260(&dword_4B32A0, 4);
    sub_466260(&dword_4CD11C, 4);
    sub_466260(&dword_4CD120, 4);
    sub_466260(&dword_4CD124, 4);
    sub_466260(&dword_4B111C, 4);
    sub_466260(&dword_4B1120, 4);
    sub_466260(&dword_4CD128, 4);
    sub_466260(&dword_8703A0, 4);
    sub_4664A0(&unk_4D10B8, 189880, 20);
    sub_465220(v12);
    v5 = 0;
    if ( dword_4CCA9C > 0 )
    {
      v6 = 0;
      do
      {
        if ( sub_464E90(v5) )
        {
          sub_483550(v12);
          if ( ++v2 >= dword_4CCAA4 )
            break;
        }
        sub_45D970(v6 / dword_4CCA9C);
        ++v5;
        v6 += 85;
      }
      while ( v5 < dword_4CCA9C );
    }
    sub_465220(v12);
    sub_45D970(85);
    sub_483550(v12);
    sub_45D970(86);
    sub_465220(v12);
    sub_45D970(87);
    sub_465220(v12);
    sub_45D970(88);
    sub_465220(v12);
    sub_45D970(89);
    sub_465220(v12);
    sub_45D970(90);
    sub_465220(v12);
    sub_45D970(91);
    sub_465220(v12);
    sub_45D970(92);
    sub_465220(v12);
    sub_45D970(93);
    sub_465220(v12);
    sub_45D970(94);
    sub_465220(v12);
    sub_45D970(95);
    sub_465220(v12);
    sub_45D970(96);
    sub_465220(v12);
    sub_45D970(97);
    if ( dword_4C2D38 )
    {
      if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
      {
        v11 = 1;
      }
      else
      {
        v7 = 0;
        v8 = 0;
        v11 = 2;
        if ( dword_4CCA9C <= 0 )
          goto LABEL_21;
        while ( 1 )
        {
          if ( sub_464E90(v7) )
          {
            if ( dword_4C2D38 == dword_4CCAAC + v7 * dword_4CCA98 )
              break;
            if ( ++v8 >= dword_4CCAA4 )
              break;
          }
          if ( ++v7 >= dword_4CCA9C )
            goto LABEL_21;
        }
        if ( v7 >= dword_4CCA9C )
        {
LABEL_21:
          sprintf(Text, "%s\nline%d", "game_data.cpp", 366);
          MessageBoxA(hWnd, Text, "error", 0);
          exit(1);
        }
        v11 |= 4 * v7;
      }
    }
    else
    {
      v11 = 0;
    }
    sub_466260(&v11, 4);
    sub_45D970(98);
    sub_466260(*(_DWORD *)dword_4D0B64, dword_4D0E80 * dword_4D0E84);
    sub_466260(&word_4D0BB4, 18);
    sub_45D970(99);
    sub_4664A0(*(_DWORD *)dword_4C5DF4, 9208, dword_4C5DEC * dword_4C5DD8);
    sub_45D970(100);
    sub_4664A0(dword_870824, 112, dword_870818);
    sub_466260(&dword_4B3900, 4);
    sub_465220(v12);
    sub_4059B0();
    sub_466230(v12);
    sub_45D9B0();
  }
  v15 = -1;
  return sub_4665D0();
}
