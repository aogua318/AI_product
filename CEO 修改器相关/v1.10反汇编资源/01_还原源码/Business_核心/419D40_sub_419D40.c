// 函数 0x419d40  sub_419D40  size=0x9C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_419D40(int a1)
{
  int v1; // edi
  int i; // ecx
  int v3; // eax
  int j; // eax
  int v5; // esi
  int v6; // eax

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  for ( i = *(__int16 *)(v1 + 238); i != -1; i = *(__int16 *)(v3 + 6) )
  {
    v3 = dword_4CC8D0 + i * dword_4CC8BC;
    *(_WORD *)(v3 + 1258) = 0;
  }
  for ( j = *(__int16 *)(v1 + 752); j != -1; j = *(__int16 *)(v5 + 6) )
  {
    v5 = dword_4D0C84 + j * dword_4D0C70;
    v6 = sub_4275A0(v5);
    if ( v6 != -1 )
      *(_WORD *)(dword_4CC8BC * *(__int16 *)(v1 + 2 * v6 + 240) + dword_4CC8D0 + 1258) = 1;
  }
  return 0;
}
