// 函数 0x43c230  sub_43C230  size=0x6C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43C230(int a1)
{
  int v1; // edx
  int v2; // ecx
  int result; // eax
  _DWORD v4[2]; // [esp+4h] [ebp-8h]

  v1 = *(_DWORD *)(a1 + 296);
  v4[0] = 56;
  v4[1] = 55;
  v2 = 0;
  while ( 1 )
  {
    result = v1 + 288 * v4[v2];
    if ( (*(_BYTE *)(result + 9) & 4) != 0 )
      break;
    if ( ++v2 >= 2 )
      return result;
  }
  return sub_45F540(
           1,
           *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
           *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
           result + 28);
}
