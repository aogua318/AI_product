// 函数 0x48d2c2  __cfltcvt  size=0x23  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _cfltcvt(_DWORD *a1, char *Str, int a3, int a4, size_t Size, int a6)
{
  return _cfltcvt_l(a1, Str, a3, a4, Size, a6, 0);
}
