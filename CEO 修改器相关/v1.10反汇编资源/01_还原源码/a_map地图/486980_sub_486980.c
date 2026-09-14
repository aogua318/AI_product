// 函数 0x486980  sub_486980  size=0x82  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_486980(int a1)
{
  int *v1; // ecx
  __int16 *v2; // eax
  int v3; // edi
  int v4; // edx
  int v5; // esi
  bool v6; // zf

  v1 = (int *)dword_8F2AD4;
  v2 = (__int16 *)(*(_DWORD *)(dword_8F2AD4 + 180) + a1 * *(_DWORD *)(dword_8F2AD4 + 160));
  if ( (v2[5] & 2) != 0 )
  {
    v3 = *(_DWORD *)(dword_8F2AD4 + 148) + 10 * *v2;
    v4 = *((_DWORD *)v2 + 4);
    v5 = *(unsigned __int16 *)(v3 + 8);
    if ( dword_8F2ADC - v4 > v5 )
    {
      v6 = (v2[5] & 1) == 0;
      *((_DWORD *)v2 + 4) = v4 + v5;
      if ( !v6 && v2[3] + 1 >= *(unsigned __int8 *)(v3 + 7) )
      {
        sub_4864E0(v1, a1);
        return 0;
      }
      sub_4868E0(v1, a1, v2[3] + 1);
    }
  }
  return 0;
}
