// 函数 0x415cf0  sub_415CF0  size=0x7F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415CF0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi

  v2 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(this + 2);
  if ( *(__int16 *)(v2 + 2 * *(unsigned __int8 *)(this + 1257) + 800) <= 0 )
    return 0;
  v3 = *(__int16 *)(v2 + 758);
  if ( v3 == -1 )
    return 0;
  while ( 1 )
  {
    v4 = dword_8703D0 + v3 * dword_8703BC;
    if ( *(char *)(v4 + 31) == *(unsigned __int8 *)(this + 1257) )
    {
      if ( sub_430F50(v4) )
        break;
    }
    v3 = *(__int16 *)(v4 + 4);
    if ( v3 == -1 )
      return 0;
  }
  return 1;
}
