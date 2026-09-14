// 函数 0x40efe0  sub_40EFE0  size=0xB9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40EFE0@<eax>(int a1@<ebx>)
{
  int v1; // edx
  int v2; // esi
  _WORD *v3; // eax
  int v4; // ecx
  int v5; // ecx
  __int16 v6; // dx

  v1 = *(__int16 *)(a1 * dword_4C43C8 + dword_4C43DC + 18);
  v2 = *(__int16 *)(a1 * dword_4C43C8 + dword_4C43DC + 20);
  v3 = (_WORD *)(dword_4C43DC + a1 * dword_4C43C8);
  if ( v1 == -1 )
  {
    v4 = dword_4C43A8;
    *(_WORD *)(dword_4C43A8 + 1620) = v2;
  }
  else
  {
    *(_WORD *)(v1 * dword_4C43C8 + dword_4C43DC + 20) = v2;
    v4 = dword_4C43A8;
  }
  if ( v2 != -1 )
    *(_WORD *)(v2 * dword_4C43C8 + dword_4C43DC + 18) = v1;
  --*(_WORD *)(v4 + 1622);
  v5 = dword_4C43A0;
  v3[10] = *(_WORD *)(dword_4C43A0 + 1620);
  v3[9] = -1;
  *(_WORD *)(v5 + 1620) = a1;
  v6 = v3[10];
  if ( v6 != -1 )
    *(_WORD *)(dword_4C43C8 * v6 + dword_4C43DC + 18) = a1;
  v3[8] = dword_4C43C0;
  ++*(_WORD *)(v5 + 1622);
  return 1;
}
