// 函数 0x483c30  sub_483C30  size=0x2D  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483C30(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 41) )
    return -1;
  else
    return *(__int16 *)(a2 * *(this + 40) + *(this + 45) + 12);
}
