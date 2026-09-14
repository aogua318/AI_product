// 函数 0x490fe0  __unlock  size=0x17  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}
