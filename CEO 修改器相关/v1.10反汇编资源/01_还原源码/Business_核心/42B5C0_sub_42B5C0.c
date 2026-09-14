// 函数 0x42b5c0  sub_42B5C0  size=0xE1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42B5C0(int a1)
{
  __int16 *v1; // esi
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // eax

  v1 = (__int16 *)(dword_4D1080 + a1 * dword_4D106C);
  v2 = v1[3];
  v3 = dword_4CCAAC + dword_4CCA98 * *v1;
  if ( sub_483C00(v2) != 8 || sub_483C30(v2) != a1 || !sub_464E10(a1) )
    return 0;
  sub_4864E0(v2);
  if ( a1 == dword_4B32A0 )
  {
    sub_43C4D0(0);
    dword_4B32A0 = -1;
    dword_4B1010 = -1;
  }
  v4 = v1[4];
  v5 = v1[5];
  if ( v4 == -1 )
    *(_WORD *)(v3 + 762) = v5;
  else
    *(_WORD *)(v4 * dword_4D106C + dword_4D1080 + 10) = v5;
  if ( v5 != -1 )
    *(_WORD *)(v5 * dword_4D106C + dword_4D1080 + 8) = v4;
  --*(_WORD *)(v3 + 750);
  return 1;
}
