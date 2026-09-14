// 函数 0x47ecc0  sub_47ECC0  size=0x46  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_47ECC0(int *this, int a2)
{
  int v2; // eax
  int v4; // eax
  HWND result; // eax
  int *v6; // eax

  v2 = a2;
  if ( a2 < 1 )
    v2 = 1;
  *(this + 3) = v2;
  if ( *(this + 4) >= v2 )
  {
    v4 = v2 - 1;
    *(this + 4) = v4;
    if ( v4 < 0 )
      *(this + 4) = 0;
  }
  result = (HWND)sub_47EC10(this);
  if ( result )
  {
    v6 = sub_47EC10(this);
    return sub_47C950(v6);
  }
  return result;
}
