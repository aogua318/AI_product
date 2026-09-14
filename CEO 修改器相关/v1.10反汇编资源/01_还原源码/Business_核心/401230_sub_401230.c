// 函数 0x401230  sub_401230  size=0x29  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_401230(int *this)
{
  double result; // st7

  result = (double)*this * 0.00390625 * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)this + 7) + 24);
  if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)this + 7) + 13) )
    return result * 0.8;
  return result;
}
