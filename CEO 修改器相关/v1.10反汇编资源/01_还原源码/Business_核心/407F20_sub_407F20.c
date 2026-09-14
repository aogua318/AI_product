// 函数 0x407f20  sub_407F20  size=0x561  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_407F20(int a1)
{
  int result; // eax
  int v2; // ebx
  __int16 *v3; // edi
  int v4; // esi
  int i; // esi
  int v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  __int16 *v14; // ebx
  int v15; // eax
  char *v16; // edi
  bool v17; // zf
  signed int v18; // esi
  signed int v19; // ecx
  signed int v20; // ebx
  int v21; // esi
  signed int v22; // ecx
  signed int v23; // esi
  signed int v24; // ebx
  int v25; // edi
  int v26; // edi
  __int16 v27; // ax
  int v28; // ebx
  __int16 v29; // si
  int v30; // edi
  int v31; // ecx
  int v32; // eax
  __int16 *v33; // eax
  __int16 v34; // dx
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // eax
  __int16 *v40; // [esp+4h] [ebp-1D4DCh]
  __int16 *v41; // [esp+8h] [ebp-1D4D8h]
  int v42; // [esp+Ch] [ebp-1D4D4h]
  int v43; // [esp+10h] [ebp-1D4D0h]
  int v44; // [esp+14h] [ebp-1D4CCh]
  int v45; // [esp+14h] [ebp-1D4CCh]
  signed int j; // [esp+18h] [ebp-1D4C8h]
  unsigned int v47; // [esp+18h] [ebp-1D4C8h]
  signed int v48; // [esp+18h] [ebp-1D4C8h]
  char v49; // [esp+1Ch] [ebp-1D4C4h] BYREF

  result = a1;
  v2 = dword_4CCAAC + a1 * dword_4CCA98;
  Base = &v49;
  dword_4C2CE8 = 0;
  word_4C2CE4 = a1;
  v43 = v2;
  if ( !dword_4CD13C || *(char *)(v2 + 224) >= 7 )
  {
    v3 = (__int16 *)(v2 + 488);
    v44 = 32;
    do
    {
      v4 = *v3;
      if ( sub_464E90(v4) )
        sub_407B90(v4);
      v3 += 4;
      --v44;
    }
    while ( v44 );
    for ( i = word_4D1110[94940 * *(char *)(v2 + 224)]; i != -1; i = *(__int16 *)(i * dword_4CCA98 + dword_4CCAAC + 1618) )
      sub_407B90(i);
    for ( j = 0; j < (int)dword_4C2CE8; ++j )
    {
      v6 = sub_4640D0() % (int)dword_4C2CE8;
      v7 = sub_4640D0() % (int)dword_4C2CE8;
      if ( v6 != v7 )
      {
        v8 = 3 * v6;
        v9 = *((_DWORD *)Base + 3 * v6 + 2);
        v10 = *((_DWORD *)Base + 3 * v6);
        v11 = *((_DWORD *)Base + v8 + 1);
        v12 = (char *)Base + 4 * v8;
        v13 = (char *)Base + 12 * v7;
        *v12 = *v13;
        v12[1] = v13[1];
        v12[2] = v13[2];
        *v13 = v10;
        v13[1] = v11;
        v13[2] = v9;
        v2 = v43;
      }
    }
    v14 = (__int16 *)(v2 + 240);
    v45 = 0;
    v41 = v14;
    do
    {
      v15 = *v14;
      dword_4C2CD8 = v15;
      if ( v15 != -1 )
      {
        v16 = (char *)(dword_4CC8D0 + v15 * dword_4CC8BC);
        v17 = v16[9] == 2;
        dword_4C2CDC = (int)v16;
        if ( !v17 )
        {
          v18 = byte_4CE044;
          v19 = byte_4CE044;
          if ( byte_4CE044 > 12 )
            v19 = -12 - 12 * ((byte_4CE044 - 13) / 0xCu) + byte_4CE044;
          if ( v19 < 0 )
            v19 += 12 * ((-1 - v19) / 0xCu) + 12;
          v20 = byte_4CE044;
          if ( byte_4CE044 > 12 )
            v20 = -12 - 12 * ((byte_4CE044 - 13) / 0xCu) + byte_4CE044;
          if ( v20 < 0 )
            v20 += 12 * ((-1 - v20) / 0xCu) + 12;
          if ( byte_4CE044 > 12 )
            v18 = -12 - 12 * ((byte_4CE044 - 13) / 0xCu) + byte_4CE044;
          if ( v18 < 0 )
            v18 += 12 * ((-1 - v18) / 0xCu) + 12;
          if ( *(_DWORD *)&v16[4 * v19 + 208] + *(_DWORD *)&v16[4 * v20 + 260] + *(_DWORD *)&v16[4 * v18 + 364] >= 0 )
          {
            v22 = byte_4CE044;
            v23 = byte_4CE044;
            v47 = byte_4CE044;
            if ( byte_4CE044 > 12 )
            {
              v23 = -12 - 12 * ((byte_4CE044 - 13) / 0xCu) + byte_4CE044;
              v47 = v23;
            }
            if ( v23 < 0 )
              v47 = v23 + 12 * ((-1 - v23) / 0xCu) + 12;
            v24 = byte_4CE044;
            if ( byte_4CE044 > 12 )
              v24 = -12 - 12 * ((byte_4CE044 - 13) / 0xCu) + byte_4CE044;
            if ( v24 < 0 )
              v24 += 12 * ((-1 - v24) / 0xCu) + 12;
            if ( byte_4CE044 > 12 )
              v22 = -12 - 12 * ((byte_4CE044 - 13) / 0xCu) + byte_4CE044;
            if ( v22 < 0 )
              v22 += 12 * ((-1 - v22) / 0xCu) + 12;
            v21 = *(_DWORD *)&v16[4 * v47 + 208] + *(_DWORD *)&v16[4 * v24 + 260] + *(_DWORD *)&v16[4 * v22 + 364];
          }
          else
          {
            v21 = 0;
          }
          v25 = sub_41AB00(*v16);
          v26 = ((unsigned __int64)(1431655766LL * v21) >> 32) + sub_4151B0(dword_4C2CDC) + v25;
          v27 = *(_WORD *)(v43 + 2 * *(unsigned __int8 *)(dword_4C2CDC + 1256) + 768);
          v28 = v26 + ((unsigned int)((unsigned __int64)(1431655766LL * v21) >> 32) >> 31);
          if ( v27 < 8 )
            goto LABEL_71;
          v29 = *(_WORD *)(dword_4C2CDC + 28);
          if ( v29 <= 6 )
            goto LABEL_71;
          v30 = v29;
          if ( v29 <= 2 * v27 / 3 )
            goto LABEL_71;
          if ( v29 >= 20 )
            v30 = 20;
          if ( sub_4640D0() % v30 <= 4 )
          {
LABEL_71:
            if ( v28 > 0 )
            {
              sub_407C30(v45, *(char *)(v43 + 224));
              v48 = 0;
              if ( (int)dword_4C2CE8 > 0 )
              {
                v31 = dword_4C2CDC;
                v32 = 0;
                v42 = 0;
                while ( 1 )
                {
                  v33 = (__int16 *)((char *)Base + v32);
                  v40 = v33;
                  if ( *((int *)v33 + 2) > 0 )
                  {
                    v34 = v33[1];
                    if ( v34 > 0 )
                    {
                      v35 = v34;
                      if ( v34 > v28 )
                        v35 = v28;
                      v36 = 8 * v33[2];
                      if ( v35 > v36 )
                        v35 = v36;
                      if ( v28 <= 8
                        || v35 > 4
                        || (v37 = sub_415180(v31), v31 = dword_4C2CDC, 3 * *(__int16 *)(dword_4C2CDC + 26) < 2 * v37) )
                      {
                        if ( v35 > 0 )
                          break;
                      }
                    }
                  }
LABEL_67:
                  v32 = v42 + 12;
                  ++v48;
                  v42 += 12;
                  if ( v48 >= (int)dword_4C2CE8 )
                    goto LABEL_68;
                }
                while ( 1 )
                {
                  v38 = v35;
                  if ( v35 > 4 )
                    v38 = 4;
                  v39 = sub_438A50(*v40, word_4C2CE4, 1, v45, v38);
                  v31 = dword_4C2CDC;
                  if ( v39 != -1 )
                  {
                    *(_WORD *)(dword_4C2CDC + 34) += v38;
                    v28 -= v38;
                    v35 -= v38;
                    if ( v28 <= 0 )
                      break;
                  }
                  if ( v35 <= 0 )
                    goto LABEL_67;
                }
              }
            }
          }
        }
      }
LABEL_68:
      result = v45 + 1;
      v14 = v41 + 1;
      v45 = result;
      ++v41;
    }
    while ( result < 106 );
  }
  return result;
}
