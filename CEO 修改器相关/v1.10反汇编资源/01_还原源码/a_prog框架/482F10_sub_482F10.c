// 函数 0x482f10  sub_482F10  size=0x66  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_482F10(__int16 *this, HWND a2, int a3)
{
  HWND result; // eax
  int *v5; // eax
  int *v6; // eax
  _DWORD v7[4]; // [esp+Ch] [ebp-10h] BYREF

  sub_464B60(v7);
  result = (HWND)*(this + 138);
  if ( result != a2 || *(this + 139) != a3 )
  {
    v5 = sub_482E20((int)this);
    sub_47C950(v5);
    *(this + 138) = (__int16)a2;
    *(this + 139) = a3;
    v6 = sub_482E20((int)this);
    return sub_47C950(v6);
  }
  return result;
}
