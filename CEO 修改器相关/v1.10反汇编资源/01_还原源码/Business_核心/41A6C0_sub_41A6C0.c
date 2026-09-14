// 函数 0x41a6c0  sub_41A6C0  size=0x54  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_41A6C0(__int16 *this)
{
  int v1; // eax
  double result; // st7
  int v3; // esi
  double i; // [esp+0h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-4h]

  v1 = *(this + 810);
  result = 0.0;
  for ( i = 0.0; v1 != -1; i = result )
  {
    v3 = dword_4C43DC + v1 * dword_4C43C8;
    v5 = sub_40F570((_DWORD *)v3, 0);
    v1 = *(__int16 *)(v3 + 20);
    result = (double)v5 + i;
  }
  return result;
}
