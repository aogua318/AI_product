// 函数 0x484280  sub_484280  size=0x31  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_484280(int *this, HWND a2, int a3)
{
  HWND result; // eax
  bool v4; // zf
  int *v5; // eax

  result = a2;
  if ( a2 != (HWND)*(this + 24) || a3 != *(this + 25) )
  {
    v4 = *(this + 16) == 0;
    *(this + 24) = (int)a2;
    *(this + 25) = a3;
    if ( !v4 )
    {
      v5 = sub_483910(this);
      return sub_47C950(v5);
    }
  }
  return result;
}
