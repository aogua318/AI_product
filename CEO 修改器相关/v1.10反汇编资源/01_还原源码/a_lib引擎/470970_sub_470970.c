// 函数 0x470970  sub_470970  size=0x74  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_470970(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // edx

  if ( !a1 )
    return -2;
  v1 = (_DWORD *)a1[7];
  if ( !v1 || !a1[8] || !a1[9] )
    return -2;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  a1[11] = 2;
  v2 = v1[2];
  v1[5] = 0;
  v1[4] = v2;
  if ( (int)v1[6] < 0 )
    v1[6] = 0;
  v1[1] = v1[6] != 0 ? 113 : 42;
  a1[12] = 1;
  v1[8] = 0;
  sub_472560(v1);
  sub_46FE80((int)v1);
  return 0;
}
