// 函数 0x48bfde  __endthread  size=0x2C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn _endthread()
{
  int v0; // eax
  void *v1; // esi

  v0 = _getptd_noexit();
  v1 = (void *)v0;
  if ( v0 )
  {
    if ( *(_DWORD *)(v0 + 4) != -1 )
      CloseHandle(*(HANDLE *)(v0 + 4));
    _freeptd(v1);
  }
  ExitThread(0);
}
