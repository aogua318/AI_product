// 函数 0x490f3f  __mtinitlocks  size=0x4A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_8F2ED8;
  while ( 1 )
  {
    if ( dword_4B8774[2 * v0] == 1 )
    {
      v2 = &lpCriticalSection + 2 * v0;
      *v2 = v1++;
      if ( !InitializeCriticalSectionAndSpinCount(*v2, 0xFA0u) )
        break;
    }
    if ( ++v0 >= 36 )
      return 1;
  }
  *(&lpCriticalSection + 2 * v0) = 0;
  return 0;
}
