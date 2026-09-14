// 函数 0x480a50  sub_480A50  size=0x25  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_480A50(int this, int a2)
{
  int v2; // eax
  int *v3; // eax

  v2 = a2;
  if ( a2 < 1 )
    v2 = 1;
  *(_DWORD *)(this + 32) = v2;
  v3 = sub_480990((__int16 *)this);
  return sub_47C950(v3);
}
