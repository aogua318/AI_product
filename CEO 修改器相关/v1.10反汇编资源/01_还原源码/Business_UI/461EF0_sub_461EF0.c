// 函数 0x461ef0  sub_461EF0  size=0x9CE  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_461EF0()
{
  int v0; // eax
  int v1; // esi
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  int v7; // edi
  const char *v8; // eax
  const char *v9; // eax
  char *v10; // eax
  char *v11; // edx
  char v12; // cl
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  int v17; // eax
  char v18; // cl
  char *v19; // eax
  char *v20; // edx
  char v21; // cl
  int v22; // esi
  int v23; // ebx
  int v24; // edi
  __int16 *v25; // esi
  int v26; // esi
  int v28; // [esp-Ch] [ebp-21Ch]
  int v29; // [esp-8h] [ebp-218h]
  int v30; // [esp-8h] [ebp-218h]
  int v31; // [esp-8h] [ebp-218h]
  int v32; // [esp-8h] [ebp-218h]
  int v33; // [esp-4h] [ebp-214h]
  int v34; // [esp-4h] [ebp-214h]
  int *v35; // [esp+8h] [ebp-208h]
  _BYTE v36[256]; // [esp+Ch] [ebp-204h] BYREF
  char Buffer[256]; // [esp+10Ch] [ebp-104h] BYREF

  v0 = sub_47C740("face\\taskhint.fce");
  sub_481C90(&unk_8D90F0, v0, 1);
  v1 = 0;
  if ( dword_4CDF34[0] != -1 )
  {
    v33 = sub_4646A0(1, dword_4CDF34[0]);
    v2 = (const char *)sub_4646A0(0, 10);
    sprintf(Buffer, v2, v33);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFC4);
    sub_47FF50(Buffer);
    v1 = 1;
  }
  if ( dword_4CDF38 != -1 )
  {
    v34 = *(_DWORD *)dword_870814 + 72 * dword_4CDF38;
    v3 = (const char *)sub_4646A0(0, 11);
    sprintf(Buffer, v3, v34);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFC8);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( -1.0 != dbl_4CDF40 )
  {
    sub_438340((unsigned __int64)dbl_4CDF40, v36);
    v4 = (const char *)sub_4646A0(0, 12);
    sprintf(Buffer, v4, v36);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFCC);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( -1.0 != dbl_4CDF48 )
  {
    sub_438340((unsigned __int64)dbl_4CDF48, v36);
    v5 = (const char *)sub_4646A0(0, 13);
    sprintf(Buffer, v5, v36);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFD0);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( -1.0 != dbl_4CDF50 )
  {
    sub_438340((unsigned __int64)dbl_4CDF50, v36);
    v6 = (const char *)sub_4646A0(0, 14);
    sprintf(Buffer, v6, v36);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFD4);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF58 != -1 )
  {
    v7 = *(_DWORD *)dword_4D0C94 + 68 * dword_4CDF58;
    sub_438340((unsigned __int64)dbl_4CDF60, v36);
    v8 = (const char *)sub_4646A0(0, 15);
    sprintf(Buffer, v8, v7, v36);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFD8);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF68 != -1 )
  {
    sub_438340((unsigned __int64)dbl_4CDF70, v36);
    v28 = sub_4646A0(2, dword_4CDF68);
    v9 = (const char *)sub_4646A0(0, 16);
    sprintf(Buffer, v9, v28, v36);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFDC);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF78 != -1 )
  {
    v10 = (char *)sub_4646A0(0, 17);
    v11 = (char *)(Buffer - v10);
    do
    {
      v12 = *v10;
      v10[(_DWORD)v11] = *v10;
      ++v10;
    }
    while ( v12 );
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFE0);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF88 != -1 )
  {
    v29 = *(_DWORD *)dword_870814 + 72 * dword_4CDF88;
    v13 = (const char *)sub_4646A0(0, 18);
    sprintf(Buffer, v13, v29);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFE4);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF8C != -1 )
  {
    v30 = dword_4CDF8C;
    v14 = (const char *)sub_4646A0(0, 19);
    sprintf(Buffer, v14, v30);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFE8);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF90 != -1 )
  {
    v31 = dword_4CDF90;
    v15 = (const char *)sub_4646A0(0, 20);
    sprintf(Buffer, v15, v31);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFEC);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF94 != -1 )
  {
    v32 = *(_DWORD *)dword_870814 + 72 * dword_4CDF94;
    v16 = (const char *)sub_4646A0(0, 21);
    sprintf(Buffer, v16, v32);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFF0);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDF98 != -1 )
  {
    v17 = 0;
    do
    {
      v18 = byte_4CDFA0[v17];
      Buffer[v17++] = v18;
    }
    while ( v18 );
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFF4);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( dword_4CDFC0 != -1 )
  {
    v19 = (char *)sub_4646A0(0, dword_4CDFC0 + 23);
    v20 = (char *)(Buffer - v19);
    do
    {
      v21 = *v19;
      v19[(_DWORD)v20] = *v19;
      ++v19;
    }
    while ( v21 );
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFF8);
    sub_47FF50(Buffer);
    ++v1;
  }
  if ( v1 < 7 )
  {
    v22 = 864 * v1;
    do
    {
      sub_482060(v22 + dword_8D9218 + 3744);
      sub_482060(v22 + dword_8D9218 + 4032);
      sub_482060(v22 + dword_8D9218 + 4320);
      v22 += 864;
    }
    while ( v22 < 6048 );
  }
  v23 = 0;
  v24 = 0;
  v35 = dword_4CDF1C;
  v25 = (__int16 *)&unk_4FF6AC;
  do
  {
    if ( *v35 != -1 )
    {
      sub_47E650(*(v25 - 29) + 16);
      sub_47FF50(v25);
      ++v23;
      v24 += 576;
    }
    ++v35;
    v25 += 94940;
  }
  while ( (int)v25 < (int)word_6158FC );
  if ( v23 < 6 )
  {
    v26 = 576 * v23;
    do
    {
      sub_482060(dword_8D9218 + v26 + 10080);
      sub_482060(dword_8D9218 + v26 + 10368);
      v26 += 576;
    }
    while ( v26 < 3456 );
  }
  _itoa(dword_4CDF14, Buffer, 10);
  sub_47FF50(Buffer);
  sub_47D1A0(&unk_8D90F0, sub_461ED0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
