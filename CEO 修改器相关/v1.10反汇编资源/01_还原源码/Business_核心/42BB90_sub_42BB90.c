// 函数 0x42bb90  sub_42BB90  size=0x75  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42BB90(_DWORD *this, int a2, double a3)
{
  _DWORD *v4; // esi
  double v5; // st7
  double v6; // st7
  int result; // eax
  int v8; // [esp+10h] [ebp+8h]

  v4 = this;
  v8 = *(this + a2 + 1384);
  if ( v8 )
  {
    v5 = (double)v8;
  }
  else
  {
    this = dword_870824;
    v5 = (double)*((int *)dword_870824 + 28 * a2 + 18);
  }
  v6 = (v5 * 0.00390625 * 3.0 + a3) * 0.25;
  if ( v6 >= 4194304.0 )
    return nullsub_2(this);
  result = (int)(v6 * 256.0);
  v4[a2 + 1384] = result;
  return result;
}
