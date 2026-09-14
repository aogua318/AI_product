// 函数 0x47b9f0  sub_47B9F0  size=0x37F  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47B9F0(int *a1, int *a2, int a3, int a4, signed int a5, int a6, int a7, int a8, int a9, int a10)
{
  int *v10; // ebx
  int v12; // eax
  int v13; // esi
  __int16 *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  _BYTE *v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  int v25; // edx
  _BYTE *v26; // edx
  __int16 *v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // ecx
  int v31; // edi
  char v32; // dl
  int v33; // eax
  _WORD *v34; // eax
  _BYTE *v35; // eax
  _DWORD *v36; // eax
  int v37; // edx
  int v38; // edi
  int v39; // ecx
  int v40; // eax
  _WORD *v41; // eax
  _BYTE *v42; // eax
  _DWORD *v43; // eax
  int v44; // eax
  int v45; // [esp-8h] [ebp-24h]
  int v46; // [esp-8h] [ebp-24h]
  int v47; // [esp-4h] [ebp-20h]
  int v48; // [esp-4h] [ebp-20h]
  int v49; // [esp+48h] [ebp+2Ch]

  v10 = a1;
  if ( a6 == -1 )
    return 0;
  if ( a5 > a1[67] )
    return 0;
  v12 = a2[3];
  if ( v12 != 16 && v12 != 32 )
    return 0;
  if ( (dword_8EEB3C & 1) == 0 )
  {
    dword_8EEB3C |= 1u;
    sub_464A40(dword_8EEB34);
    atexit(sub_4A10B0);
  }
  sub_464A60(dword_8EEB34, ".f1.", 0xFFFFFFFF, 0, 0);
  if ( !a8 )
    a8 = *a1;
  sub_4689A0((int)dword_8EEAD4);
  sub_4689A0((int)dword_8EEB04);
  v13 = a7;
  v49 = a10 + 1;
  if ( a7 )
  {
    v14 = (__int16 *)sub_46B9B0(a1 + 2, a5);
    sub_46ACF0(v14, dword_8EEAD4, 0, 0);
    if ( v49 == 256 )
    {
      v15 = *a1;
      v16 = 0;
      if ( *a1 > 0 )
      {
        do
        {
          v17 = 0;
          if ( v15 > 0 )
          {
            v18 = 0;
            do
            {
              if ( *(_BYTE *)(v17 + *(_DWORD *)(dword_8EEAFC + 4 * v16)) )
              {
                v19 = *(_DWORD *)(dword_8EEB2C + 4 * v16);
                if ( a2[3] == 16 )
                  v20 = (_BYTE *)(v19 + v18 + 2);
                else
                  v20 = (_BYTE *)(v19 + 4 * v17 + 3);
                *v20 = 80;
              }
              ++v17;
              v18 += 3;
            }
            while ( v17 < *a1 );
          }
          v15 = *a1;
          ++v16;
        }
        while ( v16 < *a1 );
LABEL_33:
        v13 = a7;
      }
    }
    else
    {
      v21 = *a1;
      v22 = 0;
      if ( *a1 > 0 )
      {
        do
        {
          v23 = 0;
          if ( v21 > 0 )
          {
            v24 = 0;
            do
            {
              if ( ((v49 * *(unsigned __int8 *)(*(_DWORD *)(dword_8EEAFC + 4 * v22) + v23)) & 0xFFFFFF00) != 0 )
              {
                v25 = *(_DWORD *)(dword_8EEB2C + 4 * v22);
                if ( a2[3] == 16 )
                  v26 = (_BYTE *)(v25 + v24 + 2);
                else
                  v26 = (_BYTE *)(v25 + 4 * v23 + 3);
                *v26 = 80;
              }
              ++v23;
              v24 += 3;
            }
            while ( v23 < *a1 );
          }
          v21 = *a1;
          ++v22;
        }
        while ( v22 < *a1 );
        goto LABEL_33;
      }
    }
    v47 = *a1;
    v45 = *a1;
    if ( a8 == *a1 )
      sub_4696E0(a2, v13 + a3, v13 + a4, dword_8EEB04, 0, 0, v45, v47);
    else
      sub_469790(a2, v13 + a3, v13 + a4, a8, a8, dword_8EEB04, 0, 0, v45, v47);
    sub_4689A0((int)dword_8EEAD4);
    sub_4689A0((int)dword_8EEB04);
  }
  v27 = (__int16 *)sub_46B9B0(a1 + 2, a5);
  sub_46ACF0(v27, dword_8EEAD4, 0, 0);
  v28 = *a1;
  v29 = 0;
  if ( v49 == 256 )
  {
    if ( v28 > 0 )
    {
      do
      {
        v30 = 0;
        if ( v28 > 0 )
        {
          v31 = 0;
          do
          {
            v32 = *(_BYTE *)(*(_DWORD *)(dword_8EEAFC + 4 * v29) + v30);
            if ( v32 )
            {
              v33 = *(_DWORD *)(dword_8EEB2C + 4 * v29);
              if ( a2[3] == 16 )
              {
                v34 = (_WORD *)(v31 + v33);
                *v34 = a6;
                v35 = v34 + 1;
              }
              else
              {
                v36 = (_DWORD *)(v33 + 4 * v30);
                *v36 = a6;
                v35 = (char *)v36 + 3;
              }
              v10 = a1;
              *v35 = v32;
            }
            ++v30;
            v31 += 3;
          }
          while ( v30 < *v10 );
        }
        v28 = *v10;
        ++v29;
      }
      while ( v29 < *v10 );
    }
  }
  else if ( v28 > 0 )
  {
    do
    {
      v37 = 0;
      if ( v28 > 0 )
      {
        v38 = 0;
        do
        {
          v39 = (v49 * *(unsigned __int8 *)(*(_DWORD *)(dword_8EEAFC + 4 * v29) + v37)) >> 8;
          if ( v39 )
          {
            v40 = *(_DWORD *)(dword_8EEB2C + 4 * v29);
            if ( a2[3] == 16 )
            {
              v41 = (_WORD *)(v38 + v40);
              *v41 = a6;
              v42 = v41 + 1;
            }
            else
            {
              v43 = (_DWORD *)(v40 + 4 * v37);
              *v43 = a6;
              v42 = (char *)v43 + 3;
            }
            v10 = a1;
            *v42 = v39;
          }
          ++v37;
          v38 += 3;
        }
        while ( v37 < *v10 );
      }
      v28 = *v10;
      ++v29;
    }
    while ( v29 < *v10 );
  }
  v44 = *v10;
  v48 = *v10;
  v46 = *v10;
  if ( a9 )
  {
    if ( a8 == v44 )
      sub_469740(a2, a3, a4, dword_8EEB04, 0, 0, v46, v48);
    else
      sub_469800(a2, a3, a4, a8, a8, dword_8EEB04, 0, 0, v46, v48);
  }
  else if ( a8 == v44 )
  {
    sub_4696E0(a2, a3, a4, dword_8EEB04, 0, 0, v46, v48);
  }
  else
  {
    sub_469790(a2, a3, a4, a8, a8, dword_8EEB04, 0, 0, v46, v48);
  }
  sub_464B40(dword_8EEB34);
  return 1;
}
