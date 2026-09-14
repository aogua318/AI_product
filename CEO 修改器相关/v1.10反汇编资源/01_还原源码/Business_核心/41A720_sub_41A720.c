// 函数 0x41a720  sub_41A720  size=0x52  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_41A720(__int16 *this)
{
  int v1; // eax
  double result; // st7
  int v3; // esi
  double v4; // st7
  double i; // [esp+0h] [ebp-Ch]

  v1 = *(this + 810);
  result = 0.0;
  for ( i = 0.0; v1 != -1; i = result )
  {
    v3 = dword_4C43DC + v1 * dword_4C43C8;
    v4 = (double)sub_40CEF0(v3);
    v1 = *(__int16 *)(v3 + 20);
    result = v4 + i;
  }
  return result;
}
