// 函数 0x47e970  sub_47E970  size=0x19  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int8 __thiscall sub_47E970(unsigned __int8 *this)
{
  unsigned __int8 result; // al
  int *v2; // eax

  result = *(this + 9);
  if ( (result & 1) != 0 )
  {
    *(this + 9) = result & 0xF0;
    v2 = sub_47E590(this);
    return (unsigned __int8)sub_47C950(v2);
  }
  return result;
}
