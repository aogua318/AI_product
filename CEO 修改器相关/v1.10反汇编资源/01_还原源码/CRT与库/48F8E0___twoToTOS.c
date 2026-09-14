// 函数 0x48f8e0  __twoToTOS  size=0x15  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

long double __usercall _twoToTOS@<st0>(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  return __FSCALE__(__F2XM1__(-(_ST6 - a1)) + 1.0, _ST6);
}
