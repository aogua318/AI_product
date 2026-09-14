// 函数 0x48aaea  _fprintf  size=0x10C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int fprintf(FILE *const Stream, const char *const Format, ...)
{
  int v3; // eax
  _BYTE *v4; // ecx
  char *v5; // eax
  int v6; // esi
  int v7; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+3Ch] [ebp+10h] BYREF

  va_start(va, Format);
  v7 = 0;
  if ( Stream && Format )
  {
    _lock_file(Stream);
    if ( (Stream->_flag & 0x40) == 0 )
    {
      v3 = _fileno(Stream);
      if ( v3 == -1 || v3 == -2 )
        v4 = &unk_4B9020;
      else
        v4 = (_BYTE *)(dword_8F61C0[v3 >> 5] + ((v3 & 0x1F) << 6));
      if ( (v4[36] & 0x7F) != 0
        || (v3 == -1 || v3 == -2
          ? (v5 = (char *)&unk_4B9020)
          : (v5 = (char *)(dword_8F61C0[v3 >> 5] + ((v3 & 0x1F) << 6))),
            v5[36] < 0) )
      {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        v7 = -1;
      }
    }
    if ( !v7 )
    {
      v6 = _stbuf(Stream);
      v7 = _output_l(Stream, (int)Format, 0, (int)va);
      _ftbuf(v6, Stream);
    }
    _unlock_file(Stream);
    return v7;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
