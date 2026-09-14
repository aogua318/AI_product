// 函数 0x4899c6  __amsg_exit  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn _amsg_exit(int a1)
{
  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  _exit(255);
}
