// 函数 0x4991b3  __set_exp  size=0x2D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}
