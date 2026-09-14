// 函数 0x4801e0  sub_4801E0  size=0x20  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_4801E0(int this, HWND a2)
{
  HWND result; // eax
  int *v3; // eax

  result = a2;
  if ( *(HWND *)(this + 52) != a2 )
  {
    *(_DWORD *)(this + 52) = a2;
    v3 = sub_47FFB0((__int16 *)this);
    return sub_47C950(v3);
  }
  return result;
}
