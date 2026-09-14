// 函数 0x489ee7  __purecall  size=0x2A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __noreturn _purecall()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))DecodePointer(dword_8F3040);
  if ( v0 )
    v0();
  _NMSG_WRITE(25);
  _set_abort_behavior(0, 1u);
  abort();
}
