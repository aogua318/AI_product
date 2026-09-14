// 函数 0x43fe60  sub_43FE60  size=0x17B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43FE60()
{
  int v0; // edi
  int v1; // ecx
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax

  v0 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
  v1 = 0;
  dword_8A6228 = 0;
  if ( dword_4B37D0 != -1 )
  {
    dword_8A6078[0] = dword_4B37D0;
    v1 = 1;
LABEL_21:
    dword_8A6228 = v1;
    goto LABEL_22;
  }
  v2 = *(__int16 *)(v0 + 238);
  if ( v2 != -1 )
  {
    do
    {
      v3 = dword_4CC8D0 + v2 * dword_4CC8BC;
      if ( (*(_BYTE *)(v3 + 8) & 1) == 0 && !*(_BYTE *)(v3 + 9) )
      {
        dword_8A6078[v1 < 0 ? 0 : v1] = v2;
        ++v1;
      }
      v2 = *(__int16 *)(v3 + 6);
    }
    while ( v2 != -1 );
    dword_8A6228 = v1;
  }
  v4 = *(__int16 *)(v0 + 238);
  if ( v4 != -1 )
  {
    do
    {
      v5 = dword_4CC8D0 + v4 * dword_4CC8BC;
      if ( (*(_BYTE *)(v5 + 8) & 1) == 0 && *(_BYTE *)(v5 + 9) == 1 )
      {
        dword_8A6078[v1 < 0 ? 0 : v1] = v4;
        ++v1;
      }
      v4 = *(__int16 *)(v5 + 6);
    }
    while ( v4 != -1 );
    dword_8A6228 = v1;
  }
  v6 = *(__int16 *)(v0 + 238);
  if ( v6 != -1 )
  {
    do
    {
      v7 = dword_4CC8D0 + v6 * dword_4CC8BC;
      if ( (*(_BYTE *)(v7 + 8) & 1) == 0 && *(_BYTE *)(v7 + 9) == 2 )
      {
        dword_8A6078[v1 < 0 ? 0 : v1] = v6;
        ++v1;
      }
      v6 = *(__int16 *)(v7 + 6);
    }
    while ( v6 != -1 );
    goto LABEL_21;
  }
LABEL_22:
  sub_43F9E0(v1 - 13);
  if ( dword_8A6224 >= dword_8A6228 )
    dword_8A6224 = 0;
  if ( dword_8A6228 >= 14 )
    return sub_482120(133, 334);
  else
    return sub_482120(133, 20 * dword_8A6228 + 54);
}
