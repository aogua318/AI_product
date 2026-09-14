// 函数 0x4481d0  sub_4481D0  size=0xD1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4481D0(int a1, int a2)
{
  int result; // eax
  char *v3; // eax
  _BYTE *v4; // edx
  char v5; // cl
  char *v6; // ecx
  _BYTE *v7; // edx
  char v8; // al
  _BYTE v9[256]; // [esp+0h] [ebp-104h] BYREF

  if ( a2 )
  {
    result = a2 - 1;
    if ( a2 == 1 )
    {
      sub_435570(1, 0);
      return sub_47C930();
    }
  }
  else
  {
    sub_435570(1, 0);
    v3 = (char *)(dword_8B1CA8 + 604);
    v4 = &v9[-dword_8B1CA8 - 604];
    do
    {
      v5 = *v3;
      v3[(_DWORD)v4] = *v3;
      ++v3;
    }
    while ( v5 );
    if ( v9[0] )
    {
      v6 = v9;
      v7 = (_BYTE *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 204);
      do
      {
        v8 = *v6;
        *v7++ = *v6++;
      }
      while ( v8 );
      sub_40DD00(*(__int16 *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 1620));
    }
    return sub_47C930();
  }
  return result;
}
