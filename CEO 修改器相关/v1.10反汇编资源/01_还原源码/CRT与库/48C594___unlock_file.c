// 函数 0x48c594  __unlock_file  size=0x3C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_4B8318 || Stream > &stru_4B8578 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_4B8318) >> 5) + 16);
  }
}
