// 函数 0x49cd45  __mbsnbicoll  size=0x1A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _mbsnbicoll(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  return _mbsnbicoll_l(Str1, Str2, MaxCount, 0);
}
