// 函数 0x48c390  __CIsqrt  size=0x14  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __usercall _CIsqrt@<st0>(unsigned __int64 x@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+4h] [ebp-8h]

  _checkTOS_withFB(x, HIDWORD(x));
  return start_4(v2, v3);
}
