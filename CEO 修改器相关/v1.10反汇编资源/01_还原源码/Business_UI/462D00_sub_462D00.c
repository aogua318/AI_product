// 函数 0x462d00  sub_462D00  size=0x959  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_462D00()
{
  int v0; // esi
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  int v6; // edi
  const char *v7; // eax
  const char *v8; // eax
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  const char *v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  int v19; // eax
  char v20; // cl
  char *v21; // eax
  char *v22; // edx
  char v23; // cl
  int v24; // esi
  int v26; // [esp-Ch] [ebp-21Ch]
  int v27; // [esp-8h] [ebp-218h]
  int v28; // [esp-4h] [ebp-214h]
  int v29; // [esp-4h] [ebp-214h]
  int v30; // [esp-4h] [ebp-214h]
  int v31; // [esp-4h] [ebp-214h]
  int i; // [esp+8h] [ebp-208h]
  char v33[256]; // [esp+Ch] [ebp-204h] BYREF
  char Buffer[256]; // [esp+10Ch] [ebp-104h] BYREF

  v0 = 0;
  if ( dword_4CDF34[0] != -1 )
  {
    v28 = sub_4646A0(1, dword_4CDF34[0]);
    v1 = (const char *)sub_4646A0(0, 10);
    sprintf(Buffer, v1, v28);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFC4);
    sub_47FF50(Buffer);
    v0 = 1;
  }
  if ( dword_4CDF38 != -1 )
  {
    v29 = *(_DWORD *)dword_870814 + 72 * dword_4CDF38;
    v2 = (const char *)sub_4646A0(0, 11);
    sprintf(Buffer, v2, v29);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFC8);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( -1.0 != dbl_4CDF40 )
  {
    sub_438190((unsigned __int64)dbl_4CDF40, v33, 7);
    v3 = (const char *)sub_4646A0(0, 12);
    sprintf(Buffer, v3, v33);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFCC);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( -1.0 != dbl_4CDF48 )
  {
    sub_438190((unsigned __int64)dbl_4CDF48, v33, 7);
    v4 = (const char *)sub_4646A0(0, 13);
    sprintf(Buffer, v4, v33);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFD0);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( -1.0 != dbl_4CDF50 )
  {
    sub_438190((unsigned __int64)dbl_4CDF50, v33, 7);
    v5 = (const char *)sub_4646A0(0, 14);
    sprintf(Buffer, v5, v33);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFD4);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF58 != -1 )
  {
    v6 = *(_DWORD *)dword_4D0C94 + 68 * dword_4CDF58;
    sub_438190((unsigned __int64)dbl_4CDF60, v33, 7);
    v7 = (const char *)sub_4646A0(0, 15);
    sprintf(Buffer, v7, v6, v33);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFD8);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF68 != -1 )
  {
    sub_438190((unsigned __int64)dbl_4CDF70, v33, 7);
    v26 = sub_4646A0(2, dword_4CDF68);
    v8 = (const char *)sub_4646A0(0, 16);
    sprintf(Buffer, v8, v26, v33);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFDC);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF78 != -1 )
  {
    v9 = (char *)sub_4646A0(0, 17);
    v10 = (char *)(Buffer - v9);
    do
    {
      v11 = *v9;
      v9[(_DWORD)v10] = *v9;
      ++v9;
    }
    while ( v11 );
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFE0);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF88 != -1 )
  {
    v27 = *(_DWORD *)dword_870814 + 72 * dword_4CDF88;
    v12 = (const char *)sub_4646A0(0, 18);
    sprintf(Buffer, v12, v27);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFE4);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF8C != -1 )
  {
    v13 = 0;
    v14 = 0;
    for ( i = 0; v13 < dword_4C43CC; ++v13 )
    {
      if ( sub_464E90(v13) )
      {
        v15 = dword_4C43DC + v13 * dword_4C43C8;
        if ( *(char *)(v15 + 2) == dword_8703A0 && *(_BYTE *)(v15 + 7) == 2 )
          ++v14;
        if ( ++i >= dword_4C43D4 )
          break;
      }
    }
    v16 = (const char *)sub_4646A0(0, 19);
    sprintf(Buffer, v16, v14);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFE8);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF90 != -1 )
  {
    v30 = sub_41F500();
    v17 = (const char *)sub_4646A0(0, 20);
    sprintf(Buffer, v17, v30);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFEC);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF94 != -1 )
  {
    v31 = *(_DWORD *)dword_870814 + 72 * dword_4CDF94;
    v18 = (const char *)sub_4646A0(0, 21);
    sprintf(Buffer, v18, v31);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFF0);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDF98 != -1 )
  {
    v19 = 0;
    do
    {
      v20 = byte_4CDFA0[v19];
      Buffer[v19++] = v20;
    }
    while ( v20 );
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFF4);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( dword_4CDFC0 != -1 )
  {
    v21 = (char *)sub_4646A0(0, dword_4CDFC0 + 23);
    v22 = (char *)(Buffer - v21);
    do
    {
      v23 = *v21;
      v21[(_DWORD)v22] = *v21;
      ++v21;
    }
    while ( v23 );
    sub_47FF50(Buffer);
    sprintf(Buffer, "%3d%%", dword_4CDFF8);
    sub_47FF50(Buffer);
    ++v0;
  }
  if ( v0 < 7 )
  {
    v24 = 32 * (9 * v0 + 414);
    do
    {
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      v24 += 288;
    }
    while ( v24 < 15264 );
  }
  _itoa(dword_4CDF14 - dword_4CD128 - 1951, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(13 - dword_4B1120, Buffer, 10);
  return sub_47FF50(Buffer);
}
