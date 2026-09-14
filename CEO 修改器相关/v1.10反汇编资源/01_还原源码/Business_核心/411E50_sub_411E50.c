// 函数 0x411e50  sub_411E50  size=0x80  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl sub_411E50(double *a1)
{
  int i; // edx
  int v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  if ( dword_4B1028 != -1 )
  {
    for ( i = *(__int16 *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 752);
          i != -1;
          i = *(__int16 *)(i * dword_4D0C70 + dword_4D0C84 + 6) )
    {
      if ( *(char *)(388 * *(__int16 *)(i * dword_4D0C70 + dword_4D0C84) + *(_DWORD *)dword_4D0C8C + 78) == (int)*a1 )
        ++v3;
    }
  }
  return (double)v3;
}
