// 函数 0x4872c0  sub_4872C0  size=0x116  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4872C0(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // ecx
  _DWORD v5[4]; // [esp+Ch] [ebp-10h] BYREF

  sub_464B60(v5);
  sub_464CE0(v5, &dword_8EEE00);
  if ( v5[0] < *(this + 25) )
    dword_8EEE00 = *(this + 25);
  if ( v5[1] < *(this + 26) )
    dword_8EEE04 = *(this + 26);
  if ( v5[2] > *(this + 27) )
    dword_8EEE08 = *(this + 27);
  if ( v5[3] > *(this + 28) )
    dword_8EEE0C = *(this + 28);
  sub_469640(&dword_8EEDEC, *(this + 29), *(this + 30), this + 1, 0, 0, *(this + 31), *(this + 32));
  sub_469640(&dword_8EEDEC, *(this + 29), *(this + 30), this + 13, 0, 0, *(this + 31), *(this + 32));
  v2 = *(this + 32);
  v3 = (_DWORD *)*this;
  sub_468C70(
    &dword_8EEDEC,
    v2 + *(this + 29) + *(this + 31) * (v3[24] - v3[22]) / *(this + 33),
    *(this + 30) + v2 * (v3[25] - v3[23]) / *(this + 34),
    *(this + 31) * *(this + 35) / *(this + 33),
    v2 * *(this + 36) / *(this + 34),
    32736);
  return sub_464CE0(&dword_8EEE00, v5);
}
