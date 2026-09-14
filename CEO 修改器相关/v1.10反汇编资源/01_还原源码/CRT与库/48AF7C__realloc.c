// 函数 0x48af7c  _realloc  size=0xAD  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl realloc(void *Block, size_t Size)
{
  size_t v3; // esi
  void *v4; // edi
  int *v5; // esi
  DWORD LastError; // eax
  int *v7; // esi
  DWORD v8; // eax

  if ( !Block )
    return malloc(Size);
  v3 = Size;
  if ( !Size )
  {
    free(Block);
    return 0;
  }
  while ( 1 )
  {
    if ( v3 > 0xFFFFFFE0 )
    {
      _callnewh(v3);
      *_errno() = 12;
      return 0;
    }
    if ( !v3 )
      v3 = 1;
    v4 = HeapReAlloc(hHeap, 0, Block, v3);
    if ( v4 )
      return v4;
    if ( !dword_8F37AC )
      break;
    if ( !_callnewh(v3) )
    {
      v5 = _errno();
      LastError = GetLastError();
      *v5 = _get_errno_from_oserr(LastError);
      return 0;
    }
  }
  v7 = _errno();
  v8 = GetLastError();
  *v7 = _get_errno_from_oserr(v8);
  return v4;
}
