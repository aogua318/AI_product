// 函数 0x40aec0  sub_40AEC0  size=0x279  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD sub_40AEC0()
{
  DWORD TickCount; // esi
  int v1; // eax
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v6; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  dword_4C2D40 = GetTickCount();
  if ( !dword_4D0DB4 )
    sub_47C930();
  TickCount = GetTickCount();
  if ( (int)(TickCount - dword_4C4354) > 1000 )
  {
    dword_4C4354 = TickCount;
    sub_435860(0);
  }
  if ( GetAsyncKeyState(27) < 0 )
    sub_45AC20(0);
  if ( dword_4C2D3C )
  {
    if ( dword_8EED88 < 5 || dword_8EED8C < 5 || dword_8EED88 > 795 || dword_8EED8C > 595 )
    {
      v1 = dword_4C2D48;
      if ( dword_4C2D48 )
        goto LABEL_16;
      v1 = TickCount;
    }
    else
    {
      v1 = 0;
    }
    dword_4C2D48 = v1;
LABEL_16:
    if ( (int)(TickCount - dword_4C4350) > 4 )
    {
      v2 = 0;
      v3 = 0;
      dword_4C4350 = TickCount;
      if ( byte_8EEC95 || (int)(TickCount - v1) > 400 && dword_4D0DAC && dword_8EED88 < 5 )
        v2 = -dword_4B100C;
      if ( byte_8EEC96 || (int)(TickCount - v1) > 400 && dword_4D0DAC && dword_8EED8C < 5 )
        v3 = -dword_4B100C;
      if ( byte_8EEC97 || (int)(TickCount - v1) > 400 && dword_4D0DAC && dword_8EED88 > 795 )
        v2 = dword_4B100C;
      if ( byte_8EEC98 || (int)(TickCount - v1) > 400 && dword_4D0DAC && dword_8EED8C > 595 )
        v3 = dword_4B100C;
      if ( v2 || v3 )
      {
        sub_484020(
          *(_DWORD *)(dword_4C2D38 + 96) + *(_DWORD *)(dword_4C2D38 + 8) / 2,
          *(_DWORD *)(dword_4C2D38 + 100) + *(_DWORD *)(dword_4C2D38 + 12) / 2,
          &v8,
          &v6);
        sub_484280(v2 + *(_DWORD *)(dword_4C2D38 + 96), v3 + *(_DWORD *)(dword_4C2D38 + 100));
        sub_484020(
          *(_DWORD *)(dword_4C2D38 + 96) + *(_DWORD *)(dword_4C2D38 + 8) / 2,
          *(_DWORD *)(dword_4C2D38 + 100) + *(_DWORD *)(dword_4C2D38 + 12) / 2,
          &v9,
          &v7);
        v4 = dword_4C2D38;
        if ( v9 != v8 && (v9 < 0 || v9 > *(_DWORD *)(dword_4C2D38 + 24))
          || v7 != v6 && (v7 < 0 || v7 > *(_DWORD *)(dword_4C2D38 + 28)) )
        {
          sub_484280(*(_DWORD *)(dword_4C2D38 + 96) - v2, *(_DWORD *)(dword_4C2D38 + 100) - v3);
        }
        if ( sub_461900(v4) )
          sub_486B90(&unk_4C42A0);
      }
    }
  }
  if ( dword_4D0B68 )
  {
    sub_41E190(1);
  }
  else
  {
    dword_4C2D40 = GetTickCount() - dword_4C2D40;
    sub_409220();
    sub_41E190(0);
  }
  sub_40AE10((int)&unk_4C3108);
  return sub_40ACC0();
}
