// 函数 0x433eb0  sub_433EB0  size=0x178  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433EB0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  __int16 v9; // ax
  __int16 v11; // ax
  char v12; // cl

  v5 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !sub_485560(dword_4B1158[a2], a3, a4, a5, 1) )
    return -1;
  v6 = sub_4656D0(&unk_870850);
  v7 = v6;
  if ( v6 == -1 )
    return -1;
  v8 = dword_870868 + v6 * dword_870854;
  v9 = sub_486480(dword_4B1158[a2], a3, a4, a5, 0, 1, 0, 0, 0);
  *(_WORD *)(v8 + 6) = v9;
  if ( v9 == -1 )
  {
    sub_464E10(v7);
    return -1;
  }
  *(_WORD *)v8 = a1;
  *(_WORD *)(v8 + 4) = *(_WORD *)(v5 + 760);
  *(_WORD *)(v8 + 2) = -1;
  *(_WORD *)(v5 + 760) = v7;
  v11 = *(_WORD *)(v8 + 4);
  if ( v11 != -1 )
    *(_WORD *)(dword_870854 * v11 + dword_870868 + 2) = v7;
  *(_DWORD *)(v8 + 16) = dword_4CD11C;
  *(_WORD *)(v8 + 10) = -1;
  *(_WORD *)(v8 + 12) = -1;
  *(_BYTE *)(v8 + 15) = 0;
  v12 = *(_BYTE *)(v8 + 14);
  *(_WORD *)(v8 + 8) = -1;
  *(_BYTE *)(v8 + 14) = (8 * a2) | v12 & 3;
  *(_DWORD *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 36) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)(v8 + 44) = 0;
  *(_DWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  sub_483BD0(*(__int16 *)(v8 + 6), 7, v7);
  sub_486260(*(__int16 *)(v8 + 6), 0, 0);
  sub_4868E0(*(__int16 *)(v8 + 6), 1);
  ++*(_WORD *)(v5 + 748);
  return v7;
}
