// 函数 0x464720  sub_464720  size=0x55  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_464720(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  const char *v4; // esi
  double v6; // [esp+4h] [ebp-8h] BYREF

  v3 = *(this + 2);
  if ( a2 >= v3 )
    return 0.0;
  if ( a3 >= *(this + 3) )
    return 0.0;
  v4 = *(const char **)(*this + 4 * (a2 + a3 * v3));
  if ( !sub_464320(v4) )
    return 0.0;
  sscanf(v4, "%lf", &v6);
  return v6;
}
