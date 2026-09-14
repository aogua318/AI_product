// 函数 0x40be20  sub_40BE20  size=0x13A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40BE20(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  __int16 v8; // ax
  __int16 v10; // ax
  int v11; // eax
  int v12; // [esp-Ch] [ebp-18h]

  v5 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !sub_40BD20((_DWORD *)v5, 0, a2, a3, a4) )
    return -1;
  v6 = sub_4656D0(&unk_4C4360);
  if ( v6 == -1 )
    return -1;
  v7 = dword_4C4378 + v6 * dword_4C4364;
  v8 = sub_486480(0, a2, a3, a4, 0, 1, 0, 0, 0);
  *(_WORD *)(v7 + 8) = v8;
  if ( v8 == -1 )
  {
    sub_464E10(v6);
    return -1;
  }
  *(_BYTE *)(v7 + 10) = a5;
  *(_WORD *)v7 = a1;
  *(_WORD *)(v7 + 6) = *(_WORD *)(v5 + 754);
  *(_WORD *)(v7 + 4) = -1;
  *(_WORD *)(v5 + 754) = v6;
  v10 = *(_WORD *)(v7 + 6);
  if ( v10 != -1 )
    *(_WORD *)(dword_4C4364 * v10 + dword_4C4378 + 4) = v6;
  v12 = *(__int16 *)(v7 + 8);
  *(_WORD *)(v7 + 2) = -1;
  sub_483BD0(v12, 3, v6);
  sub_486260(*(__int16 *)(v7 + 8), 0, 0);
  v11 = sub_4640D0() % 8;
  sub_4868E0(*(__int16 *)(v7 + 8), a5 + 8 * v11);
  ++*(_WORD *)(v5 + 742);
  ++*(_WORD *)(v5 + 2 * a5 + 768);
  return v6;
}
