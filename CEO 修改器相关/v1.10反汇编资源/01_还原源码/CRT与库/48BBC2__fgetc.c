// 函数 0x48bbc2  _fgetc  size=0xF4  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl fgetc(FILE *Stream)
{
  int v2; // eax
  _BYTE *v3; // ecx
  char *v4; // eax
  int v6; // eax
  int v7; // [esp+10h] [ebp-1Ch]

  v7 = 0;
  if ( Stream )
  {
    _lock_file(Stream);
    if ( (Stream->_flag & 0x40) == 0 )
    {
      v2 = _fileno(Stream);
      if ( v2 == -1 || v2 == -2 )
        v3 = &unk_4B9020;
      else
        v3 = (_BYTE *)(dword_8F61C0[v2 >> 5] + ((v2 & 0x1F) << 6));
      if ( (v3[36] & 0x7F) != 0
        || (v2 == -1 || v2 == -2
          ? (v4 = (char *)&unk_4B9020)
          : (v4 = (char *)(dword_8F61C0[v2 >> 5] + ((v2 & 0x1F) << 6))),
            v4[36] < 0) )
      {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        v7 = -1;
      }
    }
    if ( !v7 )
    {
      if ( --Stream->_cnt < 0 )
        v6 = _filbuf(Stream);
      else
        v6 = *(unsigned __int8 *)Stream->_ptr++;
      v7 = v6;
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
