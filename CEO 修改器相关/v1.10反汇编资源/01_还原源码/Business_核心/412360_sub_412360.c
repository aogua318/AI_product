// 函数 0x412360  sub_412360  size=0x22  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_412360(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // eax

  v2 = a1[5];
  v3 = a2[5];
  if ( v3 <= v2 )
    return -(v2 != v3);
  else
    return 1;
}
