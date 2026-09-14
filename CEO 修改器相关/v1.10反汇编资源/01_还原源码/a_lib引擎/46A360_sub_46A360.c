// 函数 0x46a360  sub_46A360  size=0x2C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __thiscall sub_46A360(int this, void *Buffer, size_t ElementSize)
{
  if ( !*(_DWORD *)this || *(_DWORD *)(this + 4) )
    return 0;
  else
    return fwrite(Buffer, ElementSize, 1u, *(FILE **)this);
}
