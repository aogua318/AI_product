// 函数 0x495b87  __commit  size=0xD9  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _commit(int FileHandle)
{
  int *v2; // edi
  int v3; // esi
  void *osfhandle; // eax
  DWORD LastError; // [esp+14h] [ebp-1Ch]

  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v2 = &dword_8F61C0[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(v3 + *v2 + 4) & 1) == 0) )
  {
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __lock_fhandle(FileHandle);
  if ( (*(_BYTE *)(v3 + *v2 + 4) & 1) != 0 )
  {
    osfhandle = (void *)_get_osfhandle(FileHandle);
    if ( FlushFileBuffers(osfhandle) )
      LastError = 0;
    else
      LastError = GetLastError();
    if ( !LastError )
      goto $good$28895;
    *__doserrno() = LastError;
  }
  *_errno() = 9;
  LastError = -1;
$good$28895:
  _unlock_fhandle(FileHandle);
  return LastError;
}
