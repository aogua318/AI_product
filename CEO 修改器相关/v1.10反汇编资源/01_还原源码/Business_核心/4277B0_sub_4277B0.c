// 函数 0x4277b0  sub_4277B0  size=0x25A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4277B0(int a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  __int16 v9; // ax
  int v11; // eax
  __int16 v12; // ax
  char v13; // dl
  int v14; // [esp+Ch] [ebp-4h]

  v5 = (_BYTE *)(*(_DWORD *)dword_4D0C8C + 388 * a2);
  v6 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !sub_485560(*(__int16 *)v5, a3, a4, a5, 1) )
    return -1;
  v7 = sub_4656D0(&unk_4D0C6C);
  v14 = v7;
  if ( v7 == -1 )
    return -1;
  v8 = dword_4D0C84 + v7 * dword_4D0C70;
  v9 = sub_486480(*(__int16 *)v5, a3, a4, a5, 0, 1, 0, 0, 0);
  *(_WORD *)(v8 + 16) = v9;
  if ( v9 == -1 )
  {
    sub_464E10(v14);
    return -1;
  }
  v11 = dword_4CD11C;
  *(_WORD *)v8 = a2;
  *(_DWORD *)(v8 + 8) = v11;
  *(_WORD *)(v8 + 2) = a1;
  LOWORD(v11) = *(_WORD *)(v6 + 752);
  *(_WORD *)(v8 + 4) = -1;
  *(_WORD *)(v8 + 6) = v11;
  *(_WORD *)(v6 + 752) = v14;
  v12 = *(_WORD *)(v8 + 6);
  if ( v12 != -1 )
    *(_WORD *)(dword_4D0C70 * v12 + dword_4D0C84 + 4) = v14;
  *(_BYTE *)(v8 + 20) = v5[14];
  *(_BYTE *)(v8 + 21) = v5[15];
  *(_WORD *)(v8 + 22) = 0;
  *(_DWORD *)(v8 + 24) = -1;
  *(_DWORD *)(v8 + 28) = -1;
  *(_DWORD *)(v8 + 32) = -1;
  *(_DWORD *)(v8 + 36) = -1;
  *(_DWORD *)(v8 + 40) = -1;
  *(_DWORD *)(v8 + 44) = -1;
  *(_DWORD *)(v8 + 48) = -1;
  *(_DWORD *)(v8 + 52) = -1;
  *(_DWORD *)(v8 + 56) = -1;
  *(_DWORD *)(v8 + 60) = -1;
  *(_DWORD *)(v8 + 64) = -1;
  *(_DWORD *)(v8 + 68) = -1;
  *(_DWORD *)(v8 + 72) = -1;
  *(_DWORD *)(v8 + 76) = -1;
  *(_DWORD *)(v8 + 80) = -1;
  *(_DWORD *)(v8 + 84) = -1;
  *(_DWORD *)(v8 + 88) = -1;
  *(_DWORD *)(v8 + 92) = -1;
  *(_DWORD *)(v8 + 96) = -1;
  *(_DWORD *)(v8 + 100) = -1;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 112) = 0;
  *(_DWORD *)(v8 + 116) = 0;
  *(_DWORD *)(v8 + 120) = 0;
  *(_DWORD *)(v8 + 124) = 0;
  *(_WORD *)(v8 + 130) = -1;
  *(_DWORD *)(v8 + 132) = 0;
  *(_DWORD *)(v8 + 136) = 0;
  *(_DWORD *)(v8 + 140) = 0;
  *(_DWORD *)(v8 + 144) = 0;
  *(_DWORD *)(v8 + 152) = 0;
  *(_DWORD *)(v8 + 156) = 0;
  *(_DWORD *)(v8 + 160) = 0;
  *(_DWORD *)(v8 + 164) = 0;
  *(_DWORD *)(v8 + 184) = 0;
  *(_DWORD *)(v8 + 188) = 0;
  *(_DWORD *)(v8 + 192) = 0;
  sub_483BD0(*(__int16 *)(v8 + 16), 0, v14);
  if ( v5[78] == 2 )
    *(_BYTE *)(v8 + 128) = sub_426330((_DWORD *)v6, *(__int16 *)(v8 + 16));
  else
    *(_BYTE *)(v8 + 128) = 0;
  v13 = *(_BYTE *)(v8 + 128);
  *(_WORD *)(v8 + 18) &= ~1u;
  *(_BYTE *)(v8 + 129) = v13;
  sub_426B30((__int16 *)v8, 1);
  *(_WORD *)(v8 + 18) &= 0xFFE3u;
  *(_DWORD *)(v8 + 208) = 0;
  *(_DWORD *)(v8 + 212) = 0;
  *(_DWORD *)(v8 + 12) = sub_42A0F0(v5);
  *(_DWORD *)(v8 + 196) = 0;
  *(_DWORD *)(v8 + 204) = 0;
  *(_DWORD *)(v8 + 200) = 0;
  *(_WORD *)(v8 + 216) = 0;
  *(_DWORD *)(v8 + 220) = 0;
  *(_DWORD *)(v8 + 224) = 0;
  *(_DWORD *)(v8 + 228) = 0;
  ++*(_WORD *)(v6 + 740);
  return v14;
}
