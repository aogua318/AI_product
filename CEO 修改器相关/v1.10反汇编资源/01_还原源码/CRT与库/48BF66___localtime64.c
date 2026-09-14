// 函数 0x48bf66  __localtime64  size=0x27  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

struct tm *__cdecl _localtime64(const __time64_t *Time)
{
  struct tm *result; // eax

  result = (struct tm *)__getgmtimebuf();
  if ( result )
    return _localtime64_s(result, Time) == 0 ? result : 0;
  return result;
}
