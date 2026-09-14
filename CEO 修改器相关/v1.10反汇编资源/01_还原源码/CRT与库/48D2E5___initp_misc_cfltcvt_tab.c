// 函数 0x48d2e5  __initp_misc_cfltcvt_tab  size=0x23  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void (__noreturn *_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  void (__noreturn *result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    result = (void (__noreturn *)())EncodePointer(off_4B8598[i]);
    off_4B8598[i] = result;
  }
  return result;
}
