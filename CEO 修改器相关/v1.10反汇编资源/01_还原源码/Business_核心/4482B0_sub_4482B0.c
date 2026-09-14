// 函数 0x4482b0  sub_4482B0  size=0x96  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4482B0(int a1)
{
  int result; // eax
  char *v2; // eax
  _BYTE *v3; // edx
  char v4; // cl
  char *v5; // ecx
  _BYTE *v6; // edx
  char v7; // al
  _BYTE v8[256]; // [esp+0h] [ebp-104h] BYREF

  result = a1;
  if ( a1 != 13 )
  {
    if ( a1 != 27 )
      return result;
    return ((int (*)(void))sub_47C930)();
  }
  v2 = (char *)(dword_8B1CA8 + 604);
  v3 = &v8[-dword_8B1CA8 - 604];
  do
  {
    v4 = *v2;
    v2[(_DWORD)v3] = *v2;
    ++v2;
  }
  while ( v4 );
  if ( !v8[0] )
    return ((int (*)(void))sub_47C930)();
  v5 = v8;
  v6 = (_BYTE *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 204);
  do
  {
    v7 = *v5;
    *v6++ = *v5++;
  }
  while ( v7 );
  return sub_47C930(v5, v6);
}
