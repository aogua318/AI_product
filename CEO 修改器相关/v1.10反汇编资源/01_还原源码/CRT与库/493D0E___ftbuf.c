// 函数 0x493d0e  __ftbuf  size=0x34  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _ftbuf(int a1, FILE *Stream)
{
  int result; // eax

  if ( a1 )
  {
    if ( (Stream->_flag & 0x1000) != 0 )
    {
      result = _flush(Stream);
      Stream->_flag &= 0xFFFFEEFF;
      Stream->_bufsiz = 0;
      Stream->_ptr = 0;
      Stream->_base = 0;
    }
  }
  return result;
}
