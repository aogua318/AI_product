// 函数 0x483fe0  sub_483FE0  size=0x31  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483FE0(int *this, int a2)
{
  bool v3; // zf
  int *v4; // eax

  if ( a2 >= *(this + 4) )
    return 0;
  v3 = *(this + 16) == 0;
  *(this + 5) = a2;
  if ( !v3 )
  {
    v4 = sub_483910(this);
    sub_47C950(v4);
  }
  return 1;
}
