// 函数 0x47f250  sub_47F250  size=0x2A  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_47F250(__int16 *this, HWND a2)
{
  HWND result; // eax
  int *v3; // eax

  result = a2;
  if ( (HWND)*(this + 138) != a2 )
  {
    *(this + 138) = (__int16)a2;
    v3 = sub_47EEA0(this);
    return sub_47C950(v3);
  }
  return result;
}
