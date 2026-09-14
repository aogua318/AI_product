// 函数 0x421020  sub_421020  size=0xAFA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_421020(int *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  __int16 *v4; // edi
  int v5; // ecx
  int v6; // esi
  __int16 v7; // ax
  unsigned __int8 *v8; // esi
  int v9; // ebx
  int *v10; // edx
  int v11; // eax
  int *v12; // edx
  int v13; // eax
  int v14; // ecx
  double *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st7
  __int16 v19; // ax
  int v20; // eax
  __int16 v21; // ax
  int v22; // eax
  bool v23; // cc
  double v24; // st7
  double v25; // st6
  __int16 v26; // cx
  char v27; // al
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  BOOL v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // edi
  char v44; // al
  char *v45; // edi
  int v46; // ecx
  int i; // edi
  int v48; // ecx
  bool v49; // zf
  signed int v50; // eax
  const char *v51; // eax
  int v52; // edx
  const char *v53; // eax
  double v54; // st7
  int v55; // eax
  int v56; // edx
  char *v57; // ebx
  const char *v59; // eax
  int v60; // [esp+18h] [ebp-158h] BYREF
  double v61; // [esp+1Ch] [ebp-154h]
  int v62; // [esp+24h] [ebp-14Ch] BYREF
  int *v63; // [esp+28h] [ebp-148h]
  int v64; // [esp+2Ch] [ebp-144h] BYREF
  int v65; // [esp+30h] [ebp-140h]
  double *v66; // [esp+34h] [ebp-13Ch]
  int v67; // [esp+38h] [ebp-138h]
  int *v68; // [esp+3Ch] [ebp-134h]
  int v69; // [esp+40h] [ebp-130h]
  char *v70; // [esp+44h] [ebp-12Ch]
  int v71; // [esp+48h] [ebp-128h]
  int v72; // [esp+4Ch] [ebp-124h]
  int v73; // [esp+50h] [ebp-120h]
  int v74; // [esp+54h] [ebp-11Ch] BYREF
  int v75; // [esp+58h] [ebp-118h] BYREF
  int v76; // [esp+5Ch] [ebp-114h]
  int v77; // [esp+60h] [ebp-110h]
  int v78; // [esp+64h] [ebp-10Ch]
  int v79; // [esp+68h] [ebp-108h]
  char Buffer[256]; // [esp+6Ch] [ebp-104h] BYREF

  v68 = a1;
  v2 = sub_4656D0(&unk_4D0B94);
  v67 = v2;
  if ( v2 == -1 )
    return -1;
  v3 = *(_DWORD *)dword_87081C + 116 * a2;
  v4 = (__int16 *)(dword_4D0C84 + (_DWORD)a1 * dword_4D0C70);
  v5 = *(_DWORD *)dword_4D0C8C + 388 * *v4;
  v72 = *(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v3 + 1);
  v6 = v2 * dword_4D0B98;
  v7 = v4[1];
  v8 = (unsigned __int8 *)(dword_4D0BAC + v6);
  v9 = dword_4CCAAC + dword_4CCA98 * v7;
  *((_WORD *)v8 + 2) = v7;
  *((_WORD *)v8 + 3) = -1;
  v76 = v3;
  *((_WORD *)v8 + 4) = -1;
  LOBYTE(v3) = *(_BYTE *)(v3 + 1);
  v8[1] &= ~0x80u;
  LOBYTE(v7) = v8[1];
  *v8 = v3;
  *((_WORD *)v8 + 6) = (_WORD)v68;
  v10 = (int *)(v72 + 24);
  v8[3] = 0;
  *((_WORD *)v8 + 5) = -256;
  v68 = v10;
  *((_DWORD *)v8 + 5) = *v10;
  v8[1] = v7 ^ (v7 ^ *(_BYTE *)(v9 + 224)) & 0x7F;
  *((_WORD *)v8 + 14) = -1;
  *((_DWORD *)v4 + 26) = 0;
  *((_DWORD *)v4 + 27) = 0;
  *((_DWORD *)v4 + 28) = 0;
  *((_DWORD *)v4 + 29) = 0;
  *((_DWORD *)v4 + 30) = 0;
  *((_DWORD *)v4 + 31) = 0;
  v11 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v9 + 2 * *v8 + 240);
  v71 = v5;
  v70 = (char *)v11;
  v79 = v76 + 20;
  v66 = (double *)(v4 + 76);
  v12 = (int *)(v4 + 66);
  v77 = 0;
  v63 = (int *)(v4 + 66);
  v78 = v76 + 28;
  v69 = 4;
  do
  {
    if ( *(_WORD *)v79 != 0xFFFF )
    {
      v13 = *(_DWORD *)v78 * *(__int16 *)(v5 + 2 * *((char *)v4 + 128) + 140);
      v65 = *v12;
      v14 = v65 - v13;
      v73 = v13;
      v15 = v66;
      HIDWORD(v61) = v14;
      *v12 = v14;
      v16 = *v15;
      v17 = (double)SHIDWORD(v61) * v16 / (double)v65;
      *v15 = v17;
      v61 = v16 - v17;
      v77 += (int)(v61 * 256.0);
      v65 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v9 + 2 * *(__int16 *)v79 + 240);
      v73 /= 100;
      sub_415140(v65, v73);
      v18 = v61;
      *(_DWORD *)(v65 + 256) += v73;
      *((_DWORD *)v70 + 152) += (int)v18;
      v5 = v71;
      v12 = v63;
    }
    v78 += 4;
    ++v66;
    v79 += 2;
    ++v12;
    v49 = v69-- == 1;
    v63 = v12;
  }
  while ( !v49 );
  *((_DWORD *)v8 + 6) = 0;
  v19 = *(_WORD *)(v9 + 468);
  if ( v19 > 0 )
  {
    v20 = v4[100] * (*(_DWORD *)(v9 + 452) / v19) / 24;
    v77 += v20 << 8;
    *((_DWORD *)v8 + 6) += v20 << 8;
    *((_DWORD *)v70 + 177) += v20;
    v5 = v71;
  }
  v21 = *(_WORD *)(v9 + 470);
  if ( v21 > 0 )
  {
    v22 = v4[101] * (*(_DWORD *)(v9 + 456) / v21) / 24;
    v77 += v22 << 8;
    *((_DWORD *)v8 + 6) += v22 << 8;
    *((_DWORD *)v70 + 177) += v22;
    v5 = v71;
  }
  v23 = ++*((_DWORD *)v4 + 51) < 360;
  *((_DWORD *)v4 + 50) = 0;
  if ( v23 )
    v24 = (double)*(int *)(v5 + 8) / 360.0;
  else
    v24 = 0.0;
  v25 = (double)*(int *)(v5 + 220);
  v69 = *(__int16 *)(v5 + 2 * *((char *)v4 + 128) + 180);
  v26 = v67;
  v77 += (int)((v24 + v25 * (double)v69 / 100000.0) * 256.0);
  *((_DWORD *)v4 + 49) += v69;
  v4[65] = v26;
  sub_426B30(1);
  v27 = *(_BYTE *)(v72 + 12);
  if ( v27 == 2 )
  {
    v28 = sub_429240(&v60);
    v29 = v76;
    *((_DWORD *)v8 + 5) = v28;
    v30 = *(__int16 *)(v29 + 44);
    v31 = *((char *)v4 + 128);
    v78 = v60 * v30;
    v79 = 100 - v30;
    v32 = sub_427600(v31);
    v49 = *((_DWORD *)v8 + 5) == 0;
    v8[2] = (v78 + v79 * v32) / 100;
    if ( v49 )
    {
      sub_420B10(v67);
      v67 = -1;
    }
    v73 = ((char)v8[2] + 100)
        * (dword_4CCB9C
         * *((_DWORD *)v8 + 5)
         * dword_4D0AB4[*(unsigned __int8 *)(v76 + 1)]
         / dword_4CCBA0)
        / 200;
    v77 += (int)((double)v73 * 256.0);
  }
  else if ( v27 == 1 )
  {
    sub_426BF0(&v74, &v75);
    v9 = dword_4CCAAC + dword_4CCA98 * v4[1];
    sub_4198B0((_DWORD *)v9, v74, v75, &v64, &v62);
    v33 = *(char *)(v72 + 44) == *(char *)(*(_DWORD *)dword_4D0B64 + v62 * dword_4D0E80 + v64) / 3;
    v79 = 100;
    v34 = dword_4CCAF4 * (dword_4CCAF0 + dword_4CCAEC[0] * v33) + dword_4CCB00 * (dword_4CCAFC + dword_4CCAF8 * v33);
    v35 = 0;
    v49 = *(_WORD *)(v76 + 20) == 0xFFFF;
    v78 = 0;
    if ( !v49 )
    {
      v36 = *(__int16 *)(v76 + 44);
      v78 = v36 * *((char *)v4 + 184);
      v79 = 100 - v36;
      v35 = 1;
    }
    if ( *(__int16 *)(v76 + 2 * v35 + 44) > 0 )
    {
      v37 = *(__int16 *)(v76 + 2 * v35 + 44);
      v78 += v34 * v37;
      v79 -= v37;
    }
    v8[2] = (char)(v78 + v79 * sub_427600(*((char *)v4 + 128))) / 100;
    if ( *(_BYTE *)(v9 + 224) == 3 )
      v8[2] = 100;
  }
  else
  {
    v49 = *(_WORD *)(v76 + 20) == 0xFFFF;
    v78 = 0;
    v79 = 100;
    if ( !v49 )
    {
      v38 = *(__int16 *)(v76 + 44);
      v78 = v38 * *((char *)v4 + 184);
      v79 = 100 - v38;
    }
    if ( *(_WORD *)(v76 + 22) != 0xFFFF )
    {
      v39 = *(__int16 *)(v76 + 46);
      v78 += v39 * *((char *)v4 + 185);
      v79 -= v39;
    }
    if ( *(_WORD *)(v76 + 24) != 0xFFFF )
    {
      v40 = *(__int16 *)(v76 + 48);
      v78 += v40 * *((char *)v4 + 186);
      v79 -= v40;
    }
    if ( *(_WORD *)(v76 + 26) != 0xFFFF )
    {
      v41 = *(__int16 *)(v76 + 50);
      v78 += v41 * *((char *)v4 + 187);
      v79 -= v41;
    }
    v8[2] = (v78 + v79 * sub_427600(*((char *)v4 + 128))) / 100;
  }
  sub_426BF0(&v74, &v75);
  if ( *(__int16 *)(*(_DWORD *)(v9 + 120) + 2 * (v74 + v75 * *(_DWORD *)(v9 + 24))) / 3 == 7
    && *(_BYTE *)(v72 + 12) != 2 )
  {
    v8[2] = (char)v8[2] >> 1;
  }
  v42 = v76;
  *((_DWORD *)v8 + 4) = v77;
  v43 = *(unsigned __int8 *)(v42 + 1);
  v44 = *(_BYTE *)(v9 + 224);
  v45 = (char *)dword_870824 + 112 * v43;
  v70 = v45;
  if ( v44 < 7 )
  {
    v46 = *v8;
    v73 = v44;
    v49 = byte_4FF518[189880 * v44 + v46] == 0;
    v79 = -1;
    if ( v49 )
    {
      if ( v44 )
      {
        if ( byte_4FF518[189880 * dword_8703A0 + v46] )
        {
          v59 = (const char *)sub_436F10(3, v73);
          if ( v59 )
          {
            sprintf(Buffer, v59, v72);
            sub_419920((_DWORD *)v9, &v74, &v75);
            sub_437150(Buffer, *(char *)(v9 + 224), v74, v75);
          }
        }
      }
      else
      {
        v71 = 1;
        for ( i = 189880; i < 1329160; i += 189880 )
        {
          v48 = *v8;
          if ( byte_4FF518[v48 + i] )
          {
            if ( v79 == -1 )
              goto LABEL_45;
            v50 = sub_4640D0(v48) & 0x80000001;
            v49 = v50 == 0;
            if ( v50 < 0 )
              v49 = (((_BYTE)v50 - 1) | 0xFFFFFFFE) == -1;
            if ( !v49 )
LABEL_45:
              v79 = v71;
          }
          ++v71;
        }
        if ( v79 != -1 )
        {
          v51 = (const char *)sub_436F10(2, v79);
          if ( v51 )
          {
            sprintf(Buffer, v51, v72);
            sub_419920((_DWORD *)v9, &v74, &v75);
            sub_437150(Buffer, v79, v74, v75);
          }
        }
        v45 = v70;
      }
    }
  }
  sub_419920((_DWORD *)v9, &v74, &v75);
  if ( *((_DWORD *)v45 + 24) == -1 )
  {
    v52 = 189880 * *(char *)(v9 + 224);
    v73 = *(_DWORD *)dword_4D1088 + 2640;
    sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 2648), &byte_4D10C8[v52], v72);
    sub_42B930(v74, v75, *(char *)(v9 + 224), Buffer, v73);
    v53 = (const char *)sub_436F10(1, *(char *)(v9 + 224));
    if ( v53 )
    {
      sprintf(Buffer, v53, v72);
      sub_437150(Buffer, *(char *)(v9 + 224), v74, v75);
    }
  }
  v54 = (double)v77 * 0.00390625;
  byte_4FF518[189880 * *(char *)(v9 + 224) + *v8] = 1;
  sub_4330D0((char)v8[2], v54 / (double)*v68, *(char *)(v9 + 224));
  v55 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v74 >> 5) + (v75 >> 5) * dword_4C5DEC);
  v62 = v75 >> 5;
  v56 = v76;
  v64 = v74 >> 5;
  ++*(_DWORD *)(v55 + 4 * *v8 + 8784);
  v57 = (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v9 + 2 * *(unsigned __int8 *)(v56 + 1) + 240));
  sub_415060(v57, *v68, (char)v8[2], 1);
  sub_415CC0(v57, v77 >> 8);
  if ( *v8 == dword_4CDF88 && (char)v8[2] > 90 )
    dword_4CDFE4 = 100;
  return v67;
}
