// 函数 0x433d30  sub_433D30  size=0xAB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433D30(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // eax

  if ( a1 == -1 )
    return 0;
  v1 = dword_870840 + a1 * dword_87082C;
  v2 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 4);
  if ( sub_4334C0((_DWORD *)v1) )
    sub_433470(v3);
  if ( !sub_464E10(a1) )
    return 0;
  v4 = *(__int16 *)(v1 + 8);
  v5 = *(__int16 *)(v1 + 10);
  if ( v4 == -1 )
    *(_WORD *)(v2 + 480) = v5;
  else
    *(_WORD *)(v4 * dword_87082C + dword_870840 + 10) = v5;
  if ( v5 != -1 )
    *(_WORD *)(v5 * dword_87082C + dword_870840 + 8) = v4;
  --*(_WORD *)(v2 + 482);
  return 1;
}
