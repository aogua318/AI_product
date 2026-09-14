// 函数 0x439ed0  sub_439ED0  size=0x42  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_439ED0(int a1)
{
  int v1; // eax
  int v2; // ecx
  __int16 v3; // dx

  v1 = dword_89E57C + a1 * dword_89E568;
  v2 = dword_89E55C;
  v3 = dword_89E560;
  if ( *(__int16 *)(v1 + 4) == dword_89E55C )
    *(_WORD *)(v1 + 4) = dword_89E560;
  if ( *(_BYTE *)(v1 + 18) && *(__int16 *)(v1 + 6) == v2 )
    *(_WORD *)(v1 + 6) = v3;
  return 0;
}
