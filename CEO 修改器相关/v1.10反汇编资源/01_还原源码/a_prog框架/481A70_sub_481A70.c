// 函数 0x481a70  sub_481A70  size=0x44  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_481A70(int this, __int16 a2)
{
  int *v3; // eax
  int *v4; // eax

  v3 = sub_47FFB0((__int16 *)this);
  sub_47C950(v3);
  sub_4808A0(
    (__int16 *)this,
    *(_WORD *)(this + 14),
    a2 * (*(unsigned __int8 *)(this + 20) + *(unsigned __int8 *)(this + 21)));
  v4 = sub_47FFB0((__int16 *)this);
  return sub_47C950(v4);
}
