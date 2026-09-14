// 函数 0x42b4a0  sub_42B4A0  size=0x11F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42B4A0(int a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ebx
  _WORD *v8; // esi
  __int16 v9; // ax
  __int16 v11; // ax
  int v12; // [esp-Ch] [ebp-18h]

  v6 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !sub_485560(354, a3, a4, a6, 1) )
    return -1;
  v7 = sub_4656D0(&unk_4D1068);
  if ( v7 == -1 )
    return -1;
  v8 = (_WORD *)(dword_4D1080 + v7 * dword_4D106C);
  v9 = sub_486480(354, a3, a4, a6, 0, 1, 0, 0, 0);
  v8[3] = v9;
  if ( v9 == -1 )
  {
    sub_464E10(v7);
    return -1;
  }
  *v8 = a1;
  v8[1] = a2;
  v8[5] = *(_WORD *)(v6 + 762);
  v8[4] = -1;
  *(_WORD *)(v6 + 762) = v7;
  v11 = v8[5];
  if ( v11 != -1 )
    *(_WORD *)(dword_4D106C * v11 + dword_4D1080 + 8) = v7;
  v12 = (__int16)v8[3];
  v8[2] = a5;
  sub_483BD0(v12, 8, v7);
  sub_486260((__int16)v8[3], 0, 0);
  sub_4868E0((__int16)v8[3], a5);
  ++*(_WORD *)(v6 + 750);
  return v7;
}
