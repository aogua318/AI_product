// 函数 0x4354a0  sub_4354A0  size=0x4E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4354A0()
{
  if ( sub_46C610(hWnd) )
  {
    dword_870A0C = 1;
    dword_8709F8 = GetTickCount();
    dword_8709FC = dword_8709F8;
    dword_870A00 = dword_8709F8;
    dword_870A04 = dword_8709F8;
    dword_870A08 = dword_8709F8;
    return 1;
  }
  else
  {
    dword_870A0C = 0;
    return 0;
  }
}
