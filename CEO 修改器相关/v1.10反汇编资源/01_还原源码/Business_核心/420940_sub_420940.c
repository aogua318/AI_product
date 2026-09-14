// 函数 0x420940  sub_420940  size=0x1C2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_420940(int a1, int a2)
{
  int v2; // eax
  __int16 *v3; // edi
  int v4; // ecx
  int v5; // esi
  __int16 v6; // ax
  unsigned __int8 *v7; // esi
  int v8; // ebx
  int v9; // ecx
  double v10; // st7
  double v11; // st6
  int v13; // [esp+0h] [ebp-10h]
  int v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+Ch] [ebp-4h]

  v2 = sub_4656D0(&unk_4D0B94);
  v14 = v2;
  if ( v2 == -1 )
    return -1;
  v3 = (__int16 *)(dword_4D0C84 + a1 * dword_4D0C70);
  v4 = *(__int16 *)(*(_DWORD *)dword_87081C
                  + 2
                  * (a2
                   + 58
                   * *(__int16 *)(*(_DWORD *)dword_4D0C94
                                + 2 * (*((char *)v3 + 128) + 34 * *(char *)(388 * *v3 + *(_DWORD *)dword_4D0C8C + 78))
                                + 24))
                  + 20);
  v15 = *(_DWORD *)dword_870814 + 72 * v4;
  v5 = v2 * dword_4D0B98;
  v6 = v3[1];
  v7 = (unsigned __int8 *)(dword_4D0BAC + v5);
  v8 = dword_4CCAAC + dword_4CCA98 * v6;
  *((_WORD *)v7 + 2) = v6;
  *((_WORD *)v7 + 3) = -1;
  *v7 = v4;
  *((_WORD *)v7 + 4) = -1;
  v7[3] = 0;
  LOBYTE(v4) = v7[1] ^ *(_BYTE *)(v8 + 224);
  *((_WORD *)v7 + 6) = a1;
  v7[1] ^= v4 & 0x7F;
  *((_WORD *)v7 + 14) = -1;
  *((_WORD *)v7 + 5) = -256;
  v9 = 100 * *(_DWORD *)(v15 + 24);
  v16 = v9;
  if ( v9 > *(_DWORD *)&v3[2 * a2 + 66] )
  {
    v16 = *(_DWORD *)&v3[2 * a2 + 66];
    v9 = v16;
  }
  *((_DWORD *)v7 + 5) = v9 / 100;
  v13 = *(_DWORD *)&v3[2 * a2 + 66];
  v7[2] = *((_BYTE *)v3 + a2 + 184);
  v10 = *(double *)&v3[4 * a2 + 76];
  v11 = (double)(v13 - v9) * v10 / (double)v13;
  *(double *)&v3[4 * a2 + 76] = v11;
  *((_DWORD *)v7 + 4) = (int)((v10 - v11) * 256.0);
  *(_DWORD *)&v3[2 * a2 + 66] -= v16;
  if ( *(int *)&v3[2 * a2 + 66] < 100 )
    *(_DWORD *)&v3[2 * a2 + 66] = 0;
  v3[65] = v14;
  sub_426B30(1);
  sub_415060(
    (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v8 + 2 * *v7 + 240)),
    *((_DWORD *)v7 + 5),
    (char)v7[2],
    0);
  return v14;
}
