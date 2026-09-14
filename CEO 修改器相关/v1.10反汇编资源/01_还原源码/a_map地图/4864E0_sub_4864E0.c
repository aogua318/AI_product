// 函数 0x4864e0  sub_4864E0  size=0x4B  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4864E0(int *this, int a2)
{
  if ( a2 < 0 || a2 >= *(this + 41) || !sub_464E10(this + 39, a2) )
    return 0;
  if ( *(this + 16) )
    sub_485B90(this, a2);
  return sub_4853B0(this, a2);
}
