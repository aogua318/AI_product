// 函数 0x48e875  ?unexpected@@YAXXZ  size=0x13  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 )
    v0();
  terminate();
}
