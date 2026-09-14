// 函数 0x48addc  _fopen  size=0x17  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__cdecl fopen(const char *FileName, const char *Mode)
{
  return _fsopen(FileName, Mode, 64);
}
