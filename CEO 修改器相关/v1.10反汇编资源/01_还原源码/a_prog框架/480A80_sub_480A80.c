// 函数 0x480a80  sub_480A80  size=0x2A  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_480A80(int this, int a2)
{
  int v2; // eax
  int *v3; // eax

  v2 = a2;
  if ( a2 < 0 )
    v2 = 0;
  if ( v2 > *(_DWORD *)(this + 32) )
    v2 = *(_DWORD *)(this + 32);
  *(_DWORD *)(this + 36) = v2;
  v3 = sub_480990((__int16 *)this);
  return sub_47C950(v3);
}
