// 函数 0x495c60  __lseek_nolock  size=0x75  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __cdecl _lseek_nolock(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD v5; // edi
  DWORD LastError; // eax
  _BYTE *v7; // eax

  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
    return -1;
  }
  else
  {
    v5 = SetFilePointer(osfhandle, lDistanceToMove, 0, dwMoveMethod);
    if ( v5 == -1 )
      LastError = GetLastError();
    else
      LastError = 0;
    if ( LastError )
    {
      _dosmaperr(LastError);
      return -1;
    }
    else
    {
      v7 = (_BYTE *)(dword_8F61C0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
      *v7 &= ~2u;
      return v5;
    }
  }
}
