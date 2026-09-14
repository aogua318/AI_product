// 函数 0x435990  sub_435990  size=0x145  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_435990@<eax>(int a1@<eax>, int a2)
{
  _WORD *v2; // ebx
  int v4; // eax
  unsigned __int8 *v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  char *v12; // edi
  unsigned __int64 v14; // [esp+0h] [ebp-1Ch]
  _DWORD *v15; // [esp+18h] [ebp-4h]
  __int16 v16; // [esp+24h] [ebp+8h]

  v2 = (_WORD *)(dword_4C4378 + a2 * dword_4C4364);
  v4 = sub_4656D0(&unk_4D0B94);
  v16 = v4;
  if ( v4 != -1 )
  {
    v5 = (unsigned __int8 *)(dword_4D0BAC + v4 * dword_4D0B98);
    *v5 = *(_BYTE *)(a1 + 8);
    v5[1] ^= (v5[1] ^ *(_BYTE *)(a1 + 9)) & 0x7F;
    v5[1] = v5[1] & 0x7F | (*(_BYTE *)(a1 + 10) << 7);
    v5[2] = *(_BYTE *)(a1 + 11);
    *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 12);
    v6 = *(_DWORD *)(a1 + 16);
    *((_WORD *)v5 + 6) = -1;
    v7 = *v5;
    *((_DWORD *)v5 + 6) = v6;
    *((_WORD *)v5 + 7) = -1;
    *((_WORD *)v5 + 5) = -1;
    v8 = *(_DWORD *)(*(_DWORD *)dword_870814 + 72 * v7 + 24);
    v9 = *(_DWORD *)dword_870814 + 72 * v7 + 24;
    *((_DWORD *)v5 + 5) = v8;
    *((_WORD *)v5 + 14) = -1;
    v5[3] = -1;
    v15 = (_DWORD *)v9;
    LOWORD(v9) = *v2;
    *((_WORD *)v5 + 3) = -1;
    *((_WORD *)v5 + 2) = v9;
    *((_WORD *)v5 + 4) = -1;
    sub_421C70(v5, 2, (__int16)v2[4]);
    v2[1] = v16;
    v10 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)v5 + 2);
    v11 = *v5;
    v12 = (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v10 + 2 * v11 + 240));
    sub_4330D0(
      (int)dword_870824 + 112 * v11,
      (char)v5[2],
      (double)*((int *)v5 + 4) * 0.00390625 / (double)(int)*v15,
      *(char *)(v10 + 224));
    v14 = __PAIR64__((char)v5[2], *v15);
    sub_415060(v12, v14, SHIDWORD(v14), 0);
  }
  return -1;
}
