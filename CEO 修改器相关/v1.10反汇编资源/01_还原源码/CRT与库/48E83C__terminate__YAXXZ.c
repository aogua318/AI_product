// 函数 0x48e83c  ?terminate@@YAXXZ  size=0x39  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 )
    v0();
  abort();
}
