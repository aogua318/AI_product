// 函数 0x4362f0  sub_4362F0  size=0xA73  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4362F0(const char *a1)
{
  char *v1; // eax
  char *v2; // edx
  char v3; // cl
  unsigned int v4; // eax
  char *v5; // edi
  unsigned int v8; // eax
  int v9; // edi
  int v10; // esi
  char v11; // bl
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int v15; // esi
  char v16; // al
  char v17; // cl
  int v18; // ebx
  int v19; // esi
  __int16 v20; // cx
  int m; // esi
  int v22; // eax
  int v23; // eax
  int n; // esi
  int v25; // esi
  int ii; // ebx
  int jj; // esi
  int v28; // eax
  int v29; // esi
  int v30; // ebx
  _DWORD *v31; // eax
  void *v32; // edi
  int kk; // esi
  int v34; // esi
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // edx
  char *v39; // eax
  int v40; // esi
  char v41; // cl
  char *v42; // eax
  int v43; // edx
  char v44; // cl
  int v45; // edi
  char *v46; // esi
  char *v47; // eax
  int v48; // edx
  char v49; // cl
  char *v50; // eax
  int v51; // edx
  char v52; // cl
  int v53; // [esp-8h] [ebp-688h]
  int v54; // [esp+8h] [ebp-678h] BYREF
  unsigned int v55; // [esp+Ch] [ebp-674h] BYREF
  _WORD v56[2]; // [esp+10h] [ebp-670h] BYREF
  int v57; // [esp+14h] [ebp-66Ch]
  int i; // [esp+18h] [ebp-668h]
  _DWORD *v59; // [esp+1Ch] [ebp-664h]
  _WORD v60[2]; // [esp+20h] [ebp-660h] BYREF
  int v61; // [esp+24h] [ebp-65Ch]
  int j; // [esp+28h] [ebp-658h]
  int v63; // [esp+2Ch] [ebp-654h]
  int k; // [esp+30h] [ebp-650h]
  int v65; // [esp+34h] [ebp-64Ch] BYREF
  int v66; // [esp+38h] [ebp-648h]
  int v67; // [esp+3Ch] [ebp-644h]
  _BYTE v68[64]; // [esp+40h] [ebp-640h] BYREF
  int v69; // [esp+80h] [ebp-600h]
  int v70; // [esp+84h] [ebp-5FCh]
  int v71; // [esp+88h] [ebp-5F8h]
  _BYTE v72[40]; // [esp+8Ch] [ebp-5F4h] BYREF
  _BYTE v73[1008]; // [esp+B4h] [ebp-5CCh] BYREF
  char v74[2]; // [esp+4A4h] [ebp-1DCh] BYREF
  _BYTE v75[40]; // [esp+4A6h] [ebp-1DAh] BYREF
  int v76; // [esp+4D0h] [ebp-1B0h]
  __int16 v77; // [esp+4D4h] [ebp-1ACh]
  __int16 v78[8]; // [esp+4D8h] [ebp-1A8h] BYREF
  _WORD v79[2]; // [esp+4E8h] [ebp-198h] BYREF
  __int16 v80; // [esp+4ECh] [ebp-194h]
  __int16 v81; // [esp+4EEh] [ebp-192h]
  _DWORD v82[5]; // [esp+4FCh] [ebp-184h] BYREF
  __int16 v83; // [esp+510h] [ebp-170h]
  __int16 v84; // [esp+512h] [ebp-16Eh]
  __int16 v85; // [esp+514h] [ebp-16Ch]
  __int16 v86; // [esp+516h] [ebp-16Ah]
  __int16 v87; // [esp+518h] [ebp-168h]
  __int16 v88; // [esp+51Ah] [ebp-166h]
  __int16 v89; // [esp+51Ch] [ebp-164h]
  __int16 v90; // [esp+520h] [ebp-160h]
  __int16 v91; // [esp+522h] [ebp-15Eh]
  __int16 v92; // [esp+524h] [ebp-15Ch]
  __int16 v93; // [esp+526h] [ebp-15Ah]
  int v94; // [esp+528h] [ebp-158h]
  int v95; // [esp+52Ch] [ebp-154h]
  int v96; // [esp+530h] [ebp-150h]
  __int16 v97; // [esp+534h] [ebp-14Ch] BYREF
  __int16 v98; // [esp+536h] [ebp-14Ah]
  __int16 v99; // [esp+538h] [ebp-148h]
  __int16 v100; // [esp+53Ah] [ebp-146h]
  unsigned __int16 v101; // [esp+53Eh] [ebp-142h]
  __int16 v102; // [esp+540h] [ebp-140h]
  __int16 v103; // [esp+544h] [ebp-13Ch] BYREF
  __int16 v104; // [esp+546h] [ebp-13Ah]
  __int16 v105; // [esp+548h] [ebp-138h]
  __int16 v106; // [esp+54Ah] [ebp-136h]
  int v107; // [esp+54Ch] [ebp-134h]
  __int16 v108; // [esp+550h] [ebp-130h]
  char v109; // [esp+552h] [ebp-12Eh]
  char v110; // [esp+553h] [ebp-12Dh]
  char v111; // [esp+554h] [ebp-12Ch]
  char v112; // [esp+555h] [ebp-12Bh]
  int v113; // [esp+558h] [ebp-128h]
  __int16 v114; // [esp+55Ch] [ebp-124h]
  __int16 v115; // [esp+55Eh] [ebp-122h]
  __int16 v116; // [esp+560h] [ebp-120h] BYREF
  __int16 v117; // [esp+562h] [ebp-11Eh]
  __int16 v118; // [esp+564h] [ebp-11Ch]
  __int16 v119; // [esp+566h] [ebp-11Ah]
  __int16 v120; // [esp+568h] [ebp-118h]
  char v121; // [esp+56Ch] [ebp-114h] BYREF
  char v122; // [esp+56Dh] [ebp-113h]
  char v123; // [esp+56Eh] [ebp-112h]
  char v124; // [esp+56Fh] [ebp-111h]
  char v125; // [esp+570h] [ebp-110h]
  unsigned __int8 v126; // [esp+571h] [ebp-10Fh]
  char v127; // [esp+572h] [ebp-10Eh]
  int v128; // [esp+574h] [ebp-10Ch]
  int v129; // [esp+578h] [ebp-108h] BYREF
  char v130[256]; // [esp+57Ch] [ebp-104h] BYREF

  v1 = (char *)sub_47C740("stage\\");
  v2 = (char *)(v130 - v1);
  do
  {
    v3 = *v1;
    v1[(_DWORD)v2] = *v1;
    ++v1;
  }
  while ( v3 );
  v4 = strlen(a1) + 1;
  v5 = (char *)&v129 + 3;
  while ( *++v5 )
    ;
  qmemcpy(v5, a1, v4);
  sub_40B240();
  if ( !sub_4661F0(v130) )
    return 0;
  sub_466380(&v65);
  dword_4CDEB8 = v65;
  qmemcpy(byte_4D03D4, v68, sizeof(byte_4D03D4));
  dword_4C2D38 = (int)dword_4D0E68;
  memset(dword_870824, 0, 112 * dword_870818);
  sub_4331B0();
  if ( !sub_425A00(dword_4CDEB8, &v55, &v54) )
  {
    sub_466230(&unk_89D208);
    return 0;
  }
  sub_40B240();
  v8 = sub_423B90(byte_4D03D4, 0);
  sub_40B180(v8);
  dword_4D0468 = dword_4D046C;
  dword_4D0474 = dword_4D0478;
  v61 = 0;
  v59 = &unk_4D10B8;
  do
  {
    sub_466380(v74);
    for ( i = 0; i < v77; ++i )
    {
      sub_466380(v82);
      v9 = -1;
      v10 = 0;
      if ( v83 > 0 )
      {
        v11 = v61;
        do
        {
          sub_466380(v78);
          v9 = sub_435CB0(v78, v11);
          sub_40B240();
          ++v10;
        }
        while ( v10 < v83 );
      }
      v12 = *(__int16 *)(v9 * dword_4C43C8 + dword_4C43DC + 16);
      v13 = dword_4CCAAC + v12 * dword_4CCA98;
      v14 = 0;
      *(_DWORD *)(v13 + 204) = v82[0];
      *(_DWORD *)(v13 + 208) = v82[1];
      *(_DWORD *)(v13 + 212) = v82[2];
      *(_DWORD *)(v13 + 216) = v82[3];
      *(_DWORD *)(v13 + 220) = v82[4];
      *(_DWORD *)(v13 + 452) = v94;
      *(_DWORD *)(v13 + 456) = v95;
      *(_DWORD *)(v13 + 460) = v96;
      *(_WORD *)(v13 + 464) = v90;
      for ( *(_WORD *)(v13 + 466) = v91; v14 < v84; ++v14 )
      {
        sub_466380(&v121);
        v15 = dword_4CC8D0 + sub_414D20(v12, v122) * dword_4CC8BC;
        *(_BYTE *)(v15 + 8) ^= (v121 ^ *(_BYTE *)(v15 + 8)) & 1;
        v16 = *(_BYTE *)(v15 + 8) ^ (v121 ^ *(_BYTE *)(v15 + 8)) & 2;
        *(_BYTE *)(v15 + 8) = v16;
        v17 = v16 ^ (v121 ^ v16) & 4;
        *(_BYTE *)(v15 + 8) = v17;
        *(_BYTE *)(v15 + 8) = v17 ^ (v121 ^ v17) & 8;
        *(_BYTE *)v15 = v122;
        *(_BYTE *)(v15 + 9) = v123;
        *(_BYTE *)(v15 + 10) = v124;
        *(_BYTE *)(v15 + 11) = v125;
        *(_DWORD *)(v15 + 12) = v128;
        *(_DWORD *)(v15 + 16) = v129;
        sub_415D70((__int16 *)v15, v126);
        *(_BYTE *)(v15 + 1257) = v127;
        sub_40B240();
      }
      for ( j = 0; j < v85; ++j )
      {
        sub_466380(&v103);
        v18 = sub_4277B0(v12, v103, v104, v105, v106);
        v19 = dword_4D0C84 + v18 * dword_4D0C70;
        v20 = *(_WORD *)(v19 + 18);
        *(_DWORD *)(v19 + 12) = v107;
        *(_WORD *)(v19 + 18) ^= ((unsigned __int8)v108 ^ (unsigned __int8)v20) & 1;
        *(_BYTE *)(v19 + 20) = v109;
        *(_BYTE *)(v19 + 21) = v110;
        *(_BYTE *)(v19 + 128) = v111;
        *(_BYTE *)(v19 + 129) = v112;
        *(_DWORD *)(v19 + 196) = v113;
        v63 = 0;
        for ( k = 0; k < v114; ++k )
        {
          sub_4185E0(v12, v18, v104, v105);
          ++v63;
        }
        for ( k = 0; k < v115; ++k )
        {
          sub_418730(v12, v18, v104, v105);
          ++v63;
        }
        if ( v63 )
          sub_427A10(v19);
        sub_40B240();
      }
      for ( m = 0; m < v86; ++m )
      {
        sub_466380(v79);
        v53 = v80;
        v22 = sub_4640D0(v80) % 2;
        v23 = sub_40BE20(v12, v79[0], v79[1], v22, v53);
        if ( v81 )
          sub_435990((int)v79, v23);
        sub_40B240();
      }
      for ( n = 0; n < v87; ++n )
      {
        sub_466380(v56);
        sub_413A40(v12, v56[0], v56[1], v57);
        sub_40B240();
      }
      for ( j = 0; j < v88; ++j )
      {
        sub_466380(&v116);
        v25 = 0;
        for ( ii = sub_430520(v12, v116, v117, v118, v119); v25 < v120; ++v25 )
          sub_418330(v12, ii, v116, v117);
        sub_40B240();
      }
      for ( jj = 0; jj < v89; ++jj )
      {
        sub_466380(&v97);
        v28 = sub_433EB0(v12, v101, v97, v98, v99);
        *(_WORD *)(v28 * dword_870854 + dword_870868 + 8) = v100;
        if ( v102 != -1 )
          sub_418490(v12, v28, v97, v98);
        sub_40B240();
      }
      v29 = 0;
      for ( k = 0; k < v92; ++k )
      {
        v30 = sub_433200(v12);
        if ( v29 < v93 )
        {
          sub_466380(v60);
          ++v29;
          sub_433DE0(dword_870840 + v30 * dword_87082C, v60[0], v60[1]);
        }
        sub_40B240();
      }
    }
    v31 = v59;
    ++v61;
    v32 = v59 + 4;
    v59[14] = v76;
    qmemcpy(v32, v75, 0x28u);
    v59 = v31 + 47470;
  }
  while ( (int)(v31 + 47470) < (int)&dbl_870318 );
  sub_466380(&dword_89D204);
  for ( kk = 0; kk < dword_89D204; ++kk )
  {
    sub_4362B0();
    sub_40B240();
  }
  sub_466230(&unk_89D208);
  if ( v69 )
  {
    v34 = *(_DWORD *)(dword_4D0EF4 + 4 * (v70 + v71 * dword_4D0E80));
    if ( !sub_483C00(v34) )
    {
      v35 = sub_483C30(v34);
      sub_40DD00(v35);
      if ( dword_4B1028 != -1 )
      {
        sub_4386F0(-1);
        sub_4181C0();
        sub_484280(v66, v67);
      }
    }
  }
  else
  {
    dword_4D0EC8 = v66;
    dword_4D0ECC = v67;
  }
  dword_4D046C = 0;
  dword_4D0470 = 0;
  dword_4D0460 = 3;
  dword_4D0464 = 50;
  sub_432FD0();
  sub_40B240();
  dword_4C2D18 = 1;
  sub_412130();
  sub_40B240();
  sub_412580();
  dword_4CD13C = 1;
  sub_4304B0();
  sub_4304B0();
  dword_4CD13C = 0;
  sub_40B240();
  sub_41EAA0();
  dword_4C2D18 = 0;
  sub_435AE0();
  sub_435B50();
  sub_435BA0();
  sub_435C00();
  sub_435C40();
  v36 = dword_4CDEC0;
  v37 = dword_4CDF10 - 1950;
  dbl_4D1100[23735 * dword_8703A0] = dbl_4CDF80;
  dword_4CD128 = v37;
  dword_4CD120 = 0;
  dword_4CD124 = 0;
  dword_4B111C = 1;
  dword_4B1120 = 1;
  sub_423440(v72, v36);
  v38 = 189880 * dword_8703A0;
  v39 = v72;
  v40 = &byte_4D10C8[189880 * dword_8703A0] - v72;
  do
  {
    v41 = *v39;
    v39[v40] = *v39;
    ++v39;
  }
  while ( v41 );
  v42 = v73;
  v43 = (_UNKNOWN *)((char *)&unk_4D10F4 + v38) - (_UNKNOWN *)v73;
  do
  {
    v44 = *v42;
    v42[v43] = *v42;
    ++v42;
  }
  while ( v44 );
  v45 = 1;
  v46 = (char *)&unk_4FF6AC;
  do
  {
    v47 = (char *)sub_4646A0(1, v45);
    v48 = v46 - v47;
    do
    {
      v49 = *v47;
      v47[v48 - 44] = *v47;
      ++v47;
    }
    while ( v49 );
    v50 = (char *)sub_4646A0(1, v45);
    v51 = v46 - v50;
    do
    {
      v52 = *v50;
      v50[v51] = *v50;
      ++v50;
    }
    while ( v52 );
    v46 += 189880;
    ++v45;
  }
  while ( (int)v46 < (int)byte_870354 );
  sub_417DC0();
  return 1;
}
