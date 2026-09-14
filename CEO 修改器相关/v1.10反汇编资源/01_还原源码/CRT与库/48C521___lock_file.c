// 函数 0x48c521  __lock_file  size=0x41  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_4B8318 || Stream > &stru_4B8578 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_4B8318) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}
