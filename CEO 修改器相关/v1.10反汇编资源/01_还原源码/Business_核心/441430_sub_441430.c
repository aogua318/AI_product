// 函数 0x441430  sub_441430  size=0x8B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_441430(int a1)
{
  __int16 *v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  v6 = 0;
  v1 = (__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98 + 242);
  v5 = 53;
  do
  {
    v2 = *(v1 - 1);
    if ( v2 != -1 && *(unsigned __int8 *)(v2 * dword_4CC8BC + dword_4CC8D0 + 1257) == a1 )
      ++v6;
    v3 = *v1;
    if ( v3 != -1 && *(unsigned __int8 *)(v3 * dword_4CC8BC + dword_4CC8D0 + 1257) == a1 )
      ++v6;
    v1 += 2;
    --v5;
  }
  while ( v5 );
  return v6;
}
