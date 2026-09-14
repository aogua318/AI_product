// 函数 0x422730  sub_422730  size=0xEF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_422730(int a1)
{
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  sub_419920((_DWORD *)v1, &a1, &v5);
  v2 = (a1 >> 5) + (v5 >> 5) * dword_4C5DEC;
  a1 >>= 5;
  v3 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * v2);
  v5 >>= 5;
  ++v3[1518];
  v3[1515] += *(__int16 *)(v1 + 472);
  v3[1516] += *(__int16 *)(v1 + 474);
  v3[1517] += *(__int16 *)(v1 + 476);
  v3[1512] += *(_DWORD *)(v1 + 452);
  v3[1513] += *(_DWORD *)(v1 + 456);
  v3[1514] += *(_DWORD *)(v1 + 460);
  dword_4D048C += *(__int16 *)(v1 + 472);
  dword_4D0490 += *(__int16 *)(v1 + 474);
  dword_4D0494 += *(__int16 *)(v1 + 476);
  dword_4D0480 += *(_DWORD *)(v1 + 452);
  dword_4D0484 += *(_DWORD *)(v1 + 456);
  dword_4D0488 += *(_DWORD *)(v1 + 460);
  return 0;
}
