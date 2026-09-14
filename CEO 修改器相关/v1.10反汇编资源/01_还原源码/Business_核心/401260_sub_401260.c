// 函数 0x401260  sub_401260  size=0x33  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __thiscall sub_401260(unsigned int *this, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax

  v4 = *(this + 6);
  if ( a3 >= v4 || a4 >= *(this + 7) )
    return -1;
  else
    return *(_WORD *)(*(this + a2 + 30) + 2 * (a3 + a4 * v4));
}
