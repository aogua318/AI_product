// 函数 0x490bdd  __malloc_crt  size=0x45  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 || !dword_8F2ED4 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_8F2ED4 )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}
