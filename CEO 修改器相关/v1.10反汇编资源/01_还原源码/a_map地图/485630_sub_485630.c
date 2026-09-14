// 函数 0x485630  sub_485630  size=0x439  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_485630(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  _DWORD *v7; // edi
  char v8; // cl
  int *v9; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int i; // ecx
  int j; // ecx
  int v23; // eax
  int v24; // edx
  int k; // ecx
  int m; // ecx
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  int n; // ecx
  int v31; // edx
  int v32; // esi
  int v33; // edi
  int v34; // eax
  int ii; // ecx
  int v36; // edx
  int v37; // esi
  int v38; // ebx
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // edi
  int v43; // edx
  int v44; // esi
  int v45; // eax
  int v46; // ebx
  int v47; // edi
  int v48; // ecx
  int v49; // edx
  int v50; // esi
  int v51; // [esp+4h] [ebp-18h]
  int v52; // [esp+8h] [ebp-14h]
  int v53; // [esp+Ch] [ebp-10h]
  int v54; // [esp+10h] [ebp-Ch]
  _DWORD *v55; // [esp+14h] [ebp-8h]
  int v56; // [esp+18h] [ebp-4h]
  int v57; // [esp+24h] [ebp+8h]
  int v58; // [esp+28h] [ebp+Ch]
  int v59; // [esp+2Ch] [ebp+10h]
  int v60; // [esp+2Ch] [ebp+10h]
  int v61; // [esp+2Ch] [ebp+10h]
  int v62; // [esp+30h] [ebp+14h]

  v6 = a5;
  v7 = this;
  v8 = *(_BYTE *)(10 * a2 + *(this + 37) + 6);
  v55 = v7;
  if ( v8 == 16 )
    v6 = (a5 + 1) >> 1;
  if ( v8 == 8 )
    v6 >>= 1;
  v9 = sub_483C60(a3, a4, *(unsigned __int8 *)(10 * a2 + v7[37] + 4), *(unsigned __int8 *)(10 * a2 + v7[37] + 5), v6);
  v59 = *v9;
  if ( *v9 < 0 )
    return 0;
  v11 = v9[1];
  v53 = v11;
  if ( v11 < 0 )
    return 0;
  v12 = v7[6];
  v56 = v9[2];
  v57 = v12;
  if ( v56 >= v12 )
    return 0;
  v13 = v9[3];
  v14 = v7[7];
  v54 = v13;
  v52 = v14;
  if ( v13 >= v14 )
    return 0;
  if ( v11 <= v13 )
  {
    v15 = v11 * v12;
    while ( 1 )
    {
      v16 = v59;
      if ( v59 <= v56 )
        break;
LABEL_18:
      ++v11;
      v15 += v12;
      if ( v11 > v54 )
      {
        v13 = v54;
        v14 = v52;
        goto LABEL_20;
      }
    }
    v17 = (_DWORD *)(v7[35] + 4 * (v15 + v59));
    while ( *v17 == -1 )
    {
      ++v16;
      ++v17;
      if ( v16 > v56 )
      {
        v12 = v57;
        goto LABEL_18;
      }
    }
    return 0;
  }
