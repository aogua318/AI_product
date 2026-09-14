// 函数 0x403a50  sub_403A50  size=0x596  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __cdecl sub_403A50(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  __int16 *v7; // esi
  int v8; // eax
  int v9; // edx
  BOOL v10; // ecx
  int v11; // ecx
  int v12; // edi
  __int16 *v13; // ebx
  int v14; // eax
  int v15; // edi
  __int16 *v16; // ebx
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // ecx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // esi
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  _WORD *v32; // esi
  int v33; // edi
  int v34; // ecx
  int i; // edi
  __int16 *v36; // esi
  __int16 v37; // ax
  int v38; // edi
  __int16 *v39; // esi
  int v41; // [esp+10h] [ebp-FC0h]
  int v42; // [esp+10h] [ebp-FC0h]
  int v43; // [esp+14h] [ebp-FBCh]
  int v44; // [esp+18h] [ebp-FB8h]
  int v45; // [esp+18h] [ebp-FB8h]
  int v46; // [esp+18h] [ebp-FB8h]
  int v47; // [esp+1Ch] [ebp-FB4h] BYREF
  int v48; // [esp+20h] [ebp-FB0h] BYREF
  int v49; // [esp+24h] [ebp-FACh]
  int v50; // [esp+28h] [ebp-FA8h]
  _DWORD v51[1000]; // [esp+2Ch] [ebp-FA4h]

  v1 = dword_4CCAAC + dword_4CCA98 * a1;
  v2 = *(__int16 *)(v1 + 748);
  v3 = 0;
  v4 = v2 + *(__int16 *)(v1 + 740);
  v50 = 0;
  v49 = 0;
  v43 = v1;
  if ( v4 > 0 )
  {
    v5 = v2 + *(__int16 *)(v1 + 746);
    v6 = *(__int16 *)(v1 + 752);
    v49 = v5;
    if ( v6 != -1 )
    {
      do
      {
        v7 = (__int16 *)(dword_4D0C84 + v6 * dword_4D0C70);
        v41 = 0;
        v44 = 0;
        if ( (v7[9] & 1) != 0 )
        {
          v8 = *((char *)v7 + 20);
          v9 = *((char *)v7 + 21);
          v10 = *(_BYTE *)(388 * *v7 + *(_DWORD *)dword_4D0C8C + 78) != 2;
          v50 += v8;
          v41 = v8;
          v11 = v9 + v10;
          v49 += v11;
          v44 = v11;
        }
        v12 = *((char *)v7 + 22) - 1;
        if ( v12 >= 0 )
        {
          v13 = &v7[v12 + 12];
          do
          {
            if ( *((char *)v7 + 22) <= v41 )
              break;
            v14 = dword_4D10A8 + dword_4D1094 * *v13;
            if ( *(_BYTE *)(v14 + 12) != 3 && *(_BYTE *)(v14 + 13) != 3 )
              sub_42BF60(*v13);
            --v13;
            --v12;
          }
          while ( v12 >= 0 );
          v1 = v43;
        }
        v15 = *((char *)v7 + 23) - 1;
        if ( v15 >= 0 )
        {
          v16 = &v7[v15 + 32];
          do
          {
            if ( *((char *)v7 + 23) <= v44 )
              break;
            v17 = dword_4D10A8 + *v16 * dword_4D1094;
            if ( *(_BYTE *)(v17 + 12) != 3 && *(_BYTE *)(v17 + 13) != 3 )
              sub_42BF60(*v16);
            --v16;
            --v15;
          }
          while ( v15 >= 0 );
          v1 = v43;
        }
        v6 = v7[3];
      }
      while ( v6 != -1 );
      v3 = v50;
    }
  }
  v18 = v49;
  *(_WORD *)(v1 + 472) = v3;
  *(_WORD *)(v1 + 474) = v18;
  *(_DWORD *)(v1 + 452) = sub_41BB70(v3);
  v19 = sub_41BB80(v18);
  v20 = 0;
  *(_DWORD *)(v1 + 456) = v19;
  if ( v3 > 0 )
  {
    do
    {
      v21 = *(__int16 *)(v1 + 752);
      v45 = ++v20;
      v50 = 0;
      if ( v21 == -1 )
        break;
      do
      {
        v22 = dword_4D0C84 + v21 * dword_4D0C70;
        if ( (*(_BYTE *)(v22 + 18) & 1) != 0 )
        {
          v19 = *(__int16 *)(v1 + 464) - *(__int16 *)(v1 + 468);
          if ( v19 > 0 )
          {
            LOBYTE(v19) = *(_BYTE *)(v22 + 22);
            if ( (char)v19 < *(char *)(v22 + 20) )
            {
              ++v50;
              if ( (char)v19 < v20 )
              {
                sub_426BF0(&v48, &v47);
                LOBYTE(v19) = sub_4185E0(a1, v21, v48, v47);
                v20 = v45;
              }
            }
          }
        }
        v21 = *(__int16 *)(v22 + 6);
      }
      while ( v21 != -1 );
    }
    while ( v50 );
  }
  if ( v49 > 0 )
  {
    v23 = *(__int16 *)(v1 + 746);
    v24 = v23 * *(__int16 *)(v1 + 466) / v49;
    v25 = *(__int16 *)(v1 + 466) * (v49 - *(__int16 *)(v1 + 748) - v23) / v49;
    v50 = v24;
    if ( v24 < 2 )
    {
      do
      {
        if ( v25 <= 0 )
          break;
        ++v24;
        --v25;
      }
      while ( v24 < 2 );
      v50 = v24;
    }
    v26 = *(__int16 *)(v1 + 758);
    v27 = dword_8703D0;
    v19 = dword_8703BC;
    v28 = 0;
    v42 = 0;
    if ( v26 != -1 )
    {
      do
      {
        v51[v28] = v26;
        v26 = *(__int16 *)(v26 * v19 + v27 + 4);
        ++v28;
      }
      while ( v26 != -1 );
      v42 = v28;
    }
    v29 = 0;
    v46 = 0;
    if ( v28 > 0 )
    {
      while ( 1 )
      {
        v30 = v51[v29];
        v31 = v30 * v19;
        if ( v50 <= 0 )
        {
          v32 = (_WORD *)(v27 + v31 + 16);
          v33 = 4;
          do
          {
            LOWORD(v19) = *v32;
            if ( *v32 != 0xFFFF )
            {
              v34 = (__int16)v19;
              v19 = dword_4D10A8 + dword_4D1094 * (__int16)v19;
              if ( *(_BYTE *)(v19 + 12) != 3 && *(_BYTE *)(v19 + 13) != 3 )
                LOBYTE(v19) = sub_42BF60(v34);
            }
            ++v32;
            --v33;
          }
          while ( v33 );
        }
        else
        {
          v19 = sub_431030(v27 + v31);
          if ( !v19 )
          {
            sub_430CA0(&v48, &v47);
            LOBYTE(v19) = sub_418330(a1, v30, v48, v47);
          }
        }
        v29 = v46 + 1;
        v46 = v29;
        if ( v29 >= v42 )
          break;
        v27 = dword_8703D0;
        v19 = dword_8703BC;
      }
    }
    for ( i = *(__int16 *)(v1 + 760); i != -1; i = v36[2] )
    {
      v36 = (__int16 *)(dword_870868 + dword_870854 * i);
      if ( v36[5] == -1
        && ((v37 = v36[4], v37 == -1)
         || (v19 = dword_4CC8BC * *(__int16 *)(v1 + 2 * v37 + 240), *(__int16 *)(v19 + dword_4CC8D0 + 28) <= 0)) )
      {
        LOWORD(v19) = v36[6];
        if ( (_WORD)v19 != 0xFFFF )
          LOBYTE(v19) = sub_42BF60((__int16)v19);
      }
      else if ( v36[6] == -1 )
      {
        sub_434550(&v48, &v47);
        LOBYTE(v19) = sub_418490(a1, i, v48, v47);
      }
    }
    v49 = 0;
    do
    {
      v38 = *(__int16 *)(v1 + 752);
      ++v49;
      v50 = 0;
      if ( v38 == -1 )
        break;
      do
      {
        v39 = (__int16 *)(dword_4D0C84 + v38 * dword_4D0C70);
        if ( (v39[9] & 1) != 0 )
        {
          v19 = *(__int16 *)(v1 + 470);
          if ( *(__int16 *)(v1 + 466) - v19 > 0 )
          {
            v19 = *((char *)v39 + 23);
            if ( v19 < *((char *)v39 + 21) + (*(_BYTE *)(388 * *v39 + *(_DWORD *)dword_4D0C8C + 78) != 2) )
            {
              ++v50;
              if ( v19 < v49 )
              {
                sub_426BF0(&v48, &v47);
                LOBYTE(v19) = sub_418730(a1, v38, v48, v47);
              }
            }
            v1 = v43;
          }
        }
        v38 = v39[3];
      }
      while ( v38 != -1 );
    }
    while ( v50 );
  }
  return v19;
}
