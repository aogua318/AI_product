// 函数 0x413a40  sub_413A40  size=0x118  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_413A40(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ebx
  _WORD *v6; // esi
  __int16 v7; // ax
  __int16 v9; // ax
  int v10; // eax

  v4 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !sub_485560(20, a2, a3, a4, 1) )
    return -1;
  v5 = sub_4656D0(&unk_4CC898);
  if ( v5 == -1 )
    return -1;
  v6 = (_WORD *)(dword_4CC8B0 + v5 * dword_4CC89C);
  v7 = sub_486480(20, a2, a3, a4, 0, 1, 0, 0, 0);
  v6[3] = v7;
  if ( v7 == -1 )
  {
    sub_464E10(v5);
    return -1;
  }
  *v6 = a1;
  v6[2] = *(_WORD *)(v4 + 756);
  v6[1] = -1;
  *(_WORD *)(v4 + 756) = v5;
  v9 = v6[2];
  if ( v9 != -1 )
    *(_WORD *)(dword_4CC89C * v9 + dword_4CC8B0 + 2) = v5;
  sub_483BD0((__int16)v6[3], 2, v5);
  sub_486260((__int16)v6[3], 0, 0);
  v10 = sub_4640D0();
  sub_4868E0((__int16)v6[3], v10 % *(unsigned __int8 *)(*(_DWORD *)(v4 + 148) + 207));
  ++*(_WORD *)(v4 + 744);
  return v5;
}
