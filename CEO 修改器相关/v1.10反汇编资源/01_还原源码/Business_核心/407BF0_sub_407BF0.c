// 函数 0x407bf0  sub_407BF0  size=0x33  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_407BF0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = a1[2];
  v3 = a2[2];
  if ( v2 < v3 )
    return 1;
  if ( v2 <= v3 )
    return sub_4640D0() % 3 - 1;
  return -1;
}
