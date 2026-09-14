// 函数 0x47e6a0  sub_47E6A0  size=0x4D  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_47E6A0(__int16 *this, __int16 a2)
{
  int *v3; // eax
  HWND result; // eax
  void *v5; // ecx
  int *v6; // eax

  if ( sub_47E540((int)this) == *(this + 11) )
  {
    v3 = sub_47E590(this);
    sub_47C950(v3);
  }
  *(this + 11) = a2;
  result = (HWND)sub_47E540((int)this);
  if ( result == (HWND)a2 )
  {
    v6 = sub_47E590(v5);
    return sub_47C950(v6);
  }
  return result;
}
