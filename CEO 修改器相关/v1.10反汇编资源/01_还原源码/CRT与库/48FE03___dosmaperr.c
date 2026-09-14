// 函数 0x48fe03  __dosmaperr  size=0x23  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl _dosmaperr(unsigned int a1)
{
  int errno_from_oserr; // esi
  int *result; // eax

  *__doserrno() = a1;
  errno_from_oserr = _get_errno_from_oserr(a1);
  result = _errno();
  *result = errno_from_oserr;
  return result;
}
