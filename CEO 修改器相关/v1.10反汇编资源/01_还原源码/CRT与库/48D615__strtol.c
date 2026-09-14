// 函数 0x48d615  _strtol  size=0x2B  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_8F386C )
    return strtoxl(0, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_4B8FFC, String, (const char **)EndPtr, Radix, 0);
}
