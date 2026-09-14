// 函数 0x413de0  sub_413DE0  size=0xF05  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_413DE0()
{
  int v0; // eax
  int v1; // ebx
  int v2; // esi
  char *v3; // edi
  int v4; // edi
  int v5; // edi
  double *v6; // esi
  char v7; // al
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // esi
  char *v12; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // esi
  char *v17; // edi
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  int v21; // esi
  int v22; // ebx
  int v23; // edi
  int v24; // ebx
  char *v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // esi
  int v31; // ebx
  int v32; // edi
  int v33; // ebx
  int v34; // eax
  int v35; // esi
  int v36; // ebx
  int v37; // esi
  int v38; // edi
  int v39; // eax
  int v40; // ecx
  int v41; // ebx
  int v42; // esi
  int v43; // edi
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  int v47; // esi
  int v48; // edi
  int v49; // eax
  int v50; // ecx
  int v51; // ebx
  int v52; // esi
  int v53; // edi
  int v54; // eax
  int v55; // ecx
  int v56; // ebx
  int v57; // esi
  int v58; // edi
  int v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // edi
  int v64; // eax
  int v65; // ecx
  int v66; // ebx
  int v67; // edi
  int v68; // esi
  int v69; // eax
  _DWORD *v70; // ecx
  int v71; // ebx
  int v72; // esi
  double *v73; // edi
  int v74; // eax
  int v75; // ebx
  int v76; // edi
  int v77; // esi
  int v78; // eax
  int v79; // ecx
  int v80; // edi
  int v81; // esi
  int v82; // eax
  int result; // eax
  int v84; // et2
  int v85; // ebx
  int v86; // eax
  int v87; // ecx
  char *v88; // [esp+0h] [ebp-178h]
  int v89; // [esp+14h] [ebp-164h] BYREF
  int v90; // [esp+18h] [ebp-160h] BYREF
  int v91; // [esp+1Ch] [ebp-15Ch]
  int v92; // [esp+20h] [ebp-158h]
  _DWORD v93[20]; // [esp+24h] [ebp-154h] BYREF
  char Buffer[256]; // [esp+74h] [ebp-104h] BYREF

  if ( sub_4640D0() % 1000 < dword_4CCBF0 )
  {
    v0 = sub_465530(1);
    v1 = v0;
    if ( v0 != -1 )
    {
      v2 = dword_4CCAAC + v0 * dword_4CCA98;
      v3 = (char *)&unk_4D10B8 + 189880 * *(char *)(v2 + 224);
      v92 = *(_DWORD *)dword_4D1088 + 3696;
      sub_419920(&v90, &v89);
      v88 = v3 + 16;
      v4 = v92;
      sprintf(Buffer, (const char *const)(v92 + 8), v88, v2 + 204);
      sub_42B930(v90, v89, *(char *)(v2 + 224), Buffer, v4);
      sub_417F10(v1);
    }
  }
  if ( sub_4640D0() % 1000 < dword_4CCBF4 )
  {
    v5 = sub_4640D0() % 20;
    v6 = (double *)((char *)&unk_4D10B8 + 189880 * v5);
    v7 = *((_BYTE *)v6 + 1);
    if ( (v7 & 1) != 0 && (v7 & 2) != 0 )
    {
      v8 = *(_DWORD *)dword_4D1088 + 3784;
      v92 = sub_4640D0() % 11 + 5;
      sprintf(Buffer, (const char *const)(v8 + 8), v6 + 2, (int)((double)v92 * v6[1] / 100.0));
      sub_42B930(-1, -1, v5, Buffer, v8);
    }
  }
  if ( sub_4640D0() % 1000 < dword_4CCBF8 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = sub_465530(1);
      if ( v10 != -1 )
      {
        v11 = dword_4CCAAC + v10 * dword_4CCA98;
        if ( *(_WORD *)(v11 + 466) < *(_WORD *)(v11 + 474) )
          break;
      }
      if ( ++v9 >= 10 )
        goto LABEL_15;
    }
    v12 = (char *)&unk_4D10B8 + 189880 * *(char *)(v11 + 224);
    sub_418180(dword_4CCAAC + v10 * dword_4CCA98);
    v13 = *(_DWORD *)dword_4D1088 + 3872;
    sub_419920(&v90, &v89);
    sprintf(Buffer, (const char *const)(v13 + 8), v12 + 16, v11 + 204);
    sub_42B930(v90, v89, *(char *)(v11 + 224), Buffer, v13);
  }
