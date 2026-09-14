// 函数 0x418490  sub_418490  size=0x14A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_418490(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // esi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  _WORD *v12; // ecx
  int v14; // [esp+0h] [ebp-10h]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  if ( *(__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 466) - *(__int16 *)(dword_4CCAAC + a1 * dword_4CCA98 + 470) <= 0 )
    return 0;
  v4 = dword_870868 + a2 * dword_870854;
  v14 = v4;
  if ( *(_WORD *)(v4 + 12) != 0xFFFF )
    return 0;
  v5 = a1;
  v6 = 3;
  v17 = 12;
  v16 = 7;
LABEL_4:
  while ( 1 )
  {
    v15 = 0;
    if ( v17 > 0 )
      break;
    if ( v5 != -1 )
      goto LABEL_11;
    v17 += 12;
    v6 += 3;
    v16 += 6;
  }
  while ( 1 )
  {
    v7 = sub_4640D0() % v6;
    v8 = a3 + v7 - sub_4640D0() % v16;
    v9 = sub_4640D0() % v6;
    v10 = a4 + v9 - sub_4640D0() % v16;
    v11 = sub_4640D0() % 4;
    v5 = sub_42BD50(a1, 0, v8, v10, v11, 0);
    if ( v5 != -1 )
      break;
    if ( ++v15 >= v17 )
    {
      v17 += 12;
      v4 = v14;
      v6 += 3;
      v16 += 6;
      goto LABEL_4;
    }
  }
  v4 = v14;
LABEL_11:
  *(_WORD *)(v4 + 12) = v5;
  v12 = (_WORD *)(dword_4D10A8 + v5 * dword_4D1094);
  v12[13] = -1;
  v12[15] = a2;
  v12[14] = -1;
  return 1;
}
