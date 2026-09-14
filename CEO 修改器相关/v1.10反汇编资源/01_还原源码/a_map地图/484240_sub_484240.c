// 函数 0x484240  sub_484240  size=0x31  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_484240(int *this, HWND a2, int a3)
{
  HWND result; // eax
  bool v4; // zf
  int *v5; // eax

  result = a2;
  if ( (HWND)*(this + 22) != a2 || *(this + 23) != a3 )
  {
    v4 = *(this + 16) == 0;
    *(this + 22) = (int)a2;
    *(this + 23) = a3;
    if ( !v4 )
    {
      v5 = sub_483910(this);
      return sub_47C950(v5);
    }
  }
  return result;
}
