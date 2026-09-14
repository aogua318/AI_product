// 函数 0x48b0bd  __mkdir  size=0x32  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _mkdir(const char *Path)
{
  DWORD LastError; // eax

  if ( CreateDirectoryA(Path, 0) )
    LastError = 0;
  else
    LastError = GetLastError();
  if ( !LastError )
    return 0;
  _dosmaperr(LastError);
  return -1;
}
