// 函数 0x490d0e  __msize  size=0x33  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __cdecl _msize(void *Block)
{
  if ( Block )
    return HeapSize(hHeap, 0, Block);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}
