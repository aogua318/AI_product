// 函数 0x415a00  sub_415A00  size=0x5B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415A00(__int16 *this)
{
  int v1; // edx
  __int16 v2; // cx
  int v3; // eax

  v1 = *(__int16 *)(dword_4CCA98 * *(this + 1) + dword_4CCAAC + 760);
  if ( v1 == -1 )
    return 0;
  v2 = *(char *)this;
  while ( 1 )
  {
    v3 = v1 * dword_870854;
    if ( *(_WORD *)(v1 * dword_870854 + dword_870868 + 8) == v2 && *(_WORD *)(v3 + dword_870868 + 12) != 0xFFFF )
      break;
    v1 = *(__int16 *)(v3 + dword_870868 + 4);
    if ( v1 == -1 )
      return 0;
  }
  return 1;
}
