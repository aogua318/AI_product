// 函数 0x4646a0  sub_4646A0  size=0x2F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const CHAR *__thiscall sub_4646A0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = *(this + 2);
  if ( a2 >= v3 || a3 >= *(this + 3) )
    return byte_4A2869;
  else
    return *(const CHAR **)(*this + 4 * (a2 + a3 * v3));
}
