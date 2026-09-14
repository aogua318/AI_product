// 函数 0x459b70  sub_459B70  size=0x3F9  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_459B70(int a1)
{
  int v1; // ecx
  int v2; // esi
  signed int v3; // esi
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  signed int v10; // ecx
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int result; // eax

  if ( dword_4CDEBC )
  {
    v9 = (int)(pow((double)dword_4D0474, 0.5) * 10.0);
    v10 = dword_4CE04C;
    dword_8C8988 = v9;
    dword_4D04AC = v9;
    dword_8C8990 = 1536 * (2 * v9 / dword_4CD11C);
    if ( dword_4CE04C > 1000 )
      v10 = -1000 - 1000 * ((dword_4CE04C - 1001) / 0x3E8u) + dword_4CE04C;
    if ( v10 < 0 )
      v10 += 1000 * ((-1 - v10) / 0x3E8u) + 1000;
    dword_8C898C = (int)((dbl_4D1118[23735 * a1 + v10] + 10000000.0) * (double)(v9 / 5) / (dbl_4CDF00 + 10000000.0));
    v11 = dword_870818;
    v12 = 0;
    if ( dword_870818 > 0 )
    {
      v13 = (char *)dword_870824 + 108;
      do
      {
        if ( *v13 == a1 )
          ++v12;
        v13 += 28;
        --v11;
      }
      while ( v11 );
    }
    dword_8C8984 = v12 * (v9 / 20);
    v14 = 0;
    if ( dword_4CDF1C[0] != -1 )
      v14 = (byte_4FF671 & 1) == 0;
    if ( dword_4CDF20[0] != -1 && (byte_52DC29 & 1) == 0 )
      ++v14;
    if ( dword_4CDF24[0] != -1 && (byte_55C1E1 & 1) == 0 )
      ++v14;
    if ( dword_4CDF28[0] != -1 && (byte_58A799 & 1) == 0 )
      ++v14;
    if ( dword_4CDF2C[0] != -1 && (byte_5B8D51 & 1) == 0 )
      ++v14;
    if ( dword_4CDF30[0] != -1 && (byte_5E7309 & 1) == 0 )
      ++v14;
    v8 = a1;
    dword_8C8994 = v14 * (v9 / 5);
  }
  else
  {
    v1 = 36 * (dword_4CDF14 - dword_4CDF10);
    dword_8C8988 = dword_4D04AC;
    v2 = 1;
    if ( v1 >= 1 )
      v2 = 36 * (dword_4CDF14 - dword_4CDF10);
    dword_8C8990 = 2 * dword_4D04AC * (v1 - dword_4CD11C / 1536) / v2;
    sub_425D90();
    v3 = dword_4CE04C;
    if ( dword_4CE04C > 1000 )
      v3 = -1000 - 1000 * ((dword_4CE04C - 1001) / 0x3E8u) + dword_4CE04C;
    if ( v3 < 0 )
      v3 += 1000 * ((-1 - v3) / 0x3E8u) + 1000;
    dword_8C898C = (int)((dbl_4D1118[23735 * a1 + v3] + 10000000.0)
                       * (double)(dword_8C8988 / 5)
                       / (*(double *)(*(_DWORD *)dword_4D0C60 + 648 * dword_4D04A4 + 64) + 10000000.0));
    sub_4262C0();
    v4 = dword_870818;
    v5 = 0;
    if ( dword_870818 > 0 )
    {
      v6 = (char *)dword_870824 + 108;
      do
      {
        if ( *v6 == a1 )
          ++v5;
        v6 += 28;
        --v4;
      }
      while ( v4 );
    }
    dword_8C8984 = v5 * (dword_8C8988 / 20);
    v7 = 0;
    if ( dword_4CDF1C[0] != -1 )
      v7 = (byte_4FF671 & 1) == 0;
    if ( dword_4CDF20[0] != -1 && (byte_52DC29 & 1) == 0 )
      ++v7;
    if ( dword_4CDF24[0] != -1 && (byte_55C1E1 & 1) == 0 )
      ++v7;
    if ( dword_4CDF28[0] != -1 && (byte_58A799 & 1) == 0 )
      ++v7;
    if ( dword_4CDF2C[0] != -1 && (byte_5B8D51 & 1) == 0 )
      ++v7;
    if ( dword_4CDF30[0] != -1 && (byte_5E7309 & 1) == 0 )
      ++v7;
    dword_8C8994 = v7 * (dword_8C8988 / 5);
    v8 = a1;
  }
  v15 = sub_42EC60((__int16 *)&unk_4D10B8 + 94940 * v8);
  dword_8C8978 = dword_8C8988 / 2 * (dword_4D0464 + 50) / 100;
  dword_8C897C = dword_8C8988 / 5 * v15;
  result = dword_8C8988 + dword_8C8990 + dword_8C898C + dword_8C8984 + dword_8C8994 + dword_8C897C + dword_8C8978;
  dword_8C8980 = result;
  return result;
}
