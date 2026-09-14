// 函数 0x415e10  sub_415E10  size=0x62  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415E10(_BYTE *this)
{
  int v1; // edx
  int v2; // eax

  v1 = *(__int16 *)(dword_4CCA98 * *((__int16 *)this + 1) + dword_4CCAAC + 238);
  if ( v1 == -1 )
    return 1;
  while ( 1 )
  {
    v2 = v1 * dword_4CC8BC;
    if ( *(_BYTE *)(v1 * dword_4CC8BC + dword_4CC8D0) != *this && *(_BYTE *)(v2 + dword_4CC8D0 + 1256) == *(this + 1256) )
      break;
    v1 = *(__int16 *)(v2 + dword_4CC8D0 + 6);
    if ( v1 == -1 )
      return 1;
  }
  return 0;
}
