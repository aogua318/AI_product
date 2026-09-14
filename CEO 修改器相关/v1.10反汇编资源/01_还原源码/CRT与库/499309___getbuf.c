// 函数 0x499309  __getbuf  size=0x49  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_8F2B94;
  v1 = _malloc_crt(0x1000u);
  a1[2] = v1;
  if ( v1 )
  {
    a1[3] |= 8u;
    a1[6] = 4096;
  }
  else
  {
    a1[3] |= 4u;
    a1[2] = a1 + 5;
    a1[6] = 2;
  }
  result = a1[2];
  a1[1] = 0;
  *a1 = result;
  return result;
}
