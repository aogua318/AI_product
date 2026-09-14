// 函数 0x48b56f  _ftell  size=0x65  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl ftell(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-1Ch]

  if ( Stream )
  {
    _lock_file(Stream);
    v2 = _ftell_nolock(Stream);
    _unlock_file(Stream);
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
