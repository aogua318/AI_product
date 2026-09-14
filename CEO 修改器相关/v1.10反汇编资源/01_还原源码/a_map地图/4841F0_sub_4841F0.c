// 函数 0x4841f0  sub_4841F0  size=0x4F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_4841F0(int *this, int a2, int a3)
{
  int *v4; // eax
  bool v5; // zf
  int *v6; // eax

  if ( *(this + 2) != a2 || *(this + 3) != a3 )
  {
    if ( *(this + 16) )
    {
      v4 = sub_483910(this);
      sub_47C950(v4);
    }
    v5 = *(this + 16) == 0;
    *(this + 2) = a2;
    *(this + 3) = a3;
    if ( !v5 )
    {
      v6 = sub_483910(this);
      sub_47C950(v6);
    }
  }
}
