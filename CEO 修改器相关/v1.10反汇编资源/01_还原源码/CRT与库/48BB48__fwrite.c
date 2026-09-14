// 函数 0x48bb48  _fwrite  size=0x7A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v5; // [esp+10h] [ebp-1Ch]

  if ( !ElementSize || !ElementCount )
    return 0;
  if ( !Stream )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  _lock_file(Stream);
  v5 = _fwrite_nolock(Buffer, ElementSize, ElementCount, Stream);
  _unlock_file(Stream);
  return v5;
}
