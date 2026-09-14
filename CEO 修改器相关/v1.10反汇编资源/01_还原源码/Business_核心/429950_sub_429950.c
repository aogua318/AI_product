// 函数 0x429950  sub_429950  size=0x753  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_429950()
{
  int v0; // edi
  char *v1; // eax
  char v2; // cl
  int v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  char *v12; // esi
  char *v13; // eax
  int v14; // edx
  char v15; // cl
  char *v16; // eax
  char *v17; // edx
  char v18; // cl
  char *v19; // eax
  char *v20; // edx
  char v21; // cl
  char *v22; // eax
  char *v23; // edx
  char v24; // cl
  char *v25; // eax
  char *v26; // edx
  char v27; // cl
  int v28; // eax
  char *v29; // eax
  char *v30; // edx
  char v31; // cl
  char *v32; // eax
  char *v33; // edx
  char v34; // cl
  int v35; // ebx
  char *v36; // eax
  char *v37; // edx
  char v38; // cl
  char v39; // al
  char *v40; // eax
  char *v41; // edx
  char v42; // cl
  char v43; // al
  char *v44; // eax
  char *v45; // edx
  char v46; // cl
  char v47; // al
  int v48; // ebx
  char *v49; // eax
  char *v50; // edx
  char v51; // cl
  char v52; // al
  char *v53; // eax
  char *v54; // edx
  char v55; // cl
  char v56; // al
  char *v57; // eax
  char *v58; // edx
  char v59; // cl
  char v60; // al
  char *v61; // eax
  char *v62; // edx
  char v63; // cl
  char *v64; // eax
  char *v65; // edx
  char v66; // cl
  char *v67; // eax
  char *v68; // edx
  char v69; // cl
  char *v70; // eax
  char *v71; // edx
  char v72; // cl
  char *v73; // eax
  char *v74; // edx
  char v75; // cl
  int v76; // ebx
  __int16 v77; // ax
  __int16 v78; // ax
  __int16 v79; // ax
  __int16 *v80; // ecx
  bool v81; // zf
  unsigned __int8 v82; // dl
  int v83; // eax
  char v84; // cl
  int v85; // kr00_4
  __int64 v86; // rax
  char *v87; // eax
  int v88; // edx
  char v89; // cl
  int v91; // [esp+10h] [ebp-428h]
  int v92; // [esp+10h] [ebp-428h]
  int v93; // [esp+10h] [ebp-428h]
  _BYTE v94[12]; // [esp+14h] [ebp-424h] BYREF
  int v95; // [esp+20h] [ebp-418h]
  __int16 *v96; // [esp+24h] [ebp-414h]
  char String[1024]; // [esp+28h] [ebp-410h] BYREF
  int v98; // [esp+434h] [ebp-4h]

  sub_464410(v94);
  v0 = 0;
  v98 = 0;
  v1 = (char *)sub_47C740("data\\Machine_type.csv");
  if ( sub_464420(v1) )
  {
    v2 = 0;
    v3 = 0;
    for ( dword_4D0C90 = 0; v3 < v95; ++v3 )
    {
      v4 = (char *)sub_4646A0(0, v3);
      v5 = (char *)(String - v4);
      do
      {
        v6 = *v4;
        v4[(_DWORD)v5] = *v4;
        ++v4;
      }
      while ( v6 );
      if ( sub_438150(String) )
      {
        v7 = atoi(String);
        v2 = dword_4D0C90;
        v8 = v7 + 1;
        if ( v8 > dword_4D0C90 )
        {
          v2 = v8;
          dword_4D0C90 = v8;
        }
      }
      else
      {
        v2 = dword_4D0C90;
      }
    }
    *(_DWORD *)dword_4D0C8C = sub_465E40(-124 * v2, (int)"machine_type.cpp", 106);
    if ( v95 > 0 )
    {
      do
      {
        v9 = (char *)sub_4646A0(0, v0);
        v10 = (char *)(String - v9);
        do
        {
          v11 = *v9;
          v9[(_DWORD)v10] = *v9;
          ++v9;
        }
        while ( v11 );
        if ( sub_438150(String) )
        {
          v12 = (char *)(*(_DWORD *)dword_4D0C8C + 388 * atoi(String));
          v13 = (char *)sub_4646A0(1, v0);
          v14 = v12 - v13;
          do
          {
            v15 = *v13;
            v13[v14 + 56] = *v13;
            ++v13;
          }
          while ( v15 );
          v16 = (char *)sub_4646A0(2, v0);
          v17 = (char *)(String - v16);
          do
          {
            v18 = *v16;
            v16[(_DWORD)v17] = *v16;
            ++v16;
          }
          while ( v18 );
          *(_WORD *)v12 = atoi(String);
          v19 = (char *)sub_4646A0(3, v0);
          v20 = (char *)(String - v19);
          do
          {
            v21 = *v19;
            v19[(_DWORD)v20] = *v19;
            ++v19;
          }
          while ( v21 );
          *((_WORD *)v12 + 1) = atoi(String);
          v22 = (char *)sub_4646A0(4, v0);
          v23 = (char *)(String - v22);
          do
          {
            v24 = *v22;
            v22[(_DWORD)v23] = *v22;
            ++v22;
          }
          while ( v24 );
          v12[12] = atoi(String) + 98;
          v25 = (char *)sub_4646A0(5, v0);
          v26 = (char *)(String - v25);
          do
          {
            v27 = *v25;
            v25[(_DWORD)v26] = *v25;
            ++v25;
          }
          while ( v27 );
          v28 = atoi(String) - 1950;
          if ( v28 > 100 )
            LOBYTE(v28) = -1;
          v12[13] = v28;
          v29 = (char *)sub_4646A0(6, v0);
          v30 = (char *)(String - v29);
          do
          {
            v31 = *v29;
            v29[(_DWORD)v30] = *v29;
            ++v29;
          }
          while ( v31 );
          v12[14] = atoi(String);
          v32 = (char *)sub_4646A0(7, v0);
          v33 = (char *)(String - v32);
          do
          {
            v34 = *v32;
            v32[(_DWORD)v33] = *v32;
            ++v32;
          }
          while ( v34 );
          v12[15] = atoi(String);
          v91 = 0;
          v35 = 9;
          v96 = (__int16 *)(v12 + 21);
          do
          {
            v36 = (char *)sub_4646A0(v35 - 1, v0);
            v37 = (char *)(String - v36);
            do
            {
              v38 = *v36;
              v36[(_DWORD)v37] = *v36;
              ++v36;
            }
            while ( v38 );
            v39 = atoi(String);
            *((_BYTE *)v96 - 1) = v39;
            v40 = (char *)sub_4646A0(v35, v0);
            v41 = (char *)(String - v40);
            do
            {
              v42 = *v40;
              v40[(_DWORD)v41] = *v40;
              ++v40;
            }
            while ( v42 );
            v43 = atoi(String);
            *(_BYTE *)v96 = v43;
            v44 = (char *)sub_4646A0(v35 + 1, v0);
            v45 = (char *)(String - v44);
            do
            {
              v46 = *v44;
              v44[(_DWORD)v45] = *v44;
              ++v44;
            }
            while ( v46 );
            v47 = atoi(String);
            ++v96;
            v12[v91 + 28] = v47;
            v35 += 3;
            ++v91;
          }
          while ( v35 < 21 );
          v92 = 0;
          v48 = 21;
          v96 = (__int16 *)(v12 + 33);
          do
          {
            v49 = (char *)sub_4646A0(v48 - 1, v0);
            v50 = (char *)(String - v49);
            do
            {
              v51 = *v49;
              v49[(_DWORD)v50] = *v49;
              ++v49;
            }
            while ( v51 );
            v52 = atoi(String);
            *((_BYTE *)v96 - 1) = v52;
            v53 = (char *)sub_4646A0(v48, v0);
            v54 = (char *)(String - v53);
            do
            {
              v55 = *v53;
              v53[(_DWORD)v54] = *v53;
              ++v53;
            }
            while ( v55 );
            v56 = atoi(String);
            *(_BYTE *)v96 = v56;
            v57 = (char *)sub_4646A0(v48 + 1, v0);
            v58 = (char *)(String - v57);
            do
            {
              v59 = *v57;
              v57[(_DWORD)v58] = *v57;
              ++v57;
            }
            while ( v59 );
            v60 = atoi(String);
            ++v96;
            v12[v92 + 48] = v60;
            v48 += 3;
            ++v92;
          }
          while ( v48 < 45 );
          v61 = (char *)sub_4646A0(44, v0);
          v62 = (char *)(String - v61);
          do
          {
            v63 = *v61;
            v61[(_DWORD)v62] = *v61;
            ++v61;
          }
          while ( v63 );
          v12[16] = atoi(String);
          v64 = (char *)sub_4646A0(45, v0);
          v65 = (char *)(String - v64);
          do
          {
            v66 = *v64;
            v64[(_DWORD)v65] = *v64;
            ++v64;
          }
          while ( v66 );
          v12[17] = atoi(String);
          v67 = (char *)sub_4646A0(46, v0);
          v68 = (char *)(String - v67);
          do
          {
            v69 = *v67;
            v67[(_DWORD)v68] = *v67;
            ++v67;
          }
          while ( v69 );
          v12[18] = atoi(String);
          v70 = (char *)sub_4646A0(47, v0);
          v71 = (char *)(String - v70);
          do
          {
            v72 = *v70;
            v70[(_DWORD)v71] = *v70;
            ++v70;
          }
          while ( v72 );
          v12[19] = atoi(String);
          v73 = (char *)sub_4646A0(48, v0);
          v74 = (char *)(String - v73);
          do
          {
            v75 = *v73;
            v73[(_DWORD)v74] = *v73;
            ++v73;
          }
          while ( v75 );
          v12[78] = sub_4298F0(String);
          v76 = 69;
          v96 = (__int16 *)(v12 + 140);
          v93 = 20;
          do
          {
            v77 = sub_4646D0(v76 - 20, v0);
            *(v96 - 30) = v77;
            v12[v76 + 51] = sub_4646D0(v76, v0);
            v78 = sub_4646D0(v76 + 20, v0);
            *v96 = v78;
            v79 = sub_4646D0(v76 + 40, v0);
            v80 = v96;
            v96[20] = v79;
            ++v76;
            v81 = v93-- == 1;
            v96 = v80 + 1;
          }
          while ( !v81 );
          *((_DWORD *)v12 + 55) = sub_4646D0(129, v0);
          *((_WORD *)v12 + 2) = sub_4646D0(130, v0);
          *((_WORD *)v12 + 3) = sub_4646D0(131, v0);
          *((_DWORD *)v12 + 2) = sub_4646D0(132, v0);
          v82 = *(_BYTE *)(dword_4CCD7C + 10 * *(__int16 *)v12 + 4);
          v83 = dword_4CCD7C + 10 * *(__int16 *)v12;
          v12[224] = v82;
          v84 = *(_BYTE *)(v83 + 5);
          v12[226] = v84 * v82;
          v12[225] = v84;
          v85 = v82 + 1;
          v86 = (unsigned __int8)v12[225] + 1;
          v12[227] = (((int)v86 - HIDWORD(v86)) >> 1) * (v85 / 2);
          v87 = (char *)sub_4646A0(133, v0);
          v88 = v12 - v87;
          do
          {
            v89 = *v87;
            v87[v88 + 228] = *v87;
            ++v87;
          }
          while ( v89 );
          v12[79] = sub_4646D0(134, v0);
        }
        ++v0;
      }
      while ( v0 < v95 );
    }
    sub_464650(v94);
    v98 = -1;
    sub_464B50(v94);
    return 1;
  }
  else
  {
    v98 = -1;
    sub_464B50(v94);
    return 0;
  }
}
