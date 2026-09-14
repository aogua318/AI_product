// 函数 0x481ac0  sub_481AC0  size=0x48  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_481AC0(int this, int a2, int a3, int a4, int a5)
{
  __int16 v6; // ax
  int *v7; // eax

  *(_DWORD *)(this + 36) = a2;
  *(_DWORD *)(this + 72) = a5;
  v6 = *(_WORD *)(this + 8);
  *(_DWORD *)(this + 40) = a3;
  *(_DWORD *)(this + 44) = a4;
  if ( v6 != -1 )
    sub_480920((int *)this, v6);
  v7 = sub_47FFB0((__int16 *)this);
  return sub_47C950(v7);
}
