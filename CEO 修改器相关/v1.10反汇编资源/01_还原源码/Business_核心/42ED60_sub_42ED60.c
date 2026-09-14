// 函数 0x42ed60  sub_42ED60  size=0x38  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_42ED60(double *this)
{
  bool v2; // c0
  double result; // st7

  v2 = sub_42EB70(this) * (double)dword_4CCBA8 / 100.0 > 0.0;
  result = 0.0;
  if ( v2 )
    return sub_42EB70(this) * (double)dword_4CCBA8 / 100.0;
  return result;
}
