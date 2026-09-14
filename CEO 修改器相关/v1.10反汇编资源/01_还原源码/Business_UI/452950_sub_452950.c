// 函数 0x452950  sub_452950  size=0x913  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_452950(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // eax
  char *v4; // edx
  char v5; // cl
  char *v6; // eax
  char *v7; // edx
  char v8; // cl
  int v9; // ecx
  double v10; // st6
  signed int v11; // eax
  double v12; // st5
  int v13; // esi
  double v14; // st4
  double v15; // st7
  int v16; // esi
  char *v17; // edi
  char *v18; // eax
  signed int v19; // ecx
  signed int v20; // eax
  int v21; // edx
  char *v22; // eax
  double v23; // st3
  int v24; // ecx
  double v25; // st6
  double v26; // st5
  double v27; // st3
  double v28; // st7
  double v29; // st4
  double v30; // st3
  int v31; // ecx
  double v32; // st3
  double v33; // st2
  bool v34; // zf
  char *v35; // eax
  double v36; // st3
  double v37; // st5
  int v38; // ebx
  int v39; // eax
  int result; // eax
  int v41; // eax
  int v42; // eax
  double v43; // [esp+14h] [ebp-17Ch]
  double v44; // [esp+1Ch] [ebp-174h]
  double v45; // [esp+24h] [ebp-16Ch]
  int v46; // [esp+2Ch] [ebp-164h]
  int v47; // [esp+30h] [ebp-160h]
  int v48; // [esp+34h] [ebp-15Ch]
  int v49; // [esp+38h] [ebp-158h]
  int v50; // [esp+3Ch] [ebp-154h]
  int v51; // [esp+40h] [ebp-150h]
  int v52; // [esp+44h] [ebp-14Ch]
  int v53; // [esp+48h] [ebp-148h]
  int v54; // [esp+4Ch] [ebp-144h]
  int v55; // [esp+50h] [ebp-140h]
  int v56; // [esp+54h] [ebp-13Ch]
  int v57; // [esp+58h] [ebp-138h]
  int v58; // [esp+5Ch] [ebp-134h]
  int v59; // [esp+60h] [ebp-130h]
  int v60; // [esp+64h] [ebp-12Ch]
  int v61; // [esp+68h] [ebp-128h]
  int v62; // [esp+6Ch] [ebp-124h]
  int v63; // [esp+6Ch] [ebp-124h]
  int v64; // [esp+70h] [ebp-120h]
  size_t v65; // [esp+70h] [ebp-120h]
  int v66; // [esp+74h] [ebp-11Ch]
  int v67; // [esp+74h] [ebp-11Ch]
  int v68; // [esp+78h] [ebp-118h]
  int v69; // [esp+78h] [ebp-118h]
  signed int v70; // [esp+80h] [ebp-110h]
  int v71; // [esp+80h] [ebp-110h]
  double v72; // [esp+84h] [ebp-10Ch]
  char Buffer[256]; // [esp+8Ch] [ebp-104h] BYREF

  v1 = *(_DWORD *)dword_870814 + 72 * dword_8BE038;
  v49 = v1;
  sub_47FF50(v1);
  _itoa(*(_DWORD *)(v1 + 24), Buffer, 10);
  sub_47FF50(Buffer);
  v2 = 0;
  sub_4810E0(1);
  sub_4810E0(1);
  sub_452650();
  if ( dword_8BE040 )
  {
    v3 = 288 * dword_8BE040 + dword_8BF588 + 42940;
    v4 = &Buffer[-v3];
    do
    {
      v5 = *(_BYTE *)v3;
      v4[v3] = *(_BYTE *)v3;
      ++v3;
    }
    while ( v5 );
  }
  else
  {
    v6 = (char *)(dword_8BF588 + 43228);
    v7 = &Buffer[-dword_8BF588 - 43228];
    do
    {
      v8 = *v6;
      v7[(_DWORD)v6] = *v6;
      ++v6;
    }
    while ( v8 );
  }
  sub_47FF50(Buffer);
  v9 = dword_8BF588;
  v10 = 0.0;
  v11 = *(_DWORD *)(dword_8BF588 + 880);
  v45 = 0.0;
  v12 = 0.0;
  v13 = 0;
  v72 = 0.0;
  v46 = 0;
  v44 = 0.0;
  v48 = 0;
  v14 = 0.0;
  v15 = 0.0;
  v47 = 0;
  v43 = 0.0;
  v66 = 0;
  v68 = 0;
  v62 = 0;
  v70 = v11;
  v64 = v11 + 10;
  if ( !__OFSUB__(v11, v11 + 10) )
  {
    v16 = 15552;
    v17 = (char *)&unk_8BDAE8 + 48 * v11;
    while ( 1 )
    {
      if ( v11 >= (int)dword_8BDA60 )
      {
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
      }
      else
      {
        v18 = (char *)&unk_4D10B8 + 189880 * *((_DWORD *)v17 - 2);
        *(_WORD *)(v16 + v9 - 2862) = word_87094E[*((__int16 *)v18 + 1)];
        sub_47FF50(v18 + 16);
        sub_438320(*((_DWORD *)v17 - 1), Buffer, 4);
        sub_47FF50(Buffer);
        sub_438320(*(_DWORD *)v17, Buffer, 4);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v17 + 1), Buffer, 4);
        sub_47FF50(Buffer);
        sub_438190((unsigned __int64)*((double *)v17 + 1), Buffer, 7);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v17 + 4), Buffer, 4);
        sub_47FF50(Buffer);
        sprintf(Buffer, "%7.0f", *((double *)v17 + 3));
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v17 + 8), Buffer, 4);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v17 + 9), Buffer, 4);
        sub_47FF50(Buffer);
      }
      v16 += 288;
      v17 += 48;
      if ( ++v70 >= v64 )
        break;
      v9 = dword_8BF588;
      v11 = v70;
    }
    v15 = 0.0;
    v1 = v49;
    v13 = 0;
    v10 = 0.0;
    v14 = 0.0;
    v12 = 0.0;
  }
  v19 = dword_8BDA60;
  v20 = 0;
  v21 = 0;
  v55 = 0;
  v56 = 0;
  v52 = 0;
  v50 = 0;
  v59 = 0;
  v54 = 0;
  v51 = 0;
  v57 = 0;
  v60 = 0;
  v58 = 0;
  v61 = 0;
  v53 = 0;
  if ( (int)dword_8BDA60 >= 2 )
  {
    v65 = ((dword_8BDA60 - 2) >> 1) + 1;
    v22 = (char *)&unk_8BDAEC;
    v71 = 2 * v65;
    do
    {
      v60 += *(_DWORD *)v22;
      v23 = (double)*(int *)v22;
      v51 += *((_DWORD *)v22 + 3);
      v24 = *((_DWORD *)v22 + 7);
      v59 += v24;
      v25 = v10 + *(double *)(v22 + 4) * v23;
      v26 = v12 + v23;
      v27 = (double)*((int *)v22 + 3);
      v55 += v24;
      v53 += *((_DWORD *)v22 + 10);
      v28 = v15 + *(double *)(v22 + 20) * v27;
      v61 += *((_DWORD *)v22 + 11);
      v58 += *((_DWORD *)v22 + 12);
      v29 = v14 + v27;
      v52 += v24 * *((_DWORD *)v22 + 8);
      v21 += *((_DWORD *)v22 - 2);
      v13 += *((_DWORD *)v22 - 1);
      v57 += *((_DWORD *)v22 + 15);
      v30 = (double)*((int *)v22 + 12);
      v31 = *((_DWORD *)v22 + 19);
      v54 += v31;
      v10 = v25 + *(double *)(v22 + 52) * v30;
      v12 = v26 + v30;
      v32 = (double)*((int *)v22 + 15);
      v33 = *(double *)(v22 + 68);
      v50 += v31 * *((_DWORD *)v22 + 20);
      v56 += v31;
      v22 += 96;
      v34 = v65-- == 1;
      v15 = v28 + v33 * v32;
      v14 = v29 + v32;
    }
    while ( !v34 );
    v19 = dword_8BDA60;
    v43 = v14;
    v20 = v71;
    v1 = v49;
    v44 = v15;
    v72 = v12;
    v45 = v10;
  }
  if ( v20 < v19 )
  {
    v35 = (char *)&unk_8BDAE0 + 48 * v20;
    v46 = *((_DWORD *)v35 + 1);
    v2 = *((_DWORD *)v35 + 10);
    v48 = *((_DWORD *)v35 + 2);
    v36 = (double)*((int *)v35 + 3);
    v47 = *((_DWORD *)v35 + 3);
    v66 = *((_DWORD *)v35 + 6);
    v62 = v2;
    v45 = v10 + *((double *)v35 + 2) * v36;
    v72 = v12 + v36;
    v37 = (double)v66;
    v44 = v15 + *((double *)v35 + 4) * v37;
    v68 = v2 * *((_DWORD *)v35 + 11);
    v43 = v37 + v14;
  }
  v63 = v56 + v55 + v62;
  v69 = v50 + v52 + v68;
  v38 = v54 + v59 + v2;
  v67 = v57 + v51 + v66;
  sub_438320(v46 + v53 + v21, Buffer, 4);
  sub_47FF50(Buffer);
  sub_438320(v48 + v61 + v13, Buffer, 4);
  sub_47FF50(Buffer);
  sub_438320(v47 + v58 + v60, Buffer, 4);
  sub_47FF50(Buffer);
  if ( 0.0 == v72 )
    strcpy(Buffer, "---");
  else
    sub_438190((unsigned __int64)(v45 / v72), Buffer, 9);
  sub_47FF50(Buffer);
  sub_438320(v67, Buffer, 4);
  sub_47FF50(Buffer);
  if ( 0.0 == v43 )
    strcpy(Buffer, "---");
  else
    sub_438190((unsigned __int64)(v44 / v43), Buffer, 9);
  sub_47FF50(Buffer);
  sub_438320(v38, Buffer, 4);
  sub_47FF50(Buffer);
  if ( v63 )
  {
    v39 = v69 / v63;
    if ( !dword_8BE03C )
      v39 /= *(int *)(v1 + 24);
    sub_438320(v39, Buffer, 4);
  }
  else
  {
    strcpy(Buffer, "---");
  }
  result = sub_47FF50(Buffer);
  if ( a1 )
  {
    v41 = sub_464D00(228, 456, 575, 517);
    sub_47C950(v41);
    v42 = sub_464D00(598, 451, 668, 521);
    return sub_47C950(v42);
  }
  return result;
}
