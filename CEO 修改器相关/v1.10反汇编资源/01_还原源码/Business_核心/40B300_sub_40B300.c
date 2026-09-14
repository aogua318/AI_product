// 函数 0x40b300  sub_40B300  size=0x8C7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40B300@<eax>(int a1@<esi>)
{
  int result; // eax
  int v2; // eax
  int i; // esi
  __int16 *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // ecx
  __int16 *v11; // eax
  int v12; // eax
  char v13; // cl
  BOOL v14; // esi
  unsigned int v15; // eax
  int v16; // edi
  int v17; // edx
  char *v18; // eax
  char v19; // cl
  char v20; // cl
  char v21; // cl
  char v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // cl
  char v26; // cl
  char v27; // cl
  char v28; // cl
  char v29; // cl
  char v30; // cl
  char v31; // cl
  char v32; // cl
  char v33; // cl
  char v34; // cl
  char *v35; // ecx
  char v36; // al
  char v37; // al
  double *v38; // esi
  int v39; // eax
  double *v40; // esi
  DWORD TickCount; // esi
  DWORD v42; // eax
  double *v43; // esi
  double *v44; // esi
  int v45; // [esp-8h] [ebp-144h]
  int v46; // [esp-4h] [ebp-140h]
  int v48; // [esp+8h] [ebp-134h]
  int v49; // [esp+8h] [ebp-134h]
  char Buffer[256]; // [esp+38h] [ebp-104h] BYREF

  dword_4C2D34 = 0;
  if ( !dword_4CDEBC )
    dword_4C2D34 = 16 * dword_4D04A4 + 1;
  dword_8CAF68 = 0;
  dword_4B1128 = -1;
  dword_4B112C = -1;
  sub_40B210();
  dword_4C2D38 = 0;
  sub_41CA70();
  result = sub_41CCF0();
  if ( result )
  {
    if ( dword_4C2D10 == -1 )
    {
      v2 = sub_47C740("pics\\loading_door");
      sub_467AB0(v2);
      for ( i = 0; i < 15; ++i )
      {
        sub_4689C0(0);
        sub_467680(i);
        sub_466CA0(&dword_8EEDEC, 0, 0);
        sub_47C800(0, 0, 800, 600);
      }
      dword_4C2D14 = GetTickCount();
      dword_4C2D30 = 15;
      dword_4B1018 = 1;
    }
    word_4D10BA[0] = 4;
    word_52DC2A = 1;
    word_4FF672 = 0;
    word_55C1E2 = 2;
    word_5B8D52 = 5;
    word_58A79A = 3;
    word_5E730A = 6;
    v4 = word_6158C2;
    do
    {
      *v4 = 7;
      v4 += 94940;
    }
    while ( (int)v4 < (int)((__int16 *)&dbl_870318 + 1) );
    v5 = sub_47C740("pics\\num1");
    sub_467AB0(v5);
    dword_4C2D5C = 9;
    dword_4C2D60 = 131073;
    dword_4C2D64 = 262147;
    dword_4C2D68 = 393221;
    dword_4C2D6C = 524295;
    dword_4C2D70 = 720906;
    word_4C2D74 = 12;
    sub_40FDE0(a1);
    dword_4D0DB4 = 1;
    sub_47CC70(10570);
    sub_47CC50(60);
    v6 = sub_47C740("face\\main1.fce");
    sub_481C90(&unk_4C2D78, v6, 1);
    sub_47D1A0(&unk_4C2D78, sub_409350, sub_40ABB0, 0, 0, 0, 0, 0, 0, sub_40B140, sub_40AA60, 100);
    v7 = sub_47C740("face\\face_task.fce");
    sub_481C90(&unk_4C2EA8, v7, 1);
    v8 = sub_47C740("face\\task_arrow.fce");
    sub_481C90(&unk_4C2FD8, v8, 1);
    sub_4090C0((int)dword_4D0E68, 1);
    sub_41E130();
    sub_42B6E0();
    word_4D03D2 = *(_WORD *)(dword_4C2EA0 + 10404);
    dword_4CE034 = 0;
    if ( dword_4C2D10 == -1 )
    {
      v9 = word_4D10BA[0];
      dword_4D046C = 0;
      dword_4D0470 = 0;
      dword_4D0460 = 50;
      dword_4D0464 = 50;
      dword_8703A0 = 0;
      if ( word_4D10BA[0] != dword_4CDEF8 )
      {
        word_4D10BA[0] = dword_4CDEF8;
        v10 = 1;
        v11 = &word_4FF672;
        while ( *v11 != dword_4CDEF8 )
        {
          v11 += 94940;
          ++v10;
          if ( (int)v11 >= (int)word_6158C2 )
            goto LABEL_18;
        }
        word_4D10BA[94940 * v10] = v9;
      }
LABEL_18:
      dword_4C2D18 = 1;
      if ( dword_4CDEBC == 1 )
      {
        dword_4CD128 = dword_4CDF10 - 1950;
        v12 = 0;
        do
        {
          v13 = byte_4CDEC4[v12];
          byte_4D10C8[v12++] = v13;
        }
        while ( v13 );
        v14 = 1;
        if ( dword_8CAF68 )
          v14 = MessageBoxA(0, &byte_4A2858, byte_4A2869, 1u) == 1;
        v15 = sub_423B90(&unk_4D03D4, v14);
        sub_40B180(v15);
        dword_4D0468 = dword_4D046C;
        dword_4D0474 = dword_4D0478;
      }
      else
      {
        dword_4CDF18[0] = 10;
        dword_4CD128 = 0;
        sub_4362F0(&unk_4D0414);
      }
      v16 = dword_4CDF10;
      v17 = 1;
      v18 = &byte_4FF671;
      do
      {
        if ( v17 < 7 && dword_4CDF18[v17] == -1 )
        {
          *v18 &= 0xFCu;
          *(double *)(v18 + 7) = 0.0;
        }
        else
        {
          v19 = *v18 | 1;
          *v18 = v19;
          if ( v17 >= 7 || dword_4CDF18[v17] <= v16 )
            v20 = v19 | 2;
          else
            v20 = v19 & 0xFD;
          *v18 = v20;
        }
        if ( v17 + 1 < 7 && dword_4CDF1C[v17] == -1 )
        {
          v18[189880] &= 0xFCu;
          *(double *)(v18 + 189887) = 0.0;
        }
        else
        {
          v21 = v18[189880] | 1;
          v18[189880] = v21;
          if ( v17 + 1 >= 7 || dword_4CDF1C[v17] <= v16 )
            v22 = v21 | 2;
          else
            v22 = v21 & 0xFD;
          v18[189880] = v22;
        }
        if ( v17 < 5 && dword_4CDF20[v17] == -1 )
        {
          v18[379760] &= 0xFCu;
          *(double *)(v18 + 379767) = 0.0;
        }
        else
        {
          v23 = v18[379760] | 1;
          v18[379760] = v23;
          if ( v17 >= 5 || dword_4CDF20[v17] <= v16 )
            v24 = v23 | 2;
          else
            v24 = v23 & 0xFD;
          v18[379760] = v24;
        }
        if ( v17 + 3 < 7 && dword_4CDF24[v17] == -1 )
        {
          v18[569640] &= 0xFCu;
          *(double *)(v18 + 569647) = 0.0;
        }
        else
        {
          v25 = v18[569640] | 1;
          v18[569640] = v25;
          if ( v17 + 3 >= 7 || dword_4CDF24[v17] <= v16 )
            v26 = v25 | 2;
          else
            v26 = v25 & 0xFD;
          v18[569640] = v26;
        }
        if ( v17 + 4 < 7 && dword_4CDF28[v17] == -1 )
        {
          v18[759520] &= 0xFCu;
          *(double *)(v18 + 759527) = 0.0;
        }
        else
        {
          v27 = v18[759520] | 1;
          v18[759520] = v27;
          if ( v17 + 4 >= 7 || dword_4CDF28[v17] <= v16 )
            v28 = v27 | 2;
          else
            v28 = v27 & 0xFD;
          v18[759520] = v28;
        }
        if ( v17 + 5 < 7 && dword_4CDF2C[v17] == -1 )
        {
          v18[949400] &= 0xFCu;
          *(double *)(v18 + 949407) = 0.0;
        }
        else
        {
          v29 = v18[949400] | 1;
          v18[949400] = v29;
          if ( v17 + 5 >= 7 || dword_4CDF2C[v17] <= v16 )
            v30 = v29 | 2;
          else
            v30 = v29 & 0xFD;
          v18[949400] = v30;
        }
        if ( v17 + 6 < 7 && dword_4CDF30[v17] == -1 )
        {
          v18[1139280] &= 0xFCu;
          *(double *)(v18 + 1139287) = 0.0;
        }
        else
        {
          v31 = v18[1139280] | 1;
          v18[1139280] = v31;
          if ( v17 + 6 >= 7 || dword_4CDF30[v17] <= v16 )
            v32 = v31 | 2;
          else
            v32 = v31 & 0xFD;
          v18[1139280] = v32;
        }
        if ( v17 + 7 < 7 && dword_4CDF34[v17] == -1 )
        {
          v18[1329160] &= 0xFCu;
          *(double *)(v18 + 1329167) = 0.0;
        }
        else
        {
          v33 = v18[1329160] | 1;
          v18[1329160] = v33;
          if ( v17 + 7 >= 7 || dword_4CDF34[v17] <= v16 )
            v34 = v33 | 2;
          else
            v34 = v33 & 0xFD;
          v18[1329160] = v34;
        }
        v17 += 8;
        v18 += 1519040;
      }
      while ( v17 < 13 );
      if ( v17 < 20 )
      {
        v35 = &byte_4D10B9[189880 * v17];
        do
        {
          if ( v17 < 7 && dword_4CDF18[v17] == -1 )
          {
            *v35 &= 0xFCu;
            *(double *)(v35 + 7) = 0.0;
          }
          else
          {
            v36 = *v35 | 1;
            *v35 = v36;
            if ( v17 >= 7 || dword_4CDF18[v17] <= v16 )
              v37 = v36 | 2;
            else
              v37 = v36 & 0xFD;
            *v35 = v37;
          }
          ++v17;
          v35 += 189880;
        }
        while ( v17 < 20 );
      }
      v38 = (double *)&unk_4D10B8;
      do
      {
        sub_42F280(v38);
        v38 += 23735;
      }
      while ( (int)v38 < (int)&dbl_870318 );
      v39 = 23735 * dword_8703A0;
      dbl_4D1100[v39] = dbl_4CDF80;
      byte_4D10B9[v39 * 8] |= 3u;
      sub_412130();
      if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
        sub_45EEF0(1);
      sub_4449E0(0);
      dword_4CD13C = 1;
      dword_4B1120 = 1;
      sub_4304B0();
      v40 = (double *)&unk_4FF670;
      do
      {
        sub_42F250(1.0e10);
        v40 += 23735;
      }
      while ( (int)v40 < (int)&dbl_870318 );
      sub_41EF50(0, v48);
      if ( !dword_8CAF68 && dword_4CDEBC == 1 )
      {
        TickCount = GetTickCount();
        while ( dword_4B1120 < 8 )
        {
          if ( GetTickCount() - TickCount >= 0xEA60 )
            break;
          sub_41E190(1);
          v42 = GetTickCount();
          if ( (int)(v42 - dword_4C4358) > 200 )
          {
            dword_4C4358 = v42;
            sub_40B240();
          }
        }
      }
      sub_410C50();
      sub_423420();
      sub_41EF50(0, v49);
      if ( !dword_4D0B68 )
      {
        v43 = (double *)&unk_4FF670;
        do
        {
          sub_42F280(v43);
          v43 += 23735;
        }
        while ( (int)v43 < (int)&dbl_870318 );
      }
      v44 = (double *)&unk_4FF6D0;
      do
      {
        *v44 = sub_42EB70(v44 - 12);
        v44 += 23735;
      }
      while ( (int)v44 < (int)&dbl_870378 );
      ++dword_4CE04C;
      dword_4B1120 = 1;
      sub_4304B0();
      dword_4CD120 = 0;
      dword_4CD124 = 0;
      dword_4CD13C = 0;
      dword_4C2D18 = 0;
      dword_4B111C = 1;
      dword_4B1120 = 1;
      dword_4CD128 = dword_4CDF10 - 1950;
    }
    else
    {
      sprintf(Buffer, "%d.sav", dword_4C2D10);
      sub_41D7B0(Buffer, v46);
      sub_41EF50(0, v45);
    }
    sub_480A80(word_4D03D2);
    sub_45EA50();
    sub_47C950(0);
    sub_409200();
    sub_4091E0();
    sub_40B210();
    sub_4676A0(&unk_4C4290);
    return 1;
  }
  return result;
}
