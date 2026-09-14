// 函数 0x41bba0  sub_41BBA0  size=0x392  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41BBA0(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  __int16 v5; // ax
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  __int16 v13; // ax
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v24; // [esp+Ch] [ebp-118h]
  int v25; // [esp+14h] [ebp-110h] BYREF
  int v26; // [esp+18h] [ebp-10Ch] BYREF
  int v27; // [esp+1Ch] [ebp-108h]
  char Buffer[256]; // [esp+20h] [ebp-104h] BYREF

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v2 = sub_41BB10((_DWORD *)v1);
  v3 = 1;
  dword_4B110C = 1;
  v4 = *(__int16 *)(v1 + 464);
  v24 = v2;
  if ( v2 <= v4 )
  {
    if ( v2 >= v4 )
      goto LABEL_6;
    v3 = v4 - v2;
  }
  else
  {
    v3 = v2 - v4;
  }
  dword_4B110C = v3;
LABEL_6:
  v27 = 0;
  if ( v3 > 0 )
  {
    do
    {
      v5 = *(_WORD *)(v1 + 464);
      if ( v5 >= v2 )
      {
        if ( v5 > v2 && v5 > *(__int16 *)(v1 + 468) )
          *(_WORD *)(v1 + 464) = v5 - 1;
        if ( *(__int16 *)(v1 + 468) > v2 )
        {
          v6 = *(__int16 *)(v1 + 764);
          if ( v6 != -1 )
          {
            while ( 1 )
            {
              v7 = dword_4D10A8 + v6 * dword_4D1094;
              if ( (*(_BYTE *)(v7 + 11) & 0xF) == 1 && *(_BYTE *)(v7 + 12) != 3 && *(_BYTE *)(v7 + 13) != 3 )
                break;
              v6 = *(__int16 *)(v7 + 6);
              if ( v6 == -1 )
                goto LABEL_20;
            }
            sub_42BF60(v6);
            --*(_WORD *)(v1 + 464);
            sub_419920((_DWORD *)v1, &v25, &v26);
            v8 = *(_DWORD *)dword_4D1088 + 2992;
            sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 3000), v1 + 204);
            sub_42B930(v25, v26, *(char *)(v1 + 224), Buffer, v8);
LABEL_20:
            v2 = v24;
          }
        }
      }
      else
      {
        *(_WORD *)(v1 + 464) = v5 + 1;
      }
      sub_444AB0();
      ++v27;
    }
    while ( v27 < dword_4B110C );
  }
  v9 = sub_41BB30((_DWORD *)v1);
  v10 = 1;
  v11 = v9;
  dword_4B110C = 1;
  v12 = *(__int16 *)(v1 + 466);
  if ( v11 <= v12 )
  {
    if ( v11 >= v12 )
      goto LABEL_27;
    v10 = v12 - v11;
  }
  else
  {
    v10 = v11 - v12;
  }
  dword_4B110C = v10;
LABEL_27:
  v27 = 0;
  if ( v10 > 0 )
  {
    do
    {
      v13 = *(_WORD *)(v1 + 466);
      if ( v13 >= v11 )
      {
        if ( v13 > v11 && v13 > *(__int16 *)(v1 + 470) )
          *(_WORD *)(v1 + 466) = v13 - 1;
        if ( *(__int16 *)(v1 + 470) > v11 )
        {
          v14 = *(__int16 *)(v1 + 764);
          if ( v14 != -1 )
          {
            while ( 1 )
            {
              v15 = dword_4D10A8 + v14 * dword_4D1094;
              if ( (*(_BYTE *)(v15 + 11) & 0xF) == 0 && *(_BYTE *)(v15 + 12) != 3 && *(_BYTE *)(v15 + 13) != 3 )
                break;
              v14 = *(__int16 *)(v15 + 6);
              if ( v14 == -1 )
                goto LABEL_41;
            }
            sub_42BF60(v14);
            --*(_WORD *)(v1 + 466);
            sub_419920((_DWORD *)v1, &v26, &v25);
            v16 = *(_DWORD *)dword_4D1088 + 2904;
            sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 2912), v1 + 204);
            sub_42B930(v26, v25, *(char *)(v1 + 224), Buffer, v16);
          }
        }
      }
      else
      {
        *(_WORD *)(v1 + 466) = v13 + 1;
      }
LABEL_41:
      sub_444AB0();
      ++v27;
    }
    while ( v27 < dword_4B110C );
  }
  v17 = sub_41BB50((_DWORD *)v1);
  v18 = 1;
  v19 = v17;
  dword_4B110C = 1;
  v20 = *(__int16 *)(v1 + 482);
  if ( v19 <= v20 )
  {
    if ( v19 >= v20 )
      goto LABEL_47;
    v18 = v20 - v19;
  }
  else
  {
    v18 = v19 - v20;
  }
  dword_4B110C = v18;
LABEL_47:
  v21 = 0;
  if ( v18 > 0 )
  {
    do
    {
      v22 = *(__int16 *)(v1 + 482);
      if ( v22 >= v19 )
      {
        if ( v22 <= v19 )
          return 0;
        sub_433D30(*(__int16 *)(v1 + 480));
      }
      else
      {
        sub_433200(a1);
        if ( a1 == dword_4B1028 )
          sub_460070();
      }
      sub_444AB0();
      ++v21;
    }
    while ( v21 < dword_4B110C );
  }
  return 0;
}
