// 函数 0x496b9e  _memcpy_s  size=0x75  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // esi

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy(Destination, Source, SourceSize);
    return 0;
  }
  memset(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v5 = 22;
    *_errno() = 22;
LABEL_5:
    _invalid_parameter_noinfo();
    return v5;
  }
  if ( DestinationSize < SourceSize )
  {
    *_errno() = 34;
    v5 = 34;
    goto LABEL_5;
  }
  return 22;
}
