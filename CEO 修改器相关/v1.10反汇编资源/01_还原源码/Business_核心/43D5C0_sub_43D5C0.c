// 函数 0x43d5c0  sub_43D5C0  size=0xA0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43D5C0(int a1)
{
  int v1; // edx
  int v2; // ecx
  int result; // eax
  _DWORD v4[4]; // [esp+4h] [ebp-14h]

  v1 = *(_DWORD *)(a1 + 296);
  v4[0] = 23;
  v4[1] = 32;
  v4[2] = 27;
  v4[3] = 30;
  v2 = 0;
  while ( 1 )
  {
    result = v1 + 288 * v4[v2];
    if ( (*(_BYTE *)(result + 9) & 4) != 0 )
      break;
    if ( ++v2 >= 4 )
      return result;
  }
  return sub_45F540(
           1,
           *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
           *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
           result + 28);
}
