// 函数 0x4646d0  sub_4646D0  size=0x42  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4646D0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  const char *v4; // esi

  v3 = *(this + 2);
  if ( a2 < v3 && a3 < *(this + 3) && (v4 = *(const char **)(*this + 4 * (a2 + a3 * v3)), sub_464320(v4)) )
    return atoi(v4);
  else
    return 0;
}
