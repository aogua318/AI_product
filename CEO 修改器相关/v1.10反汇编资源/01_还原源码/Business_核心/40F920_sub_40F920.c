// 函数 0x40f920  sub_40F920  size=0xCB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40F920(int a1)
{
  __int16 *v1; // esi
  int v2; // edi

  v1 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  v2 = *((_DWORD *)v1 + 20);
  if ( sub_483C00(v2) || sub_483C30(v2) != a1 )
    return 0;
  if ( *((_DWORD *)v1 + 22) != -1 )
  {
    sub_4864E0(*((_DWORD *)v1 + 22));
    *((_DWORD *)v1 + 22) = -1;
  }
  if ( !sub_464E10(a1) )
    return 0;
  if ( *(_WORD *)(*(_DWORD *)dword_4C4434 + 72 * *v1 + 32) == 2 )
    --dword_4D046C;
  if ( *((_BYTE *)v1 + 3) == 2 )
    sub_40D8F0(v1);
  if ( dword_4B1024 == a1 )
    sub_40DD00(-1);
  sub_43A220(a1);
  sub_4864E0(v2);
  return 1;
}
