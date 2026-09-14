// 函数 0x4705a0  sub_4705A0  size=0x3CD  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4705A0(size_t *a1, int a2)
{
  unsigned int v2; // eax
  size_t v3; // edx
  int v4; // eax
  size_t v5; // ecx
  unsigned int v6; // eax
  size_t v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  size_t v10; // edx
  unsigned int v11; // edi
  unsigned __int8 v12; // al
  __int16 v13; // cx
  unsigned __int16 v14; // cx
  int v15; // eax
  size_t v16; // eax
  BOOL v17; // ebx
  unsigned int v18; // edx
  int v19; // eax
  size_t v20; // ecx
  unsigned int v21; // eax
  size_t v22; // eax
  int v23; // edx
  size_t v24; // ecx
  bool v25; // zf
  unsigned __int8 v27; // al
  int v28; // ecx
  size_t v29; // eax
  size_t v30; // ecx
  unsigned __int8 v31; // al
  int v32; // ecx
  size_t v33; // eax
  int v34; // eax
  unsigned int v35; // [esp+Ch] [ebp-4h]

  v35 = 0;
  while ( 1 )
  {
    v2 = a1[27];
    if ( v2 < 0x106 )
    {
      sub_470070(a1);
      v2 = a1[27];
      if ( v2 < 0x106 && !a2 )
        return 0;
      if ( !v2 )
        break;
    }
    if ( v2 >= 3 )
    {
      v3 = a1[25];
      v4 = a1[19] & (*(unsigned __int8 *)(a1[12] + v3 + 2) ^ (a1[16] << a1[20]));
      v5 = a1[15];
      a1[16] = v4;
      v6 = *(unsigned __int16 *)(v5 + 2 * v4);
      *(_WORD *)(a1[14] + 2 * (v3 & a1[11])) = v6;
      v35 = v6;
      *(_WORD *)(a1[15] + 2 * a1[16]) = *((_WORD *)a1 + 50);
    }
    v7 = a1[26];
    a1[28] = a1[22];
    a1[23] = v7;
    a1[22] = 2;
    if ( v35 && a1[28] < a1[30] && a1[25] - v35 <= a1[9] - 262 )
    {
      if ( a1[32] != 2 )
        a1[22] = sub_46FF10(a1, v35);
      v8 = a1[22];
      if ( v8 <= 5 && (a1[32] == 1 || v8 == 3 && a1[25] - a1[26] > 0x1000) )
        a1[22] = 2;
    }
    v9 = a1[28];
    if ( v9 < 3 || a1[22] > v9 )
    {
      if ( a1[24] )
      {
        v27 = *(_BYTE *)(a1[25] + a1[12] - 1);
        *(_WORD *)(a1[1447] + 2 * a1[1446]) = 0;
        *(_BYTE *)(a1[1444] + a1[1446]++) = v27;
        ++LOWORD(a1[v27 + 35]);
        if ( a1[1446] == a1[1445] - 1 )
        {
          v28 = a1[21];
          if ( v28 < 0 )
            v29 = 0;
          else
            v29 = v28 + a1[12];
          sub_472BD0(a1, v29, a1[25] - v28, 0);
          a1[21] = a1[25];
          sub_46FA90(*a1);
        }
        ++a1[25];
        v30 = *a1;
        --a1[27];
        v25 = *(_DWORD *)(v30 + 16) == 0;
        goto LABEL_32;
      }
      ++a1[25];
      --a1[27];
      a1[24] = 1;
    }
    else
    {
      v10 = a1[25];
      v11 = v10 + a1[27] - 3;
      v12 = *((_BYTE *)a1 + 112);
      v13 = v10 - *((_WORD *)a1 + 46) - 1;
      *(_WORD *)(a1[1447] + 2 * a1[1446]) = v13;
      v12 -= 3;
      *(_BYTE *)(a1[1444] + a1[1446]++) = v12;
      ++LOWORD(a1[(unsigned __int8)byte_4A59F0[v12] + 292]);
      v14 = v13 - 1;
      if ( v14 >= 0x100u )
        v15 = (unsigned __int8)byte_4A58F0[v14 >> 7];
      else
        v15 = (unsigned __int8)byte_4A57F0[v14];
      ++LOWORD(a1[v15 + 608]);
      v16 = a1[28];
      v17 = a1[1446] == a1[1445] - 1;
      a1[27] += 1 - v16;
      a1[28] = v16 - 2;
      do
      {
        v18 = ++a1[25];
        if ( v18 <= v11 )
        {
          v19 = a1[19] & (*(unsigned __int8 *)(a1[12] + v18 + 2) ^ (a1[16] << a1[20]));
          v20 = a1[15];
          a1[16] = v19;
          v21 = *(unsigned __int16 *)(v20 + 2 * v19);
          *(_WORD *)(a1[14] + 2 * (v18 & a1[11])) = v21;
          v35 = v21;
          *(_WORD *)(a1[15] + 2 * a1[16]) = *((_WORD *)a1 + 50);
        }
        v25 = a1[28]-- == 1;
      }
      while ( !v25 );
      v22 = ++a1[25];
      a1[24] = 0;
      a1[22] = 2;
      if ( v17 )
      {
        v23 = a1[21];
        if ( v23 < 0 )
          v24 = 0;
        else
          v24 = v23 + a1[12];
        sub_472BD0(a1, v24, v22 - v23, 0);
        a1[21] = a1[25];
        sub_46FA90(*a1);
        v25 = *(_DWORD *)(*a1 + 16) == 0;
LABEL_32:
        if ( v25 )
          return 0;
      }
    }
  }
  if ( a1[24] )
  {
    v31 = *(_BYTE *)(a1[25] + a1[12] - 1);
    *(_WORD *)(a1[1447] + 2 * a1[1446]) = 0;
    *(_BYTE *)(a1[1444] + a1[1446]++) = v31;
    ++LOWORD(a1[v31 + 35]);
    a1[24] = 0;
  }
  v32 = a1[21];
  if ( v32 < 0 )
    v33 = 0;
  else
    v33 = v32 + a1[12];
  sub_472BD0(a1, v33, a1[25] - v32, a2 == 4);
  a1[21] = a1[25];
  sub_46FA90(*a1);
  v34 = 0;
  if ( !*(_DWORD *)(*a1 + 16) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v34) = a2 == 4;
  return 2 * v34 + 1;
}
