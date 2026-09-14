// 函数 0x495fb8  __unlock_fhandle  size=0x27  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_8F61C0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}
