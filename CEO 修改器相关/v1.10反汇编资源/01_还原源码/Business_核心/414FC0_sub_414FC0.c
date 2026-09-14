// 函数 0x414fc0  sub_414FC0  size=0x9D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_414FC0(int a1)
{
  __int16 *v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // eax

  v1 = (__int16 *)(dword_4CC8D0 + a1 * dword_4CC8BC);
  v2 = dword_4CCAAC + dword_4CCA98 * v1[1];
  if ( !sub_464E10(a1) )
    return 0;
  v3 = v1[2];
  v4 = v1[3];
  if ( v3 == -1 )
    *(_WORD *)(v2 + 238) = v4;
  else
    *(_WORD *)(v3 * dword_4CC8BC + dword_4CC8D0 + 6) = v4;
  if ( v4 != -1 )
    *(_WORD *)(v4 * dword_4CC8BC + dword_4CC8D0 + 4) = v3;
  *(_WORD *)(v2 + 2 * *(char *)v1 + 240) = -1;
  --*(_WORD *)(v2 + 236);
  return 1;
}
