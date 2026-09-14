// 函数 0x457040  sub_457040  size=0x642  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_457040(int a1, int a2)
{
  int v2; // eax
  int i; // esi
  int v4; // eax
  int result; // eax
  signed int v6; // ebx
  char *v7; // edi
  unsigned int v8; // esi
  int v9; // esi
  __int64 *v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // ecx
  int v14; // esi
  int v15; // ebx
  int v16; // ecx
  int v17; // esi
  int v18; // ebx
  int v19; // ecx
  int v20; // esi
  int v21; // ebx
  int v22; // ecx
  int v23; // esi
  int v24; // ebx
  int v25; // ecx
  double v26; // st7
  int v27; // esi
  int v28; // ebx
  int v29; // ecx
  int v30; // esi
  int v31; // ebx
  int v32; // ecx
  int v33; // esi
  int v34; // ebx
  int v35; // ecx
  int v36; // eax
  double v37; // st7
  int v38; // [esp+14h] [ebp-170h]
  size_t j; // [esp+1Ch] [ebp-168h]
  __int64 *v40; // [esp+20h] [ebp-164h]
  unsigned int v41; // [esp+24h] [ebp-160h]
  unsigned int v42; // [esp+24h] [ebp-160h]
  unsigned int v43; // [esp+24h] [ebp-160h]
  unsigned int v44; // [esp+24h] [ebp-160h]
  unsigned int v45; // [esp+24h] [ebp-160h]
  unsigned int v46; // [esp+24h] [ebp-160h]
  _DWORD v47[20]; // [esp+28h] [ebp-15Ch] BYREF
  double v48[13]; // [esp+78h] [ebp-10Ch] BYREF
  double v49[20]; // [esp+E0h] [ebp-A4h] BYREF

  if ( !a2 || (v2 = sub_464D00(110, 143, 127, 423), sub_464BC0(v2)) )
  {
    for ( i = 0; i < 12; ++i )
      sub_456CC0(i);
  }
  if ( !a2 || (v4 = sub_464D00(228, 450, 669, 552), (result = sub_464BC0(v4)) != 0) )
  {
    v6 = dword_8C462C - 1;
    for ( j = dword_8C462C - 1; v6 >= 0; j = v6 )
    {
      v40 = (__int64 *)((char *)dword_8C4628 + 56 * v6);
      v7 = (char *)&unk_4D10B8 + 189880 * *(_DWORD *)v40;
      v8 = (unsigned int)~*(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + 41193) >> 1;
      v38 = (unsigned __int16)word_87094E[*((__int16 *)v7 + 1)];
      v47[v6] = v38;
      memset(v48, 0, sizeof(v48));
      v9 = v8 & 1;
      if ( v9 || (v10 = v40, *(_DWORD *)v40 == dword_8703A0) )
      {
        switch ( dword_4B3834 )
        {
          case 1:
            v11 = dword_4CE04C;
            v12 = 0;
            do
            {
              v13 = v11;
              if ( v11 > 1000 )
                v13 = v11 - 1000 * ((v11 - 1001) / 0x3E8u + 1);
              if ( v13 < 0 )
                v13 += 1000 * ((-1 - v13) / 0x3E8u) + 1000;
              ++v12;
              *(double *)&v47[2 * v12 + 18] = *(double *)&v7[8 * v13 + 96];
              --v11;
            }
            while ( v12 < 13 );
            v49[j] = (double)v40[1];
            break;
          case 2:
            v14 = byte_4CE048;
            v15 = 0;
            v41 = byte_4CE048 - 14;
            do
            {
              v16 = v14;
              if ( v14 > 13 )
                v16 = v14 - 13 * (v41 / 0xD + 1);
              if ( v16 < 0 )
                v16 += 13 * ((-1 - v16) / 0xDu) + 13;
              --v41;
              v48[v15++] = *(double *)&v7[8 * v16 + 8304];
              --v14;
            }
            while ( v15 < 13 );
            v49[j] = (double)v40[2];
            break;
          case 3:
            v17 = byte_4CE048;
            v18 = 0;
            v42 = byte_4CE048 - 14;
            do
            {
              v19 = v17;
              if ( v17 > 13 )
                v19 = v17 - 13 * (v42 / 0xD + 1);
              if ( v19 < 0 )
                v19 += 13 * ((-1 - v19) / 0xDu) + 13;
              --v42;
              v48[v18++] = *(double *)&v7[8 * v19 + 11832];
              --v17;
            }
            while ( v18 < 13 );
            v49[j] = (double)v40[3];
            break;
          case 4:
            v20 = dword_4CE04C;
            v21 = 0;
            do
            {
              v22 = v20;
              if ( v20 > 1000 )
                v22 = v20 - 1000 * ((v20 - 1001) / 0x3E8u + 1);
              if ( v22 < 0 )
                v22 += 1000 * ((-1 - v22) / 0x3E8u) + 1000;
              ++v21;
              *(double *)&v47[2 * v21 + 18] = *(double *)&v7[8 * v22 + 11936];
              --v20;
            }
            while ( v21 < 13 );
            v49[j] = (double)v40[4];
            break;
          case 5:
            v23 = byte_4CE048;
            v24 = 0;
            v43 = byte_4CE048 - 14;
            do
            {
              v25 = v23;
              if ( v23 > 13 )
                v25 = v23 - 13 * (v43 / 0xD + 1);
              if ( v25 < 0 )
                v25 += 13 * ((-1 - v25) / 0xDu) + 13;
              --v43;
              ++v24;
              --v23;
              *(double *)&v47[2 * v24 + 18] = (double)*(__int16 *)&v7[2 * v25 + 9552];
            }
            while ( v24 < 13 );
            v26 = (double)*((int *)v40 + 10);
            goto LABEL_69;
          case 6:
            if ( v9 || *(_DWORD *)v40 == dword_8703A0 )
            {
              v27 = byte_4CE048;
              v28 = 0;
              v44 = byte_4CE048 - 14;
              do
              {
                v29 = v27;
                if ( v27 > 13 )
                  v29 = v27 - 13 * (v44 / 0xD + 1);
                if ( v29 < 0 )
                  v29 += 13 * ((-1 - v29) / 0xDu) + 13;
                --v44;
                ++v28;
                --v27;
                *(double *)&v47[2 * v28 + 18] = (double)*(__int16 *)&v7[2 * v29 + 9578];
              }
              while ( v28 < 13 );
            }
            v26 = (double)*((int *)v40 + 11);
            goto LABEL_69;
          case 7:
            v30 = byte_4CE048;
            v31 = 0;
            v45 = byte_4CE048 - 14;
            do
            {
              v32 = v30;
              if ( v30 > 13 )
                v32 = v30 - 13 * (v45 / 0xD + 1);
              if ( v32 < 0 )
                v32 += 13 * ((-1 - v32) / 0xDu) + 13;
              --v45;
              ++v31;
              --v30;
              *(double *)&v47[2 * v31 + 18] = (double)*(__int16 *)&v7[2 * v32 + 9604];
            }
            while ( v31 < 13 );
            v26 = (double)*((int *)v40 + 12);
            goto LABEL_69;
          case 8:
            v33 = byte_4CE048;
            v34 = 0;
            v46 = byte_4CE048 - 14;
            do
            {
              v35 = v33;
              if ( v33 > 13 )
                v35 = v33 - 13 * (v46 / 0xD + 1);
              if ( v35 < 0 )
                v35 += 13 * ((-1 - v35) / 0xDu) + 13;
              --v46;
              ++v34;
              --v33;
              *(double *)&v47[2 * v34 + 18] = (double)*(__int16 *)&v7[2 * v35 + 9630];
            }
            while ( v34 < 13 );
            v26 = (double)*((int *)v40 + 13);
LABEL_69:
            v49[j] = v26;
            break;
          default:
            break;
        }
        v36 = sub_464D00(228, 456, 570, 517);
        sub_45DE00(v36, 13, (int)v48, 1, v38, 0.0);
        v6 = j;
        v10 = v40;
      }
      switch ( dword_4B3834 )
      {
        case 1:
          v37 = (double)v10[1];
          goto LABEL_80;
        case 2:
          v37 = (double)v10[2];
          goto LABEL_80;
        case 3:
          v37 = (double)v10[3];
          goto LABEL_80;
        case 4:
          v37 = (double)v10[4];
          goto LABEL_80;
        case 5:
          v37 = (double)*((int *)v10 + 10);
          goto LABEL_80;
        case 6:
          v37 = (double)*((int *)v10 + 11);
          goto LABEL_80;
        case 7:
          v37 = (double)*((int *)v10 + 12);
          goto LABEL_80;
        case 8:
          v37 = (double)*((int *)v10 + 13);
LABEL_80:
          v49[v6] = v37;
          break;
        default:
          break;
      }
      --v6;
    }
    sub_45D9F0(633, 486, 34, dword_8C462C, v49, v47);
    sub_467680(58);
    return sub_466CA0(&dword_8EEDEC, 0, 0);
  }
  return result;
}
