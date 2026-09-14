// 函数 0x4702b0  sub_4702B0  size=0x2E3  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4702B0(int a1, int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  unsigned __int8 v8; // al
  __int16 v9; // cx
  unsigned __int16 v10; // cx
  int v11; // eax
  unsigned int v12; // eax
  BOOL v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  unsigned __int8 *v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned __int8 v23; // al
  BOOL v24; // eax
  int v25; // ecx
  int v26; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  BOOL v31; // [esp+14h] [ebp+8h]

  v3 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 108);
    if ( v4 < 0x106 )
    {
      sub_470070((size_t *)a1);
      v4 = *(_DWORD *)(a1 + 108);
      if ( v4 < 0x106 && !a2 )
        return 0;
      if ( !v4 )
        break;
    }
    if ( v4 >= 3 )
    {
      v5 = *(_DWORD *)(a1 + 100);
      v6 = *(_DWORD *)(a1 + 76)
         & (*(unsigned __int8 *)(*(_DWORD *)(a1 + 48) + v5 + 2)
          ^ (*(_DWORD *)(a1 + 64) << *(_DWORD *)(a1 + 80)));
      v7 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 64) = v6;
      v3 = *(unsigned __int16 *)(v7 + 2 * v6);
      *(_WORD *)(*(_DWORD *)(a1 + 56) + 2 * (v5 & *(_DWORD *)(a1 + 44))) = v3;
      *(_WORD *)(*(_DWORD *)(a1 + 60) + 2 * *(_DWORD *)(a1 + 64)) = *(_WORD *)(a1 + 100);
    }
    if ( v3 && *(_DWORD *)(a1 + 100) - v3 <= *(_DWORD *)(a1 + 36) - 262 && *(_DWORD *)(a1 + 128) != 2 )
      *(_DWORD *)(a1 + 88) = sub_46FF10((_DWORD *)a1, v3);
    if ( *(_DWORD *)(a1 + 88) < 3u )
    {
      v23 = *(_BYTE *)(*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 48));
      *(_WORD *)(*(_DWORD *)(a1 + 5788) + 2 * *(_DWORD *)(a1 + 5784)) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 5776) + (*(_DWORD *)(a1 + 5784))++) = v23;
      ++*(_WORD *)(a1 + 4 * v23 + 140);
      v24 = *(_DWORD *)(a1 + 5784) == *(_DWORD *)(a1 + 5780) - 1;
      --*(_DWORD *)(a1 + 108);
      ++*(_DWORD *)(a1 + 100);
      v31 = v24;
    }
    else
    {
      v8 = *(_BYTE *)(a1 + 88);
      v9 = *(_WORD *)(a1 + 100) - *(_WORD *)(a1 + 104);
      *(_WORD *)(*(_DWORD *)(a1 + 5788) + 2 * *(_DWORD *)(a1 + 5784)) = v9;
      v8 -= 3;
      *(_BYTE *)(*(_DWORD *)(a1 + 5776) + (*(_DWORD *)(a1 + 5784))++) = v8;
      ++*(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A59F0[v8] + 1168);
      v10 = v9 - 1;
      if ( v10 >= 0x100u )
        v11 = (unsigned __int8)byte_4A58F0[v10 >> 7];
      else
        v11 = (unsigned __int8)byte_4A57F0[v10];
      ++*(_WORD *)(a1 + 4 * v11 + 2432);
      v12 = *(_DWORD *)(a1 + 88);
      v13 = *(_DWORD *)(a1 + 5784) == *(_DWORD *)(a1 + 5780) - 1;
      *(_DWORD *)(a1 + 108) -= v12;
      v31 = v13;
      if ( v12 > *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 108) < 3u )
      {
        *(_DWORD *)(a1 + 100) += v12;
        v20 = (unsigned __int8 *)(*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 48));
        v21 = *(_DWORD *)(a1 + 80);
        *(_DWORD *)(a1 + 88) = 0;
        v22 = *v20;
        *(_DWORD *)(a1 + 64) = v22;
        *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 76) & (v20[1] ^ (v22 << v21));
      }
      else
      {
        *(_DWORD *)(a1 + 88) = v12 - 1;
        do
        {
          v14 = ++*(_DWORD *)(a1 + 100);
          v15 = *(unsigned __int8 *)(v14 + *(_DWORD *)(a1 + 48) + 2);
          v16 = *(_DWORD *)(a1 + 44) & v14;
          v17 = *(_DWORD *)(a1 + 60);
          v18 = *(_DWORD *)(a1 + 76) & ((*(_DWORD *)(a1 + 64) << *(_DWORD *)(a1 + 80)) ^ v15);
          *(_DWORD *)(a1 + 64) = v18;
          v3 = *(unsigned __int16 *)(v17 + 2 * v18);
          *(_WORD *)(*(_DWORD *)(a1 + 56) + 2 * v16) = v3;
          *(_WORD *)(*(_DWORD *)(a1 + 60) + 2 * *(_DWORD *)(a1 + 64)) = *(_WORD *)(a1 + 100);
        }
        while ( (*(_DWORD *)(a1 + 88))-- != 1 );
        ++*(_DWORD *)(a1 + 100);
      }
    }
    if ( v31 )
    {
      v25 = *(_DWORD *)(a1 + 84);
      v26 = v25 < 0 ? 0 : v25 + *(_DWORD *)(a1 + 48);
      sub_472BD0(a1, v26, *(_DWORD *)(a1 + 100) - v25, 0);
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 100);
      sub_46FA90(*(_DWORD *)a1);
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 16) )
        return 0;
    }
  }
  v28 = *(_DWORD *)(a1 + 84);
  if ( v28 < 0 )
    v29 = 0;
  else
    v29 = v28 + *(_DWORD *)(a1 + 48);
  sub_472BD0(a1, v29, *(_DWORD *)(a1 + 100) - v28, a2 == 4);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 100);
  sub_46FA90(*(_DWORD *)a1);
  v30 = 0;
  if ( !*(_DWORD *)(*(_DWORD *)a1 + 16) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v30) = a2 == 4;
  return 2 * v30 + 1;
}
