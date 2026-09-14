// 函数 0x49cbde  __strnicmp  size=0x53  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_8F386C )
    return _strnicmp_l(String1, String2, MaxCount, 0);
  if ( String1 && String2 && MaxCount <= 0x7FFFFFFF )
    return __ascii_strnicmp(String1, String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}
