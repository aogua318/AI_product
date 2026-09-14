// 函数 0x48b946  _fread_s  size=0x8E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __cdecl fread_s(void *Buffer, size_t BufferSize, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v6; // [esp+10h] [ebp-1Ch]

  if ( !ElementSize || !ElementCount )
    return 0;
  if ( !Stream )
  {
    if ( BufferSize != -1 )
      memset(Buffer, 0, BufferSize);
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  _lock_file(Stream);
  v6 = _fread_nolock_s(Buffer, BufferSize, ElementSize, ElementCount, Stream);
  _unlock_file(Stream);
  return v6;
}
