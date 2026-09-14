// 函数 0x42bb40  sub_42BB40  size=0x4C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42BB40(int *this, double a2)
{
  double v2; // st7
  int result; // eax

  v2 = ((double)*(this + 18) * 0.00390625 * 3.0 + a2) * 0.25;
  if ( v2 >= 4194304.0 )
    return nullsub_2(this);
  result = (int)(v2 * 256.0);
  *(this + 18) = result;
  return result;
}
