// 函数 0x447280  sub_447280  size=0x40  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_447280(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(result + 9) & 4) != 0 )
    return sub_45F540(
             1,
             *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
             *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
             result + 28);
  return result;
}
