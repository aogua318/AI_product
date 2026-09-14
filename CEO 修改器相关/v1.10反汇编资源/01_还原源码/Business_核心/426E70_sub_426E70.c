// 函数 0x426e70  sub_426E70  size=0x83  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_426E70@<eax>(int result@<eax>, int a2, int a3)
{
  _DWORD *v3; // esi
  int i; // edi
  int v5; // ecx
  int v6; // eax

  v3 = (_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(result + 2));
  for ( i = *(_DWORD *)(v3[34] + 4 * (a2 + a3 * v3[6])); i != -1; i = *(_DWORD *)(i * v3[40] + result + 20) )
  {
    v5 = v3[45];
    v6 = i * v3[40];
    if ( *(_BYTE *)(v6 + v5 + 11) == 1 && *(_BYTE *)(dword_4D10A8 + dword_4D1094 * *(__int16 *)(v6 + v5 + 12) + 12) == 2 )
      sub_42C3E0(0, 1);
    result = v3[45];
  }
  return result;
}
