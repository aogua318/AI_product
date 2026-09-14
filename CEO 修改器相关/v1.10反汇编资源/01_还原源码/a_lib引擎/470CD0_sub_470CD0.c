// 函数 0x470cd0  sub_470CD0  size=0xF7  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_470CD0(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( !a3 || *a3 != 49 || a4 != 56 )
    return -6;
  if ( !a1 )
    return -2;
  a1[6] = 0;
  if ( !a1[8] )
  {
    a1[8] = sub_472DB0;
    a1[10] = 0;
  }
  if ( !a1[9] )
    a1[9] = sub_472DD0;
  v4 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1, 24);
  a1[7] = v4;
  if ( !v4 )
    return -4;
  v5 = a2;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(a1[7] + 12) = 0;
  if ( a2 < 0 )
  {
    v5 = -a2;
    *(_DWORD *)(a1[7] + 12) = 1;
  }
  if ( (unsigned int)(v5 - 8) > 7 )
  {
    sub_470C80(a1);
    return -2;
  }
  *(_DWORD *)(a1[7] + 16) = v5;
  v6 = sub_472E70(a1, *(_DWORD *)(a1[7] + 12) == 0 ? sub_4711B0 : 0, 1 << v5);
  *(_DWORD *)(a1[7] + 20) = v6;
  if ( !v6 )
  {
    sub_470C80(a1);
    return -4;
  }
  sub_470C30(a1);
  return 0;
}
