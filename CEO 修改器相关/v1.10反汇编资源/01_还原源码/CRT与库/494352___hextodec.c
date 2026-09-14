// 函数 0x494352  __hextodec  size=0x20  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl _hextodec(unsigned __int8 a1)
{
  bool v1; // zf
  unsigned int result; // eax

  v1 = isdigit(a1) == 0;
  result = (char)a1;
  if ( v1 )
    return ((char)a1 & 0xFFFFFFDF) - 7;
  return result;
}