LABEL_15:
  if ( sub_4640D0() % 1000 < dword_4CCBFC )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = sub_465530(1);
      if ( v15 != -1 )
      {
        v16 = dword_4CCAAC + v15 * dword_4CCA98;
        if ( *(_WORD *)(v16 + 464) < *(_WORD *)(v16 + 472) )
          break;
      }
      if ( ++v14 >= 10 )
        goto LABEL_22;
    }
    v17 = (char *)&unk_4D10B8 + 189880 * *(char *)(v16 + 224);
    sub_418140(dword_4CCAAC + v15 * dword_4CCA98);
    v18 = *(_DWORD *)dword_4D1088 + 3960;
    sub_419920(&v90, &v89);
    sprintf(Buffer, (const char *const)(v18 + 8), v17 + 16, v16 + 204);
    sub_42B930(v90, v89, *(char *)(v16 + 224), Buffer, v18);
  }
LABEL_22:
  if ( sub_4640D0() % 1000 < dword_4CCC00 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = sub_465530(0);
      if ( v20 != -1 )
      {
        v21 = dword_4C43DC + v20 * dword_4C43C8;
        if ( *(_WORD *)(v21 + 4) != 0xFFFF && *(_BYTE *)(v21 + 2) != 0xFF && *(_BYTE *)(v21 + 3) == 3 )
          break;
      }
      if ( ++v19 >= 1000 )
        goto LABEL_31;
    }
    v23 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v21 + 16);
    v92 = *(_DWORD *)(v21 + 8);
    v22 = v92;
    v24 = v22 * (sub_4640D0() % 20 + 10) / 100;
    v25 = (char *)&unk_4D10B8 + 189880 * *(char *)(v21 + 2);
    *(_DWORD *)(v21 + 8) = v24 + v92;
    v91 = (int)v25;
    v92 = *(_DWORD *)dword_4D1088 + 4048;
    sub_40D7C0((_DWORD *)v21, (int)&v90, (int)&v89);
    v26 = *(__int16 *)(v21 + 4);
    v27 = v92;
    sprintf(Buffer, (const char *const)(v92 + 8), v91 + 16, v23 + 204, *(_DWORD *)dword_870814 + 72 * v26, v24);
    sub_42B930(v90, v89, *(char *)(v23 + 224), Buffer, v27);
  }
LABEL_31:
  if ( sub_4640D0() % 1000 < dword_4CCC04 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = sub_465530(0);
      if ( v29 != -1 )
      {
        v30 = dword_4C43DC + v29 * dword_4C43C8;
        if ( *(_WORD *)(v30 + 4) != 0xFFFF && *(_BYTE *)(v30 + 2) != 0xFF && *(_BYTE *)(v30 + 3) == 3 )
          break;
      }
      if ( ++v28 >= 1000 )
        goto LABEL_40;
    }
    v32 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v30 + 16);
    v92 = *(_DWORD *)(v30 + 8);
    v31 = v92;
    v33 = v31 * (sub_4640D0() % 20 + 10) / 100;
    *(_DWORD *)(v30 + 8) = v92 - v33;
    v91 = (int)&unk_4D10B8 + 189880 * *(char *)(v30 + 2);
    v92 = *(_DWORD *)dword_4D1088 + 4136;
    sub_40D7C0((_DWORD *)v30, (int)&v90, (int)&v89);
    v34 = *(__int16 *)(v30 + 4);
    v35 = v92;
    sprintf(Buffer, (const char *const)(v92 + 8), v91 + 16, v32 + 204, *(_DWORD *)dword_870814 + 72 * v34, v33);
    sub_42B930(v90, v89, *(char *)(v32 + 224), Buffer, v35);
  }
