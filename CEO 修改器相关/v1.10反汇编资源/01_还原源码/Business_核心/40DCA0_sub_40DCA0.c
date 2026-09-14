// 函数 0x40dca0  sub_40DCA0  size=0x3A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40DCA0(int a1)
{
  int v1; // eax

  v1 = dword_4C43DC + a1 * dword_4C43C8;
  if ( *(_BYTE *)(v1 + 3) == 3 && *(__int16 *)(v1 + 16) == dword_4C43A4 )
    sub_40DC20(a1, dword_4C43AC);
  return 0;
}
