// 函数 0x439260  sub_439260  size=0xA20  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_439260(int a1)
{
  __int16 *v1; // edi
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi
  unsigned int v6; // eax
  int v7; // eax
  __int16 *v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // eax
  char *v16; // eax
  int v17; // ebx
  const char *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // esi
  unsigned int v25; // eax
  int v26; // edx
  int v27; // edx
  int v28; // ebx
  int v29; // ebx
  bool v30; // cc
  unsigned int v31; // ebx
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  unsigned int v36; // ebx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // ebx
  unsigned int v42; // eax
  signed int v43; // esi
  signed int v44; // ecx
  int v45; // ecx
  BOOL v46; // eax
  int v47; // ecx
  int v48; // ebx
  int v49; // esi
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  bool v54; // zf
  signed int v55; // eax
  int v56; // eax
  int v57; // ecx
  bool v58; // zf
  signed int v59; // eax
  int v60; // eax
  int v61; // ecx
  bool v62; // zf
  signed int v63; // eax
  int v64; // edi
  int v65; // ecx
  int v66; // [esp+Ch] [ebp-15Ch] BYREF
  int v67; // [esp+10h] [ebp-158h] BYREF
  int v68; // [esp+14h] [ebp-154h] BYREF
  int v69; // [esp+18h] [ebp-150h] BYREF
  int v70; // [esp+1Ch] [ebp-14Ch] BYREF
  int v71; // [esp+20h] [ebp-148h] BYREF
  int v72; // [esp+24h] [ebp-144h] BYREF
  int v73; // [esp+28h] [ebp-140h] BYREF
  int v74; // [esp+2Ch] [ebp-13Ch]
  int v75; // [esp+30h] [ebp-138h]
  int v76; // [esp+34h] [ebp-134h] BYREF
  int v77; // [esp+38h] [ebp-130h] BYREF
  int v78; // [esp+3Ch] [ebp-12Ch]
  int v79; // [esp+40h] [ebp-128h]
  _DWORD v80[4]; // [esp+44h] [ebp-124h]
  int v81; // [esp+54h] [ebp-114h]
  int v82; // [esp+58h] [ebp-110h]
  int v83; // [esp+5Ch] [ebp-10Ch]
  BOOL v84; // [esp+60h] [ebp-108h]
  char Buffer[256]; // [esp+64h] [ebp-104h] BYREF

  v79 = a1;
  v1 = (__int16 *)(dword_89E57C + dword_89E568 * a1);
  sub_438DA0(v1, &v76, &v77);
  sub_438DE0(v1, (int)&v68, (int)&v70);
  v78 = *(unsigned __int8 *)(dword_4D0F08 * *((_DWORD *)v1 + 5) + dword_4D0F1C + 8);
  sub_483890(v68, v70, &v67, &v66);
  if ( v76 - v67 != 8 || v77 - v66 != 8 )
  {
    sub_483CE0(*((_DWORD *)v1 + 5), 0, 4, &v76, &v77);
    if ( !sub_4866A0(*((_DWORD *)v1 + 5), v76, v77, 0) )
      sub_4866A0(*((_DWORD *)v1 + 5), v67 + 8, v66 + 8, 0);
    v64 = *((_DWORD *)v1 + 5);
    if ( (*(_WORD *)(v64 * dword_4D0F08 + dword_4D0F1C + 6) & 3) != 0 )
    {
      v65 = (*(_WORD *)(v64 * dword_4D0F08 + dword_4D0F1C + 6) & 3) + 1;
      if ( v65 > 3 )
        v65 = 1;
      sub_4868E0(v64, v65 | *(__int16 *)(v64 * dword_4D0F08 + dword_4D0F1C + 6) & 0xFFFFFFFC);
    }
    return 0;
  }
  v2 = dword_4D0F08;
  v3 = *((_DWORD *)v1 + 5);
  v4 = *(__int16 *)(v3 * dword_4D0F08 + dword_4D0F1C + 6);
  v5 = (unsigned __int16)word_870870[*(__int16 *)(dword_4D0EE0 + 2 * (v68 + v70 * dword_4D0E80))];
  if ( (v4 & 3) != 0 )
  {
    if ( v5 == dword_8709EC || v5 == dword_87091C )
      goto LABEL_11;
    v6 = v4 & 0xFFFFFFFC;
  }
  else
  {
    if ( v5 != dword_8709EC && v5 != dword_87091C )
      goto LABEL_11;
    v6 = v4 | 1;
  }
  sub_4868E0(v3, v6);
  v2 = dword_4D0F08;
LABEL_11:
  sub_483850(
    *(__int16 *)(*((_DWORD *)v1 + 5) * v2 + dword_4D0F1C + 2),
    *(__int16 *)(*((_DWORD *)v1 + 5) * v2 + dword_4D0F1C + 4),
    &v72,
    &v73);
  if ( (*((_BYTE *)v1 + 19) & 0xF) != 0 )
  {
    if ( (*((_BYTE *)v1 + 19) & 0xF) != 1 || !*((_BYTE *)v1 + 18) )
      goto LABEL_21;
    v7 = v1[3];
  }
  else
  {
    v7 = v1[2];
  }
  if ( v7 == -1 )
  {
LABEL_21:
    v10 = *v1;
    v74 = 0;
    if ( v72 - v10 < 0 )
      v11 = v10 - v72;
    else
      v11 = v72 - v10;
    v20 = v1[1];
    if ( v73 - v20 < 0 )
      v21 = v20 - v73;
    else
      v21 = v73 - v20;
    v22 = v21 + v11;
    if ( v22 < 2 )
      return 1;
    if ( v22 == 2 )
      v74 = 1;
    sub_483D50(*((_DWORD *)v1 + 5), 0, 1, &v72, &v73);
    v23 = v72 + dword_4B32D0[0];
    v24 = *v1;
    v25 = dword_4B32D4[0] + v73;
    v26 = v72 + dword_4B32D0[0] - v24;
    if ( v26 < 0 )
      v26 = v24 - v23;
    v79 = v26;
    v27 = v1[1];
    v28 = v25 - v27;
    v75 = v27;
    if ( (int)(v25 - v27) < 0 )
      v28 = v27 - v25;
    if ( v79 <= v28 )
      v29 = v79 + 2 * v28;
    else
      v29 = v28 + 2 * v79;
    v80[0] = v29;
    if ( v23 >= dword_4D0E80
      || v25 >= dword_4D0E84
      || (v30 = *(_WORD *)(dword_4D0EE4 + 2 * (v23 + dword_4D0E80 * v25)) <= 0, v81 = 1, v30) )
    {
      v81 = 0;
    }
    v31 = v72 + dword_4B32D8;
    v32 = v73 + dword_4B32DC;
    v33 = v72 + dword_4B32D8 - v24;
    if ( v33 < 0 )
      v33 = v24 - v31;
    v79 = v33;
    v34 = v32 - v75;
    if ( (int)(v32 - v75) < 0 )
      v34 = v75 - v32;
    if ( v79 <= v34 )
      v35 = v79 + 2 * v34;
    else
      v35 = v34 + 2 * v79;
    v80[1] = v35;
    if ( v31 >= dword_4D0E80
      || v32 >= dword_4D0E84
      || (v30 = *(_WORD *)(dword_4D0EE4 + 2 * (v31 + dword_4D0E80 * v32)) <= 0, v82 = 1, v30) )
    {
      v82 = 0;
    }
    v36 = v72 + dword_4B32E0;
    v37 = v73 + dword_4B32E4;
    v38 = v72 + dword_4B32E0 - v24;
    if ( v38 < 0 )
      v38 = v24 - v36;
    v79 = v38;
    v39 = v37 - v75;
    if ( (int)(v37 - v75) < 0 )
      v39 = v75 - v37;
    if ( v79 <= v39 )
      v40 = v79 + 2 * v39;
    else
      v40 = v39 + 2 * v79;
    v80[2] = v40;
    if ( v36 >= dword_4D0E80
      || v37 >= dword_4D0E84
      || (v30 = *(_WORD *)(dword_4D0EE4 + 2 * (v36 + dword_4D0E80 * v37)) <= 0, v83 = 1, v30) )
    {
      v83 = 0;
    }
    v41 = v72 + dword_4B32E8;
    v42 = v73 + dword_4B32EC;
    if ( v72 + dword_4B32E8 - v24 < 0 )
      v43 = v24 - v41;
    else
      v43 = v72 + dword_4B32E8 - v24;
    if ( (int)(v42 - v75) < 0 )
      v44 = v75 - v42;
    else
      v44 = v42 - v75;
    if ( v43 <= v44 )
      v45 = v43 + 2 * v44;
    else
      v45 = v44 + 2 * v43;
    v80[3] = v45;
    v46 = v41 < dword_4D0E80 && v42 < dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v41 + dword_4D0E80 * v42)) > 0;
    v47 = v78 - 1;
    v84 = v46;
    v79 = v78 - 1;
    if ( v78 - 1 < 0 )
    {
      v47 += 4;
      v79 = v47;
    }
    v48 = v78 + 1;
    if ( v78 + 1 > 3 )
      v48 = v78 - 3;
    if ( !*(&v81 + v48) && !*(&v81 + v47) )
    {
      if ( !*(&v81 + v78) )
      {
        sub_483CE0(*((_DWORD *)v1 + 5), 0, 16, &v76, &v77);
        sub_4866A0(*((_DWORD *)v1 + 5), v76, v77, 0);
        sub_4867D0(*((_DWORD *)v1 + 5), v78 - 2 + (v78 - 2 < 0 ? 4 : 0));
        goto LABEL_101;
      }
      goto LABEL_138;
    }
    v49 = v78;
    v50 = v81 + v82 + v83 + v46 - 2;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( v51 )
      {
        if ( v51 != 1 )
          goto LABEL_138;
        if ( *(&v81 + v48) && v80[v48] < v80[v78] )
          v49 = v48;
        if ( *(&v81 + v79) )
        {
          if ( v80[v79] < v80[v49] )
            v49 = v79;
        }
        goto LABEL_136;
      }
      if ( *(&v81 + v78) )
      {
        if ( *(&v81 + v48) )
        {
          v52 = v80[v78];
          v53 = v80[v48];
          if ( v53 < v52 )
            goto LABEL_119;
          if ( v53 == v52 )
          {
            v55 = sub_4640D0(v53) & 0x80000001;
            v54 = v55 == 0;
            if ( v55 < 0 )
              v54 = (((_BYTE)v55 - 1) | 0xFFFFFFFE) == -1;
            if ( !v54 )
LABEL_119:
              v49 = v48;
          }
        }
        if ( *(&v81 + v79) )
        {
          v56 = v80[v49];
          v57 = v80[v79];
          if ( v57 < v56 )
          {
            v49 = v79;
            goto LABEL_136;
          }
          if ( v57 == v56 )
          {
            v59 = sub_4640D0(v57) & 0x80000001;
            v58 = v59 == 0;
            if ( v59 < 0 )
              v58 = (((_BYTE)v59 - 1) | 0xFFFFFFFE) == -1;
            if ( !v58 )
LABEL_135:
              v49 = v79;
          }
        }
LABEL_136:
        if ( v49 != v78 )
        {
          sub_483CE0(*((_DWORD *)v1 + 5), 0, 16, &v76, &v77);
          sub_4866A0(*((_DWORD *)v1 + 5), v76, v77, 0);
          sub_4867D0(*((_DWORD *)v1 + 5), v49);
LABEL_101:
          if ( v74 )
            return 1;
        }
LABEL_138:
        sub_483CE0(*((_DWORD *)v1 + 5), 0, 4, &v76, &v77);
        sub_4866A0(*((_DWORD *)v1 + 5), v76, v77, 0);
        *((_DWORD *)v1 + 6) = dword_4CD11C;
        return 0;
      }
      v49 = v79;
      v60 = v80[v48];
      v61 = v80[v79];
      if ( v60 < v61 )
      {
        v49 = v48;
        goto LABEL_136;
      }
      if ( v60 > v61 )
        goto LABEL_136;
      v63 = sub_4640D0(v61) & 0x80000001;
      v62 = v63 == 0;
      if ( v63 < 0 )
        v62 = (((_BYTE)v63 - 1) | 0xFFFFFFFE) == -1;
    }
    else
    {
      v62 = *(&v81 + v48) == 0;
    }
    v49 = v48;
    if ( !v62 )
      goto LABEL_136;
    goto LABEL_135;
  }
  v8 = (__int16 *)(dword_4CCAAC + v7 * dword_4CCA98);
  v9 = dword_4CC8D0 + dword_4CC8BC * v8[*((unsigned __int8 *)v1 + 16) + 120];
  v71 = 0;
  if ( v8[*(unsigned __int8 *)(v9 + 1257) + 400] > 0 )
  {
    v71 = sub_439130(v79);
    if ( !v71 || !sub_419BB0(v8, *(unsigned __int8 *)(v9 + 1257)) )
    {
      *((_BYTE *)v1 + 19) &= ~0x10u;
      goto LABEL_21;
    }
  }
  if ( dword_4CD11C - *((_DWORD *)v1 + 6) <= 13824 )
  {
    if ( v71 )
    {
      if ( (__int16 *)dword_4C2D38 == v8 )
      {
        v19 = sub_439090(v1);
        if ( v19 != -1 )
          sub_40C730((int)v8, *(__int16 *)(v19 * dword_8703BC + dword_8703D0 + 6), 60, 412, 0, 0);
      }
    }
    *((_BYTE *)v1 + 19) |= 0x10u;
    return 0;
  }
  else if ( (*((_BYTE *)v1 + 19) & 0xF) != 0 )
  {
    v13 = dword_4CCAAC + dword_4CCA98 * v1[3];
    v14 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v13 + 2 * *((unsigned __int8 *)v1 + 16) + 240);
    v78 = (int)(v1 + 4);
    v75 = 4;
    do
    {
      v15 = *(__int16 *)v78;
      v74 = v15;
      if ( v15 != -1 )
      {
        sub_415C20(v14, *(_DWORD *)(v15 * dword_4D0B98 + dword_4D0BAC + 20));
        sub_420B10(v74);
        --*(_WORD *)(v14 + 34);
      }
      v78 += 2;
      --v75;
    }
    while ( v75 );
    sub_419920((_DWORD *)v13, &v71, &v69);
    v74 = *(_DWORD *)dword_870814 + 72 * *((unsigned __int8 *)v1 + 16);
    v16 = &byte_4D10C8[189880 * *(char *)(v13 + 224)];
    v17 = *(_DWORD *)dword_4D1088 + 3520;
    v75 = v13 + 204;
    sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 3528), v16, v13 + 204, v74);
    sub_42B930(v71, v69, -1, Buffer, v17);
    if ( *(char *)(v13 + 224) == dword_8703A0 )
    {
      v18 = sub_436F10(17, 0);
      if ( v18 )
      {
        sprintf(Buffer, v18, v75, v74);
        sub_437150((int)Buffer, 0, v71, v69);
      }
    }
    sub_438C20(v79);
    *((_BYTE *)v1 + 19) |= 0x10u;
    return 0;
  }
  else
  {
    sub_439000((int)v1, *((unsigned __int8 *)v1 + 17));
    sub_438C20(v79);
    *((_BYTE *)v1 + 19) |= 0x10u;
    return 0;
  }
}
