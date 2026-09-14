// 函数 0x48aa76  _fclose  size=0x74  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl fclose(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = -1;
  if ( Stream )
  {
    if ( (Stream->_flag & 0x40) != 0 )
    {
      Stream->_flag = 0;
    }
    else
    {
      _lock_file(Stream);
      v2 = _fclose_nolock(Stream);
      _unlock_file(Stream);
    }
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
