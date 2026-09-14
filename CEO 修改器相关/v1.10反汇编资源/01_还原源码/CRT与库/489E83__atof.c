// 函数 0x489e83  _atof  size=0x13  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl atof(const char *String)
{
  return _atof_l(String, 0);
}
