// 函数 0x46a320  sub_46A320  size=0x34  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __thiscall sub_46A320(FILE **this, void *Buffer, size_t ElementCount)
{
  FILE *v4; // ecx

  v4 = *this;
  if ( !v4 )
    return 0;
  if ( *(this + 1) )
    return sub_46F340(Buffer, ElementCount);
  return fread(Buffer, 1u, ElementCount, v4);
}
