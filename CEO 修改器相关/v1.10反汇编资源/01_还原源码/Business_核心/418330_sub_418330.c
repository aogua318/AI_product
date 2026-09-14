// 函数 0x418330  sub_418330  size=0x160  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_418330(int a1, int a2, int a3, int a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // esi
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  _WORD *i; // edx
  _WORD *v15; // ecx
  int v16; // [esp+0h] [ebp-10h]
  int v17; // [esp+4h] [ebp-Ch]
  int v18; // [esp+8h] [ebp-8h]
  int v19; // [esp+Ch] [ebp-4h]

  if ( *(__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 466) - *(__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 470) <= 0 )
    return 0;
  v5 = dword_8703D0 + a2 * dword_8703BC;
  v16 = v5;
  if ( sub_431030(v5) >= 4 )
    return 0;
  v6 = a1;
  v7 = 3;
  v19 = 12;
  v18 = 7;
LABEL_5:
  while ( 1 )
  {
    v17 = 0;
    if ( v19 > 0 )
      break;
    if ( v6 != -1 )
      goto LABEL_12;
    v19 += 12;
    v7 += 3;
    v18 += 6;
  }
  while ( 1 )
  {
    v8 = sub_4640D0() % v7;
    v9 = a3 + v8 - sub_4640D0() % v18;
    v10 = sub_4640D0() % v7;
    v11 = a4 + v10 - sub_4640D0() % v18;
    v12 = sub_4640D0() % 4;
    v6 = sub_42BD50(a1, 0, v9, v11, v12, 0);
    if ( v6 != -1 )
      break;
    if ( ++v17 >= v19 )
    {
      v19 += 12;
      v5 = v16;
      v7 += 3;
      v18 += 6;
      goto LABEL_5;
    }
  }
  v5 = v16;
LABEL_12:
  v13 = 0;
  for ( i = (_WORD *)(v5 + 16); *i != 0xFFFF; ++i )
  {
    if ( ++v13 >= 4 )
      return 0;
  }
  *(_WORD *)(v5 + 2 * v13 + 16) = v6;
  v15 = (_WORD *)(dword_4D10A8 + v6 * dword_4D1094);
  v15[13] = -1;
  v15[15] = -1;
  v15[14] = a2;
  return 1;
}
