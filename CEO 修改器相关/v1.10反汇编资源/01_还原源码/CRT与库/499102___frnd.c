// 函数 0x499102  __frnd  size=0x14  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl _frnd(double a1)
{
  double result; // st7

  _ST7 = a1;
  __asm { frndint }
  return result;
}
