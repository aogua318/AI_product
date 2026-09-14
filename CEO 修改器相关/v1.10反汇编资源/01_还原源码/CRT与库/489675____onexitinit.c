// 函数 0x489675  ___onexitinit  size=0x31  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(32, 4);
  Ptr = EncodePointer(v0);
  dword_8F72F0 = Ptr;
  if ( !v0 )
    return 24;
  *v0 = 0;
  return 0;
}
