// 函数 0x40f4b0  sub_40F4B0  size=0xBE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl sub_40F4B0(int a1, int a2, int a3)
{
  double v3; // st7
  int *v4; // eax
  double result; // st7

  v3 = 0.0;
  v4 = (int *)(*(_DWORD *)dword_4C4434 + 72 * a1);
  if ( a2 )
    v3 = (double)v4[15];
  result = v3
         + (double)*((int *)dword_870824 + 241) * 0.00390625 * (double)v4[1]
         + (double)*((int *)dword_870824 + 269) * 0.00390625 * (double)v4[2]
         + (double)*((int *)dword_870824 + 73) * 0.00390625 * (double)v4[3]
         + (double)*((int *)dword_870824 + 437) * 0.00390625 * (double)v4[4]
         + (double)*((int *)dword_870824 + 409) * 0.00390625 * (double)v4[5]
         + (double)*((int *)dword_870824 + 829) * 0.00390625 * (double)v4[6]
         + 0.00390625 * (double)*((int *)dword_870824 + 353) * (double)v4[7];
  if ( a3 != -1 )
    return (double)sub_42A0F0(*(_DWORD *)dword_4D0C8C + 388 * *((__int16 *)dword_870824 + 56 * a3 + 6)) + result;
  return result;
}
