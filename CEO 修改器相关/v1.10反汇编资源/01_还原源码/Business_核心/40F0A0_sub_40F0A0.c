// 函数 0x40f0a0  sub_40F0A0  size=0x5D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40F0A0(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int result; // eax

  v2 = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 1620);
  v3 = dword_4CCAAC + a1 * dword_4CCA98;
  result = dword_4CCAAC + a2 * dword_4CCA98;
  dword_4C43A8 = v3;
  dword_4C43A0 = result;
  dword_4C43B4 = a1;
  for ( dword_4C43C0 = a2; v2 != -1; v2 = *(__int16 *)(v3 + 1620) )
    result = sub_40EFE0(v2);
  return result;
}
