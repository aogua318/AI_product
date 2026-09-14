// 函数 0x470c80  sub_470C80  size=0x4D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_470C80(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  if ( !a1 )
    return -2;
  v1 = a1[7];
  if ( !v1 || !a1[9] )
    return -2;
  v2 = *(_DWORD *)(v1 + 20);
  if ( v2 )
    sub_4738F0(v2, a1);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[10], a1[7]);
  a1[7] = 0;
  return 0;
}
