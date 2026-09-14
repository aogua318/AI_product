// 函数 0x480880  sub_480880  size=0x20  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_480880(int this, HWND a2)
{
  HWND result; // eax
  int *v3; // eax

  result = a2;
  if ( (unsigned int)a2 < *(_DWORD *)(this + 44) )
  {
    *(_DWORD *)(this + 48) = a2;
    v3 = sub_47FFB0((__int16 *)this);
    return sub_47C950(v3);
  }
  return result;
}
