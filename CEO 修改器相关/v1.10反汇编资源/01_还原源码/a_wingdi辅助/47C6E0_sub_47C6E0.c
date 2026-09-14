// 函数 0x47c6e0  sub_47C6E0  size=0x5A  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_47C6E0()
{
  DWORD TickCount; // eax

  if ( dword_4B81E8 != -1 && *(int *)(dword_8EEB5C + 8) > 1 )
  {
    TickCount = GetTickCount();
    if ( (int)(TickCount - dword_8F2988) >= dword_4B81EC )
    {
      dword_8F2988 = TickCount;
      sub_47C5E0();
      if ( ++dword_4B81E8 >= *(_DWORD *)(dword_8EEB5C + 8) )
        dword_4B81E8 = 0;
      sub_47C5E0();
    }
  }
}
