// 函数 0x4172c0  sub_4172C0  size=0x38  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4172C0(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  for ( result = *(__int16 *)(v1 + 238); result != -1; result = *(__int16 *)(v1 + 238) )
    sub_414FC0(result);
  return result;
}
