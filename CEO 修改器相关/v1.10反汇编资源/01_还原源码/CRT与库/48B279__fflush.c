// 函数 0x48b279  _fflush  size=0x53  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl fflush(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-1Ch]

  if ( !Stream )
    return flsall(0);
  _lock_file(Stream);
  v2 = _fflush_nolock(Stream);
  _unlock_file(Stream);
  return v2;
}
