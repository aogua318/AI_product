// 函数 0x482390  sub_482390  size=0x30  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int8 __thiscall sub_482390(unsigned __int8 *this)
{
  unsigned __int8 result; // al
  int *v3; // eax

  result = *(this + 9);
  if ( (result & 1) == 0 )
  {
    *(this + 9) = result | 1;
    dword_8F2AB8 = 0;
    sub_482180((int)this);
    v3 = sub_47E590(this);
    return (unsigned __int8)sub_47C950(v3);
  }
  return result;
}
