// 函数 0x48b78a  __fread_nolock_s  size=0x1BC  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __cdecl _fread_nolock_s(void *Buffer, size_t BufferSize, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v6; // edi
  size_t v7; // ebx
  int cnt; // eax
  rsize_t v9; // edi
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // ecx
  unsigned int v17; // [esp-4h] [ebp-20h]
  unsigned int bufsiz; // [esp+10h] [ebp-Ch]
  char *DstBuf; // [esp+14h] [ebp-8h]
  rsize_t DestinationSize; // [esp+18h] [ebp-4h]

  DstBuf = (char *)Buffer;
  DestinationSize = BufferSize;
  if ( !ElementSize || !ElementCount )
    return 0;
  if ( !Buffer )
    goto LABEL_4;
  if ( !Stream || ElementCount > 0xFFFFFFFF / ElementSize )
  {
    if ( BufferSize != -1 )
      memset(Buffer, 0, BufferSize);
    if ( !Stream || ElementCount > 0xFFFFFFFF / ElementSize )
    {
LABEL_4:
      *_errno() = 22;
      goto LABEL_5;
    }
  }
  v6 = ElementCount * ElementSize;
  v7 = ElementCount * ElementSize;
  if ( (Stream->_flag & 0x10C) != 0 )
    bufsiz = Stream->_bufsiz;
  else
    bufsiz = 4096;
  if ( !v6 )
    return ElementCount;
  while ( 1 )
  {
    if ( (Stream->_flag & 0x10C) != 0 )
    {
      cnt = Stream->_cnt;
      if ( cnt )
      {
        if ( cnt < 0 )
          goto LABEL_44;
        v9 = v7;
        if ( v7 >= cnt )
          v9 = Stream->_cnt;
        if ( v9 > DestinationSize )
          goto LABEL_41;
        memcpy_s(DstBuf, DestinationSize, Stream->_ptr, v9);
        Stream->_cnt -= v9;
        Stream->_ptr += v9;
        DstBuf += v9;
        v7 -= v9;
        DestinationSize -= v9;
        v6 = ElementCount * ElementSize;
        goto LABEL_39;
      }
    }
    if ( v7 < bufsiz )
      break;
    if ( bufsiz )
    {
      if ( v7 <= 0x7FFFFFFF )
      {
        v10 = v7 % bufsiz;
        v11 = v7;
      }
      else
      {
        v10 = 0x7FFFFFFF % bufsiz;
        v11 = 0x7FFFFFFF;
      }
      v12 = v11 - v10;
    }
    else
    {
      v12 = 0x7FFFFFFF;
      if ( v7 <= 0x7FFFFFFF )
        v12 = v7;
    }
    if ( v12 > DestinationSize )
      goto LABEL_41;
    v17 = v12;
    v13 = _fileno(Stream);
    v14 = _read(v13, DstBuf, v17);
    if ( !v14 )
    {
      Stream->_flag |= 0x10u;
      return (v6 - v7) / ElementSize;
    }
    if ( v14 == -1 )
    {
LABEL_44:
      Stream->_flag |= 0x20u;
      return (v6 - v7) / ElementSize;
    }
    DstBuf += v14;
    v7 -= v14;
    DestinationSize -= v14;
LABEL_39:
    if ( !v7 )
      return ElementCount;
  }
  v15 = _filbuf(Stream);
  if ( v15 == -1 )
    return (v6 - v7) / ElementSize;
  if ( DestinationSize )
  {
    v16 = DstBuf++;
    *v16 = v15;
    --v7;
    --DestinationSize;
    bufsiz = Stream->_bufsiz;
    goto LABEL_39;
  }
LABEL_41:
  if ( BufferSize != -1 )
    memset(Buffer, 0, BufferSize);
  *_errno() = 34;
LABEL_5:
  _invalid_parameter_noinfo();
  return 0;
}
