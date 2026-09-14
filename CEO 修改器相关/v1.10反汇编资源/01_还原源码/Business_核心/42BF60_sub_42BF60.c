// 函数 0x42bf60  sub_42BF60  size=0x2A9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42BF60(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  unsigned __int8 *v4; // edi
  int v5; // ebx
  unsigned __int8 v6; // al
  __int16 v7; // ax
  unsigned __int8 *v8; // ecx
  unsigned __int8 v9; // al
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  char v15; // al
  __int16 v16; // ax
  int v17; // eax
  int v18; // esi
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // eax
  int v22; // esi
  int v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  v1 = dword_4D10A8 + a1 * dword_4D1094;
  v2 = *(__int16 *)(v1 + 16);
  v3 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 14);
  v24 = v3;
  v25 = v2;
  if ( sub_483C00(v2) != 1 )
    return 0;
  if ( sub_483C30(v2) != a1 )
    return 0;
  sub_40CBE0((_DWORD *)v3, v2);
  if ( !sub_464E10(a1) )
    return 0;
  if ( *(_BYTE *)(v1 + 12) == 3 )
  {
    v4 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * *(__int16 *)(v1 + 20));
    v5 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *v4 + 240);
    sub_415C20(v5, *((_DWORD *)v4 + 5));
    v6 = v4[11];
    if ( !v6 || v6 == 7 )
      --*(_WORD *)(v5 + 30);
    sub_420B10(*(__int16 *)(v1 + 20));
    v2 = v25;
    v3 = v24;
  }
  else if ( *(_BYTE *)(v1 + 13) == 3 )
  {
    v7 = *(_WORD *)(v1 + 20);
    if ( v7 != -1 )
    {
      v8 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v7);
      v9 = v8[11];
      if ( !v9 || v9 == 7 )
      {
        v10 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *v8 + 240);
        --*(_WORD *)(v10 + 30);
      }
      sub_421BD0((int)v8);
    }
  }
  sub_4864E0(v2);
  v11 = *(__int16 *)(v1 + 4);
  v12 = *(__int16 *)(v1 + 6);
  v13 = -1;
  if ( v11 == -1 )
  {
    *(_WORD *)(v3 + 764) = v12;
  }
  else
  {
    *(_WORD *)(v11 * dword_4D1094 + dword_4D10A8 + 6) = v12;
    v13 = -1;
  }
  if ( v12 != -1 )
  {
    v14 = v12 * dword_4D1094;
    v12 = dword_4D10A8;
    *(_WORD *)(v14 + dword_4D10A8 + 4) = v11;
  }
  v15 = (char)(16 * *(_BYTE *)(v1 + 11)) >> 4;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      --*(_WORD *)(v3 + 468);
      v20 = *(_WORD *)(v1 + 26);
      if ( v20 != -1 )
      {
        v21 = dword_4D0C84 + dword_4D0C70 * v20;
        v12 = 0;
        v22 = *(char *)(v21 + 22);
        if ( v22 > 0 )
        {
          v13 = v21 + 24;
          while ( *(__int16 *)v13 != a1 )
          {
            ++v12;
            v13 += 2;
            if ( v12 >= *(char *)(v21 + 22) )
              goto LABEL_42;
          }
          LOWORD(v13) = *(_WORD *)(v21 + 2 * v22 + 22);
          *(_WORD *)(v21 + 2 * v12 + 24) = v13;
          --*(_BYTE *)(v21 + 22);
        }
      }
    }
    else if ( v15 == 2 )
    {
      --*(_WORD *)(v3 + 226);
    }
  }
  else
  {
    --*(_WORD *)(v3 + 470);
    v16 = *(_WORD *)(v1 + 26);
    if ( v16 == -1 )
    {
      if ( *(_WORD *)(v1 + 28) == 0xFFFF )
      {
        v19 = *(_WORD *)(v1 + 30);
        if ( v19 != -1 )
        {
          v12 = dword_870868;
          *(_WORD *)(dword_870854 * v19 + dword_870868 + 12) = -1;
        }
      }
      else
      {
        sub_431000(a1);
      }
    }
    else
    {
      v17 = dword_4D0C84 + dword_4D0C70 * v16;
      v12 = 0;
      v18 = *(char *)(v17 + 23);
      if ( v18 > 0 )
      {
        v13 = v17 + 64;
        while ( *(__int16 *)v13 != a1 )
        {
          ++v12;
          v13 += 2;
          if ( v12 >= *(char *)(v17 + 23) )
            goto LABEL_42;
        }
        LOWORD(v13) = *(_WORD *)(v17 + 2 * v18 + 62);
        *(_WORD *)(v17 + 2 * v12 + 64) = v13;
        --*(_BYTE *)(v17 + 23);
      }
    }
  }
LABEL_42:
  if ( *(char *)(v3 + 224) == dword_8703A0 )
    sub_444AB0(v12, v13);
  return 1;
}
