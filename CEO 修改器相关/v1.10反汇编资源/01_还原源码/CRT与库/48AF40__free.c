// 函数 0x48af40  _free  size=0x3A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl free(void *Block)
{
  int *v1; // esi
  DWORD LastError; // eax

  if ( Block )
  {
    if ( !HeapFree(hHeap, 0, Block) )
    {
      v1 = _errno();
      LastError = GetLastError();
      *v1 = _get_errno_from_oserr(LastError);
    }
  }
}
