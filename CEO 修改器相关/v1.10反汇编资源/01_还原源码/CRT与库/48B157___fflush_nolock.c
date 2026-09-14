// 函数 0x48b157  __fflush_nolock  size=0x48  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _fflush_nolock(FILE *Stream)
{
  int v2; // eax

  if ( !Stream )
    return flsall(0);
  if ( _flush(Stream) )
    return -1;
  if ( (Stream->_flag & 0x4000) == 0 )
    return 0;
  v2 = _fileno(Stream);
  return -(_commit(v2) != 0);
}
