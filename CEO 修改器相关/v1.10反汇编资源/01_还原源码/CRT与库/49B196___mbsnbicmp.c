// 函数 0x49b196  __mbsnbicmp  size=0x1A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _mbsnbicmp(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  return _mbsnbicmp_l(Str1, Str2, MaxCount, 0);
}
