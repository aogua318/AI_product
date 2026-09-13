int __stdcall sub_4961A6(int a1, _DWORD *a2)
{
  _DWORD *v2; // eax
  char *v3; // ebx
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int *v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int *v16; // edi
  int *v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  signed int v24; // ecx
  signed int *v25; // edi
  signed int i; // eax
  const void *v27; // ebx
  signed int v28; // ecx
  signed int *v29; // edi
  signed int j; // eax
  int *v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int *v40; // edi
  int *v41; // ebx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  signed int v48; // ecx
  signed int *v49; // edi
  signed int k; // eax
  signed int m; // eax
  signed int **v53; // [esp-10h] [ebp-24h]
  signed int **v54; // [esp-10h] [ebp-24h]
  signed int **v55; // [esp-10h] [ebp-24h]
  signed int **v56; // [esp-10h] [ebp-24h]
  char *v57; // [esp-Ch] [ebp-20h]
  const void *v58; // [esp-Ch] [ebp-20h]
  char *v59; // [esp-Ch] [ebp-20h]
  const void *v60; // [esp-Ch] [ebp-20h]
  char *v61; // [esp-Ch] [ebp-20h]
  _DWORD *v62; // [esp-8h] [ebp-1Ch]
  int v63; // [esp-8h] [ebp-1Ch]
  int v64; // [esp-8h] [ebp-1Ch]
  _DWORD *v65; // [esp-8h] [ebp-1Ch]
  int v66; // [esp-8h] [ebp-1Ch]
  char *v67; // [esp-8h] [ebp-1Ch]
  _DWORD *v68; // [esp-4h] [ebp-18h]
  int v69; // [esp-4h] [ebp-18h]
  int v70; // [esp-4h] [ebp-18h]
  _DWORD *v71; // [esp-4h] [ebp-18h]
  int v72; // [esp-4h] [ebp-18h]
  int v73; // [esp-4h] [ebp-18h]
  int v74; // [esp-4h] [ebp-18h]
  int *v75; // [esp+0h] [ebp-14h] BYREF
  _DWORD *v76; // [esp+4h] [ebp-10h]
  int **v77; // [esp+8h] [ebp-Ch]
  char *v78; // [esp+Ch] [ebp-8h]
  int v79; // [esp+10h] [ebp-4h]

  v79 = 0; /*0x4961af*/
  v78 = (char *)sub_4CED49(40); /*0x4961c3*/
  memset(v78, 0, 0x28u); /*0x4961d1*/
  v2 = (_DWORD *)sub_4CED49(264); /*0x4961dc*/
  v3 = v78 + 32; /*0x4961e4*/
  *((_DWORD *)v78 + 8) = v2; /*0x4961e5*/
  *v2 = unk_58DC3F; /*0x4961ef*/
  v2[1] = unk_58DC43; /*0x4961f1*/
  memset(v2 + 2, 0, 0x100u); /*0x4961f9*/
  v4 = (_DWORD *)sub_4CED49(268); /*0x496204*/
  *((_DWORD *)v3 + 1) = v4; /*0x49620d*/
  *v4 = unk_59E4FB; /*0x496217*/
  v4[1] = unk_59E4FF; /*0x496219*/
  memset(v4 + 2, 0, 0x104u); /*0x496221*/
  if ( a1 ) /*0x496227*/
  {
    v77 = &v75; /*0x496237*/
    v6 = sub_4CED5B(8, a1); /*0x496247*/
    if ( v77 != &v75 ) /*0x49624f*/
      v6 = sub_4CED55(6); /*0x496256*/
    v79 = v6; /*0x49625e*/
    *(_DWORD *)v78 = 548; /*0x49626a*/
    v77 = &v75; /*0x496270*/
    v7 = (int *)v78; /*0x496286*/
    v68 = (_DWORD *)sub_4CED49(548); /*0x496287*/
    v75 = v7; /*0x496288*/
    v76 = v68; /*0x49628b*/
    v8 = *v7++; /*0x49628e*/
    *v68 = v8; /*0x496293*/
    v9 = *v7++; /*0x496298*/
    v68[1] = v9; /*0x49629d*/
    v10 = *v7++; /*0x4962a2*/
    v68[2] = v10; /*0x4962a7*/
    v11 = *v7++; /*0x4962ac*/
    v68[3] = v11; /*0x4962b1*/
    v12 = *v7++; /*0x4962b6*/
    v68[4] = v12; /*0x4962bb*/
    v13 = *v7++; /*0x4962c0*/
    v68[5] = v13; /*0x4962c5*/
    v14 = *v7++; /*0x4962ca*/
    v68[6] = v14; /*0x4962cf*/
    v68[7] = *v7; /*0x4962d9*/
    qmemcpy(v68 + 8, (const void *)(v7[1] + 8), 0x100u); /*0x4962ee*/
    qmemcpy(v68 + 72, (const void *)(v7[2] + 8), 0x104u); /*0x496304*/
    v15 = sub_4CED5B(v79, v68); /*0x496312*/
    if ( v77 != &v75 ) /*0x49631a*/
      v15 = sub_4CED55(6); /*0x496321*/
    v69 = v15; /*0x496329*/
    v62 = v76; /*0x49632d*/
    v16 = v75; /*0x49632e*/
    v17 = v76 + 1; /*0x496333*/
    *v75 = *v76; /*0x496336*/
    ++v16; /*0x496338*/
    v18 = *v17++; /*0x49633b*/
    *v16++ = v18; /*0x496340*/
    v19 = *v17++; /*0x496345*/
    *v16++ = v19; /*0x49634a*/
    v20 = *v17++; /*0x49634f*/
    *v16++ = v20; /*0x496354*/
    v21 = *v17++; /*0x496359*/
    *v16++ = v21; /*0x49635e*/
    v22 = *v17++; /*0x496363*/
    *v16++ = v22; /*0x496368*/
    v23 = *v17++; /*0x49636d*/
    *v16++ = v23; /*0x496372*/
    *v16 = *v17; /*0x49637c*/
    sub_4CED43(1, v16 + 1, v17 + 1, v62, v69, v75); /*0x49638a*/
    v24 = **v53; /*0x496398*/
    v25 = *v53 + 1; /*0x49639a*/
    if ( v24 ) /*0x49639f*/
    {
      for ( i = *v25; ; i *= *v25 ) /*0x4963a1*/
      {
        ++v25; /*0x4963a3*/
        if ( !--v24 ) /*0x4963a7*/
          break; /*0x4963a7*/
      }
      v24 = i; /*0x4963ae*/
    }
    if ( v24 > 256 ) /*0x4963b6*/
      v24 = 256; /*0x4963b8*/
    qmemcpy(v25, v57, v24); /*0x4963bf*/
    sub_4CED43(1, v53 + 1, v57 + 256, v63, v70, v75); /*0x4963d5*/
    v27 = v58; /*0x4963de*/
    v28 = **v54; /*0x4963e3*/
    v29 = *v54 + 1; /*0x4963e5*/
    if ( v28 ) /*0x4963ea*/
    {
      for ( j = *v29; ; j *= *v29 ) /*0x4963ec*/
      {
        ++v29; /*0x4963ee*/
        if ( !--v28 ) /*0x4963f2*/
          break; /*0x4963f2*/
      }
      v28 = j; /*0x4963f9*/
    }
    if ( v28 > 260 ) /*0x496401*/
      v28 = 260; /*0x496403*/
    while ( 1 ) /*0x49640a*/
    {
      qmemcpy(v29, v27, v28); /*0x49640a*/
      sub_4CED4F(v64); /*0x496417*/
      v77 = (int **)(v78 + 20); /*0x496426*/
      if ( !*((_DWORD *)v78 + 5) ) /*0x49642c*/
        break; /*0x49642c*/
      v77 = (int **)(v78 + 32); /*0x49643b*/
      v76 = (_DWORD *)sub_4CED61(1, *((_DWORD *)v78 + 8), 0, -1610612479); /*0x49645c*/
      v75 = (int *)(sub_401004(v76, *a2) == 0); /*0x49647b*/
      if ( v76 ) /*0x496483*/
        sub_4CED4F(v76); /*0x496486*/
      if ( v75 ) /*0x496492*/
      {
        v77 = (int **)(v78 + 20); /*0x49649e*/
        v5 = *((_DWORD *)v78 + 5); /*0x4964a4*/
        goto LABEL_44; /*0x4964a6*/
      }
      v77 = &v75; /*0x4964ab*/
      v31 = (int *)v78; /*0x4964c1*/
      v71 = (_DWORD *)sub_4CED49(548); /*0x4964c2*/
      v75 = v31; /*0x4964c3*/
      v76 = v71; /*0x4964c6*/
      v32 = *v31++; /*0x4964c9*/
      *v71 = v32; /*0x4964ce*/
      v33 = *v31++; /*0x4964d3*/
      v71[1] = v33; /*0x4964d8*/
      v34 = *v31++; /*0x4964dd*/
      v71[2] = v34; /*0x4964e2*/
      v35 = *v31++; /*0x4964e7*/
      v71[3] = v35; /*0x4964ec*/
      v36 = *v31++; /*0x4964f1*/
      v71[4] = v36; /*0x4964f6*/
      v37 = *v31++; /*0x4964fb*/
      v71[5] = v37; /*0x496500*/
      v38 = *v31++; /*0x496505*/
      v71[6] = v38; /*0x49650a*/
      v71[7] = *v31; /*0x496514*/
      qmemcpy(v71 + 8, (const void *)(v31[1] + 8), 0x100u); /*0x496529*/
      qmemcpy(v71 + 72, (const void *)(v31[2] + 8), 0x104u); /*0x49653f*/
      v39 = sub_4CED5B(v79, v71); /*0x49654d*/
      if ( v77 != &v75 ) /*0x496555*/
        v39 = sub_4CED55(6); /*0x49655c*/
      v72 = v39; /*0x496564*/
      v65 = v76; /*0x496568*/
      v40 = v75; /*0x496569*/
      v41 = v76 + 1; /*0x49656e*/
      *v75 = *v76; /*0x496571*/
      ++v40; /*0x496573*/
      v42 = *v41++; /*0x496576*/
      *v40++ = v42; /*0x49657b*/
      v43 = *v41++; /*0x496580*/
      *v40++ = v43; /*0x496585*/
      v44 = *v41++; /*0x49658a*/
      *v40++ = v44; /*0x49658f*/
      v45 = *v41++; /*0x496594*/
      *v40++ = v45; /*0x496599*/
      v46 = *v41++; /*0x49659e*/
      *v40++ = v46; /*0x4965a3*/
      v47 = *v41++; /*0x4965a8*/
      *v40++ = v47; /*0x4965ad*/
      *v40 = *v41; /*0x4965b7*/
      sub_4CED43(1, v40 + 1, v41 + 1, v65, v72, v75); /*0x4965c5*/
      v48 = **v55; /*0x4965d3*/
      v49 = *v55 + 1; /*0x4965d5*/
      if ( v48 ) /*0x4965da*/
      {
        for ( k = *v49; ; k *= *v49 ) /*0x4965dc*/
        {
          ++v49; /*0x4965de*/
          if ( !--v48 ) /*0x4965e2*/
            break; /*0x4965e2*/
        }
        v48 = k; /*0x4965e9*/
      }
      if ( v48 > 256 ) /*0x4965f1*/
        v48 = 256; /*0x4965f3*/
      qmemcpy(v49, v59, v48); /*0x4965fa*/
      sub_4CED43(1, v55 + 1, v59 + 256, v66, v73, v75); /*0x496610*/
      v27 = v60; /*0x496619*/
      v28 = **v56; /*0x49661e*/
      v29 = *v56 + 1; /*0x496620*/
      if ( v28 ) /*0x496625*/
      {
        for ( m = *v29; ; m *= *v29 ) /*0x496627*/
        {
          ++v29; /*0x496629*/
          if ( !--v28 ) /*0x49662d*/
            break; /*0x49662d*/
        }
        v28 = m; /*0x496634*/
      }
      if ( v28 > 260 ) /*0x49663c*/
        v28 = 260; /*0x49663e*/
    }
    v5 = 0; /*0x496660*/
  }
  else
  {
    v5 = 0; /*0x49622d*/
  }
LABEL_44:
  v74 = v5; /*0x49668c*/
  v67 = v78; /*0x496690*/
  v61 = v78 + 32; /*0x496694*/
  sub_4CED4F(*((_DWORD *)v78 + 8)); /*0x496698*/
  sub_4CED4F(*((_DWORD *)v61 + 1)); /*0x4966a8*/
  sub_4CED4F(v67); /*0x4966b1*/
  return v74; /*0x4966ba*/
}