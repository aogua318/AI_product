// 函数 0x4042a0  sub_4042A0  size=0x38  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_4042A0(_DWORD *this, int a2)
{
  int v4; // [esp+8h] [ebp+8h]

  v4 = *(this + a2 + 1278);
  if ( v4 )
    return (double)v4 * 0.00390625;
  else
    return (double)*((int *)dword_870824 + 28 * a2 + 17) * 0.00390625;
}
