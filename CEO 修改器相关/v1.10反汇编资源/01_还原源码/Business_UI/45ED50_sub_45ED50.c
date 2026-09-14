// 函数 0x45ed50  sub_45ED50  size=0x91  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45ED50(int a1)
{
  int v1; // edx
  int v2; // ecx
  int result; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-10h]

  v1 = *(_DWORD *)(a1 + 296);
  v4[0] = 12;
  v4[1] = 11;
  v4[2] = 13;
  v2 = 0;
  while ( 1 )
  {
    result = v1 + 288 * v4[v2];
    if ( (*(_BYTE *)(result + 9) & 4) != 0 )
      break;
    if ( ++v2 >= 3 )
      return result;
  }
  return sub_45F540(
           1,
           *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
           *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
           result + 28);
}
