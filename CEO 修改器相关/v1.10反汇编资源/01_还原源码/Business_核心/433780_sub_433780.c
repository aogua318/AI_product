// 函数 0x433780  sub_433780  size=0x53C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433780(int a1)
{
  __int16 *v1; // ebx
  int *v2; // edx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // edx
  int i; // eax
  int *v25; // eax
  int v26; // esi
  int *v27; // edi
  int v28; // ebx
  bool v29; // zf
  signed int v30; // eax
  int v31; // esi
  int v32; // ebx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v37; // [esp+Ch] [ebp-74h]
  __int16 *v38; // [esp+14h] [ebp-6Ch]
  int v39; // [esp+18h] [ebp-68h] BYREF
  int v40; // [esp+1Ch] [ebp-64h] BYREF
  int v41; // [esp+20h] [ebp-60h] BYREF
  int v42; // [esp+24h] [ebp-5Ch]
  int v43; // [esp+28h] [ebp-58h]
  int v44; // [esp+2Ch] [ebp-54h] BYREF
  int v45; // [esp+30h] [ebp-50h] BYREF
  int v46; // [esp+34h] [ebp-4Ch] BYREF
  int v47; // [esp+38h] [ebp-48h]
  int *v48; // [esp+3Ch] [ebp-44h]
  int v49; // [esp+40h] [ebp-40h] BYREF
  int v50; // [esp+44h] [ebp-3Ch] BYREF
  int v51; // [esp+48h] [ebp-38h]
  _DWORD v52[4]; // [esp+4Ch] [ebp-34h]
  _DWORD v53[4]; // [esp+5Ch] [ebp-24h]
  int v54; // [esp+6Ch] [ebp-14h]
  int v55; // [esp+70h] [ebp-10h]
  int v56; // [esp+74h] [ebp-Ch]
  int v57; // [esp+78h] [ebp-8h]

  v1 = (__int16 *)(dword_870840 + dword_87082C * a1);
  v38 = v1;
  if ( *((_DWORD *)v1 + 6) == -1 || dword_4D0B68 && *(char *)(dword_4CCA98 * v1[2] + dword_4CCAAC + 224) < 7 )
    return 0;
  sub_4332A0((_DWORD *)(dword_870840 + dword_87082C * a1), &v49, &v50);
  sub_4332E0(v1, (int)&v39, (int)&v41);
  v42 = *(unsigned __int8 *)(dword_4D0F08 * *((_DWORD *)v1 + 6) + dword_4D0F1C + 8);
  sub_483890(v39, v41, &v40, &v44);
  if ( v49 - v40 != 8 || v50 - v44 != 8 )
  {
    sub_483CE0(*((_DWORD *)v1 + 6), 0, 4, &v49, &v50);
    if ( !sub_4866A0(*((_DWORD *)v1 + 6), v49, v50, 0) )
      sub_4866A0(*((_DWORD *)v1 + 6), v40 + 8, v44 + 8, 0);
    return 0;
  }
  sub_433550(a1, v39, v41);
  sub_483D50(*((_DWORD *)v1 + 6), 0, 1, &v46, &v45);
  v2 = dword_4B32D4;
  v3 = 0;
  v48 = dword_4B32D4;
  v51 = 0;
  do
  {
    v4 = v46 + *(v2 - 1);
    v5 = v45 + *v2;
    if ( v4 >= dword_4D0E80 || v5 >= dword_4D0E84 )
    {
      *(int *)((char *)&v54 + v3) = 0;
      *(_DWORD *)((char *)v53 + v3) = 0;
    }
    else
    {
      v6 = v4 + v5 * dword_4D0E80;
      v7 = *(__int16 *)(dword_4D0EE0 + 2 * (v6 < 0 ? 0 : v6));
      v8 = (unsigned __int16)word_870870[v7 < 0 ? 0 : v7];
      if ( *(__int16 *)(dword_4D0EE4 + 2 * v6) <= 0 || v8 == dword_8709EC || v8 == dword_87091C )
      {
        v9 = v51;
        *(int *)((char *)&v54 + v51) = 0;
      }
      else
      {
        v9 = v51;
        *(int *)((char *)&v54 + v51) = 1;
      }
      v10 = *v1;
      *(_DWORD *)((char *)v53 + v9) = 0;
      *(_DWORD *)((char *)v52 + v9) = 0;
      v11 = v10 - v46;
      if ( (int)((v10 - v46) * (v4 - v46)) <= 0 )
      {
        v12 = v1[1];
        v13 = v12 - v45;
        v3 = v51;
        if ( (int)((v12 - v45) * (v5 - v45)) > 0 )
        {
          *(_DWORD *)((char *)v53 + v51) = 1;
          if ( v13 < 0 )
            v13 = v45 - v12;
          *(_DWORD *)((char *)v52 + v3) = v13;
        }
      }
      else
      {
        v3 = v51;
        *(_DWORD *)((char *)v53 + v51) = 1;
        if ( v11 < 0 )
          v11 = v46 - v10;
        *(_DWORD *)((char *)v52 + v3) = v11;
      }
    }
    v2 = v48 + 2;
    v3 += 4;
    v48 = v2;
    v51 = v3;
  }
  while ( (int)v2 < (int)dword_4B32F4 );
  v14 = v42;
  v15 = v42 - 1;
  v47 = v42 - 1;
  if ( v42 - 1 < 0 )
  {
    v15 += 4;
    v47 = v15;
  }
  v16 = v42 + 1;
  v43 = v42 + 1;
  if ( v42 + 1 > 3 )
  {
    v16 = v42 - 3;
    v43 = v42 - 3;
  }
  v37 = *(&v54 + v16);
  if ( !v37 && !*(&v54 + v15) )
  {
    if ( !*(&v54 + v42) )
    {
      sub_483CE0(*((_DWORD *)v1 + 6), 0, 16, &v49, &v50);
      sub_4866A0(*((_DWORD *)v1 + 6), v49, v50, 0);
      sub_4867D0(*((_DWORD *)v1 + 6), v14 - 2 + (v14 - 2 < 0 ? 4 : 0));
    }
    goto LABEL_76;
  }
  v17 = abs32(v46 - *v1);
  v18 = v1[1];
  v51 = v42;
  v19 = v54 + v55 + v56 + v57;
  v20 = abs32(v45 - v18);
  v21 = 0;
  if ( v17 < v20 )
  {
    v17 = v20 + (v17 >> 1);
    v48 = (int *)v17;
  }
  else
  {
    v48 = (int *)(v17 + (v20 >> 1));
  }
  if ( v19 == 2 )
  {
    if ( v37 )
    {
      i = v43;
LABEL_72:
      v51 = i;
    }
    else
    {
      v51 = v47;
    }
LABEL_74:
    v31 = v51;
    if ( v51 != v42 )
    {
      sub_483CE0(*((_DWORD *)v1 + 6), 0, 16, &v49, &v50);
      sub_4866A0(*((_DWORD *)v1 + 6), v49, v50, 0);
      sub_4867D0(*((_DWORD *)v1 + 6), v31);
    }
    goto LABEL_76;
  }
  if ( v19 <= 2 || v19 > 4 )
    goto LABEL_76;
  if ( v54 )
    v21 = v53[0];
  if ( v55 )
    v21 += v53[1];
  if ( v56 )
    v21 += v53[2];
  if ( v57 )
    v21 += v53[3];
  v47 = v19 - v21;
  if ( v19 == v21 || (v17 = sub_4640D0(v17) % 100, v17 >= 800 / ((int)v48 + 10)) )
  {
    if ( !v21 )
      goto LABEL_76;
    v25 = 0;
    v48 = 0;
    v26 = 0;
    while ( 1 )
    {
      v27 = (int *)v52[v26];
      v28 = 0;
      if ( (int)v27 > (int)v25 )
        goto LABEL_63;
      if ( v27 == v25 )
      {
        v30 = sub_4640D0(v17) & 0x80000001;
        v29 = v30 == 0;
        if ( v30 < 0 )
          v29 = (((_BYTE)v30 - 1) | 0xFFFFFFFE) == -1;
        if ( !v29 )
LABEL_63:
          v28 = 1;
      }
      if ( *(&v54 + v26) && v53[v26] && v28 )
      {
        v48 = v27;
        v51 = v26;
      }
      if ( ++v26 >= 4 )
        break;
      v25 = v48;
    }
    v1 = v38;
    goto LABEL_74;
  }
  v22 = sub_4640D0(v17);
  v23 = v22 % v47;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(&v54 + i) && !v53[i] )
    {
      if ( !v23 )
        goto LABEL_72;
      --v23;
    }
  }
LABEL_76:
  sub_483CE0(*((_DWORD *)v1 + 6), 0, 4, &v49, &v50);
  sub_4866A0(*((_DWORD *)v1 + 6), v49, v50, 0);
  v32 = *((_DWORD *)v1 + 6);
  v33 = *(__int16 *)(dword_4D0F08 * v32 + dword_4D0F1C + 6);
  if ( dword_4B38B8 != a1 )
  {
    if ( (v33 & 3) != 0 )
    {
      sub_4868E0(v32, v33 & 0xFFFFFFFC);
      return 0;
    }
    return 0;
  }
  v34 = v33 & 3;
  if ( v34 == 1 || v34 == 2 )
    v35 = 2 - (v34 != 1);
  else
    v35 = 1;
  sub_4868E0(v32, v35 + (v33 & 0xFFFFFFC));
  return 0;
}
