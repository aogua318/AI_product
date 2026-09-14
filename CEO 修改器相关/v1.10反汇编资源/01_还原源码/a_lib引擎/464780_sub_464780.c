// 函数 0x464780  sub_464780  size=0x35  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464780(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = *(this + 2);
  if ( a2 >= v3 || a3 >= *(this + 3) )
    return 0;
  else
    return sub_464320(*(const char **)(*this + 4 * (a2 + a3 * v3)));
}
