// 函数 0x413b60  sub_413B60  size=0xE1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_413B60(int a1)
{
  __int16 *v1; // esi
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // eax

  v1 = (__int16 *)(dword_4CC8B0 + a1 * dword_4CC89C);
  v2 = v1[3];
  v3 = dword_4CCAAC + dword_4CCA98 * *v1;
  if ( sub_483C00(v2) != 2 || sub_483C30(v2) != a1 || !sub_464E10(a1) )
    return 0;
  sub_4864E0(v2);
  if ( a1 == dword_4B1100 )
  {
    sub_43B130(0);
    dword_4B1100 = -1;
    dword_4B1010 = -1;
  }
  v4 = v1[1];
  v5 = v1[2];
  if ( v4 == -1 )
    *(_WORD *)(v3 + 756) = v5;
  else
    *(_WORD *)(v4 * dword_4CC89C + dword_4CC8B0 + 4) = v5;
  if ( v5 != -1 )
    *(_WORD *)(v5 * dword_4CC89C + dword_4CC8B0 + 2) = v4;
  --*(_WORD *)(v3 + 744);
  return 1;
}
