// 函数 0x419bb0  sub_419BB0  size=0x52  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419BB0(__int16 *this, int a2)
{
  int v2; // ecx
  int v3; // eax

  v2 = *(this + 379);
  if ( v2 == -1 )
    return 1;
  while ( 1 )
  {
    v3 = v2 * dword_8703BC;
    if ( !*(_BYTE *)(v2 * dword_8703BC + dword_8703D0 + 30) && *(char *)(v3 + dword_8703D0 + 31) == a2 )
      break;
    v2 = *(__int16 *)(v3 + dword_8703D0 + 4);
    if ( v2 == -1 )
      return 1;
  }
  return 0;
}
