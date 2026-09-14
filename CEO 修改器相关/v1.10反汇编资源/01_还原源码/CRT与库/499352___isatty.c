// 函数 0x499352  __isatty  size=0x56  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  if ( FileHandle < 0 || FileHandle >= uNumber )
  {
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return 0;
  }
  return *(_BYTE *)(dword_8F61C0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
}
