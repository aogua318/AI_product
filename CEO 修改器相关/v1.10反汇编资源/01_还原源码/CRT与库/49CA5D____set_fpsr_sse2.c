// 函数 0x49ca5d  ___set_fpsr_sse2  size=0x72  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( dword_8F62C4 )
  {
    if ( (a1 & 0x40) != 0 && dword_4B9738 )
      _mm_setcsr(a1);
    else
      _mm_setcsr(a1 & 0xFFFFFFBF);
  }
  return result;
}
