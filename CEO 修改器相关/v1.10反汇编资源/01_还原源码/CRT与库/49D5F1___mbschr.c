// 函数 0x49d5f1  __mbschr  size=0x17  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C)
{
  return _mbschr_l(Str, C, 0);
}
