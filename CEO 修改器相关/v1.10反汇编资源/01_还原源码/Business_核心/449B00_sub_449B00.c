// 函数 0x449b00  sub_449B00  size=0x6C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_449B00(int a1)
{
  int i; // esi
  int result; // eax
  _DWORD v3[2]; // [esp+8h] [ebp-8h]

  v3[0] = 6;
  v3[1] = 7;
  for ( i = 0; i < 2; ++i )
  {
    result = *(_DWORD *)(a1 + 296) + 288 * v3[i];
    if ( (*(_BYTE *)(result + 9) & 4) != 0 )
      result = sub_45F540(
                 1,
                 *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
                 *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
                 result + 28);
  }
  return result;
}
