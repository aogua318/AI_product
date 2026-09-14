// 函数 0x419cb0  sub_419CB0  size=0x82  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419CB0(_WORD *this, int a2)
{
  __int16 v2; // si
  int result; // eax
  int v4; // ecx

  v2 = *(this + 379);
  if ( v2 == -1 )
    return -1;
  v4 = dword_4CC8D0 + dword_4CC8BC * (__int16)*(this + (a2 < 0 ? 0 : a2) + 120);
  result = v2;
  if ( v2 == -1 )
    return -1;
  while ( *(char *)(result * dword_8703BC + dword_8703D0 + 31) != *(unsigned __int8 *)(v4 + 1257) )
  {
    result = *(__int16 *)(result * dword_8703BC + dword_8703D0 + 4);
    if ( result == -1 )
      return -1;
  }
  return result;
}
