// 函数 0x49c98c  __set_errno_from_matherr  size=0x2D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _set_errno_from_matherr(int a1)
{
  if ( a1 == 1 )
  {
    *_errno() = 33;
  }
  else if ( a1 > 1 && a1 <= 3 )
  {
    *_errno() = 34;
  }
}
