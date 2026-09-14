// 函数 0x4982c0  __fcloseall  size=0x9C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  _lock(1);
  for ( i = 3; i < dword_8F72E0; ++i )
  {
    if ( *((_DWORD *)dword_8F62C8 + i) )
    {
      v1 = *((_DWORD *)dword_8F62C8 + i);
      if ( (*(_BYTE *)(v1 + 12) & 0x83) != 0 && fclose((FILE *)v1) != -1 )
        ++v3;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)dword_8F62C8 + i) + 32));
        free(*((void **)dword_8F62C8 + i));
        *((_DWORD *)dword_8F62C8 + i) = 0;
      }
    }
  }
  _unlock(1);
  return v3;
}
