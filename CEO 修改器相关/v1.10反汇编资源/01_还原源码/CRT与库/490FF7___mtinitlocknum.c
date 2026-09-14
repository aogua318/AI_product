// 函数 0x490ff7  __mtinitlocknum  size=0xC2  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _mtinitlocknum(int a1)
{
  LPCRITICAL_SECTION *v1; // esi
  struct _RTL_CRITICAL_SECTION *v3; // edi
  int v4; // [esp+10h] [ebp-1Ch]

  v4 = 1;
  if ( !hHeap )
  {
    _FF_MSGBANNER();
    _NMSG_WRITE(30);
    __crtExitProcess(0xFFu);
  }
  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 )
    return 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)_malloc_crt(0x18u);
  if ( v3 )
  {
    _lock(10);
    if ( *v1 )
    {
      free(v3);
    }
    else if ( InitializeCriticalSectionAndSpinCount(v3, 0xFA0u) )
    {
      *v1 = v3;
    }
    else
    {
      free(v3);
      *_errno() = 12;
      v4 = 0;
    }
    _unlock(10);
    return v4;
  }
  else
  {
    *_errno() = 12;
    return 0;
  }
}
