// 函数 0x489781  __initterm_e  size=0x24  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _initterm_e(_PIFV *First, _PIFV *Last)
{
  int result; // eax

  result = 0;
  while ( First < Last && !result )
  {
    if ( *First )
      result = (*First)();
    ++First;
  }
  return result;
}
