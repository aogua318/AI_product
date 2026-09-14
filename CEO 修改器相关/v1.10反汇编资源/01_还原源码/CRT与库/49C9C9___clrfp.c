// 函数 0x49c9c9  __clrfp  size=0x11  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex }
  return a1;
}
