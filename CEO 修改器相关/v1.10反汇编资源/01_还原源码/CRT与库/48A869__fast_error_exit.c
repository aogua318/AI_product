// 函数 0x48a869  _fast_error_exit  size=0x25  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn fast_error_exit(int a1)
{
  if ( dword_8F2B8C == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  __crtExitProcess(0xFFu);
}
