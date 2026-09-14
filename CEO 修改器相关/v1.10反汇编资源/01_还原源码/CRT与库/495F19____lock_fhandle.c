// 函数 0x495f19  ___lock_fhandle  size=0x9F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL v3; // [esp+10h] [ebp-1Ch]

  v1 = dword_8F61C0[a1 >> 5] + ((a1 & 0x1F) << 6);
  v3 = 1;
  if ( !*(_DWORD *)(v1 + 8) )
  {
    _lock(10);
    if ( !*(_DWORD *)(v1 + 8) )
    {
      v3 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v1 + 12), 0xFA0u);
      ++*(_DWORD *)(v1 + 8);
    }
    _unlock(10);
  }
  if ( v3 )
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_8F61C0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return v3;
}
