// 函数 0x45f2a0  sub_45F2A0  size=0x3B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45F2A0(int a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // ecx
  bool v6; // zf

  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = *(_DWORD *)(a2 + 56);
  v5 = *(_DWORD *)(a2 + 60);
  if ( v5 < v3 )
  {
    v6 = v4 == v2;
  }
  else
  {
    if ( v5 > v3 )
      return 1;
    v6 = v4 == v2;
    if ( v4 > v2 )
      return 1;
  }
  if ( v6 && v5 == v3 )
    return 0;
  else
    return -1;
}
