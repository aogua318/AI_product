// 函数 0x492a8b  __set_abort_behavior  size=0x21  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_4B9010;
  dword_4B9010 = Mask & Flags | dword_4B9010 & ~Mask;
  return result;
}
