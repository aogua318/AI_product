// 函数 0x48bf8d  __time64  size=0x51  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__time64_t __cdecl _time64(__time64_t *Time)
{
  __time64_t result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  result = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) / 0x989680uLL;
  if ( result > 0x793406FFFLL )
    result = -1;
  if ( Time )
    *Time = result;
  return result;
}
