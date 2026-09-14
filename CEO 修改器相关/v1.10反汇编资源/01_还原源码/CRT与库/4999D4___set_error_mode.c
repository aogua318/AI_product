// 函数 0x4999d4  __set_error_mode  size=0x3F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_8F2B8C;
      dword_8F2B8C = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_8F2B8C;
  }
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}
