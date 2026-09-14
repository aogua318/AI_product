// 函数 0x492a58  _abort  size=0x32  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn abort()
{
  int v0; // edi
  int v1; // esi

  if ( sub_491141() )
    raise(22);
  if ( (dword_4B9010 & 2) != 0 )
    _call_reportfault(v0, v1, 3, 1073741845, 1);
  _exit(3);
}
