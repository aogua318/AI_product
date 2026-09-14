// 函数 0x417880  sub_417880  size=0x2E0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_417880(int a1)
{
  int v1; // edx
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // edi
  bool v5; // al
  unsigned int v6; // eax
  int *v7; // edx
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int16 v15; // bx
  int v16; // eax
  int v17; // esi
  int v18; // edi
  __int16 v19; // ax
  bool v20; // zf
  int result; // eax
  int v22; // esi
  int *v23; // [esp+Ch] [ebp-19028h]
  _BYTE *v24; // [esp+10h] [ebp-19024h]
  bool v25; // [esp+14h] [ebp-19020h]
  int v26; // [esp+14h] [ebp-19020h]
  int v27; // [esp+1Ch] [ebp-19018h]
  _DWORD *v28; // [esp+20h] [ebp-19014h]
  int v29; // [esp+20h] [ebp-19014h]
  int v30; // [esp+24h] [ebp-19010h]
  int v31; // [esp+28h] [ebp-1900Ch]
  int v32; // [esp+2Ch] [ebp-19008h]
  _BYTE v33[102400]; // [esp+30h] [ebp-19004h] BYREF

  v1 = *(_DWORD *)(a1 + 196);
  v2 = *(_DWORD *)(a1 + 200);
  dword_4CCA88 = (int)v33;
  v32 = a1;
  dword_4CCA80 = v1;
  dword_4CCA84 = v2;
  v30 = 0;
  if ( v2 > 0 )
  {
    v24 = v33;
    v27 = 0;
    do
    {
      v3 = 0;
      v31 = 0;
      if ( v1 > 0 )
      {
        v4 = (_DWORD *)(v27 + *(_DWORD *)(a1 + 140));
        v28 = v4;
        do
        {
          v5 = *v4 != -1;
          v25 = v5;
          if ( *v4 != -1 )
          {
            v6 = *(_DWORD *)(a1 + 24);
            v7 = dword_4B32D0;
            v23 = dword_4B32D0;
            while ( 1 )
            {
              v8 = *v7;
              v9 = v7[1];
              v10 = v8 + v3 + 2 * v8;
              v11 = v9 + v30 + 2 * v9;
              if ( v10 >= v6 || v11 >= *(_DWORD *)(v32 + 28) )
              {
                v12 = v9 + v30;
                if ( v8 + v31 < v6
                  && v12 < *(_DWORD *)(v32 + 28)
                  && *(_WORD *)(*(_DWORD *)(v32 + 124) + 2 * (v8 + v31 + v12 * v6)) != 0xFFFF )
                {
                  break;
                }
                v11 = v9 + v30 + 2 * v9;
                v13 = v30 + 2 * v9;
                v14 = v31 + 2 * v8;
                if ( v14 < v6
                  && v13 < *(_DWORD *)(v32 + 28)
                  && *(_WORD *)(*(_DWORD *)(v32 + 124) + 2 * (v14 + v13 * v6)) != 0xFFFF )
                {
                  break;
                }
              }
              if ( v10 < v6
                && v11 < *(_DWORD *)(v32 + 28)
                && *(_WORD *)(*(_DWORD *)(v32 + 124) + 2 * (v10 + v11 * v6)) != 0xFFFF )
              {
                break;
              }
              v7 = v23 + 2;
              v23 = v7;
              if ( (int)v7 >= (int)&dword_4B32F0 )
              {
                v5 = v25;
                goto LABEL_22;
              }
              v3 = v31;
            }
            v5 = 0;
          }
LABEL_22:
          a1 = v32;
          v24[v31] = v5;
          v1 = dword_4CCA80;
          v3 = v31 + 1;
          v4 = v28 + 1;
          v31 = v3;
          ++v28;
        }
        while ( v3 < dword_4CCA80 );
        v2 = dword_4CCA84;
      }
      v24 += v1;
      v27 += 4 * v1;
      ++v30;
    }
    while ( v30 < v2 );
  }
  v15 = 0;
  v16 = v2 - 1;
  v17 = 1;
  v26 = v2 - 1;
  if ( v2 - 1 > 1 )
  {
    v29 = v1 - 1;
    do
    {
      v18 = 1;
      if ( v29 > 1 )
      {
        do
        {
          v19 = sub_417830(v18++, v17);
          v15 += v19;
        }
        while ( v18 < v29 );
        v16 = v26;
      }
      ++v17;
    }
    while ( v17 < v16 );
    a1 = v32;
  }
  v20 = *(_WORD *)(a1 + 1622) == 1;
  result = *(__int16 *)(a1 + 1620);
  *(_WORD *)(a1 + 230) = v15;
  if ( v20 )
  {
    *(_WORD *)(result * dword_4C43C8 + dword_4C43DC + 26) = v15;
  }
  else
  {
    for ( ; result != -1; result = *(__int16 *)(v22 + 20) )
    {
      v22 = dword_4C43DC + result * dword_4C43C8;
      sub_40EB90(v22);
    }
  }
  return result;
}
