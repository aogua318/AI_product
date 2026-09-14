// 函数 0x4891c2  _test_whether_TOS_is_int  size=0x28  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __usercall test_whether_TOS_is_int(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  if ( _ST6 == a1 )
  {
    _ST6 = a1 * dbl_4B8270;
    __asm { frndint }
  }
}
