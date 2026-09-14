// 函数 0x48b35f  _fseek  size=0x7C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl fseek(FILE *Stream, int Offset, int Origin)
{
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Stream && (unsigned int)Origin <= 2 )
  {
    _lock_file(Stream);
    v4 = _fseek_nolock(Stream, Offset, Origin);
    _unlock_file(Stream);
    return v4;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
