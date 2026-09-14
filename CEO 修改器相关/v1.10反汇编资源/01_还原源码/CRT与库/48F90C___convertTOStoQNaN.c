// 函数 0x48f90c  __convertTOStoQNaN  size=0x19  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __usercall _convertTOStoQNaN@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}
