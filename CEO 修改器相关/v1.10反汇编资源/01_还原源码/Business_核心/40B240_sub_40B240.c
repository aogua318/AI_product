// 函数 0x40b240  sub_40B240  size=0xB6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_40B240()
{
  DWORD TickCount; // eax
  int v1; // eax

  if ( dword_4C429C )
  {
    if ( !dword_8B8D08 && dword_4C2D10 == -1 )
    {
      TickCount = GetTickCount();
      if ( (int)(TickCount - dword_4C2D14) > 200 )
      {
        dword_4C2D14 = TickCount;
        v1 = dword_4B1018 + dword_4C2D30;
        dword_4C2D30 = v1;
        if ( v1 == 16 )
        {
          dword_4B1018 = -1;
        }
        else if ( v1 == 7 )
        {
          dword_4B1018 = 1;
        }
        sub_4689C0(0);
        sub_467680(dword_4C2D30);
        sub_466CA0(&dword_8EEDEC, 0, 0);
        sub_47C800(0, 0, 800, 600);
      }
    }
  }
}
