// 函数 0x484a60  sub_484A60  size=0x599  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__thiscall sub_484A60(int this, int a2, int a3, int a4, int *a5)
{
  _DWORD *result; // eax
  int *v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // edx
  int *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  __int16 *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // edi
  int v26; // eax
  int v27; // edx
  unsigned int v28; // edi
  int v29; // ebx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  _DWORD *v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  bool v36; // zf
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edi
  int v41; // eax
  int v42; // ecx
  __int16 *v43; // eax
  __int16 *v44; // eax
  __int16 *v45; // eax
  __int16 *v46; // eax
  __int16 *v47; // eax
  __int16 *v48; // eax
  __int16 *v49; // eax
  int *v50; // [esp-14h] [ebp-6Ch]
  int v51; // [esp-14h] [ebp-6Ch]
  int v52; // [esp-14h] [ebp-6Ch]
  int v53; // [esp-14h] [ebp-6Ch]
  int v54; // [esp-10h] [ebp-68h]
  int v55; // [esp-10h] [ebp-68h]
  int v56; // [esp-10h] [ebp-68h]
  int v57; // [esp-10h] [ebp-68h]
  int v58; // [esp-10h] [ebp-68h]
  int v59; // [esp-10h] [ebp-68h]
  int v60; // [esp-10h] [ebp-68h]
  int v61; // [esp-10h] [ebp-68h]
  int v62; // [esp-Ch] [ebp-64h]
  int v63; // [esp-Ch] [ebp-64h]
  int v64; // [esp-Ch] [ebp-64h]
  int v65; // [esp-Ch] [ebp-64h]
  __int16 v66; // [esp-Ch] [ebp-64h]
  int v67; // [esp-Ch] [ebp-64h]
  __int16 v68; // [esp-Ch] [ebp-64h]
  int v69; // [esp-Ch] [ebp-64h]
  _DWORD v70[4]; // [esp+4h] [ebp-54h] BYREF
  _DWORD v71[4]; // [esp+14h] [ebp-44h] BYREF
  int v72; // [esp+24h] [ebp-34h]
  int v73; // [esp+28h] [ebp-30h]
  int v74; // [esp+2Ch] [ebp-2Ch]
  unsigned int v75; // [esp+30h] [ebp-28h]
  int v76; // [esp+34h] [ebp-24h]
  _DWORD *v77; // [esp+38h] [ebp-20h]
  _DWORD *v78; // [esp+3Ch] [ebp-1Ch]
  int v79; // [esp+40h] [ebp-18h]
  int v80; // [esp+44h] [ebp-14h] BYREF
  int v81; // [esp+48h] [ebp-10h]
  int v82; // [esp+4Ch] [ebp-Ch]
  _DWORD *v83; // [esp+50h] [ebp-8h] BYREF
  int v84; // [esp+54h] [ebp-4h] BYREF

  sub_464B60(v70);
  result = sub_464B60(v71);
  if ( !*(_DWORD *)(this + 64) )
    return result;
  v7 = a5;
  if ( !a5 )
  {
    a5 = &dword_8EEDEC;
    v7 = &dword_8EEDEC;
  }
  sub_464CE0(v70, v7 + 5);
  v8 = v7[5];
  v9 = v7[6];
  v10 = v7[8];
  v81 = v7[7];
  v80 = v8;
  v83 = (_DWORD *)v9;
  v82 = v10;
  v11 = sub_483910((int *)this);
  result = (_DWORD *)sub_464CE0(v71, v11);
  if ( v8 >= v71[2] )
    return result;
  result = v83;
  if ( (int)v83 >= v71[3] || v81 <= v71[0] || v82 <= v71[1] )
    return result;
  v12 = *(_DWORD *)this;
  if ( v8 < *(_DWORD *)this )
  {
    v80 = *(_DWORD *)this;
    v8 = v12;
  }
  v13 = *(_DWORD *)(this + 4);
  if ( (int)v83 < v13 )
    v83 = *(_DWORD **)(this + 4);
  v14 = *(_DWORD *)(this + 8) + v12;
  if ( v81 > v14 )
    v81 = v14;
  if ( v82 > v13 + *(_DWORD *)(this + 12) )
    v82 = v13 + *(_DWORD *)(this + 12);
  dword_8F2AD8 = (int)v7;
  v15 = sub_464D00(v8, (int)v83, v81, v82);
  sub_4689C0(v7, v15);
  v16 = 0;
  v79 = 0;
  if ( *(int *)(this + 76) > 0 )
  {
    v78 = 0;
    do
    {
      v17 = *(_DWORD *)(this + 100) - *(_DWORD *)(this + 4);
      if ( (int)v16 < v17 + v82 && (int)(v16 + 64) > (int)v83 + v17 )
      {
        v18 = *(_DWORD *)(this + 72);
        v19 = 0;
        v84 = 0;
        if ( v18 > 0 )
        {
          do
          {
            v20 = *(_DWORD *)(this + 96) - *(_DWORD *)this;
            if ( v19 >= v20 + v81 || v19 + 256 <= v80 + v20 )
            {
              v7 = a5;
            }
            else
            {
              v7 = a5;
              v62 = (int)v78 + *(_DWORD *)(this + 4) - *(_DWORD *)(this + 100);
              v54 = *(_DWORD *)this + v19 - *(_DWORD *)(this + 96);
              v50 = a5;
              v21 = (__int16 *)sub_467760(*(_DWORD **)(this + 68), v84 + v79 * v18);
              sub_466CA0(v21, v50, v54, v62);
            }
            v18 = *(_DWORD *)(this + 72);
            v19 += 256;
            ++v84;
          }
          while ( v84 < v18 );
          v16 = v78;
        }
      }
      v16 += 64;
      ++v79;
      v78 = v16;
    }
    while ( v79 < *(_DWORD *)(this + 76) );
  }
  v22 = a3 * *(_DWORD *)(this + 32);
  v23 = dword_4B8214[2 * *(_DWORD *)(this + 20)];
  v73 = dword_4B8218[2 * *(_DWORD *)(this + 20)];
  v74 = v23;
  v24 = v22 / 2;
  v76 = v22;
  sub_484120((_DWORD *)this, v80 - v22, (int)v83 - v22 / 2, &v83, &v84);
  sub_484160((_DWORD *)this, (int)v83, v84, &v80, &a3);
  v25 = a4 + v24;
  switch ( *(_DWORD *)(this + 20) )
  {
    case 1:
      v26 = *(_DWORD *)(this + 32);
      v80 += v26;
      goto LABEL_34;
    case 2:
      a3 -= *(_DWORD *)(this + 32);
      break;
    case 3:
      v26 = *(_DWORD *)(this + 32);
      v80 -= v26;
LABEL_34:
      a3 += v26 / -2;
      break;
  }
  v27 = 0;
  dword_8F2AE8 = 0;
  a4 = 0;
  v72 = v82 + v25;
  if ( a3 >= v82 + v25 )
    goto LABEL_73;
  v76 += v81;
  while ( 2 )
  {
    v28 = (unsigned int)v83;
    v29 = v27 + v80;
    v30 = v84;
    v77 = v83;
    v81 = v84;
    if ( v27 + v80 >= v76 )
      goto LABEL_57;
    do
    {
      v31 = *(_DWORD *)(this + 24);
      if ( v28 >= v31 || v30 >= *(_DWORD *)(this + 28) )
      {
        if ( this != -120 )
          goto LABEL_55;
        sub_46ACF0((__int16 *)0xFFFFFFAC, a5, v29, a3);
      }
      else
      {
        v32 = (_DWORD *)(this + 104);
        v75 = v28 + v30 * v31;
        v82 = 1;
        v78 = (_DWORD *)(this + 104);
        v79 = 4;
        do
        {
          v33 = v32[4];
          if ( v33 )
          {
            v34 = *(__int16 *)(v33 + 2 * v75);
            if ( v34 != -1 )
            {
              v35 = *(_DWORD *)(this + 20) + v34 * *(_DWORD *)(this + 16);
              if ( v35 < *(_DWORD *)(*v32 + 8) )
              {
                sub_466CA0((__int16 *)(*(_DWORD *)*v32 + 24 * v35), a5, v29, a3 + *(_DWORD *)(this + 32) / 2);
                v32 = v78;
                v82 = 0;
              }
            }
          }
          ++v32;
          v36 = v79-- == 1;
          v78 = v32;
        }
        while ( !v36 );
        if ( a2 || v82 && this == -120 )
          sub_46ACF0((__int16 *)(this + 36), a5, v29, a3);
        v28 = (unsigned int)v77;
        sub_484550(v81, this, (int)v77);
      }
      v30 = v81;
LABEL_55:
      v28 += v74;
      v30 += v73;
      v29 += 2 * *(_DWORD *)(this + 32);
      v77 = (_DWORD *)v28;
      v81 = v30;
    }
    while ( v29 < v76 );
    v27 = a4;
LABEL_57:
    switch ( *(_DWORD *)(this + 20) )
    {
      case 0:
        if ( !v27 )
        {
          a4 = *(_DWORD *)(this + 32);
          goto LABEL_70;
        }
        ++v84;
        a4 = 0;
        break;
      case 1:
        if ( v27 )
        {
          v83 = (_DWORD *)((char *)v83 - 1);
          a4 = 0;
        }
        else
        {
          v37 = *(_DWORD *)(this + 32);
          ++v84;
          a4 = v37;
        }
        break;
      case 2:
        if ( v27 )
        {
          --v84;
          a4 = 0;
        }
        else
        {
          v38 = *(_DWORD *)(this + 32);
          v83 = (_DWORD *)((char *)v83 - 1);
          a4 = v38;
        }
        break;
      case 3:
        if ( v27 )
        {
          a4 = 0;
LABEL_70:
          v83 = (_DWORD *)((char *)v83 + 1);
        }
        else
        {
          v39 = *(_DWORD *)(this + 32);
          --v84;
          a4 = v39;
        }
        break;
      default:
        break;
    }
    a3 += *(_DWORD *)(this + 32) / 2;
    if ( a3 < v72 )
    {
      v27 = a4;
      continue;
    }
    break;
  }
  v7 = a5;
LABEL_73:
  v40 = 0;
  v84 = 0;
  if ( dword_8F2AE8 > 0 )
  {
    v41 = *(_DWORD *)ArgList;
    do
    {
      v42 = *(_DWORD *)(this + 180) + *(_DWORD *)(this + 160) * *(_DWORD *)(v40 + v41);
      switch ( (*(unsigned __int8 *)(v42 + 10) >> 4) & 7 )
      {
        case 0:
          v63 = *(__int16 *)(v40 + v41 + 14);
          v55 = *(__int16 *)(v40 + v41 + 12);
          v43 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_466CA0(v43, v7, v55, v63);
          goto LABEL_83;
        case 1:
          v64 = *(__int16 *)(v40 + v41 + 14);
          v56 = *(__int16 *)(v40 + v41 + 12);
          v44 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_466D30(v44, v7, v56, v64);
          goto LABEL_83;
        case 2:
          v65 = *(unsigned __int16 *)(v42 + 14);
          v57 = *(__int16 *)(v40 + v41 + 14);
          v51 = *(__int16 *)(v40 + v41 + 12);
          v45 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_466DD0(v45, v7, v51, v57, v65);
          goto LABEL_83;
        case 3:
          v66 = *(_WORD *)(v42 + 14);
          v58 = *(__int16 *)(v40 + v41 + 14);
          v52 = *(__int16 *)(v40 + v41 + 12);
          v46 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_466E80(v46, v7, v52, v58, v66);
          goto LABEL_83;
        case 4:
          v67 = *(__int16 *)(v40 + v41 + 14);
          v59 = *(__int16 *)(v40 + v41 + 12);
          v47 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_466F40(v47, v7, v59, v67);
          goto LABEL_83;
        case 5:
          v68 = *(_WORD *)(v42 + 14);
          v60 = *(__int16 *)(v40 + v41 + 14);
          v53 = *(__int16 *)(v40 + v41 + 12);
          v48 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_466FE0(v48, v7, v53, v60, v68);
          goto LABEL_83;
        case 6:
          v69 = *(__int16 *)(v40 + v41 + 14);
          v61 = *(__int16 *)(v40 + v41 + 12);
          v49 = (__int16 *)sub_467760(*(_DWORD **)(this + 144), *(_DWORD *)(v40 + v41 + 4));
          sub_467090(v49, v7, v61, v69);
LABEL_83:
          v41 = *(_DWORD *)ArgList;
          break;
        default:
          break;
      }
      v40 += 24;
      ++v84;
    }
    while ( v84 < dword_8F2AE8 );
  }
  return (_DWORD *)sub_4689C0(v7, v70);
}
