// 函数 0x48c14c  _calloc  size=0x40  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl calloc(size_t Count, size_t Size)
{
  void *v2; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v2 = (void *)_calloc_impl(Count, Size, &v4);
  if ( !v2 && v4 && _errno() )
    *_errno() = v4;
  return v2;
}
