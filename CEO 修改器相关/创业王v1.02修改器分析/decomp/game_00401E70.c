int __cdecl sub_401E70(int a1, int a2, int a3)
{
  _DWORD *v3; // edi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  unsigned int v10; // esi
  int v11; // edx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // esi
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // esi
  int j; // [esp+18h] [ebp-44h]
  int v21; // [esp+1Ch] [ebp-40h]
  unsigned int v22; // [esp+20h] [ebp-3Ch]
  int v23; // [esp+24h] [ebp-38h]
  int v24; // [esp+28h] [ebp-34h]
  unsigned int v25; // [esp+2Ch] [ebp-30h]
  int *v26; // [esp+30h] [ebp-2Ch]
  int i; // [esp+34h] [ebp-28h]
  int v28; // [esp+38h] [ebp-24h]
  int v29; // [esp+3Ch] [ebp-20h]
  int v30; // [esp+40h] [ebp-1Ch]
  int v31; // [esp+4Ch] [ebp-10h] BYREF
  int v32; // [esp+50h] [ebp-Ch]
  int v33; // [esp+54h] [ebp-8h]
  int v34; // [esp+58h] [ebp-4h]

  sub_464070(&v31);
  v29 = dword_497D5C;
  v28 = dword_497D58;
  v3 = (_DWORD *)(dword_4B2B50 + a1 * dword_4B2B3C);
  result = -1;
  v30 = dword_4B6EE8;
  dword_497D58 = -1;
  if ( a3 )
  {
    v5 = sub_40CB40();
    sub_4616E0(v5);
    ++v31;
    ++v32;
    --v33;
    --v34;
    v23 = sub_460A10() % 4;
    for ( i = 0; i < 4; ++i )
    {
      for ( j = v32; j <= v34; ++j )
      {
        v6 = v31;
        v21 = v31;
        if ( v31 <= v33 )
        {
          while ( 2 )
          {
            v7 = 0;
            v8 = &dword_498118;
            v24 = 0;
            v26 = &dword_498118;
            do
            {
              if ( v7 )
                break;
              if ( *(_BYTE *)(v24 + a3 + 28) )
              {
                v9 = *v8;
                v10 = v6 + 2 * v9 + v9;
                v11 = v8[1];
                v12 = j + 2 * v11 + v11;
                v13 = v3[6];
                if ( v10 >= v13 || v12 >= v3[7] )
                {
                  if ( v9 + v6 < v13 && (unsigned int)(v11 + j) < v3[7] )
                  {
                    if ( *(_WORD *)(v3[31] + 2 * (v9 + v21 + (v11 + j) * v13)) != 0xFFFF )
                      goto LABEL_40;
                    v6 = v21;
                  }
                  if ( v6 + 2 * v9 < v13 )
                  {
                    v14 = j + 2 * v11;
                    if ( v14 < v3[7] )
                    {
                      if ( *(_WORD *)(v3[31] + 2 * (v21 + 2 * v9 + v14 * v13)) != 0xFFFF )
                      {
LABEL_40:
                        v6 = v21;
                        goto LABEL_41;
                      }
                      v6 = v21;
                    }
                  }
                  v12 = j + 2 * v11 + v11;
                }
                if ( v10 < v13 && v12 < v3[7] )
                {
                  v6 = v21;
                  if ( *(_WORD *)(v3[31] + 2 * (v10 + v12 * v13)) != 0xFFFF )
                    goto LABEL_41;
                }
                v25 = v6 + 4 * v9;
                v15 = j;
                v22 = j + 4 * v11;
                if ( v25 >= v13 || (v16 = j + 4 * v11, v22 >= v3[7]) )
                {
                  if ( v9 + v6 < v13 && (unsigned int)(v11 + j) < v3[7] )
                  {
                    if ( *(_WORD *)(v3[31] + 2 * (v9 + v6 + (v11 + j) * v13)) != 0xFFFF )
                      goto LABEL_41;
                    v15 = j;
                  }
                  v17 = v6 + 2 * v9;
                  v18 = v15 + 2 * v11;
                  if ( v17 < v13 && v18 < v3[7] && *(_WORD *)(v3[31] + 2 * (v17 + v18 * v13)) != 0xFFFF )
                    goto LABEL_41;
                  v16 = v22;
                }
                if ( v25 < v13 && v16 < v3[7] && *(_WORD *)(v3[31] + 2 * (v25 + v16 * v13)) != 0xFFFF )
                  goto LABEL_41;
                v8 = v26;
                v7 = 1;
              }
              v8 += 2;
              ++v24;
              v26 = v8;
            }
            while ( (int)v8 < (int)&dword_498138 );
            sub_426210(a1, a2, v6, j, v23);
            if ( dword_4B6EE8 )
            {
              sub_426410(a1);
              v19 = sub_425A00(a1, a2, v6, j, v23);
              if ( v19 != -1 )
              {
                sub_42F080((double)-*(_DWORD *)(v19 * dword_4B6ECC + dword_4B6EE0 + 12));
                dword_4B6EE8 = v30;
                dword_497D58 = v28;
                dword_497D5C = v29;
                return v19;
              }
            }
LABEL_41:
            v21 = ++v6;
            if ( v6 <= v33 )
              continue;
            break;
          }
        }
      }
      if ( ++v23 == 4 )
        v23 = 0;
    }
    sub_426410(a1);
    dword_497D5C = v29;
    dword_497D58 = v28;
    dword_4B6EE8 = v30;
    return -1;
  }
  return result;
}
