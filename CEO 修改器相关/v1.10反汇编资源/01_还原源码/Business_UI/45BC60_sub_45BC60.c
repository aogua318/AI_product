// 函数 0x45bc60  sub_45BC60  size=0x9B5  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_45BC60(int a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int m; // edi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edi
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  char *v20; // eax
  char *v21; // edx
  char v22; // cl
  char *v23; // eax
  char *v24; // edx
  char v25; // cl
  char *v26; // eax
  char *v27; // edx
  char v28; // cl
  char *v29; // eax
  char *v30; // edx
  char v31; // cl
  char *v32; // eax
  char *v33; // edx
  char v34; // cl
  char *v35; // eax
  char v36; // cl
  int v37; // eax
  char *v38; // eax
  char *v39; // edx
  char v40; // cl
  int v41; // eax
  int v42; // ebx
  const char *v43; // eax
  int v44; // edi
  int i; // esi
  int j; // esi
  int k; // esi
  int v49; // [esp-10h] [ebp-23Ch]
  char *v50; // [esp-Ch] [ebp-238h]
  int v51; // [esp+4h] [ebp-228h]
  _DWORD *v52; // [esp+8h] [ebp-224h]
  int v53; // [esp+Ch] [ebp-220h] BYREF
  _DWORD v54[6]; // [esp+10h] [ebp-21Ch]
  char v55[256]; // [esp+28h] [ebp-204h] BYREF
  char Buffer[256]; // [esp+128h] [ebp-104h] BYREF

  sub_466C70(&unk_8CF030);
  if ( a1 == -1 )
  {
    for ( i = 19296; i < 20736; i += 288 )
      sub_482060(i + dword_8CF170);
    sub_47FF50(byte_4A2869);
    sub_480A80(0);
    sub_47FF50(byte_4A2869);
    sub_480A80(0);
    sub_480A80(0);
    sub_480A80(0);
    sub_480A80(0);
    for ( j = 0; j < 3456; j += 576 )
    {
      sub_482060(j + dword_8CF170 + 24768);
      sub_482060(j + dword_8CF170 + 25056);
    }
    sub_47FF50(byte_4A2869);
    sub_47FF50(byte_4A2869);
    for ( k = 31392; k < 32832; k += 288 )
    {
      sub_47FF50(byte_4A2869);
      sub_482060(k + dword_8CF170);
    }
    sub_47FF50(byte_4A2869);
    sub_47FF50(byte_4A2869);
    return sub_47FF50(byte_4A2869);
  }
  else
  {
    v2 = *(_DWORD *)dword_4D0C60 + 648 * a1;
    v49 = *(_DWORD *)(v2 + 516);
    v3 = sub_47C740("pics\\smap");
    sub_4674F0(&unk_8CF030, v3, v49, 0);
    v4 = sub_464D00(389, 101, 552, 225);
    sub_47C950(v4);
    v5 = 0;
    for ( m = 19296; m < 20736; m += 288 )
    {
      v7 = *(_DWORD *)(v2 + 88) - v5;
      if ( v7 <= 1 )
      {
        if ( v7 == 1 )
        {
          ++v5;
          sub_47E650(66);
          sub_482FE0(m + dword_8CF170);
        }
        else
        {
          sub_482060(m + dword_8CF170);
        }
      }
      else
      {
        v5 += 2;
        sub_47E650(65);
        sub_482FE0(m + dword_8CF170);
      }
    }
    _itoa(*(_DWORD *)(v2 + 92), Buffer, 10);
    sub_47FF50(Buffer);
    sub_480A80(*(_DWORD *)(v2 + 96));
    _itoa(*(_DWORD *)(v2 + 112), Buffer, 10);
    sub_47FF50(Buffer);
    sub_480A80(100 * *(_DWORD *)(v2 + 116) / *(_DWORD *)(v2 + 112));
    sub_480A80(100 * *(_DWORD *)(v2 + 120) / *(_DWORD *)(v2 + 112));
    sub_480A80(100 * *(_DWORD *)(v2 + 124) / *(_DWORD *)(v2 + 112));
    sub_480A80(100 * *(_DWORD *)(v2 + 128) / *(_DWORD *)(v2 + 112));
    v8 = 0;
    v53 = 4;
    v54[0] = 0;
    v54[1] = 1;
    v54[2] = 2;
    v54[3] = 3;
    v54[4] = 5;
    v54[5] = 6;
    v9 = 1;
    while ( dword_4CDEF8 != v54[v9 - 1] )
    {
      if ( ++v9 >= 7 )
        goto LABEL_14;
    }
    v10 = v54[v9 - 1];
    v11 = &v54[v9 - 1];
    v53 = v10 ^ 4;
    *v11 ^= v10 ^ 4;
    v53 ^= *v11;
LABEL_14:
    v12 = 0;
    v51 = 0;
    v13 = 0;
    v52 = (_DWORD *)(v2 + 132);
    do
    {
      if ( *v52 != -1 )
      {
        sub_482FE0(v8 + dword_8CF170 + 24768);
        sub_482FE0(v8 + dword_8CF170 + 25056);
        sub_47E650(v54[v13] + 57);
        v14 = sub_4646A0(1, v13 + 1);
        sub_47FF50(v14);
        v12 = ++v51;
        v8 += 576;
      }
      ++v52;
      ++v13;
    }
    while ( v13 < 6 );
    if ( v12 < 6 )
    {
      v15 = 576 * v12;
      do
      {
        sub_482060(v15 + dword_8CF170 + 24768);
        sub_482060(v15 + dword_8CF170 + 25056);
        v15 += 576;
      }
      while ( v15 < 3456 );
    }
    sub_47FF50(v2 + 40);
    sub_47FF50(v2 + 156);
    v16 = 0;
    if ( -1.0 != *(double *)(v2 + 520) )
    {
      sub_438190((unsigned __int64)*(double *)(v2 + 520), v55, 7);
      v17 = (const char *)sub_4646A0(0, 12);
      sprintf(Buffer, v17, v55);
      v16 = sub_45BBB0(Buffer, 0);
    }
    if ( -1.0 != *(double *)(v2 + 528) )
    {
      sub_438190((unsigned __int64)*(double *)(v2 + 528), v55, 7);
      v18 = (const char *)sub_4646A0(0, 13);
      sprintf(Buffer, v18, v55);
      v16 = sub_45BBB0(Buffer, v16);
    }
    if ( -1.0 != *(double *)(v2 + 536) )
    {
      sub_438190((unsigned __int64)*(double *)(v2 + 536), v55, 7);
      v19 = (const char *)sub_4646A0(0, 14);
      sprintf(Buffer, v19, v55);
      v16 = sub_45BBB0(Buffer, v16);
    }
    if ( *(_DWORD *)(v2 + 544) != -1 )
    {
      v20 = (char *)sub_4646A0(0, 17);
      v21 = (char *)(Buffer - v20);
      do
      {
        v22 = *v20;
        v21[(_DWORD)v20] = *v20;
        ++v20;
      }
      while ( v22 );
      v16 = sub_45BBB0(Buffer, v16);
    }
    if ( *(_DWORD *)(v2 + 548) != -1 )
    {
      v23 = (char *)sub_4646A0(0, 18);
      v24 = (char *)(Buffer - v23);
      do
      {
        v25 = *v23;
        v24[(_DWORD)v23] = *v23;
        ++v23;
      }
      while ( v25 );
      sprintf(v55, Buffer, *(_DWORD *)dword_870814 + 72 * *(_DWORD *)(v2 + 548));
      v16 = sub_45BBB0(v55, v16);
    }
    if ( *(_DWORD *)(v2 + 552) != -1 )
    {
      v26 = (char *)sub_4646A0(0, 19);
      v27 = (char *)(Buffer - v26);
      do
      {
        v28 = *v26;
        v27[(_DWORD)v26] = *v26;
        ++v26;
      }
      while ( v28 );
      sprintf(v55, Buffer, *(_DWORD *)(v2 + 552));
      v16 = sub_45BBB0(v55, v16);
    }
    if ( *(_DWORD *)(v2 + 556) != -1 )
    {
      v29 = (char *)sub_4646A0(0, 20);
      v30 = (char *)(Buffer - v29);
      do
      {
        v31 = *v29;
        v30[(_DWORD)v29] = *v29;
        ++v29;
      }
      while ( v31 );
      sprintf(v55, Buffer, *(_DWORD *)(v2 + 556));
      v16 = sub_45BBB0(v55, v16);
    }
    if ( *(_DWORD *)(v2 + 560) != -1 )
    {
      v32 = (char *)sub_4646A0(0, 21);
      v33 = (char *)(Buffer - v32);
      do
      {
        v34 = *v32;
        v33[(_DWORD)v32] = *v32;
        ++v32;
      }
      while ( v34 );
      sprintf(v55, Buffer, *(_DWORD *)dword_870814 + 72 * *(_DWORD *)(v2 + 560));
      v16 = sub_45BBB0(v55, v16);
    }
    if ( *(_DWORD *)(v2 + 564) != -1 )
    {
      v35 = (char *)(v2 + 572);
      do
      {
        v36 = *v35;
        Buffer[(_DWORD)v35 - 572 - v2] = *v35;
        ++v35;
      }
      while ( v36 );
      sprintf(v55, Buffer, *(_DWORD *)(v2 + 564));
      v16 = sub_45BBB0(v55, v16);
    }
    v37 = *(_DWORD *)(v2 + 616);
    if ( v37 != -1 )
    {
      v38 = (char *)sub_4646A0(0, v37 + 23);
      v39 = (char *)(Buffer - v38);
      do
      {
        v40 = *v38;
        v39[(_DWORD)v38] = *v38;
        ++v38;
      }
      while ( v40 );
      v16 = sub_45BBB0(Buffer, v16);
    }
    v41 = *(_DWORD *)(v2 + 604);
    if ( v41 != -1 )
    {
      v42 = *(_DWORD *)dword_4D0C94 + 68 * v41;
      sub_438190((unsigned __int64)*(double *)(v2 + 608), v55, 7);
      v50 = v55;
      v49 = v42;
      v43 = (const char *)sub_4646A0(0, 15);
      sprintf(Buffer, v43);
      v16 = sub_45BBB0(Buffer, v16);
    }
    if ( v16 < 5 )
    {
      v44 = 32 * (9 * v16 + 1062);
      do
      {
        sub_482060(v44 + dword_8CF170 - 2592);
        sub_47FF50(byte_4A2869);
        v44 += 288;
      }
      while ( v44 < 35424 );
    }
    sub_438340((unsigned __int64)*(double *)(v2 + 64), Buffer);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v2 + 60), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v2 + 62), Buffer, 10);
    return sub_47FF50(Buffer);
  }
}
