// 函数 0x4910b9  __lock  size=0x33  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( !*v1 && !_mtinitlocknum(a1) )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}
