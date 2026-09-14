// 函数 0x4941e6  __seh_longjmp_unwind4@4  size=0x1C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}
