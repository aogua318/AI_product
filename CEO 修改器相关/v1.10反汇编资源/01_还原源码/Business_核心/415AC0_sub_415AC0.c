// 函数 0x415ac0  sub_415AC0  size=0x53  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415AC0(__int16 *this)
{
  int v1; // edx
  __int16 v2; // cx

  v1 = *(__int16 *)(dword_4CCA98 * *(this + 1) + dword_4CCAAC + 760);
  if ( v1 == -1 )
    return 0;
  v2 = *(char *)this;
  while ( *(_WORD *)(v1 * dword_870854 + dword_870868 + 8) != v2 )
  {
    v1 = *(__int16 *)(v1 * dword_870854 + dword_870868 + 4);
    if ( v1 == -1 )
      return 0;
  }
  return 1;
}
