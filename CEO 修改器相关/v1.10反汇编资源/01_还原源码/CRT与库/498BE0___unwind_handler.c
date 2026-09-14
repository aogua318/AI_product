// 函数 0x498be0  __unwind_handler  size=0x44  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // eax

  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    sub_488637((void *)(a5 ^ *(_DWORD *)(a5 - 4)));
    _local_unwind2(*(_DWORD *)(v5 + 36), *(_DWORD *)(v5 + 40));
    *a4 = a2;
  }
  return uh_return();
}
