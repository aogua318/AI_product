// 函数 0x407c30  sub_407C30  size=0x2EF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_407C30(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int *v4; // esi
  double v5; // st7
  size_t v6; // ecx
  char *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  __int16 v13; // ax
  signed int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  double v17; // st7
  int v18; // edx
  double v19; // st6
  int v20; // ecx
  double v21; // st6
  char *v22; // ecx
  double v23; // [esp+Ch] [ebp-30h]
  int *v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-20h] BYREF
  int v27; // [esp+20h] [ebp-1Ch] BYREF
  int v28; // [esp+24h] [ebp-18h] BYREF
  int v29; // [esp+28h] [ebp-14h] BYREF
  int v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+30h] [ebp-Ch]
  int v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v2 = a1;
  v3 = 0;
  v30 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(dword_4C2CDC + 2);
  v4 = (int *)((char *)dword_870824 + 112 * (a1 < 0 ? 0 : a1));
  v24 = v4;
  sub_419920(&v26, &v27);
  v5 = (double)*v4 * 0.00390625 * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v4 + 7) + 24);
  if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v4 + 7) + 13) )
    v5 = v5 * 0.8;
  v6 = dword_4C2CE8;
  v23 = v5;
  v7 = (char *)Base;
  v31 = 0;
  if ( (int)dword_4C2CE8 > 0 )
  {
    while ( 1 )
    {
      v8 = *(__int16 *)&v7[v3];
      *(_WORD *)&v7[v3 + 2] = 0;
      v9 = dword_4CCAAC + dword_4CCA98 * v8;
      v33 = v9;
      if ( dword_4CD13C && *(char *)(v9 + 224) < 7 )
      {
        *(_DWORD *)&v7[v3 + 8] = 0;
      }
      else
      {
        v10 = *(__int16 *)(v9 + 2 * v2 + 240);
        if ( v10 != -1 )
        {
          v11 = dword_4CC8D0 + v10 * dword_4CC8BC;
          if ( *(_WORD *)(v11 + 28) )
          {
            if ( *(_BYTE *)(v11 + 10) == 2 )
            {
              *(_DWORD *)&v7[v3 + 8] = 0;
            }
            else if ( sub_415CF0(v11) )
            {
              if ( (*(_BYTE *)(dword_4C2CDC + 9) == 1 || *(_BYTE *)(v11 + 10) == 1)
                && *(_BYTE *)(v33 + 224) != *(_BYTE *)(v30 + 224) )
              {
                v7 = (char *)Base;
                *(_DWORD *)((char *)Base + v3 + 8) = 0;
              }
              else
              {
                v32 = *(_DWORD *)(v11 + 12) / 4;
                if ( (double)dword_4D0B34 * v23 * 4.0 >= (double)v32 * 100.0 )
                {
                  v12 = sub_415230(v11);
                  v7 = (char *)Base;
                  if ( v12 )
                  {
                    *(_WORD *)((char *)Base + v3 + 4) = v12;
                    v13 = *(_WORD *)(v11 + 28) - *(_WORD *)(v11 + 32) - *(_WORD *)(v11 + 30);
                    *(_WORD *)&v7[v3 + 2] = v13;
                    if ( v13 > 0 )
                    {
                      sub_419920(&v28, &v29);
                      v14 = sub_4012D0(v26, v27, v28, v29);
                      v15 = *(_WORD *)(v11 + 28);
                      if ( v15 < 4 )
                        v16 = v14 / v15;
                      else
                        v16 = v14 / 4;
                      v7 = (char *)Base;
                      v17 = v23;
                      v18 = v33;
                      v32 = v16;
                      v19 = v23 + v23;
                      *(_DWORD *)((char *)Base + v3 + 8) = 0;
                      if ( *(char *)(v18 + 224) == a2 )
                      {
                        v25 = *(char *)(dword_4C2CDC + 11);
                        v33 = dword_4C2CDC + 11;
                        v21 = v19 * (double)v25;
                      }
                      else
                      {
                        v20 = *(char *)(dword_4C2CDC + 11);
                        v33 = dword_4C2CDC + 11;
                        v21 = v19 * (double)v20;
                        v17 = v23 + (double)(*(_DWORD *)(v11 + 12) / 4);
                      }
                      v22 = (char *)v33;
                      *(_DWORD *)&v7[v3 + 8] = (int)(v21 / (v17 + (double)v32 + 1.0));
                      *(_DWORD *)&v7[v3 + 8] += (100 - *v22) * *(char *)(v11 + 1) / (v24[21] + 1);
                    }
                    else
                    {
                      *(_DWORD *)&v7[v3 + 8] = 0;
                    }
                  }
                  else
                  {
                    *(_DWORD *)((char *)Base + v3 + 8) = 0;
                  }
                }
                else
                {
                  v7 = (char *)Base;
                  *(_DWORD *)((char *)Base + v3 + 8) = 0;
                }
              }
            }
            else
            {
              v7 = (char *)Base;
              *(_DWORD *)((char *)Base + v3 + 8) = 0;
            }
          }
          else
          {
            *(_DWORD *)&v7[v3 + 8] = 0;
          }
        }
      }
      v6 = dword_4C2CE8;
      v3 += 12;
      if ( ++v31 >= (int)dword_4C2CE8 )
        break;
      v2 = a1;
    }
  }
  qsort(v7, v6, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_407BF0);
}
