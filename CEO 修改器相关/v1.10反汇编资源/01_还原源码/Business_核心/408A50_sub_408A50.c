// 函数 0x408a50  sub_408A50  size=0x4ED  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_408A50()
{
  int v0; // edi
  int result; // eax
  int v2; // esi
  int v3; // ebx
  __int16 *v4; // esi
  int v5; // edi
  int v6; // ebx
  __int16 *v7; // ebx
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  int v17; // esi
  int v18; // ebx
  __int16 *v19; // ecx
  char *v20; // ebx
  __int16 v21; // [esp+Ch] [ebp-75334h]
  __int16 *v22; // [esp+10h] [ebp-75330h]
  signed int v23; // [esp+14h] [ebp-7532Ch]
  int v24; // [esp+18h] [ebp-75328h]
  signed int v25; // [esp+1Ch] [ebp-75324h]
  int v26; // [esp+20h] [ebp-75320h]
  int v27; // [esp+24h] [ebp-7531Ch]
  int v28; // [esp+28h] [ebp-75318h]
  int v29; // [esp+2Ch] [ebp-75314h]
  int v30; // [esp+30h] [ebp-75310h]
  __int16 *v31; // [esp+34h] [ebp-7530Ch]
  int v32; // [esp+38h] [ebp-75308h]
  char v33; // [esp+3Ch] [ebp-75304h] BYREF
  char v34; // [esp+4E23Ch] [ebp-27104h] BYREF

  dword_4C2CFC = &v34;
  v0 = 0;
  result = 0;
  dword_4C2CF8 = &v33;
  dword_4C2CF0 = 0;
  while ( 2 )
  {
    v2 = 999999999;
    dword_4C2D00 = 0;
    dword_4C2D04 = 0;
    dword_4C2D08 = 0;
    v3 = dword_4B10E4[result < 0 ? 0 : result];
    v30 = v3;
    dword_4C2CEC = v3;
    v27 = 999999999;
    v28 = 0;
    sub_464ED0(sub_408490);
    if ( !dword_4C2D04 )
      goto LABEL_60;
    sub_464ED0(sub_408620);
    if ( !dword_4C2D00 )
      goto LABEL_60;
    qsort(dword_4C2CFC, dword_4C2D00, 0x10u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4089C0);
    v25 = 0;
    if ( (int)dword_4C2D00 <= 0 )
      goto LABEL_56;
    v29 = 0;
    do
    {
      v4 = (__int16 *)((char *)dword_4C2CFC + v29);
      v5 = dword_4C43DC + dword_4C43C8 * *(_DWORD *)((char *)dword_4C2CFC + v29);
      v32 = *(char *)(v5 + 2);
      dword_4C2CF4 = v32;
      v31 = (__int16 *)((char *)dword_4C2CFC + v29);
      qsort(dword_4C2CF8, dword_4C2D04, 0x20u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4089E0);
      v23 = 0;
      if ( (int)dword_4C2D04 <= 0 )
        goto LABEL_54;
      v6 = 0;
      v24 = 0;
      while ( 1 )
      {
        v7 = (__int16 *)((char *)dword_4C2CF8 + v6);
        v8 = dword_4CC8BC * v7[4] + dword_4CC8D0;
        v9 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v8 + 2);
        v22 = v7;
        if ( v7[2] <= 0 )
          goto LABEL_52;
        if ( *(_BYTE *)(v8 + 10) == 1 )
        {
          v10 = *(char *)(v9 + 224) == v32;
          goto LABEL_22;
        }
        switch ( v30 )
        {
          case 2:
            v11 = *(_DWORD *)(v5 + 32);
            break;
          case 8:
            v11 = *(_DWORD *)(v5 + 16);
            break;
          case 9:
            v11 = *(_DWORD *)(v5 + 24);
            break;
          case 12:
            v11 = *(_DWORD *)(v5 + 64);
            break;
          case 14:
            v11 = *(_DWORD *)(v5 + 48);
            break;
          case 15:
            v11 = *(_DWORD *)(v5 + 40);
            break;
          case 29:
            v11 = *(_DWORD *)(v5 + 56);
            break;
          default:
            goto LABEL_23;
        }
        if ( (v11 & 0xC0000000) != 0x80000000 )
          break;
        v10 = *(char *)(v9 + 224) == v32;
LABEL_22:
        if ( v10 )
          break;
LABEL_52:
        v6 = v24 + 32;
        ++v23;
        v24 += 32;
        if ( v23 >= (int)dword_4C2D04 )
          goto LABEL_53;
      }
LABEL_23:
      v12 = v4[6] - v7[6];
      v21 = *(_WORD *)(v8 + 2);
      v13 = (HIDWORD(v12) ^ v12) - HIDWORD(v12);
      v14 = v4[5] - v7[5];
      v15 = 40 * ((HIDWORD(v14) ^ v14) - HIDWORD(v14) + v13);
      v26 = 400;
      if ( v15 >= 400 )
        v26 = v15;
      if ( v4[4] > 0 )
      {
        while ( 1 )
        {
          v16 = v7[2];
          if ( v16 <= 0 )
            break;
          v17 = v4[4];
          if ( v17 > 4 )
            v17 = 4;
          if ( v17 > v16 )
            v17 = v16;
          v18 = v26 + v17 * *(_DWORD *)v7 / 4;
          if ( v18 >= v17 * *((_DWORD *)v31 + 1) / 4 )
          {
            v4 = v31;
            break;
          }
          if ( sub_438A50(v21, *v31, 0, v30, v17) == -1 )
          {
            v19 = v31;
          }
          else
          {
            if ( v18 / v17 > v28 )
              v28 = v18 / v17;
            if ( v18 / v17 < v27 )
              v27 = v18 / v17;
            v19 = v31;
            v31[4] -= v17;
            v22[2] -= v17;
            switch ( v30 )
            {
              case 2:
                *(_DWORD *)(v5 + 32) ^= (*(_DWORD *)(v5 + 32)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 32) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              case 8:
                *(_DWORD *)(v5 + 16) ^= (*(_DWORD *)(v5 + 16)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 16) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              case 9:
                *(_DWORD *)(v5 + 24) ^= (*(_DWORD *)(v5 + 24)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 24) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              case 12:
                *(_DWORD *)(v5 + 64) ^= (*(_DWORD *)(v5 + 64)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 64) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              case 14:
                *(_DWORD *)(v5 + 48) ^= (*(_DWORD *)(v5 + 48)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 48) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              case 15:
                *(_DWORD *)(v5 + 40) ^= (*(_DWORD *)(v5 + 40)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 40) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              case 29:
                *(_DWORD *)(v5 + 56) ^= (*(_DWORD *)(v5 + 56)
                                       ^ ((v17 << 26) + (*(_DWORD *)(v5 + 56) & 0xFC000000)))
                                      & 0x3C000000;
                break;
              default:
                break;
            }
          }
          v4 = v31;
          if ( v19[4] <= 0 )
            break;
          v7 = v22;
        }
        if ( v4[4] > 0 )
          goto LABEL_52;
      }
LABEL_53:
      v3 = v30;
LABEL_54:
      v29 += 16;
      ++v25;
    }
    while ( v25 < (int)dword_4C2D00 );
    v0 = v28;
    v2 = v27;
LABEL_56:
    v20 = (char *)dword_870824 + 112 * v3;
    if ( v2 != 999999999 )
      *((_DWORD *)v20 + 23) = v2;
    if ( v0 )
      *((_DWORD *)v20 + 22) = v0;
LABEL_60:
    result = dword_4C2CF0 + 1;
    dword_4C2CF0 = result;
    if ( result < 7 )
    {
      v0 = 0;
      continue;
    }
    return result;
  }
}
