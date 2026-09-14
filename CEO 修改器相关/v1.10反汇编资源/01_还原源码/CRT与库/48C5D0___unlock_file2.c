// 函数 0x48c5d0  __unlock_file2  size=0x2F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _unlock_file2(int a1, int a2)
{
  if ( a1 >= 20 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  }
  else
  {
    *(_DWORD *)(a2 + 12) &= ~0x8000u;
    _unlock(a1 + 16);
  }
}
