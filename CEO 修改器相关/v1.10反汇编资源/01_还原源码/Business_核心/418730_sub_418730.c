// 函数 0x418730  sub_418730  size=0x14C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_418730(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // esi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  _WORD *v13; // ecx
  int v15; // [esp+0h] [ebp-10h]
  int v16; // [esp+4h] [ebp-Ch]
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  if ( *(__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 466) - *(__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 470) <= 0 )
    return 0;
  v4 = dword_4D0C84 + a2 * dword_4D0C70;
  v15 = v4;
  if ( *(char *)(v4 + 23) >= 20 )
    return 0;
  v5 = a1;
  v6 = 3;
  v18 = 12;
  v17 = 7;
LABEL_4:
  while ( 1 )
  {
    v16 = 0;
    if ( v18 > 0 )
      break;
    if ( v5 != -1 )
      goto LABEL_11;
    v18 += 12;
    v6 += 3;
    v17 += 6;
  }
  while ( 1 )
  {
    v7 = sub_4640D0() % v6;
    v8 = a3 + v7 - sub_4640D0() % v17;
    v9 = sub_4640D0() % v6;
    v10 = a4 + v9 - sub_4640D0() % v17;
    v11 = sub_4640D0() % 4;
    v5 = sub_42BD50(a1, 0, v8, v10, v11, 0);
    if ( v5 != -1 )
      break;
    if ( ++v16 >= v18 )
    {
      v18 += 12;
      v4 = v15;
      v6 += 3;
      v17 += 6;
      goto LABEL_4;
    }
  }
  v4 = v15;
LABEL_11:
  LOBYTE(v12) = *(_BYTE *)(v4 + 23);
  if ( (v12 & 0x80u) != 0 )
    v12 = 0;
  else
    v12 = (char)v12;
  *(_WORD *)(v4 + 2 * v12 + 64) = v5;
  v13 = (_WORD *)(dword_4D10A8 + v5 * dword_4D1094);
  v13[13] = a2;
  v13[14] = -1;
  v13[15] = -1;
  ++*(_BYTE *)(v4 + 23);
  return 1;
}
