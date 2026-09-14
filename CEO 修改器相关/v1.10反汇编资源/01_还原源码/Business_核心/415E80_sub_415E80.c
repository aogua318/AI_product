// 函数 0x415e80  sub_415E80  size=0xC8  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415E80(char *this)
{
  int v1; // edx
  char v2; // bl
  int v3; // ecx
  int v4; // eax
  int v6; // ecx
  __int16 *i; // esi
  int v8; // eax
  int v9; // eax

  v1 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)this + 1);
  v2 = *this;
  if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *this + 12) != 2 )
  {
    v6 = 0;
    for ( i = (__int16 *)(*(_DWORD *)dword_87081C + 116 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * v2 + 16) + 20); ; ++i )
    {
      v8 = *i;
      if ( v8 != -1 )
      {
        v9 = *(__int16 *)(v1 + 2 * v8 + 240);
        if ( v9 == -1 || !*(_WORD *)(v9 * dword_4CC8BC + dword_4CC8D0 + 26) )
          break;
      }
      if ( ++v6 >= 4 )
        return 1;
    }
    return 0;
  }
  v3 = *(__int16 *)(v1 + 1620);
  if ( v3 == -1 )
    return 0;
  while ( 1 )
  {
    v4 = dword_4C43DC + v3 * dword_4C43C8;
    if ( *(_BYTE *)(v4 + 7) == 5 && *(_WORD *)(v4 + 4) == v2 && *(_BYTE *)(v4 + 85) == 0xFF )
      break;
    v3 = *(__int16 *)(v4 + 20);
    if ( v3 == -1 )
      return 0;
  }
  return 1;
}
