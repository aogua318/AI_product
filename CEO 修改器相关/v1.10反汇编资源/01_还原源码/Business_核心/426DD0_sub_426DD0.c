// 函数 0x426dd0  sub_426DD0  size=0x93  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_426DD0(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx

  v3 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(a1 * dword_4D0C70 + dword_4D0C84 + 2));
  v4 = *(_DWORD *)(v3[34] + 4 * (a2 + a3 * v3[6]));
  if ( v4 == -1 )
    return 0;
  v5 = v3[40];
  v6 = v3[45];
  while ( 1 )
  {
    v7 = v5 * v4;
    if ( *(_BYTE *)(v7 + v6 + 11) == 1 && *(_BYTE *)(dword_4D1094 * *(__int16 *)(v7 + v6 + 12) + dword_4D10A8 + 12) == 2 )
      break;
    v4 = *(_DWORD *)(v7 + v6 + 20);
    if ( v4 == -1 )
      return 0;
  }
  return 1;
}
