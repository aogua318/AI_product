// 函数 0x489724  ___crtExitProcess  size=0x17  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}
