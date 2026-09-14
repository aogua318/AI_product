// 函数 0x4426f0  sub_4426F0  size=0x3DA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4426F0()
{
  signed int v0; // edi
  int v1; // ecx
  int i; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // edx
  signed int v18; // eax
  unsigned int v19; // ebx
  int *v20; // eax
  int v21; // eax
  int v22; // ebx
  int v24; // [esp+10h] [ebp-110h]
  int v25; // [esp+14h] [ebp-10Ch]
  int v26; // [esp+14h] [ebp-10Ch]
  int v27; // [esp+14h] [ebp-10Ch]
  int v28; // [esp+18h] [ebp-108h]
  char Buffer[256]; // [esp+1Ch] [ebp-104h] BYREF

  v0 = 0;
  dword_8A6E70 = 0;
  if ( dword_8A5E24 )
  {
    if ( dword_8A5E24 == 1 )
    {
      v28 = 3;
    }
    else if ( dword_8A5E24 == 2 )
    {
      v1 = 1;
      v28 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v28 = 12;
  }
  v1 = v28;
LABEL_8:
  if ( dword_4B37E4 == -1 )
  {
    for ( i = *(__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98 + 238); i != -1; dword_8A6E70 = v0 )
    {
      v3 = dword_4CC8D0 + i * dword_4CC8BC;
      v4 = 3 * (v0 < 0 ? 0 : v0);
      dword_8A6970[v4] = i;
      dword_8A6974[v4] = 0;
      dword_8A6978[v4] = 0;
      if ( v1 > 0 )
      {
        v24 = byte_4CE046;
        v5 = byte_4CE046 - v1;
        v25 = v1;
        do
        {
          v6 = v5;
          if ( v5 > 24 )
            v6 = v5 - 8 * (3 * ((v5 - 25) / 0x18u) + 3);
          if ( v6 < 0 )
            v6 += 24 * ((-1 - v6) / 0x18u) + 24;
          dword_8A6974[v4] += *(_DWORD *)(v3 + 4 * v6 + 412);
          v7 = v24;
          if ( v24 > 24 )
            v7 = v24 - 8 * (3 * ((v28 + v5 - 25) / 0x18u) + 3);
          if ( v7 < 0 )
            v7 += 24 * ((-1 - v7) / 0x18u) + 24;
          dword_8A6978[v4] += *(_DWORD *)(v3 + 4 * v7 + 412);
          --v24;
          --v5;
          --v25;
        }
        while ( v25 );
        v1 = v28;
        v0 = dword_8A6E70;
      }
      i = *(__int16 *)(v3 + 6);
      ++v0;
    }
    qsort(dword_8A6970, v0, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4423F0);
  }
  else
  {
    v8 = dword_4CC8D0 + dword_4B37E4 * dword_4CC8BC;
    dword_8A6970[0] = dword_4B37E4;
    dword_8A6974[0] = 0;
    dword_8A6978[0] = 0;
    if ( v1 > 0 )
    {
      v9 = byte_4CE046;
      v10 = byte_4CE046 - v1;
      v26 = v1;
      do
      {
        v11 = v10;
        if ( v10 > 24 )
          v11 = v10 - 8 * (3 * ((v10 - 25) / 0x18u) + 3);
        if ( v11 < 0 )
          v11 += 24 * ((-1 - v11) / 0x18u) + 24;
        dword_8A6974[0] += *(_DWORD *)(v8 + 4 * v11 + 412);
        v12 = v9;
        if ( v9 > 24 )
          v12 = v9 - 8 * (3 * ((v10 + v28 - 25) / 0x18u) + 3);
        if ( v12 < 0 )
          v12 += 24 * ((-1 - v12) / 0x18u) + 24;
        dword_8A6978[0] += *(_DWORD *)(v8 + 4 * v12 + 412);
        --v9;
        --v10;
        --v26;
      }
      while ( v26 );
    }
    dword_8A6E70 = 1;
  }
  sub_43F9E0(dword_8A6E70 - 13);
  v13 = dword_8A6E70;
  v14 = 0;
  if ( dword_8A6E6C >= dword_8A6E70 )
    dword_8A6E6C = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v27 = 0;
  if ( dword_8A6E70 >= 2 )
  {
    v19 = ((unsigned int)(dword_8A6E70 - 2) >> 1) + 1;
    v20 = dword_8A6978;
    do
    {
      v14 += *(v20 - 1);
      v15 += *v20;
      v17 += v20[2];
      v16 += v20[3];
      v20 += 6;
      --v19;
    }
    while ( v19 );
    v13 = dword_8A6E70;
    v18 = 2 * (((unsigned int)(dword_8A6E70 - 2) >> 1) + 1);
  }
  if ( v18 >= v13 )
  {
    v22 = 0;
  }
  else
  {
    v21 = 3 * v18;
    v22 = dword_8A6974[v21];
    v27 = dword_8A6970[v21 + 2];
  }
  sub_438190(v22 + v14 + v17, Buffer, 7);
  sub_47FF50(Buffer);
  sub_438190(v27 + v15 + v16, Buffer, 7);
  return sub_47FF50(Buffer);
}
