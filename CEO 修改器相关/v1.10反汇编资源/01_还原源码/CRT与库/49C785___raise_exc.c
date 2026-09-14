// 函数 0x49c785  __raise_exc  size=0x23  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl _raise_exc(
        ULONG_PTR Arguments,
        unsigned int *a2,
        DWORD dwExceptionCode,
        int a4,
        float *a5,
        float *a6)
{
  return _raise_exc_ex(Arguments, a2, dwExceptionCode, a4, a5, a6, 0);
}
