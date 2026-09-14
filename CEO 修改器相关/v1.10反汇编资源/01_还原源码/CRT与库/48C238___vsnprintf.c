// 函数 0x48c238  __vsnprintf  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return _vsnprintf_l(Buffer, BufferCount, Format, 0, ArgList);
}
