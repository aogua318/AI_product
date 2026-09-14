// 函数 0x47e1f0  sub_47E1F0  size=0x2E  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_47E1F0(unsigned int a1)
{
  int result; // eax

  result = a1;
  if ( a1 != -1 )
    return (a1 >> 7) & 0xF8 | ((((unsigned __int8)(8 * a1) << 8) | (a1 >> 2) & 0xF8) << 8);
  return result;
}
