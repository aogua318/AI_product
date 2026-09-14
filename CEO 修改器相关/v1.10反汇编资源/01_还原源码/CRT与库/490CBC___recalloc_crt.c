// 函数 0x490cbc  __recalloc_crt  size=0x52  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl _recalloc_crt(void *Block, size_t Count, size_t Size)
{
  DWORD v3; // esi
  void *v4; // edi
  int v5; // eax

  v3 = 0;
  do
  {
    v4 = _recalloc(Block, Count, Size);
    if ( v4 || !Size || !dword_8F2ED4 )
      break;
    Sleep(v3);
    v5 = v3 + 1000;
    if ( v3 + 1000 > dword_8F2ED4 )
      v5 = -1;
    v3 = v5;
  }
  while ( v5 != -1 );
  return v4;
}
