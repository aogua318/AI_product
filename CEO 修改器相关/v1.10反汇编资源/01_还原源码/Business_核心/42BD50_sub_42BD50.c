// 函数 0x42bd50  sub_42BD50  size=0x207  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42BD50(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  int v7; // eax
  _WORD *v8; // edi
  int v9; // esi
  __int16 *v10; // ebx
  __int16 v11; // ax
  char v12; // bl
  __int16 v13; // ax
  int v14; // [esp-18h] [ebp-20h]
  int v15; // [esp+0h] [ebp-8h]
  int v16; // [esp+4h] [ebp-4h]

  if ( !sub_42BC50(a1, a3, a4) )
    return -1;
  v7 = sub_4656D0(&unk_4D1090);
  v15 = v7;
  if ( v7 == -1 )
    return -1;
  if ( a2 == 1 )
  {
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 3) )
      v16 = 0;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 11) )
      v16 = 1;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 19) )
      v16 = 2;
  }
  else if ( a2 )
  {
    v16 = a6 + 6;
  }
  else
  {
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 27) )
      v16 = 3;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 35) )
      v16 = 4;
    if ( dword_4CD128 >= *(char *)(*(_DWORD *)dword_4D10B0 + 43) )
      v16 = 5;
  }
  v8 = (_WORD *)(dword_4CCAAC + a1 * dword_4CCA98);
  v9 = dword_4D10A8 + v7 * dword_4D1094;
  v10 = (__int16 *)(*(_DWORD *)dword_4D10B0 + 8 * v16);
  v11 = sub_486480(*v10, a3, a4, a5, 0, 0, 0, 1, 0);
  *(_WORD *)(v9 + 16) = v11;
  if ( v11 == -1 )
  {
    sub_464E10(v15);
    return -1;
  }
  *(_BYTE *)(v9 + 11) ^= (*((_BYTE *)v10 + 2) ^ *(_BYTE *)(v9 + 11)) & 0xF;
  if ( *((_BYTE *)v10 + 2) )
  {
    v12 = *((_BYTE *)v10 + 2);
    if ( v12 == 1 )
    {
      ++v8[234];
    }
    else if ( v12 == 2 )
    {
      ++v8[113];
    }
  }
  else
  {
    ++v8[235];
  }
  *(_BYTE *)(v9 + 11) &= ~0x10u;
  *(_BYTE *)(v9 + 10) = v16;
  *(_WORD *)(v9 + 14) = a1;
  if ( a2 != 2 )
  {
    *(_WORD *)(v9 + 22) = -1;
    *(_WORD *)(v9 + 20) = -1;
    *(_WORD *)(v9 + 24) = -1;
    *(_WORD *)(v9 + 26) = -1;
    *(_WORD *)(v9 + 28) = -1;
    *(_WORD *)(v9 + 30) = -1;
  }
  *(_WORD *)(v9 + 6) = v8[382];
  *(_WORD *)(v9 + 4) = -1;
  v8[382] = v15;
  v13 = *(_WORD *)(v9 + 6);
  if ( v13 != -1 )
    *(_WORD *)(dword_4D1094 * v13 + dword_4D10A8 + 4) = v15;
  v14 = *(__int16 *)(v9 + 16);
  *(_WORD *)(v9 + 8) = -1;
  *(_WORD *)(v9 + 12) = 0;
  sub_483BD0(v14, 1, v15);
  *(_WORD *)(v9 + 18) = 0;
  return v15;
}