LABEL_40:
  memset(v93, 0, sizeof(v93));
  v36 = -1;
  v37 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC08 )
  {
    v38 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v38) )
        {
          v39 = dword_4C43DC + v38 * dword_4C43C8;
          if ( *(_WORD *)(v39 + 4) != 0xFFFF
            && *(_BYTE *)(v39 + 2) != 0xFF
            && *(_BYTE *)(v39 + 3) == 3
            && *(_BYTE *)(v39 + 7) == 5 )
          {
            v40 = *(char *)(v39 + 2);
            if ( ++v93[v40] > v37 )
            {
              v36 = *(char *)(v39 + 2);
              v37 = v93[v36];
            }
          }
          if ( ++v91 >= dword_4C43D4 )
            break;
        }
        ++v38;
      }
      while ( v38 < dword_4C43CC );
      if ( v36 != -1 )
      {
        v92 = 10000 * v37;
        sub_42EDA0((double)(10000 * v37));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v41 = -1;
  v42 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC0C )
  {
    v43 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v43) )
        {
          v44 = dword_4C43DC + v43 * dword_4C43C8;
          if ( *(_WORD *)(v44 + 4) != 0xFFFF
            && *(_BYTE *)(v44 + 2) != 0xFF
            && *(_BYTE *)(v44 + 3) == 3
            && !*(_BYTE *)(v44 + 7) )
          {
            v45 = *(char *)(v44 + 2);
            if ( ++v93[v45] > v42 )
            {
              v41 = *(char *)(v44 + 2);
              v42 = v93[v41];
            }
          }
          if ( ++v91 > dword_4C43D4 )
            break;
        }
        ++v43;
      }
      while ( v43 < dword_4C43CC );
      if ( v41 != -1 )
      {
        v92 = 10000 * v42;
        sub_42EDA0((double)(10000 * v42));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v46 = -1;
  v47 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC10 )
  {
    v48 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v48) )
        {
          v49 = dword_4C43DC + v48 * dword_4C43C8;
          if ( *(_WORD *)(v49 + 4) != 0xFFFF
            && *(_BYTE *)(v49 + 2) != 0xFF
            && *(_BYTE *)(v49 + 3) == 3
            && *(_BYTE *)(v49 + 7) == 3 )
          {
            v50 = *(char *)(v49 + 2);
            if ( ++v93[v50] > v47 )
            {
              v46 = *(char *)(v49 + 2);
              v47 = v93[v46];
            }
          }
          if ( ++v91 >= dword_4C43D4 )
            break;
        }
        ++v48;
      }
      while ( v48 < dword_4C43CC );
      if ( v46 != -1 )
      {
        v92 = 10000 * v47;
        sub_42EDA0((double)(10000 * v47));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v51 = -1;
  v52 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC14 )
  {
    v53 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v53) )
        {
          v54 = dword_4C43DC + v53 * dword_4C43C8;
          if ( *(_WORD *)(v54 + 4) != 0xFFFF
            && *(_BYTE *)(v54 + 2) != 0xFF
            && *(_BYTE *)(v54 + 3) == 3
            && *(_BYTE *)(v54 + 7) == 4 )
          {
            v55 = *(char *)(v54 + 2);
            if ( ++v93[v55] > v52 )
            {
              v51 = *(char *)(v54 + 2);
              v52 = v93[v51];
            }
          }
          if ( ++v91 >= dword_4C43D4 )
            break;
        }
        ++v53;
      }
      while ( v53 < dword_4C43CC );
      if ( v51 != -1 )
      {
        v92 = 10000 * v52;
        sub_42EDA0((double)(10000 * v52));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v56 = -1;
  v57 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC18 )
  {
    v58 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v58) )
        {
          v59 = dword_4C43DC + v58 * dword_4C43C8;
          if ( *(_WORD *)(v59 + 4) != 0xFFFF
            && *(_BYTE *)(v59 + 2) != 0xFF
            && *(_BYTE *)(v59 + 3) == 3
            && *(_BYTE *)(v59 + 7) == 1 )
          {
            v60 = *(char *)(v59 + 2);
            if ( ++v93[v60] > v57 )
            {
              v56 = *(char *)(v59 + 2);
              v57 = v93[v56];
            }
          }
          if ( ++v91 >= dword_4C43D4 )
            break;
        }
        ++v58;
      }
      while ( v58 < dword_4C43CC );
      if ( v56 != -1 )
      {
        v92 = 10000 * v57;
        sub_42EDA0((double)(10000 * v57));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v61 = -1;
  v62 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC1C )
  {
    v63 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v63) )
        {
          v64 = dword_4C43DC + v63 * dword_4C43C8;
          if ( *(_WORD *)(v64 + 4) != 0xFFFF
            && *(_BYTE *)(v64 + 2) != 0xFF
            && *(_BYTE *)(v64 + 3) == 3
            && *(_BYTE *)(v64 + 7) == 2 )
          {
            v65 = *(char *)(v64 + 2);
            if ( ++v93[v65] > v62 )
            {
              v61 = *(char *)(v64 + 2);
              v62 = v93[v61];
            }
          }
          if ( ++v91 >= dword_4C43D4 )
            break;
        }
        ++v63;
      }
      while ( v63 < dword_4C43CC );
      if ( v61 != -1 )
      {
        v92 = 10000 * v62;
        sub_42EDA0((double)(10000 * v62));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v66 = -1;
  v92 = -1;
  v67 = 0;
  v68 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC20 )
  {
    v91 = 0;
    if ( dword_4CCA9C > 0 )
    {
      do
      {
        if ( sub_464E90(v67) )
        {
          v69 = dword_4CCAAC + v67 * dword_4CCA98;
          v70 = &v93[*(char *)(v69 + 224)];
          *v70 += *(__int16 *)(v69 + 464) + *(__int16 *)(v69 + 466) + *(__int16 *)(v69 + 482);
          if ( *v70 <= v68 )
          {
            v66 = v92;
          }
          else
          {
            v66 = *(char *)(v69 + 224);
            v68 = v93[v66];
            v92 = v66;
          }
          if ( ++v91 >= dword_4CCAA4 )
            break;
        }
        ++v67;
      }
      while ( v67 < dword_4CCA9C );
      if ( v66 != -1 )
      {
        v92 = 1000 * v68;
        sub_42EDA0((double)(1000 * v68));
      }
    }
  }
  v92 = -1;
  v71 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC24 )
  {
    v72 = 0;
    v73 = (double *)&unk_4D10B8;
    v91 = sub_4640D0() % dword_870818;
    do
    {
      v74 = sub_42F1C0(v91);
      v93[v72] = v74;
      if ( v74 > v71 )
      {
        v92 = v72;
        v71 = v74;
      }
      v73 += 23735;
      ++v72;
    }
    while ( (int)v73 < (int)&dbl_870318 );
    if ( v92 != -1 )
    {
      v91 = 1000 * v71;
      sub_42EDA0((double)(1000 * v71));
    }
  }
  v75 = 0;
  memset(v93, 0, sizeof(v93));
  v76 = -1;
  v77 = 0;
  if ( sub_4640D0() % 1000 < dword_4CCC28 )
  {
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        if ( sub_464E90(v75) )
        {
          v78 = dword_4C43DC + v75 * dword_4C43C8;
          if ( *(_WORD *)(v78 + 4) == 0xFFFF && *(_BYTE *)(v78 + 2) != 0xFF && *(_BYTE *)(v78 + 3) == 1 )
          {
            v79 = *(char *)(v78 + 2);
            if ( ++v93[v79] > v77 )
            {
              v76 = *(char *)(v78 + 2);
              v77 = v93[v76];
            }
          }
          if ( ++v91 >= dword_4C43D4 )
            break;
        }
        ++v75;
      }
      while ( v75 < dword_4C43CC );
      if ( v76 != -1 )
      {
        v92 = -10000 * v77;
        sub_42EDA0((double)(-10000 * v77));
      }
    }
  }
  memset(v93, 0, sizeof(v93));
  v80 = -1;
  v81 = 0;
  v82 = sub_4640D0();
  v84 = v82 % 1000;
  result = v82 / 1000;
  if ( v84 < dword_4CCC2C )
  {
    v85 = 0;
    v91 = 0;
    if ( dword_4C43CC > 0 )
    {
      do
      {
        result = sub_464E90(v85);
        if ( result )
        {
          v86 = dword_4C43DC + v85 * dword_4C43C8;
          if ( *(_WORD *)(v86 + 4) != 0xFFFF && *(_BYTE *)(v86 + 2) != 0xFF && *(_BYTE *)(v86 + 3) == 1 )
          {
            v87 = *(char *)(v86 + 2);
            if ( ++v93[v87] > v81 )
            {
              v80 = *(char *)(v86 + 2);
              v81 = v93[v80];
            }
          }
          result = v91 + 1;
          v91 = result;
          if ( result >= dword_4C43D4 )
            break;
        }
        ++v85;
      }
      while ( v85 < dword_4C43CC );
      if ( v80 != -1 )
      {
        v92 = -10000 * v81;
        return sub_42EDA0((double)(-10000 * v81));
      }
    }
  }
  return result;
}