LABEL_20:
  v58 = a6;
  if ( !a6 )
    v58 = 1;
  v62 = v13 == v14 - 1;
  if ( v56 == v12 - 1 )
    v62 |= 2u;
  v18 = v53;
  if ( !v53 )
    v62 |= 4u;
  if ( !v59 )
    v62 |= 8u;
  if ( a6 )
  {
    v19 = v53 - v58;
    if ( v53 - v58 < v53 )
    {
      v20 = v19 * v12;
      do
      {
        if ( v19 >= 0 && v19 < v52 )
        {
          for ( i = v59 - v58; i < v59; ++i )
          {
            if ( i >= 0 && i < v12 )
            {
              if ( *(int *)(v7[35] + 4 * (v20 + i)) >= 0 )
                return 0;
              v12 = v57;
            }
          }
          v12 = v57;
          for ( j = v56 + 1; j <= v58 + v56; ++j )
          {
            if ( j >= 0 && j < v12 )
            {
              if ( *(int *)(v7[35] + 4 * (v20 + j)) >= 0 )
                return 0;
              v7 = v55;
              v12 = v57;
            }
          }
        }
        ++v19;
        v20 += v12;
      }
      while ( v19 < v53 );
      v13 = v54;
      v18 = v53;
    }
    v23 = v13 + 1;
    v51 = v58 + v13;
    if ( v13 + 1 <= v58 + v13 )
    {
      v24 = v23 * v12;
      do
      {
        if ( v23 >= 0 && v23 < v52 )
        {
          for ( k = v59 - v58; k < v59; ++k )
          {
            if ( k >= 0 && k < v12 )
            {
              if ( *(int *)(v7[35] + 4 * (v24 + k)) >= 0 )
                return 0;
              v12 = v57;
            }
          }
          v12 = v57;
          for ( m = v56 + 1; m <= v58 + v56; ++m )
          {
            if ( m >= 0 && m < v12 )
            {
              if ( *(int *)(v7[35] + 4 * (v24 + m)) >= 0 )
                return 0;
              v12 = v57;
              v7 = v55;
            }
          }
        }
        ++v23;
        v24 += v12;
      }
      while ( v23 <= v51 );
      v18 = v53;
    }
  }
  v27 = v18 - v58;
  v28 = v18 - 1;
  if ( v18 - v58 <= v18 - 1 )
  {
    v29 = v27 * v57;
    do
    {
      if ( v27 >= 0 && v27 < v52 )
      {
        for ( n = v59; n <= v56; ++n )
        {
          if ( n >= 0 && n < v57 )
          {
            v31 = v29 + n;
            if ( a6 && *(int *)(v55[35] + 4 * v31) >= 0 )
              return 0;
            v32 = v55[30];
            if ( v32 && *(_WORD *)(v32 + 2 * v31) == 0xFFFF && v27 == v28 )
              v62 |= 4u;
          }
        }
      }
      v29 += v57;
      ++v27;
    }
    while ( v27 <= v28 );
  }
  v33 = v54 + 1;
  if ( v54 + 1 <= v54 + v58 )
  {
    v34 = v33 * v57;
    do
    {
      if ( v33 >= 0 && v33 < v52 )
      {
        for ( ii = v59; ii <= v56; ++ii )
        {
          if ( ii >= 0 && ii < v57 )
          {
            v36 = v34 + ii;
            if ( a6 && *(int *)(v55[35] + 4 * v36) >= 0 )
              return 0;
            v37 = v55[30];
            if ( v37 && *(_WORD *)(v37 + 2 * v36) == 0xFFFF && v33 == v54 + 1 )
              v62 |= 1u;
          }
        }
      }
      v34 += v57;
      ++v33;
    }
    while ( v33 <= v54 + v58 );
  }
  v38 = v53;
  v39 = v54;
  if ( v53 <= v54 )
  {
    v40 = v59 - v58;
    v41 = v59 - 1;
    v42 = v53 * v57;
    v60 = v59 - v58;
    do
    {
      if ( v40 <= v41 )
      {
        do
        {
          if ( v40 >= 0 && v40 < v57 )
          {
            v43 = v42 + v40;
            if ( a6 && *(int *)(v55[35] + 4 * v43) >= 0 )
              return 0;
            v44 = v55[30];
            if ( v44 && *(_WORD *)(v44 + 2 * v43) == 0xFFFF && v40 == v41 )
              v62 |= 8u;
          }
          ++v40;
        }
        while ( v40 <= v41 );
        v39 = v54;
        v40 = v60;
      }
      v42 += v57;
      ++v38;
    }
    while ( v38 <= v39 );
  }
  v45 = v53;
  if ( v53 <= v39 )
  {
    v46 = v56 + v58;
    v47 = v53 * v57;
    v61 = v56 + 1;
    do
    {
      v48 = v56 + 1;
      if ( v61 <= v46 )
      {
        do
        {
          if ( v48 >= 0 && v48 < v57 )
          {
            v49 = v47 + v48;
            if ( a6 && *(int *)(v55[35] + 4 * v49) >= 0 )
              return 0;
            v50 = v55[30];
            if ( v50 && *(_WORD *)(v50 + 2 * v49) == 0xFFFF && v48 == v61 )
              v62 |= 2u;
          }
          ++v48;
        }
        while ( v48 <= v46 );
        v39 = v54;
      }
      v47 += v57;
      ++v45;
    }
    while ( v45 <= v39 );
  }
  return v62;
}
