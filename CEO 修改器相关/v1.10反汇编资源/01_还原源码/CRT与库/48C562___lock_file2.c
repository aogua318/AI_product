// 函数 0x48c562  __lock_file2  size=0x32  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _lock_file2(int a1, int a2)
{
  if ( a1 >= 20 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  }
  else
  {
    _lock(a1 + 16);
    *(_DWORD *)(a2 + 12) |= 0x8000u;
  }
}
