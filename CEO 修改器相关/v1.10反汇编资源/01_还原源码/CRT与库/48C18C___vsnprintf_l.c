// 函数 0x48c18c  __vsnprintf_l  size=0xAC  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _vsnprintf_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax
  int v6; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  memset(&File, 0, sizeof(File));
  if ( Format && (!BufferCount || Buffer) )
  {
    File._cnt = 0x7FFFFFFF;
    if ( BufferCount <= 0x7FFFFFFF )
      File._cnt = BufferCount;
    File._flag = 66;
    File._base = Buffer;
    File._ptr = Buffer;
    result = _output_l(&File, (int)Format, (struct localeinfo_struct *)Locale, (int)ArgList);
    v6 = result;
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        _flsbuf(0, &File);
      else
        *File._ptr = 0;
      return v6;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  return result;
}
