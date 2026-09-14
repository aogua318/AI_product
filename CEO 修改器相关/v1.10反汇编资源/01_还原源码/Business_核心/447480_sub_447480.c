// 函数 0x447480  sub_447480  size=0x86  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_447480(int a1)
{
  int v1; // esi
  int result; // eax
  _DWORD v3[3]; // [esp+8h] [ebp-10h]

  v1 = 0;
  v3[0] = 0;
  v3[1] = 1;
  v3[2] = 2;
  do
  {
    result = *(_DWORD *)(a1 + 296) + 288 * v3[v1];
    if ( (*(_BYTE *)(result + 9) & 4) != 0 )
      result = sub_45F540(
                 1,
                 *(__int16 *)(result + 10) + *(__int16 *)(a1 + 276),
                 *(__int16 *)(result + 12) + *(__int16 *)(a1 + 278),
                 result + 28);
    ++v1;
  }
  while ( v1 < 3 );
  return result;
}
