// 函数 0x430520  sub_430520  size=0x14B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_430520(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  __int16 v8; // ax
  __int16 v10; // ax
  int v11; // [esp-Ch] [ebp-18h]

  v5 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !sub_485630(19, a2, a3, a4, 1) )
    return -1;
  v6 = sub_4656D0(&unk_8703B8);
  if ( v6 == -1 )
    return -1;
  v7 = dword_8703D0 + v6 * dword_8703BC;
  v8 = sub_486480(19, a2, a3, a4, 0, 1, 1, 0, 0);
  *(_WORD *)(v7 + 6) = v8;
  if ( v8 == -1 )
  {
    sub_464E10(v6);
    return -1;
  }
  *(_BYTE *)(v7 + 31) = a5;
  *(_WORD *)v7 = a1;
  *(_WORD *)(v7 + 4) = *(_WORD *)(v5 + 758);
  *(_WORD *)(v7 + 2) = -1;
  *(_WORD *)(v5 + 758) = v6;
  v10 = *(_WORD *)(v7 + 4);
  if ( v10 != -1 )
    *(_WORD *)(dword_8703BC * v10 + dword_8703D0 + 2) = v6;
  *(_DWORD *)(v7 + 16) = -1;
  *(_DWORD *)(v7 + 20) = -1;
  *(_WORD *)(v7 + 28) = -1;
  *(_WORD *)(v7 + 24) = -1;
  *(_WORD *)(v7 + 26) = -1;
  *(_WORD *)(v7 + 32) = v6;
  *(_DWORD *)(v7 + 8) = -1;
  *(_DWORD *)(v7 + 12) = -1;
  v11 = *(__int16 *)(v7 + 6);
  *(_BYTE *)(v7 + 30) = 0;
  sub_483BD0(v11, 6, v6);
  sub_486260(*(__int16 *)(v7 + 6), 0, 0);
  sub_4868E0(*(__int16 *)(v7 + 6), a5);
  ++*(_WORD *)(v5 + 746);
  ++*(_WORD *)(v5 + 2 * a5 + 800);
  return v6;
}
