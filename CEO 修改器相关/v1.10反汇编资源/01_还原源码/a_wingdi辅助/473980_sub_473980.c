// 函数 0x473980  sub_473980  size=0x639  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_473980(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // ecx
  unsigned int v5; // ebx
  unsigned int v7; // edx
  _BYTE *v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned __int8 *v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned __int8 *v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  _DWORD *v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned __int8 *v46; // ecx
  int v47; // eax
  int v48; // [esp-4h] [ebp-28h]
  _BYTE *v49; // [esp+10h] [ebp-14h]
  unsigned int v50; // [esp+14h] [ebp-10h]
  unsigned __int8 *v51; // [esp+14h] [ebp-10h]
  unsigned int v52; // [esp+14h] [ebp-10h]
  unsigned int v53; // [esp+14h] [ebp-10h]
  unsigned int v54; // [esp+14h] [ebp-10h]
  unsigned int v55; // [esp+18h] [ebp-Ch]
  unsigned int v56; // [esp+18h] [ebp-Ch]
  unsigned int v57; // [esp+18h] [ebp-Ch]
  unsigned int v58; // [esp+1Ch] [ebp-8h]
  _DWORD *v59; // [esp+20h] [ebp-4h]
  unsigned int v60; // [esp+2Ch] [ebp+8h]
  unsigned __int8 *v61; // [esp+30h] [ebp+Ch]

  v4 = (_DWORD *)a1[1];
  v5 = a1[7];
  v7 = a2[1];
  v61 = (unsigned __int8 *)*a2;
  v58 = v7;
  v8 = (_BYTE *)a1[13];
  v60 = a1[8];
  v9 = a1[12];
  v59 = v4;
  if ( (unsigned int)v8 >= v9 )
    v10 = a1[11] - (_DWORD)v8;
  else
    v10 = v9 - (_DWORD)v8 - 1;
  v11 = *v4;
  v55 = v10;
  while ( 2 )
  {
    switch ( v11 )
    {
      case 0:
        if ( v10 >= 0x102 && v58 >= 0xA )
        {
          a1[8] = v60;
          a1[7] = v5;
          a2[1] = v58;
          v12 = &v61[-*a2];
          *a2 = v61;
          a2[2] += v12;
          a1[13] = v8;
          v13 = sub_4748C0(*((unsigned __int8 *)v59 + 16), *((unsigned __int8 *)v59 + 17), v59[5], v59[6], a1, a2);
          v5 = a1[7];
          v61 = (unsigned __int8 *)*a2;
          v58 = a2[1];
          v8 = (_BYTE *)a1[13];
          v60 = a1[8];
          v14 = a1[12];
          a3 = v13;
          v15 = (unsigned int)v8 >= v14 ? a1[11] - (_DWORD)v8 : v14 - (_DWORD)v8 - 1;
          v55 = v15;
          if ( v13 )
          {
            *v59 = 2 * (v13 != 1) + 7;
            v10 = v15;
            goto LABEL_85;
          }
        }
        v59[3] = *((unsigned __int8 *)v59 + 16);
        v59[2] = v59[5];
        *v59 = 1;
        goto LABEL_14;
      case 1:
LABEL_14:
        v16 = v59[3];
        v50 = v16;
        if ( v5 >= v16 )
          goto LABEL_17;
        do
        {
          if ( !v58 )
            goto LABEL_89;
          --v58;
          v17 = *v61++ << v5;
          v5 += 8;
          v60 |= v17;
          v16 = v50;
          a3 = 0;
        }
        while ( v5 < v50 );
LABEL_17:
        v18 = (unsigned __int8 *)(v59[2] + 8 * (v60 & dword_4B4BF8[v16]));
        v60 >>= v18[1];
        v19 = v18;
        v51 = v18;
        v5 -= v18[1];
        v20 = *v18;
        if ( !v20 )
        {
          v59[2] = *((_DWORD *)v19 + 1);
          *v59 = 6;
          v10 = v55;
          goto LABEL_85;
        }
        if ( (v20 & 0x10) != 0 )
        {
          v59[2] = v20 & 0xF;
          v59[1] = *((_DWORD *)v51 + 1);
          v10 = v55;
          *v59 = 2;
          goto LABEL_85;
        }
        if ( (v20 & 0x40) == 0 )
          goto LABEL_22;
        if ( (v20 & 0x20) == 0 )
        {
          *v59 = 9;
          a2[6] = "invalid literal/length code";
          goto LABEL_92;
        }
        *v59 = 7;
        v10 = v55;
        goto LABEL_85;
      case 2:
        v21 = v59[2];
        v52 = v21;
        if ( v5 >= v21 )
          goto LABEL_28;
        do
        {
          if ( !v58 )
            goto LABEL_89;
          --v58;
          v22 = *v61++ << v5;
          v5 += 8;
          v60 |= v22;
          v21 = v52;
          a3 = 0;
        }
        while ( v5 < v52 );
LABEL_28:
        v23 = v60 & dword_4B4BF8[v21];
        v24 = v59;
        v59[1] += v23;
        v60 >>= v52;
        v5 -= v52;
        v59[3] = *((unsigned __int8 *)v59 + 17);
        v59[2] = v59[6];
        *v59 = 3;
LABEL_30:
        v25 = v24[3];
        v53 = v25;
        if ( v5 >= v25 )
        {
LABEL_33:
          v27 = (unsigned __int8 *)(v59[2] + 8 * (v60 & dword_4B4BF8[v25]));
          v60 >>= v27[1];
          v28 = v27[1];
          v51 = v27;
          v20 = *v27;
          v5 -= v28;
          if ( (v20 & 0x10) != 0 )
          {
            v59[2] = v20 & 0xF;
            v59[3] = *((_DWORD *)v51 + 1);
            v10 = v55;
            *v59 = 4;
            goto LABEL_85;
          }
          if ( (v20 & 0x40) != 0 )
          {
            *v59 = 9;
            a2[6] = "invalid distance code";
LABEL_92:
            a1[8] = v60;
            a1[7] = v5;
            a2[1] = v58;
            v48 = -3;
LABEL_88:
            a2[2] += &v61[-*a2];
            *a2 = v61;
            a1[13] = v8;
            return sub_4747C0(a1, a2, v48);
          }
LABEL_22:
          v59[3] = v20;
          v59[2] = &v51[8 * *((_DWORD *)v51 + 1)];
          v10 = v55;
LABEL_85:
          v11 = *v59;
          if ( *v59 > 9u )
          {
LABEL_86:
            v48 = -2;
LABEL_87:
            a1[8] = v60;
            a1[7] = v5;
            a2[1] = v58;
            goto LABEL_88;
          }
          continue;
        }
        while ( v58 )
        {
          --v58;
          v26 = *v61++ << v5;
          v5 += 8;
          v60 |= v26;
          v25 = v53;
          a3 = 0;
          if ( v5 >= v53 )
            goto LABEL_33;
        }
LABEL_89:
        a1[8] = v60;
        a1[7] = v5;
        a2[1] = 0;
LABEL_90:
        v46 = &v61[-*a2];
        *a2 = v61;
        a2[2] += v46;
        a1[13] = v8;
        return sub_4747C0(a1, a2, a3);
      case 3:
        v24 = v59;
        goto LABEL_30;
      case 4:
        v29 = v59[2];
        v54 = v29;
        if ( v5 >= v29 )
          goto LABEL_40;
        do
        {
          if ( !v58 )
            goto LABEL_89;
          --v58;
          v30 = *v61++ << v5;
          v5 += 8;
          v60 |= v30;
          v29 = v54;
          a3 = 0;
        }
        while ( v5 < v54 );
LABEL_40:
        v59[3] += v60 & dword_4B4BF8[v29];
        v60 >>= v54;
        v5 -= v54;
        *v59 = 5;
LABEL_41:
        v31 = v59[3];
        if ( (unsigned int)&v8[-a1[10]] >= v31 )
          v49 = &v8[-v31];
        else
          v49 = &v8[a1[11] - a1[10] - v59[3]];
        v32 = v59;
        v10 = v55;
        if ( v59[1] )
        {
          while ( 1 )
          {
            if ( !v10 )
            {
              if ( v8 != (_BYTE *)a1[11]
                || (v33 = a1[12], v34 = a1[10], v33 == v34)
                || ((v8 = (_BYTE *)a1[10], v34 >= v33) ? (v10 = a1[11] - v34) : (v10 = v33 - v34 - 1), !v10) )
              {
                a1[13] = v8;
                v35 = sub_4747C0(a1, a2, a3);
                v8 = (_BYTE *)a1[13];
                a3 = v35;
                v36 = a1[12];
                if ( (unsigned int)v8 >= v36 )
                  v10 = a1[11] - (_DWORD)v8;
                else
                  v10 = v36 - (_DWORD)v8 - 1;
                v56 = v10;
                if ( v8 == (_BYTE *)a1[11] )
                {
                  v37 = a1[10];
                  v38 = a1[12];
                  if ( v38 == v37 )
                  {
                    v10 = v56;
                  }
                  else
                  {
                    v8 = (_BYTE *)a1[10];
                    if ( v37 >= v38 )
                      v10 = a1[11] - v37;
                    else
                      v10 = v38 - v37 - 1;
                  }
                }
                if ( !v10 )
                  break;
              }
            }
            *v8 = *v49;
            --v10;
            ++v8;
            a3 = 0;
            ++v49;
            v55 = v10;
            if ( v49 == (_BYTE *)a1[11] )
              v49 = (_BYTE *)a1[10];
            v32 = v59;
            if ( !--v59[1] )
              goto LABEL_84;
          }
LABEL_93:
          a1[8] = v60;
          a1[7] = v5;
          a2[1] = v58;
          goto LABEL_90;
        }
LABEL_84:
        *v32 = 0;
        goto LABEL_85;
      case 5:
        goto LABEL_41;
      case 6:
        if ( !v10 )
        {
          if ( v8 != (_BYTE *)a1[11]
            || (v39 = a1[12], v40 = a1[10], v39 == v40)
            || ((v8 = (_BYTE *)a1[10], v40 >= v39) ? (v10 = a1[11] - v40) : (v10 = v39 - v40 - 1), !v10) )
          {
            a1[13] = v8;
            v41 = sub_4747C0(a1, a2, a3);
            v8 = (_BYTE *)a1[13];
            a3 = v41;
            v42 = a1[12];
            if ( (unsigned int)v8 >= v42 )
              v10 = a1[11] - (_DWORD)v8;
            else
              v10 = v42 - (_DWORD)v8 - 1;
            v57 = v10;
            if ( v8 == (_BYTE *)a1[11] )
            {
              v43 = a1[10];
              v44 = a1[12];
              if ( v44 == v43 )
              {
                v10 = v57;
              }
              else
              {
                v8 = (_BYTE *)a1[10];
                if ( v43 >= v44 )
                  v10 = a1[11] - v43;
                else
                  v10 = v44 - v43 - 1;
              }
            }
            if ( !v10 )
              goto LABEL_93;
          }
        }
        *v8 = *((_BYTE *)v59 + 8);
        v32 = v59;
        ++v8;
        --v10;
        a3 = 0;
        v55 = v10;
        goto LABEL_84;
      case 7:
        if ( v5 > 7 )
        {
          ++v58;
          v5 -= 8;
          --v61;
        }
        a1[13] = v8;
        v47 = sub_4747C0(a1, a2, a3);
        v8 = (_BYTE *)a1[13];
        if ( (_BYTE *)a1[12] != v8 )
        {
          a1[8] = v60;
          a1[7] = v5;
          a2[1] = v58;
          a2[2] += &v61[-*a2];
          *a2 = v61;
          a1[13] = v8;
          return sub_4747C0(a1, a2, v47);
        }
        *v59 = 8;
LABEL_99:
        a1[8] = v60;
        a1[7] = v5;
        a2[1] = v58;
        v48 = 1;
        goto LABEL_88;
      case 8:
        goto LABEL_99;
      case 9:
        v48 = -3;
        goto LABEL_87;
      default:
        goto LABEL_86;
    }
  }
}
