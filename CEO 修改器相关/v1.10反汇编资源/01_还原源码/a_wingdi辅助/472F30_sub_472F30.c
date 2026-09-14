// 函数 0x472f30  sub_472F30  size=0x984  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_472F30(int *a1, int a2, size_t a3)
{
  void *v4; // eax
  char *v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v10; // edx
  int v11; // ecx
  size_t v12; // edx
  char *v13; // ecx
  int v15; // edx
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  char *v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  char *v27; // eax
  int v28; // edx
  unsigned int v29; // eax
  size_t v30; // eax
  bool v31; // zf
  int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  int v37; // edx
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // edx
  size_t v41; // ecx
  unsigned int v42; // edx
  int v43; // edx
  unsigned int v44; // eax
  int v45; // ecx
  int v46; // eax
  unsigned int v47; // eax
  size_t v48; // eax
  int v49; // edx
  void (__cdecl *v50)(_DWORD, int); // ecx
  int v51; // eax
  size_t v52; // ecx
  char *v53; // eax
  int v54; // eax
  size_t v55; // ecx
  unsigned int v56; // edx
  unsigned int v57; // eax
  char *v58; // ecx
  int v59; // eax
  char *v60; // eax
  size_t v61; // eax
  char *v62; // eax
  size_t v63; // edx
  char *v64; // eax
  size_t v65; // eax
  size_t v66; // ecx
  char *v67; // eax
  size_t v68; // eax
  char *v69; // eax
  size_t v70; // edx
  size_t v71; // ecx
  char *v72; // eax
  size_t v73; // ecx
  char *v74; // edx
  size_t v75; // eax
  int v76; // [esp-1Ch] [ebp-5Ch]
  int v77; // [esp-14h] [ebp-54h]
  int v78; // [esp-8h] [ebp-48h]
  int v79; // [esp-8h] [ebp-48h]
  size_t v80; // [esp-4h] [ebp-44h]
  size_t v81; // [esp-4h] [ebp-44h]
  int v82; // [esp+Ch] [ebp-34h] BYREF
  int v83; // [esp+10h] [ebp-30h] BYREF
  unsigned int v84; // [esp+14h] [ebp-2Ch]
  unsigned int v85; // [esp+18h] [ebp-28h]
  int v86; // [esp+1Ch] [ebp-24h] BYREF
  int v87; // [esp+20h] [ebp-20h] BYREF
  int v88; // [esp+24h] [ebp-1Ch] BYREF
  int v89; // [esp+28h] [ebp-18h] BYREF
  int v90; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v91; // [esp+30h] [ebp-10h] BYREF
  size_t Size; // [esp+34h] [ebp-Ch]
  size_t v93; // [esp+38h] [ebp-8h]
  void *Src; // [esp+3Ch] [ebp-4h]
  char *v95; // [esp+48h] [ebp+8h]
  unsigned int v96; // [esp+4Ch] [ebp+Ch]
  int v97; // [esp+50h] [ebp+10h]

  v4 = *(void **)a2;
  v6 = (char *)a1[13];
  v93 = *(_DWORD *)(a2 + 4);
  v7 = a1[12];
  Src = v4;
  v8 = a1[8];
  v9 = a1[7];
  v96 = v8;
  v95 = v6;
  if ( (unsigned int)v6 >= v7 )
  {
    v10 = a1[11] - (_DWORD)v6;
    v91 = a1[11] - (_DWORD)v95;
  }
  else
  {
    v10 = v7 - (_DWORD)v6 - 1;
    v91 = v10;
  }
  v11 = *a1;
  while ( 2 )
  {
    switch ( v11 )
    {
      case 0:
        if ( v9 >= 3 )
          goto LABEL_14;
        do
        {
          if ( !v93 )
            goto LABEL_100;
          --v93;
          v15 = *(unsigned __int8 *)Src << v9;
          Src = (char *)Src + 1;
          v9 += 8;
          v8 |= v15;
          a3 = 0;
          v96 = v8;
        }
        while ( v9 < 3 );
LABEL_14:
        a1[6] = v8 & 1;
        switch ( (unsigned __int8)(v8 & 7) >> 1 )
        {
          case 0:
            v16 = v9 - 3;
            v17 = v16 & 7;
            v8 = v8 >> 3 >> v17;
            v9 = v16 - v17;
            *a1 = 1;
            v96 = v8;
            goto LABEL_19;
          case 1:
            sub_474790(&v86, &v87, &v88, &v89);
            v18 = sub_473940(v86, v87, v88, v89, a2);
            a1[1] = v18;
            if ( !v18 )
            {
              v80 = -4;
              goto LABEL_6;
            }
            v96 >>= 3;
            v9 -= 3;
            *a1 = 6;
            break;
          case 2:
            v8 >>= 3;
            v96 = v8;
            v9 -= 3;
            *a1 = 3;
            goto LABEL_19;
          case 3:
            *a1 = 9;
            *(_DWORD *)(a2 + 24) = "invalid block type";
            a1[8] = v96 >> 3;
            v61 = v93;
            a1[7] = v9 - 3;
            *(_DWORD *)(a2 + 4) = v61;
            v80 = -3;
            goto LABEL_7;
          default:
            goto LABEL_19;
        }
        goto LABEL_18;
      case 1:
        if ( v9 >= 0x20 )
          goto LABEL_25;
        do
        {
          if ( !v93 )
          {
LABEL_100:
            a1[8] = v96;
LABEL_101:
            v60 = (char *)Src;
            a1[7] = v9;
            v13 = &v60[-*(_DWORD *)a2];
            *(_DWORD *)a2 = v60;
            *(_DWORD *)(a2 + 4) = 0;
            v80 = a3;
            goto LABEL_8;
          }
          --v93;
          v19 = *(unsigned __int8 *)Src << v9;
          Src = (char *)Src + 1;
          v9 += 8;
          v8 |= v19;
          a3 = 0;
          v96 = v8;
        }
        while ( v9 < 0x20 );
LABEL_25:
        v20 = (unsigned __int16)v8;
        if ( ~v8 >> 16 != (unsigned __int16)v8 )
        {
          *a1 = 9;
          *(_DWORD *)(a2 + 24) = "invalid stored block lengths";
          v80 = -3;
LABEL_6:
          v12 = v93;
          a1[8] = v96;
          a1[7] = v9;
          *(_DWORD *)(a2 + 4) = v12;
LABEL_7:
          v13 = (char *)Src - *(_DWORD *)a2;
          *(_DWORD *)a2 = Src;
LABEL_8:
          *(_DWORD *)(a2 + 8) += v13;
          a1[13] = (int)v95;
          return sub_4747C0(a1, a2, v80);
        }
        v8 = 0;
        v9 = 0;
        a1[1] = v20;
        v96 = 0;
        if ( v20 )
          *a1 = 2;
        else
          *a1 = a1[6] != 0 ? 7 : 0;
LABEL_19:
        v11 = *a1;
        if ( (unsigned int)*a1 > 9 )
        {
LABEL_5:
          v80 = -2;
          goto LABEL_6;
        }
        v10 = v91;
        continue;
      case 2:
        if ( !v93 )
          goto LABEL_100;
        if ( v10 )
          goto LABEL_47;
        v21 = (char *)a1[11];
        if ( v95 == v21 )
        {
          v22 = a1[12];
          v23 = a1[10];
          if ( v23 != v22 )
          {
            v95 = (char *)a1[10];
            if ( v23 >= v22 )
            {
              v24 = (int)&v21[-v23];
              v91 = (unsigned int)&v21[-v23];
            }
            else
            {
              v24 = v22 - v23 - 1;
              v91 = v24;
            }
            if ( v24 )
              goto LABEL_47;
          }
        }
        a1[13] = (int)v95;
        v25 = sub_4747C0(a1, a2, a3);
        v26 = a1[12];
        v97 = v25;
        v27 = (char *)a1[13];
        v95 = v27;
        if ( (unsigned int)v27 >= v26 )
        {
          v91 = a1[11] - (_DWORD)v27;
          v28 = v91;
        }
        else
        {
          v28 = v26 - (_DWORD)v27 - 1;
          v91 = v28;
        }
        if ( v27 == (char *)a1[11] )
        {
          v29 = a1[10];
          if ( v29 != v26 )
          {
            v95 = (char *)a1[10];
            if ( v29 >= v26 )
              v28 = a1[11] - v29;
            else
              v28 = v26 - v29 - 1;
            v91 = v28;
          }
        }
        if ( v28 )
        {
LABEL_47:
          v30 = a1[1];
          a3 = 0;
          Size = v30;
          if ( v30 > v93 )
          {
            v30 = v93;
            Size = v93;
          }
          if ( v30 > v91 )
            Size = v91;
          memcpy(v95, Src, Size);
          Src = (char *)Src + Size;
          v93 -= Size;
          v95 += Size;
          v91 -= Size;
          v31 = a1[1] == Size;
          a1[1] -= Size;
          if ( v31 )
            *a1 = a1[6] != 0 ? 7 : 0;
LABEL_18:
          v8 = v96;
          goto LABEL_19;
        }
        v62 = (char *)Src;
        v63 = v93;
        a1[8] = v96;
        a1[7] = v9;
        v13 = &v62[-*(_DWORD *)a2];
        *(_DWORD *)a2 = v62;
        *(_DWORD *)(a2 + 4) = v63;
        v80 = v97;
        goto LABEL_8;
      case 3:
        if ( v9 >= 0xE )
          goto LABEL_56;
        do
        {
          if ( !v93 )
            goto LABEL_106;
          --v93;
          v32 = *(unsigned __int8 *)Src << v9;
          Src = (char *)Src + 1;
          v9 += 8;
          v8 |= v32;
          a3 = 0;
          v96 = v8;
        }
        while ( v9 < 0xE );
LABEL_56:
        v33 = v8 & 0x3FFF;
        v34 = v33 & 0x1F;
        a1[1] = v33;
        if ( v34 > 0x1D || (v35 = (v33 >> 5) & 0x1F, v35 > 0x1D) )
        {
          *a1 = 9;
          *(_DWORD *)(a2 + 24) = "too many length or distance symbols";
LABEL_109:
          v66 = v93;
          a1[8] = v96;
          v67 = (char *)Src;
          a1[7] = v9;
          *(_DWORD *)(a2 + 8) += &v67[-*(_DWORD *)a2];
          *(_DWORD *)a2 = v67;
          *(_DWORD *)(a2 + 4) = v66;
          a1[13] = (int)v95;
          return sub_4747C0(a1, a2, -3);
        }
        v36 = (*(int (__cdecl **)(_DWORD, unsigned int, int))(a2 + 32))(*(_DWORD *)(a2 + 40), v35 + v34 + 258, 4);
        a1[3] = v36;
        if ( !v36 )
          goto LABEL_107;
        v96 >>= 14;
        v8 = v96;
        v9 -= 14;
        a1[2] = 0;
        *a1 = 4;
LABEL_60:
        if ( a1[2] < ((unsigned int)a1[1] >> 10) + 4 )
        {
          while ( v9 >= 3 )
          {
LABEL_64:
            *(_DWORD *)(a1[3] + 4 * dword_4A5C50[a1[2]++]) = v8 & 7;
            v8 = v96 >> 3;
            v9 -= 3;
            v96 >>= 3;
            if ( a1[2] >= ((unsigned int)a1[1] >> 10) + 4 )
              goto LABEL_65;
          }
          while ( v93 )
          {
            --v93;
            v37 = *(unsigned __int8 *)Src << v9;
            Src = (char *)Src + 1;
            v9 += 8;
            v8 |= v37;
            a3 = 0;
            v96 = v8;
            if ( v9 >= 3 )
              goto LABEL_64;
          }
          goto LABEL_106;
        }
LABEL_65:
        while ( (unsigned int)a1[2] < 0x13 )
          *(_DWORD *)(a1[3] + 4 * dword_4A5C50[a1[2]++]) = 0;
        v78 = a1[9];
        v77 = a1[3];
        a1[4] = 7;
        Size = sub_474570(v77, a1 + 4, a1 + 5, v78, a2);
        if ( Size )
        {
          (*(void (__cdecl **)(_DWORD, int))(a2 + 36))(*(_DWORD *)(a2 + 40), a1[3]);
          if ( Size == -3 )
            *a1 = 9;
          v68 = v93;
          a1[8] = v96;
          a1[7] = v9;
          *(_DWORD *)(a2 + 4) = v68;
          v13 = (char *)Src - *(_DWORD *)a2;
          *(_DWORD *)a2 = Src;
          v80 = Size;
          goto LABEL_8;
        }
        a1[2] = 0;
        v8 = v96;
        *a1 = 5;
LABEL_69:
        if ( a1[2] < (((unsigned int)a1[1] >> 5) & 0x1F) + (a1[1] & 0x1F) + 258 )
        {
          while ( 1 )
          {
            v38 = a1[4];
            if ( v9 < v38 )
              break;
LABEL_75:
            v40 = a1[5] + 8 * (v8 & dword_4B4BF8[v38]);
            v41 = *(unsigned __int8 *)(v40 + 1);
            v42 = *(_DWORD *)(v40 + 4);
            Size = v41;
            v84 = v42;
            if ( v42 >= 0x10 )
            {
              if ( v42 == 18 )
                v90 = 7;
              else
                v90 = v42 - 14;
              v91 = 8 * (v42 == 18) + 3;
              v85 = v90 + Size;
              if ( v9 < v90 + Size )
              {
                while ( v93 )
                {
                  --v93;
                  v43 = *(unsigned __int8 *)Src << v9;
                  Src = (char *)Src + 1;
                  v9 += 8;
                  v8 |= v43;
                  a3 = 0;
                  v96 = v8;
                  if ( v9 >= v85 )
                    goto LABEL_83;
                }
                a1[8] = v96;
                goto LABEL_101;
              }
LABEL_83:
              v44 = v8 >> Size;
              v91 += v44 & dword_4B4BF8[v90];
              v9 -= Size + v90;
              v45 = a1[2];
              v96 = v44 >> v90;
              if ( v45 + v91 > (((unsigned int)a1[1] >> 5) & 0x1F) + (a1[1] & 0x1F) + 258 )
                goto LABEL_114;
              if ( v84 == 16 )
              {
                if ( !v45 )
                {
LABEL_114:
                  (*(void (__cdecl **)(_DWORD, int))(a2 + 36))(*(_DWORD *)(a2 + 40), a1[3]);
                  v69 = (char *)Src;
                  v70 = v93;
                  *a1 = 9;
                  *(_DWORD *)(a2 + 24) = "invalid bit length repeat";
                  a1[8] = v96;
                  a1[7] = v9;
                  *(_DWORD *)(a2 + 8) += &v69[-*(_DWORD *)a2];
                  *(_DWORD *)(a2 + 4) = v70;
                  *(_DWORD *)a2 = v69;
                  a1[13] = (int)v95;
                  return sub_4747C0(a1, a2, -3);
                }
                v46 = *(_DWORD *)(a1[3] + 4 * v45 - 4);
              }
              else
              {
                v46 = 0;
              }
              do
              {
                *(_DWORD *)(a1[3] + 4 * v45++) = v46;
                --v91;
              }
              while ( v91 );
              a1[2] = v45;
            }
            else
            {
              v9 -= v41;
              v96 = v8 >> v41;
              *(_DWORD *)(a1[3] + 4 * a1[2]++) = v42;
            }
            if ( a1[2] >= (((unsigned int)a1[1] >> 5) & 0x1F) + (a1[1] & 0x1F) + 258 )
              goto LABEL_91;
            v8 = v96;
          }
          while ( v93 )
          {
            --v93;
            v39 = *(unsigned __int8 *)Src << v9;
            v38 = a1[4];
            v9 += 8;
            a3 = 0;
            v8 |= v39;
            Src = (char *)Src + 1;
            v96 = v8;
            if ( v9 >= v38 )
              goto LABEL_75;
          }
LABEL_106:
          v64 = (char *)Src;
          a1[8] = v96;
          a1[7] = v9;
          *(_DWORD *)(a2 + 8) += &v64[-*(_DWORD *)a2];
          *(_DWORD *)a2 = v64;
          *(_DWORD *)(a2 + 4) = 0;
          a1[13] = (int)v95;
          return sub_4747C0(a1, a2, a3);
        }
LABEL_91:
        v47 = a1[1];
        v79 = a1[9];
        v76 = a1[3];
        a1[5] = 0;
        v91 = 9;
        v90 = 6;
        v48 = sub_474610((v47 & 0x1F) + 257, ((v47 >> 5) & 0x1F) + 1, v76, &v91, &v90, &v82, &v83, v79, a2);
        v49 = a1[3];
        v50 = *(void (__cdecl **)(_DWORD, int))(a2 + 36);
        Size = v48;
        v50(*(_DWORD *)(a2 + 40), v49);
        if ( Size )
        {
          if ( Size == -3 )
            *a1 = 9;
          v71 = v93;
          a1[8] = v96;
          v72 = (char *)Src;
          a1[7] = v9;
          *(_DWORD *)(a2 + 4) = v71;
          v81 = Size;
          *(_DWORD *)(a2 + 8) += &v72[-*(_DWORD *)a2];
          *(_DWORD *)a2 = v72;
          a1[13] = (int)v95;
          return sub_4747C0(a1, a2, v81);
        }
        v51 = sub_473940(v91, v90, v82, v83, a2);
        if ( !v51 )
        {
LABEL_107:
          v65 = v93;
          a1[8] = v96;
          a1[7] = v9;
          *(_DWORD *)(a2 + 4) = v65;
          v80 = -4;
          goto LABEL_7;
        }
        a1[1] = v51;
        *a1 = 6;
LABEL_94:
        v52 = v93;
        a1[8] = v96;
        v53 = (char *)Src;
        a1[7] = v9;
        *(_DWORD *)(a2 + 4) = v52;
        *(_DWORD *)(a2 + 8) += &v53[-*(_DWORD *)a2];
        *(_DWORD *)a2 = v53;
        a1[13] = (int)v95;
        v54 = sub_473980(a1, a2, a3);
        if ( v54 == 1 )
        {
          a3 = 0;
          sub_473FF0(a1[1], a2);
          v55 = *(_DWORD *)(a2 + 4);
          v56 = a1[8];
          v9 = a1[7];
          Src = *(void **)a2;
          v57 = a1[12];
          v93 = v55;
          v58 = (char *)a1[13];
          v96 = v56;
          v95 = v58;
          if ( (unsigned int)v58 >= v57 )
            v59 = a1[11] - (_DWORD)v58;
          else
            v59 = v57 - (_DWORD)v58 - 1;
          v31 = a1[6] == 0;
          v91 = v59;
          if ( v31 )
          {
            *a1 = 0;
            v8 = v56;
            goto LABEL_19;
          }
          *a1 = 7;
LABEL_119:
          a1[13] = (int)v95;
          v54 = sub_4747C0(a1, a2, a3);
          v95 = (char *)a1[13];
          if ( (char *)a1[12] == v95 )
          {
            *a1 = 8;
LABEL_123:
            v75 = v93;
            a1[8] = v96;
            a1[7] = v9;
            *(_DWORD *)(a2 + 4) = v75;
            v80 = 1;
            goto LABEL_7;
          }
          v73 = v93;
          a1[8] = v96;
          a1[7] = v9;
          *(_DWORD *)(a2 + 4) = v73;
          v74 = (char *)Src - *(_DWORD *)a2;
          *(_DWORD *)a2 = Src;
          *(_DWORD *)(a2 + 8) += v74;
          a1[13] = (int)v95;
        }
        return sub_4747C0(a1, a2, v54);
      case 4:
        goto LABEL_60;
      case 5:
        goto LABEL_69;
      case 6:
        goto LABEL_94;
      case 7:
        goto LABEL_119;
      case 8:
        goto LABEL_123;
      case 9:
        goto LABEL_109;
      default:
        goto LABEL_5;
    }
  }
}
