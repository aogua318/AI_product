// 函数 0x48abf6  _vfprintf_helper  size=0x10B  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl vfprintf_helper(int (__cdecl *a1)(FILE *, int, int, int), FILE *Stream, int a3, int a4, int a5)
{
  int v6; // eax
  _BYTE *v7; // ecx
  char *v8; // eax
  int v9; // esi
  int v10; // [esp+10h] [ebp-1Ch]

  v10 = 0;
  if ( Stream && a3 )
  {
    _lock_file(Stream);
    if ( (Stream->_flag & 0x40) == 0 )
    {
      v6 = _fileno(Stream);
      if ( v6 == -1 || v6 == -2 )
        v7 = &unk_4B9020;
      else
        v7 = (_BYTE *)(dword_8F61C0[v6 >> 5] + ((v6 & 0x1F) << 6));
      if ( (v7[36] & 0x7F) != 0
        || (v6 == -1 || v6 == -2
          ? (v8 = (char *)&unk_4B9020)
          : (v8 = (char *)(dword_8F61C0[v6 >> 5] + ((v6 & 0x1F) << 6))),
            v8[36] < 0) )
      {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        v10 = -1;
      }
    }
    if ( !v10 )
    {
      v9 = _stbuf(Stream);
      v10 = a1(Stream, a3, a4, a5);
      _ftbuf(v9, Stream);
    }
    _unlock_file(Stream);
    return v10;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
