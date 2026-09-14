// 函数 0x411f10  sub_411F10  size=0x5C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl sub_411F10(double *a1)
{
  int v1; // eax

  if ( dword_4B1028 == -1 )
    return 0.0;
  v1 = *(__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98 + 2 * (int)*a1 + 240);
  if ( v1 == -1 )
    return 0.0;
  else
    return (double)sub_415180(dword_4CC8D0 + v1 * dword_4CC8BC);
}
