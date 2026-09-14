// 函数 0x471450  sub_471450  size=0x1F7  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__usercall sub_471450@<eax>(_DWORD *result@<eax>, int *a2@<ecx>)
{
  int v2; // edx
  int v3; // ebx
  int *v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  int v11; // edi
  _WORD *v12; // edi
  int v13; // ecx
  _WORD *i; // edx
  int v15; // edx
  int v16; // edi
  int v17; // esi
  int v18; // ecx
  int v19; // edi
  _WORD *v20; // esi
  int v21; // [esp+Ch] [ebp-28h]
  int v22; // [esp+10h] [ebp-24h]
  int v23; // [esp+14h] [ebp-20h]
  int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch]
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+20h] [ebp-14h]
  _WORD *v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h]
  int *v30; // [esp+28h] [ebp-Ch]
  int v31; // [esp+28h] [ebp-Ch]
  int v32; // [esp+2Ch] [ebp-8h]
  int v33; // [esp+30h] [ebp-4h]

  v2 = a2[1];
  v3 = *a2;
  v4 = (int *)a2[2];
  v26 = v2;
  v22 = *v4;
  v23 = v4[1];
  v5 = v4[4];
  v25 = v4[2];
  result[717] = 0;
  result[718] = 0;
  result[719] = 0;
  result[720] = 0;
  result[721] = 0;
  result[722] = 0;
  result[723] = 0;
  result[724] = 0;
  *(_WORD *)(v3 + 4 * result[result[1299] + 725] + 2) = 0;
  v6 = 0;
  v7 = result[1299] + 1;
  v21 = v3;
  v33 = v5;
  v32 = 0;
  if ( v7 < 573 )
  {
    v30 = &result[v7 + 725];
    v27 = 573 - v7;
    v29 = 573;
    do
    {
      v8 = *v30;
      v9 = *(unsigned __int16 *)(v3 + 4 * *(unsigned __int16 *)(v3 + 4 * *v30 + 2) + 2) + 1;
      if ( v9 > v5 )
      {
        ++v6;
        v9 = v5;
        v32 = v6;
      }
      *(_WORD *)(v3 + 4 * v8 + 2) = v9;
      if ( v8 <= v26 )
      {
        ++*((_WORD *)result + v9 + 1434);
        v10 = 0;
        if ( v8 >= v25 )
          v10 = *(_DWORD *)(v23 + 4 * (v8 - v25));
        v11 = *(unsigned __int16 *)(v3 + 4 * v8);
        result[1448] += v11 * (v10 + v9);
        if ( v22 )
          result[1449] += v11 * (v10 + *(unsigned __int16 *)(v22 + 4 * v8 + 2));
        v5 = v33;
        v6 = v32;
      }
      ++v30;
      --v27;
    }
    while ( v27 );
    if ( v6 )
    {
      v12 = (_WORD *)result + v5 + 1434;
      do
      {
        v13 = v33 - 1;
        for ( i = (_WORD *)result + v33 + 1433; !*i; --v13 )
          --i;
        *((_WORD *)result + v13 + 1435) += 2;
        --*((_WORD *)result + v13 + 1434);
        --*v12;
        v6 -= 2;
      }
      while ( v6 > 0 );
      v15 = v33;
      if ( v33 )
      {
        v28 = v12;
        do
        {
          v16 = (unsigned __int16)*v12;
          v31 = v16;
          if ( v16 )
          {
            v17 = (int)&result[v29 + 725];
            do
            {
              v18 = *(_DWORD *)(v17 - 4);
              --v29;
              v17 -= 4;
              v24 = v17;
              if ( v18 <= v26 )
              {
                v19 = *(unsigned __int16 *)(v3 + 4 * v18 + 2);
                v20 = (_WORD *)(v3 + 4 * v18 + 2);
                if ( v19 != v15 )
                {
                  v3 = v21;
                  result[1448] += *(unsigned __int16 *)(v21 + 4 * v18) * (v15 - v19);
                  *v20 = v15;
                }
                v16 = --v31;
                v17 = v24;
              }
            }
            while ( v16 );
          }
          v12 = v28 - 1;
          --v15;
          --v28;
        }
        while ( v15 );
      }
    }
  }
  return result;
}
