// 函数 0x48b3db  __ftell_nolock  size=0x194  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _ftell_nolock(FILE *Stream)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int flag; // edx
  char *ptr; // eax
  char *base; // ecx
  char *v9; // ebx
  char *v10; // edx
  int cnt; // edx
  int *v12; // ebx
  int v13; // esi
  char *v14; // eax
  char *v15; // ecx
  bool v16; // zf
  int bufsiz; // eax
  int v18; // ecx
  char *v19; // [esp+8h] [ebp-Ch]
  int FileHandle; // [esp+Ch] [ebp-8h]
  int Offset; // [esp+10h] [ebp-4h]
  int Streama; // [esp+1Ch] [ebp+8h]

  if ( !Stream )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v3 = _fileno(Stream);
  v4 = v3;
  FileHandle = v3;
  if ( Stream->_cnt < 0 )
    Stream->_cnt = 0;
  v5 = _lseek(v3, 0, 1);
  Offset = v5;
  if ( v5 < 0 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 0x108) == 0 )
    return v5 - Stream->_cnt;
  ptr = Stream->_ptr;
  base = Stream->_base;
  v9 = (char *)(Stream->_ptr - base);
  v19 = v9;
  if ( (flag & 3) != 0 )
  {
    if ( *(char *)(dword_8F61C0[v4 >> 5] + ((v4 & 0x1F) << 6) + 4) < 0 )
    {
      v10 = Stream->_base;
      if ( base < ptr )
      {
        do
        {
          if ( *v10 == 10 )
            ++v9;
          ++v10;
        }
        while ( v10 < ptr );
        v19 = v9;
      }
    }
  }
  else if ( (flag & 0x80u) == 0 )
  {
    *_errno() = 22;
    return -1;
  }
  if ( !Offset )
    return (int)v9;
  if ( (Stream->_flag & 1) == 0 )
    return (int)&v19[Offset];
  cnt = Stream->_cnt;
  if ( cnt )
  {
    v12 = &dword_8F61C0[FileHandle >> 5];
    Streama = cnt + ptr - base;
    v13 = (FileHandle & 0x1F) << 6;
    if ( *(char *)(*v12 + v13 + 4) >= 0 )
    {
LABEL_39:
      Offset -= Streama;
      return (int)&v19[Offset];
    }
    if ( _lseek(FileHandle, 0, 2) == Offset )
    {
      v14 = Stream->_base;
      v15 = &v14[Streama];
      while ( v14 < v15 )
      {
        if ( *v14 == 10 )
          ++Streama;
        ++v14;
      }
      v16 = (Stream->_flag & 0x2000) == 0;
LABEL_37:
      if ( !v16 )
        ++Streama;
      goto LABEL_39;
    }
    if ( _lseek(FileHandle, Offset, 0) >= 0 )
    {
      bufsiz = 512;
      if ( (unsigned int)Streama > 0x200 || (v18 = Stream->_flag, (v18 & 8) == 0) || (v18 & 0x400) != 0 )
        bufsiz = Stream->_bufsiz;
      Streama = bufsiz;
      v16 = (*(_BYTE *)(*v12 + v13 + 4) & 4) == 0;
      goto LABEL_37;
    }
    return -1;
  }
  v19 = 0;
  return (int)&v19[Offset];
}
