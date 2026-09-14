// 函数 0x4841a0  sub_4841A0  size=0x4D  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_4841A0(int *this, int a2, int a3)
{
  int *v4; // eax
  bool v5; // zf
  int *v6; // eax

  if ( *this != a2 || *(this + 1) != a3 )
  {
    if ( *(this + 16) )
    {
      v4 = sub_483910(this);
      sub_47C950(v4);
    }
    v5 = *(this + 16) == 0;
    *this = a2;
    *(this + 1) = a3;
    if ( !v5 )
    {
      v6 = sub_483910(this);
      sub_47C950(v6);
    }
  }
}
