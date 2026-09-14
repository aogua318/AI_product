// 函数 0x42c3e0  sub_42C3E0  size=0x6D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42C3E0(int this, int a2, int a3)
{
  int v3; // esi

  if ( a3 )
  {
    *(_BYTE *)(this + 11) &= ~0x10u;
    *(_BYTE *)(this + 12) = a2;
  }
  v3 = a2;
  if ( a2 == 4 )
    v3 = 2;
  if ( a3 && v3 == 2 )
    *(_BYTE *)(this + 11) |= 0x10u;
  return sub_486530(
           *(__int16 *)(this + 16),
           v3 + *(__int16 *)(*(_DWORD *)dword_4D10B0 + 8 * *(char *)(this + 10)),
           0,
           1,
           0,
           0);
}
