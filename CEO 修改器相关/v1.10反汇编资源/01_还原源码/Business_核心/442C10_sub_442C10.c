// 函数 0x442c10  sub_442C10  size=0x124  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_442C10()
{
  int v0; // edi
  int v1; // ecx
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int result; // eax

  v0 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
  v1 = 0;
  dword_8A7158 = 0;
  if ( dword_4B37E8 != -1 )
  {
    dword_8A6FA8[0] = dword_4B37E8;
    v1 = 1;
LABEL_18:
    dword_8A7158 = v1;
    goto LABEL_19;
  }
  v2 = *(__int16 *)(v0 + 238);
  v3 = dword_4CC8D0;
  if ( v2 != -1 )
  {
    do
    {
      v4 = v2 * dword_4CC8BC;
      if ( !*(_BYTE *)(v2 * dword_4CC8BC + v3 + 10) )
      {
        dword_8A6FA8[v1 < 0 ? 0 : v1] = v2;
        ++v1;
      }
      v2 = *(__int16 *)(v4 + v3 + 6);
    }
    while ( v2 != -1 );
    dword_8A7158 = v1;
  }
  v5 = *(__int16 *)(v0 + 238);
  if ( v5 != -1 )
  {
    do
    {
      v6 = v5 * dword_4CC8BC;
      if ( *(_BYTE *)(v5 * dword_4CC8BC + v3 + 10) == 1 )
      {
        dword_8A6FA8[v1 < 0 ? 0 : v1] = v5;
        ++v1;
      }
      v5 = *(__int16 *)(v6 + v3 + 6);
    }
    while ( v5 != -1 );
    dword_8A7158 = v1;
  }
  v7 = *(__int16 *)(v0 + 238);
  if ( v7 != -1 )
  {
    do
    {
      v8 = v7 * dword_4CC8BC;
      if ( *(_BYTE *)(v7 * dword_4CC8BC + v3 + 10) == 2 )
      {
        dword_8A6FA8[v1 < 0 ? 0 : v1] = v7;
        ++v1;
      }
      v7 = *(__int16 *)(v8 + v3 + 6);
    }
    while ( v7 != -1 );
    goto LABEL_18;
  }
LABEL_19:
  sub_43F9E0(v1 - 14);
  result = dword_8A7154;
  if ( dword_8A7154 >= dword_8A7158 )
    dword_8A7154 = 0;
  return result;
}
