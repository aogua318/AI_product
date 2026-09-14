// 函数 0x48b2d5  __fseek_nolock  size=0x8A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _fseek_nolock(FILE *Stream, int Offset, int Origin)
{
  int flag; // eax
  int v5; // eax
  int v6; // eax

  flag = Stream->_flag;
  if ( (flag & 0x83) != 0 )
  {
    Stream->_flag = flag & 0xFFFFFFEF;
    if ( Origin == 1 )
    {
      Offset += _ftell_nolock(Stream);
      Origin = 0;
    }
    _flush(Stream);
    v5 = Stream->_flag;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 )
        Stream->_bufsiz = 512;
    }
    else
    {
      Stream->_flag = v5 & 0xFFFFFFFC;
    }
    v6 = _fileno(Stream);
    return (_lseek(v6, Offset, Origin) != -1) - 1;
  }
  else
  {
    *_errno() = 22;
    return -1;
  }
}
