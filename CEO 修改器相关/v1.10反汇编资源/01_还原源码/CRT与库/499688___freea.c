// 函数 0x499688  __freea  size=0x20  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _freea(void *Memory)
{
  if ( Memory )
  {
    if ( *((_DWORD *)Memory - 2) == 56797 )
      free((char *)Memory - 8);
  }
}
