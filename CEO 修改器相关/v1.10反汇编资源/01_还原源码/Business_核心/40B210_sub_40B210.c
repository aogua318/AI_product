// 函数 0x40b210  sub_40B210  size=0x2C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_40B210()
{
  int result; // eax
  DWORD TickCount; // eax

  if ( dword_4D0DC0 )
  {
    result = sub_4640C0(0);
    dword_8DB7D0 = 0;
  }
  else
  {
    TickCount = GetTickCount();
    return sub_4640C0(TickCount);
  }
  return result;
}
