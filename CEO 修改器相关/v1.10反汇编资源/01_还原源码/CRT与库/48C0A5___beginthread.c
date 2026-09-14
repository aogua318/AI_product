// 函数 0x48c0a5  __beginthread  size=0xA7  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

uintptr_t __cdecl _beginthread(_beginthread_proc_type StartAddress, unsigned int StackSize, void *ArgList)
{
  DWORD LastError; // ebx
  _DWORD *v5; // esi
  int v6; // eax
  HANDLE Thread; // eax
  uintptr_t v8; // edi

  LastError = 0;
  if ( !StartAddress )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  __set_flsgetvalue();
  v5 = (_DWORD *)_calloc_crt(1, 532);
  if ( v5 )
  {
    v6 = _getptd();
    _initptd(v5, *(_DWORD *)(v6 + 108));
    v5[21] = StartAddress;
    v5[22] = ArgList;
    Thread = CreateThread(0, StackSize, (LPTHREAD_START_ROUTINE)_threadstart, v5, 4u, v5);
    v8 = (uintptr_t)Thread;
    v5[1] = Thread;
    if ( Thread && ResumeThread(Thread) != -1 )
      return v8;
    LastError = GetLastError();
  }
  free(v5);
  if ( LastError )
    _dosmaperr(LastError);
  return -1;
}
