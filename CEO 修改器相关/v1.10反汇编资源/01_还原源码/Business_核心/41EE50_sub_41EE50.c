// 函数 0x41ee50  sub_41EE50  size=0xF6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

long double __cdecl sub_41EE50(int a1)
{
  int v1; // esi
  _WORD *v2; // eax
  int *v3; // ecx
  int v4; // edi
  long double v5; // st6

  v1 = *(_DWORD *)dword_870814 + 72 * a1;
  v2 = (_WORD *)(*(_DWORD *)dword_87081C + 116 * *(__int16 *)(v1 + 16));
  v3 = (int *)((char *)dword_870824 + 112 * a1);
  v4 = v2[10] != 0xFFFF;
  if ( v2[11] != 0xFFFF )
    ++v4;
  if ( v2[12] != 0xFFFF )
    ++v4;
  if ( v2[13] != 0xFFFF )
    ++v4;
  if ( *(_BYTE *)(v1 + 13) )
    v5 = ((double)*v3 * 0.00390625 - (double)v3[20] * 0.00390625) * dbl_4CD4B0[a1] * (double)*(int *)(v1 + 24);
  else
    v5 = 0.0;
  return (pow(v5, 0.5) * 1000.0
        + pow(
            ((double)*v3 * 0.00390625 - 0.00390625 * (double)v3[20])
          * (dbl_4CD158[a1] - dbl_4CD4B0[a1])
          * (double)*(int *)(v1 + 24),
            0.5)
        * 500.0)
       * ((double)(*(_DWORD *)(v1 + 64) - 10) * 0.1 + 1.0)
       * 7.0
       / (double)(v4 + 2);
}
