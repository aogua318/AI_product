// 函数 0x48ad01  _vfprintf  size=0x1F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl vfprintf(FILE *const Stream, const char *const Format, va_list ArgList)
{
  return vfprintf_helper((int (__cdecl *)(FILE *, int, int, int))_output_l, Stream, (int)Format, 0, (int)ArgList);
}
