// 函数 0x4023c0  sub_4023C0  size=0x949  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4023C0(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // ebx
  char v4; // al
  int v5; // edi
  int v6; // eax
  int v7; // edx
  char *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  bool v15; // zf
  int v16; // edi
  int v17; // ecx
  bool v18; // cc
  int v19; // esi
  __int16 *v20; // edi
  int v21; // eax
  int v22; // edi
  double v23; // st7
  int v24; // eax
  char *v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // eax
  char *v30; // esi
  int v31; // ecx
  int v32; // eax
  double v33; // st7
  int v34; // ebx
  __int16 v35; // ax
  int v36; // edi
  int v37; // eax
  int v38; // ecx
  int v39; // esi
  int v40; // esi
  int v41; // ebx
  BOOL v42; // ecx
  int v43; // esi
  __int16 *v44; // eax
  int k; // edi
  int v46; // eax
  int v47; // esi
  char *v48; // esi
  int v49; // eax
  int v50; // edx
  int v51; // ebx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // esi
  int v62; // ebx
  int n; // esi
  int v64; // edi
  int v65; // ecx
  int ii; // eax
  int v67; // esi
  int v68; // eax
  int result; // eax
  int v70; // et2
  int v71; // ebx
  int v72; // edi
  int v73; // esi
  int v74; // eax
  int v75; // et2
  int v76; // [esp+0h] [ebp-80h]
  int v77; // [esp+0h] [ebp-80h]
  int v78; // [esp+4h] [ebp-7Ch]
  int v79; // [esp+14h] [ebp-6Ch] BYREF
  int v80; // [esp+18h] [ebp-68h] BYREF
  char *v81; // [esp+1Ch] [ebp-64h]
  double v82; // [esp+20h] [ebp-60h]
  int v83; // [esp+28h] [ebp-58h]
  int v84; // [esp+2Ch] [ebp-54h]
  int v85; // [esp+30h] [ebp-50h]
  int m; // [esp+34h] [ebp-4Ch]
  int v87; // [esp+38h] [ebp-48h]
  int v88; // [esp+3Ch] [ebp-44h]
  int j; // [esp+40h] [ebp-40h]
  int v90; // [esp+44h] [ebp-3Ch] BYREF
  int v91; // [esp+48h] [ebp-38h]
  int v92; // [esp+4Ch] [ebp-34h] BYREF
  int v93; // [esp+50h] [ebp-30h]
  int v94; // [esp+54h] [ebp-2Ch]
  int i; // [esp+58h] [ebp-28h]
  int v96; // [esp+5Ch] [ebp-24h]
  int v97; // [esp+60h] [ebp-20h]
  int v98; // [esp+64h] [ebp-1Ch]
  int v99; // [esp+68h] [ebp-18h]
  int v100; // [esp+6Ch] [ebp-14h]
  int v101; // [esp+70h] [ebp-10h]
  int v102; // [esp+74h] [ebp-Ch]
  int v103; // [esp+78h] [ebp-8h]

  v94 = a1;
  v1 = dword_4CCAAC + dword_4CCA98 * a1;
  v81 = (char *)&unk_4D10B8 + 189880 * *(char *)(v1 + 224);
  v2 = *(__int16 *)(v1 + 1620);
  for ( i = v1; v2 != -1; v2 = *(__int16 *)(v3 + 20) )
  {
    v3 = dword_4C43DC + v2 * dword_4C43C8;
    v4 = *(_BYTE *)(v3 + 84);
    v87 = v3;
    if ( v4 != -1 )
    {
      v5 = *(__int16 *)(i + 2 * v4 + 240);
      v91 = sub_401CE0(v3, *(__int16 *)(v3 + 16), v4);
      if ( v91 == -1 )
      {
        *(_BYTE *)(v3 + 84) = -1;
        *(_WORD *)(v3 + 26) = 0;
      }
      else
      {
        if ( v5 == -1 )
        {
          v6 = sub_414D20(v94, *(char *)(v3 + 84));
          v7 = dword_4CD11C;
          v8 = (char *)(dword_4CC8D0 + v6 * dword_4CC8BC);
          v8[8] &= ~1u;
          LOBYTE(v6) = v8[8];
          *((_DWORD *)v8 + 9) = v7;
          v8[9] = 0;
          v9 = dword_4CD11C;
          v8[8] = v6 & 0xFE;
          v10 = i;
          *((_DWORD *)v8 + 9) = v9;
          v8[10] = 2;
          if ( *(_WORD *)(v10 + 746) )
            v8[1257] = *(_BYTE *)(dword_8703BC * *(__int16 *)(v10 + 758) + dword_8703D0 + 31);
          else
            v8[1257] = 0;
          v11 = sub_41A660(*v8);
          sub_415D70(v11);
        }
        else
        {
          v8 = (char *)(dword_4CC8D0 + v5 * dword_4CC8BC);
          v11 = (unsigned __int8)v8[1256];
          if ( *(_WORD *)(i + 1622) == 1 || *(__int16 *)(i + 2 * v11 + 768) <= 0 || v8[10] == 2 )
          {
            v12 = dword_4CD11C;
            v8[8] &= ~1u;
            *((_DWORD *)v8 + 9) = v12;
            v8[9] = 0;
          }
        }
        sub_434520(&v92, &v90);
        if ( *(__int16 *)(i + 2 * v11 + 768) > 0 )
          sub_401480(v94, v92, v90, 4, v11);
        else
          sub_401480(v94, v92, v90, 8, v11);
        sub_401B40(v94, (unsigned __int8)v8[1257]);
        v13 = i;
        *(_BYTE *)(v3 + 84) = -1;
        sub_417880(v13);
      }
    }
    LOBYTE(v14) = *(_BYTE *)(v3 + 85);
    if ( (_BYTE)v14 != 0xFF )
    {
      v14 = (char)v14;
      v15 = *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * (char)v14 + 12) == 2;
      v16 = *(_DWORD *)dword_870814 + 72 * (char)v14;
      v88 = (char)v14;
      if ( v15 && *(__int16 *)(v3 + 4) != v14 )
      {
        *(_BYTE *)(v3 + 85) = -1;
        goto LABEL_121;
      }
      sub_401BD0(v14, *(char *)(i + 224), *(__int16 *)(v3 + 86));
      v17 = dword_4B9900;
      v18 = dword_4B9900 <= 0;
      if ( dword_4B9900 )
      {
LABEL_28:
        if ( v18 )
          goto LABEL_121;
      }
      else
      {
        v19 = 0;
        v20 = (__int16 *)(v16 + 16);
        while ( 1 )
        {
          if ( *v20 != *(_WORD *)(v3 + 86) )
          {
            sub_401BD0(v88, *(char *)(i + 224), *v20);
            v17 = dword_4B9900;
            if ( dword_4B9900 > 0 )
              break;
          }
          ++v19;
          ++v20;
          if ( v19 >= 4 )
          {
            v18 = v17 <= 0;
            goto LABEL_28;
          }
        }
      }
      v91 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(v3 + 86);
      v21 = 0;
      if ( v17 <= 0 )
      {
LABEL_32:
        v22 = v84;
      }
      else
      {
        while ( *(_BYTE *)(388 * dword_4B9770[v21] + *(_DWORD *)dword_4D0C8C + 79) )
        {
          if ( ++v21 >= v17 )
            goto LABEL_32;
        }
        v22 = v21;
        v84 = v21;
      }
      if ( v21 == v17 )
      {
        v22 = sub_4640D0() % dword_4B9900 / 2;
        v84 = v22;
      }
      v23 = sub_405A30((char *)&unk_4D10B8 + 189880 * *(char *)(i + 224));
      v24 = *(char *)(v3 + 85);
      v82 = v23;
      v25 = (char *)dword_870824 + 112 * v24;
      if ( v25[11] )
        v82 = v23 + (double)*(int *)(388 * *((__int16 *)v25 + 6) + *(_DWORD *)dword_4D0C8C + 8);
      v26 = dword_4B9900;
      for ( j = 0; j < v26; ++j )
      {
        v27 = dword_4B9770[v22];
        if ( *(unsigned __int8 *)(*(_DWORD *)dword_4D0C8C + 388 * v27 + 227) >= *(__int16 *)(i + 230) )
        {
          v3 = v87;
        }
        else
        {
          v28 = sub_42A0F0();
          v3 = v87;
          v85 = v28;
          if ( (double)v28 < v82 )
          {
            v29 = sub_4017C0(v94, v27, v87);
            if ( v29 != -1 )
            {
              v30 = v81;
              v31 = v29 * dword_4D0C70;
              v32 = *(char *)(v3 + 85);
              v15 = v81[v32 + 189772] == 0;
              j = dword_4D0C84 + v31;
              if ( v15 )
              {
                v33 = sub_41EE50(v32);
                sub_42EDA0(-v33);
                v30[*(char *)(v3 + 85) + 189772] = 1;
              }
              v34 = v88;
              v35 = *(_WORD *)(i + 2 * v88 + 240);
              if ( v35 == -1 )
              {
                v36 = sub_41A660(v88);
                v37 = sub_414D20(v94, v34);
                v38 = dword_4CD11C;
                v39 = dword_4CC8D0 + v37 * dword_4CC8BC;
                *(_BYTE *)(v39 + 8) &= ~1u;
                LOBYTE(v37) = *(_BYTE *)(v39 + 8);
                *(_DWORD *)(v39 + 36) = v38;
                *(_BYTE *)(v39 + 9) = 2;
                *(_DWORD *)(v39 + 36) = dword_4CD11C;
                *(_BYTE *)(v39 + 8) = v37 & 0xFE;
                *(_BYTE *)(v39 + 10) = 0;
                sub_415D70(v36);
                v76 = v94;
                *(_BYTE *)(v39 + 1257) = 3;
                sub_401B40(v76, 3);
              }
              else
              {
                v36 = *(unsigned __int8 *)(dword_4CC8BC * v35 + dword_4CC8D0 + 1256);
              }
              v40 = j;
              if ( v34 == *(__int16 *)(v87 + 4) )
              {
                sub_426CB0(&v92, &v90);
                if ( *(__int16 *)(i + 2 * v36 + 768) > 0 )
                {
                  sub_401480(v94, v92, v90, 4, v36);
                }
                else
                {
                  v77 = 6 * sub_40CD20(v87, v36);
                  sub_401480(v94, v92, v90, v77, v78);
                }
                sub_427A10(v40);
                *((_DWORD *)dword_870824 + 28 * v34 + 26) = dword_4CD11C;
              }
              else
              {
                sub_426CB0(&v79, &v80);
                v41 = i;
                v42 = *(_WORD *)(i + 2 * v36 + 768) <= 0;
                HIDWORD(v82) = v36;
                v85 = 4 * v42 + 4;
                sub_426C50(&v92, &v90);
                v43 = 0;
                v44 = (__int16 *)(v91 + 20);
                v96 = -1;
                v97 = -1;
                v98 = -1;
                v99 = -1;
                v100 = 0;
                v101 = 0;
                v102 = 0;
                v103 = 0;
                v83 = 0;
                v93 = -1;
                v88 = v91 + 28;
                m = v91 + 20;
                for ( k = 0; k < 16; k += 4 )
                {
                  v46 = *v44;
                  if ( v46 != -1 )
                  {
                    v47 = *(__int16 *)(i + 2 * v46 + 240);
                    if ( v47 == -1 )
                    {
                      v48 = (char *)(dword_4CC8D0 + dword_4CC8BC * sub_414D20(v94, v46));
                      v49 = dword_4CD11C;
                      v48[8] &= ~1u;
                      v50 = *v48;
                      *((_DWORD *)v48 + 9) = v49;
                      LOBYTE(v49) = v48[8];
                      v48[9] = 0;
                      *((_DWORD *)v48 + 9) = dword_4CD11C;
                      v48[8] = v49 & 0xFE;
                      v48[10] = 2;
                      v51 = sub_41A660(v50);
                      sub_415D70(v51);
                      v52 = *(_DWORD *)v88;
                      *(int *)((char *)&v96 + k) = v51;
                      *(int *)((char *)&v100 + k) = v52;
                      if ( v83 < v52 )
                        v83 = v52;
                    }
                    else
                    {
                      v48 = (char *)(dword_4CC8D0 + dword_4CC8BC * v47);
                      *(int *)((char *)&v100 + k) = 0;
                    }
                    if ( v93 == -1 )
                    {
                      v93 = 0;
                      sub_401B40(v94, 0);
                    }
                    v41 = i;
                    v48[1257] = v93;
                    v43 = v83;
                  }
                  v88 += 4;
                  v44 = (__int16 *)(m + 2);
                  m += 2;
                }
                if ( v100 )
                {
                  v53 = 20 * v100 / v43;
                  if ( v53 < 2 )
                  {
                    v53 = 2;
                  }
                  else if ( v53 >= 8 )
                  {
                    v53 = 8;
                  }
                  v18 = *(_WORD *)(v41 + 2 * v96 + 768) <= 0;
                  v100 = v53;
                  if ( !v18 )
                  {
                    v54 = v53 / 2;
                    if ( v54 < 1 )
                      v54 = 1;
                    v100 = v54;
                  }
                }
                if ( v101 )
                {
                  v55 = 20 * v101 / v43;
                  if ( v55 < 2 )
                  {
                    v55 = 2;
                  }
                  else if ( v55 >= 8 )
                  {
                    v55 = 8;
                  }
                  v18 = *(_WORD *)(v41 + 2 * v97 + 768) <= 0;
                  v101 = v55;
                  if ( !v18 )
                  {
                    v56 = v55 / 2;
                    if ( v56 < 1 )
                      v56 = 1;
                    v101 = v56;
                  }
                }
                if ( v102 )
                {
                  v57 = 20 * v102 / v43;
                  if ( v57 < 2 )
                  {
                    v57 = 2;
                  }
                  else if ( v57 >= 8 )
                  {
                    v57 = 8;
                  }
                  v18 = *(_WORD *)(v41 + 2 * v98 + 768) <= 0;
                  v102 = v57;
                  if ( !v18 )
                  {
                    v58 = v57 / 2;
                    if ( v58 < 1 )
                      v58 = 1;
                    v102 = v58;
                  }
                }
                if ( v103 )
                {
                  v59 = 20 * v103 / v43;
                  if ( v59 < 2 )
                  {
                    v59 = 2;
                  }
                  else if ( v59 >= 8 )
                  {
                    v59 = 8;
                  }
                  v18 = *(_WORD *)(v41 + 2 * v99 + 768) <= 0;
                  v103 = v59;
                  if ( !v18 )
                  {
                    v60 = v59 / 2;
                    if ( v60 < 1 )
                      v60 = 1;
                    v103 = v60;
                  }
                }
                for ( m = 0; m < 8; ++m )
                {
                  v61 = v85;
                  v93 = 0;
                  if ( v85 > 0 )
                  {
                    if ( sub_401480(v94, v79, v80, 1, SHIDWORD(v82)) )
                    {
                      v85 = v61 - 1;
                      if ( v61 - 1 > 0 )
                        v93 = 1;
                    }
                  }
                  v62 = v94;
                  for ( n = 0; n < 16; n += 4 )
                  {
                    v64 = *(int *)((char *)&v100 + n);
                    if ( v64 > 0 )
                    {
                      sub_401480(v62, v92, v90, 1, *(int *)((char *)&v96 + n));
                      *(int *)((char *)&v100 + n) = v64 - 1;
                      if ( v64 - 1 > 0 )
                        ++v93;
                    }
                  }
                  if ( !v93 )
                    break;
                }
              }
              sub_4273A0(*(_BYTE *)(v91 + 2));
              v3 = v87;
              break;
            }
          }
          v26 = dword_4B9900;
        }
        if ( ++v22 >= v26 )
          v22 = 0;
      }
LABEL_121:
      v65 = i;
      *(_BYTE *)(v3 + 85) = -1;
      *(_WORD *)(v3 + 86) = -1;
      sub_417880(v65);
    }
  }
  for ( ii = *(__int16 *)(i + 238); ii != -1; ii = *(__int16 *)(v67 + 6) )
  {
    v67 = dword_4CC8D0 + ii * dword_4CC8BC;
    sub_401FB0(ii);
  }
  v68 = sub_4640D0();
  v70 = v68 % 100;
  result = v68 / 100;
  if ( v70 < 10 )
  {
    v71 = i;
    v72 = *(__int16 *)(i + 754);
    v91 = 0;
    if ( v72 != -1 )
    {
      do
      {
        v73 = dword_4C4378 + dword_4C4364 * v72;
        if ( *(_WORD *)(v73 + 2) == 0xFFFF && *(__int16 *)(v71 + 2 * *(char *)(v73 + 10) + 768) > 8 )
        {
          result = *(char *)(v73 + 10);
          if ( *(__int16 *)(v71 + 2 * result + 768) > 2 * *(__int16 *)(v71 + 2 * result + 784) )
          {
            v74 = sub_4640D0();
            v75 = v74 % 100;
            result = v74 / 100;
            if ( v75 < 4 )
            {
              result = sub_40BF60(v72);
              v91 = 1;
            }
          }
        }
        v72 = *(__int16 *)(v73 + 6);
      }
      while ( v72 != -1 );
      if ( v91 )
        return sub_417880(v71);
    }
  }
  return result;
}
