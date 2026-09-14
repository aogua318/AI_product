// 函数 0x470c30  sub_470C30  size=0x46  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_470C30(_DWORD *a1)
{
  _DWORD *v1; // ecx

  if ( !a1 )
    return -2;
  v1 = (_DWORD *)a1[7];
  if ( !v1 )
    return -2;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  *v1 = v1[3] != 0 ? 7 : 0;
  sub_472DF0(*(_DWORD *)(a1[7] + 20), a1, 0);
  return 0;
}
