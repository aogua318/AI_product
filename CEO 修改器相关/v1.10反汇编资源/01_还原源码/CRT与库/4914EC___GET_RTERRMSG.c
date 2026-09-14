// 函数 0x4914ec  __GET_RTERRMSG  size=0x26  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

wchar_t *__cdecl _GET_RTERRMSG(int a1)
{
  int v1; // eax

  v1 = 0;
  while ( a1 != dword_4AA6F0[2 * v1] )
  {
    if ( (unsigned int)++v1 >= 0x16 )
      return 0;
  }
  return (&off_4AA6F4)[2 * v1];
}
