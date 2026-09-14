// 函数 0x458190  sub_458190  size=0x459  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_458190()
{
  _DWORD *v0; // eax
  int v1; // esi
  char *v2; // eax
  char *v3; // edx
  char v4; // cl
  int v5; // eax
  char v6; // cl
  char *v7; // eax
  char v8; // cl
  int v9; // eax
  char v10; // cl
  char *v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // cl
  int result; // eax
  int v16; // edi
  int *v17; // esi
  double v18; // st7
  double v19; // st7
  double v20; // st7
  int v21; // [esp+4h] [ebp-108h]
  char v22[256]; // [esp+8h] [ebp-104h] BYREF

  v0 = (_DWORD *)(*(_DWORD *)dword_8C5970 + 36 * dword_8C5A3C);
  dword_4D0460 = v0[5];
  dword_4D049C = v0[6];
  dword_4D047C = v0[7];
  v1 = dword_8C76B0;
  dword_4D04A0 = v0[8];
  v2 = (char *)(dword_8C76B0 + 9820);
  v3 = &v22[-dword_8C76B0 - 9820];
  do
  {
    v4 = *v2;
    v2[(_DWORD)v3] = *v2;
    ++v2;
  }
  while ( v4 );
  if ( strlen(v22) > 0x12 )
  {
    do
      sub_47B930(v22, 0);
    while ( strlen(v22) > 0x12 );
    v1 = dword_8C76B0;
  }
  v5 = 0;
  do
  {
    v6 = v22[v5];
    byte_4CDEC4[v5++] = v6;
  }
  while ( v6 );
  v7 = (char *)(v1 + 10108);
  do
  {
    v8 = *v7;
    v22[(_DWORD)v7 - 10108 - v1] = *v7;
    ++v7;
  }
  while ( v8 );
  if ( strlen(v22) > 0xA )
  {
    do
      sub_47B930(v22, 0);
    while ( strlen(v22) > 0xA );
    v1 = dword_8C76B0;
  }
  v9 = 0;
  do
  {
    v10 = v22[v9];
    byte_4CDEC4[v9++] = v10;
  }
  while ( v10 );
  v11 = (char *)(v1 + 48700);
  do
  {
    v12 = *v11;
    v22[(_DWORD)v11 - 48700 - v1] = *v11;
    ++v11;
  }
  while ( v12 );
  if ( strlen(v22) > 0xA )
  {
    do
      sub_47B930(v22, 0);
    while ( strlen(v22) > 0xA );
    v1 = dword_8C76B0;
  }
  v13 = 0;
  do
  {
    v14 = v22[v13];
    byte_4CE00C[v13++] = v14;
  }
  while ( v14 );
  dword_4CDEF8 = *(__int16 *)(v1 + 11246) - 52;
  dword_4CDF10 = dword_4B383C;
  dword_4CDF14 = dword_4B383C + atoi((const char *)(v1 + 30268));
  v21 = 1000000 * atoi((const char *)(dword_8C76B0 + 31708));
  result = dword_8C76B0;
  dword_4CDEB8 = dword_8C5A38;
  dword_4CDF18[0] = 1;
  v16 = 0;
  dbl_4CDF00 = (double)v21;
  v17 = dword_4CDF1C;
  dbl_4CDF08 = (double)v21;
  do
  {
    if ( (*(_BYTE *)(v16 + result + 32265) & 2) != 0 )
    {
      *v17 = atoi((const char *)(v16 + result + 40924));
      result = dword_8C76B0;
    }
    else
    {
      *v17 = -1;
    }
    ++v17;
    v16 += 288;
  }
  while ( (int)v17 < (int)dword_4CDF34 );
  if ( (*(_BYTE *)(result + 12105) & 2) != 0 )
    dword_4CDF34[0] = dword_8C5A44;
  else
    dword_4CDF34[0] = -1;
  if ( (*(_BYTE *)(result + 12393) & 2) != 0 )
    dword_4CDF38 = byte_8C59B0[dword_8C5A48];
  else
    dword_4CDF38 = -1;
  if ( (*(_BYTE *)(result + 12681) & 2) != 0 )
  {
    v21 = atoi((const char *)(result + 17596));
    result = dword_8C76B0;
    v18 = (double)v21 * 1000000.0;
  }
  else
  {
    v18 = -1.0;
  }
  dbl_4CDF40 = v18;
  if ( (*(_BYTE *)(result + 12969) & 2) != 0 )
  {
    v21 = atoi((const char *)(result + 18748));
    result = dword_8C76B0;
    v19 = (double)v21 * 100000000.0 + dbl_4CDF00;
  }
  else
  {
    v19 = -1.0;
  }
  dbl_4CDF48 = v19;
  if ( (*(_BYTE *)(result + 13257) & 2) != 0 )
  {
    v21 = atoi((const char *)(result + 19900));
    result = dword_8C76B0;
    v20 = (double)v21 * 100000000.0;
  }
  else
  {
    v20 = -1.0;
  }
  dbl_4CDF50 = v20;
  if ( (*(_BYTE *)(result + 13545) & 2) != 0 )
  {
    dword_4CDF58 = dword_8C5A50 + 3;
    v21 = atoi((const char *)(result + 21052));
    result = dword_8C76B0;
    dbl_4CDF60 = (double)v21 * 1000000.0;
  }
  else
  {
    dword_4CDF58 = -1;
  }
  if ( (*(_BYTE *)(result + 13833) & 2) != 0 )
  {
    dword_4CDF68 = dword_8C5A54;
    result = atoi((const char *)(result + 22204));
    v21 = result;
    dbl_4CDF70 = (double)result * 1000000.0;
  }
  else
  {
    dword_4CDF68 = -1;
  }
  dword_4CDF78 = -1;
  dword_4CDF88 = -1;
  dword_4CDF8C = -1;
  dword_4CDF90 = -1;
  dword_4CDF94 = -1;
  dword_4CDF98 = -1;
  dword_4CDFC0 = -1;
  return result;
}
