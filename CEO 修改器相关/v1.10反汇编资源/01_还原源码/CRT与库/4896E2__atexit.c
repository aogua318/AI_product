// 函数 0x4896e2  _atexit  size=0x17  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != 0) - 1;
}
