// 函数 0x490c6e  __realloc_crt  size=0x4E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 || !Size || !dword_8F2ED4 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_8F2ED4 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}
