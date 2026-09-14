// 函数 0x410230  sub_410230  size=0x658  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_410230(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  __int16 *v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int k; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  unsigned int v31; // esi
  unsigned int v32; // edi
  int v33; // eax
  int v34; // ebx
  int v35; // edi
  int v36; // ebx
  int i; // esi
  int v38; // eax
  int v39; // eax
  int v40; // edi
  __int16 *v41; // eax
  int v42; // esi
  int v43; // [esp+10h] [ebp-58h]
  int v44; // [esp+10h] [ebp-58h]
  int v45; // [esp+14h] [ebp-54h]
  int v46; // [esp+14h] [ebp-54h]
  unsigned int v47[4]; // [esp+18h] [ebp-50h] BYREF
  __int16 *v48; // [esp+28h] [ebp-40h]
  int v49; // [esp+2Ch] [ebp-3Ch]
  int v50; // [esp+30h] [ebp-38h]
  unsigned int v51; // [esp+34h] [ebp-34h]
  int v52; // [esp+38h] [ebp-30h]
  int v53; // [esp+3Ch] [ebp-2Ch]
  int v54; // [esp+40h] [ebp-28h]
  int v55; // [esp+44h] [ebp-24h]
  int v56; // [esp+48h] [ebp-20h]
  int v57; // [esp+4Ch] [ebp-1Ch]
  int j; // [esp+50h] [ebp-18h]
  int v59; // [esp+54h] [ebp-14h]
  int v60; // [esp+58h] [ebp-10h]
  int v61; // [esp+5Ch] [ebp-Ch]
  int v62; // [esp+60h] [ebp-8h]

  v50 = a4;
  sub_464B60(v47);
  v5 = *(__int16 *)(*(_DWORD *)dword_4C4434 + 72 * a1 + 32);
  v6 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * a1);
  v48 = v6;
  if ( v5 )
  {
    if ( v5 != 2 )
      return -1;
    v8 = v6[1];
  }
  else
  {
    v8 = *v6;
  }
  v52 = dword_4D0EFC + 10 * v8;
  v59 = sub_4640D0() % 4;
  v9 = v59 + 1;
  v60 = v59 + 1;
  if ( v59 + 1 >= 4 )
  {
    v9 = v59 - 3;
    v60 = v59 - 3;
  }
  v10 = v9 + 1;
  v61 = v10;
  if ( v10 >= 4 )
  {
    v10 -= 4;
    v61 = v10;
  }
  v11 = v10 + 1;
  v62 = v11;
  if ( v11 >= 4 )
    v62 = v11 - 4;
  v57 = 10000;
  v56 = 0;
  if ( v6[16] )
  {
    do
    {
      j = 0;
      while ( 1 )
      {
        v30 = *(&v59 + j);
        v31 = a2 + v56 * dword_4B32D0[2 * v30];
        v32 = a3 + v56 * dword_4B32D4[2 * v30];
        if ( v31 < dword_4D0E80 && v32 < dword_4D0E84 )
        {
          v33 = sub_483C60(v31, v32, *(unsigned __int8 *)(v52 + 4), *(unsigned __int8 *)(v52 + 5), v50);
          sub_464CE0(v33);
          if ( sub_40DB90(v47) )
          {
            if ( sub_40D4A0(v47) == v30 )
              break;
          }
        }
        if ( ++j >= 4 )
        {
          v34 = v56;
          goto LABEL_72;
        }
      }
      v34 = v56;
      if ( v57 > v56 )
      {
        v57 = v56;
        v54 = v31;
        v55 = v32;
      }
LABEL_72:
      if ( dword_8CAF68 && (GetKeyState(162) < 0 || GetKeyState(18) < 0) )
        v34 = 100000;
      v56 = v34 + 1;
    }
    while ( v34 + 1 < 60 );
    if ( !dword_8CAF68 || GetKeyState(162) >= 0 && GetKeyState(18) >= 0 )
    {
      if ( v57 == 10000 )
        return -1;
      v35 = v55 - 10;
      v36 = -1;
      v44 = v55 + 10;
      if ( __OFSUB__(v55 - 10, v55 + 10) && v55 - 10 != v55 + 10 )
        return -1;
      v46 = v54 - 10;
      v49 = v54 + 10;
      do
      {
        for ( i = v46; i <= v49; ++i )
        {
          v38 = sub_483C60(i, v35, *(unsigned __int8 *)(v52 + 4), *(unsigned __int8 *)(v52 + 5), v50);
          sub_464CE0(v38);
          if ( sub_40DB90(v47) )
          {
            v39 = sub_40D9D0((int *)v47);
            if ( v39 > v36 )
            {
              v36 = v39;
              v55 = i;
              v53 = v35;
            }
          }
        }
        ++v35;
      }
      while ( v35 <= v44 );
      if ( v36 <= -1 )
        return -1;
      v54 = v55;
      v55 = v53;
    }
  }
  else
  {
    do
    {
      j = 0;
      while ( 1 )
      {
        v12 = *(&v59 + j);
        v13 = a2 + v56 * dword_4B32D0[2 * v12];
        v14 = a3 + v56 * dword_4B32D4[2 * v12];
        if ( v13 < dword_4D0E80 && v14 < dword_4D0E84 )
        {
          v15 = sub_483C60(v13, v14, *(unsigned __int8 *)(v52 + 4), *(unsigned __int8 *)(v52 + 5), v50);
          sub_464CE0(v15);
          if ( sub_40DB90(v47) )
          {
            if ( sub_40CFD0((int *)v47) == v12 && sub_40D380((signed int *)v47, v48[17], v12) )
              break;
          }
        }
        if ( ++j >= 4 )
          goto LABEL_57;
      }
      if ( v57 > v56 )
      {
        v54 = *(&v59 + j);
        v16 = v13;
        v51 = v13;
        v17 = v14;
        v53 = v14;
        v43 = v54 - 1;
        v57 = v54 - 1;
        if ( v54 - 1 < 0 )
          v57 = 3;
        for ( j = 0; j < 20; ++j )
        {
          if ( v16 >= dword_4D0E80 )
            break;
          if ( v17 >= dword_4D0E84 )
            break;
          v18 = sub_483C60(v16, v17, *(unsigned __int8 *)(v52 + 4), *(unsigned __int8 *)(v52 + 5), v50);
          sub_464CE0(v18);
          if ( !sub_40DB90(v47) )
            break;
          v19 = sub_40CFD0((int *)v47);
          if ( v19 != v54 )
            break;
          if ( !sub_40D380((signed int *)v47, v48[17], v54) )
            break;
          v16 = dword_4B32D0[2 * v57] + v51;
          v17 = dword_4B32D4[2 * v57] + v53;
          v51 = v16;
          v53 = v17;
        }
        if ( j != 20 )
          --j;
        v51 = v13;
        v53 = v14;
        v45 = v54 + 1;
        v57 = v54 + 1;
        if ( v54 + 1 > 3 )
          v57 = 0;
        v20 = v51;
        v21 = v53;
        v55 = 0;
        for ( k = 0; k < 20; v55 = k )
        {
          if ( v20 >= dword_4D0E80 )
            break;
          if ( v21 >= dword_4D0E84 )
            break;
          v23 = sub_483C60(v20, v21, *(unsigned __int8 *)(v52 + 4), *(unsigned __int8 *)(v52 + 5), v50);
          sub_464CE0(v23);
          if ( !sub_40DB90(v47) )
            break;
          v24 = sub_40CFD0((int *)v47);
          if ( v24 != v54 )
            break;
          v25 = sub_40D380((signed int *)v47, v48[17], v54);
          k = v55;
          if ( !v25 )
            break;
          v20 = dword_4B32D0[2 * v57] + v51;
          v21 = dword_4B32D4[2 * v57] + v53;
          k = v55 + 1;
          v51 = v20;
          v53 = v21;
        }
        if ( k != 20 )
          --k;
        if ( j == k )
        {
          v28 = v13;
          v29 = v14;
        }
        else
        {
          if ( j >= k )
          {
            if ( j <= k )
            {
              v27 = v49;
              v26 = v57;
            }
            else
            {
              v26 = v45;
              if ( v45 > 3 )
                v26 = 0;
              v27 = k - (k & 0xFFFFFFFC);
              v49 = v27;
            }
          }
          else
          {
            v26 = v43;
            if ( v43 < 0 )
              v26 = 3;
            v27 = j - (j & 0xFFFFFFFC);
            v49 = v27;
          }
          v28 = v13 + v27 * dword_4B32D0[2 * v26];
          v29 = v14 + v27 * dword_4B32D4[2 * v26];
        }
        v57 = v56;
        v54 = v28;
        v55 = v29;
      }
LABEL_57:
      if ( dword_8CAF68 && (GetKeyState(162) < 0 || GetKeyState(18) < 0) )
        v56 = 100000;
      ++v56;
    }
    while ( v56 < 80 );
  }
  if ( v57 == 10000 )
    return -1;
  v40 = sub_40FF00(a1, v54, v55, v50);
  if ( v40 != -1 )
  {
    if ( a5 )
    {
      v41 = v48;
      if ( v48[16] == 2 )
      {
        v42 = dword_4C43DC + v40 * dword_4C43C8;
        *(_BYTE *)(v42 + 3) = 2;
        sub_486530(*(_DWORD *)(v42 + 80), *v41, 2, 0, 0, 0);
        sub_40D800((_DWORD *)v42);
        return v40;
      }
    }
  }
  return v40;
}
