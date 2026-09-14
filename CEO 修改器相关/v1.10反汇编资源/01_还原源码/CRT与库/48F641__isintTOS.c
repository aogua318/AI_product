// 函数 0x48f641  _isintTOS  size=0x25  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall isintTOS@<eax>(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  if ( _ST6 != a1 )
    return notanint();
  _ST5 = a1 * 0.5;
  __asm { frndint }
  if ( _ST5 == a1 * 0.5 )
    return evenint();
  else
    return isintTOSret();
}
