// 函数 0x498b18  __controlfp_s  size=0x5F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t __cdecl _controlfp_s(unsigned int *CurrentState, unsigned int NewValue, unsigned int Mask)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  if ( (Mask & 0xFFF7FFFF & NewValue & 0xFCF0FCE0) != 0 )
  {
    if ( CurrentState )
      *CurrentState = _control87(0, 0);
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    v4 = Mask & 0xFFF7FFFF;
    if ( CurrentState )
      *CurrentState = _control87(NewValue, v4);
    else
      _control87(NewValue, v4);
    return 0;
  }
}
