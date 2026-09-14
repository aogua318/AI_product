// 函数 0x402fb0  sub_402FB0  size=0x72  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_402FB0(int a1)
{
  int v1; // edx
  int result; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // [esp+4h] [ebp-4h]

  v1 = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 238);
  result = -1;
  v3 = 0;
  v6 = -1;
  if ( v1 != -1 )
  {
    do
    {
      v4 = v1 * dword_4CC8BC;
      v5 = *(__int16 *)(v1 * dword_4CC8BC + dword_4CC8D0 + 28);
      if ( 10000 - v5 > v3 )
      {
        v3 = 10000 - v5;
        v6 = *(char *)(v4 + dword_4CC8D0);
      }
      v1 = *(__int16 *)(v4 + dword_4CC8D0 + 6);
    }
    while ( v1 != -1 );
    return v6;
  }
  return result;
}
