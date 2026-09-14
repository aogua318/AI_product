// 函数 0x433cd0  sub_433CD0  size=0x56  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433CD0(int a1)
{
  int v1; // edx
  int v2; // esi
  int v3; // edi
  int v4; // edx
  int v5; // ecx

  v1 = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 480);
  if ( v1 == -1 )
    return -1;
  v2 = dword_870840;
  v3 = dword_87082C;
  while ( sub_4334C0((_DWORD *)(v2 + v1 * v3)) )
  {
    v1 = *(__int16 *)(v5 + 10);
    if ( v1 == -1 )
      return -1;
  }
  return v4;
}
