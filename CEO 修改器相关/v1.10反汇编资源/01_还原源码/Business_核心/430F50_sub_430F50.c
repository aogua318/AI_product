// 函数 0x430f50  sub_430F50  size=0xA7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430F50(__int16 *this)
{
  int v1; // eax
  _WORD *v2; // edx
  int v3; // edx
  int v4; // eax
  int v5; // edx
  _WORD *v6; // esi

  v1 = 0;
  v2 = this + 8;
  do
  {
    if ( *v2 != 0xFFFF )
      return 1;
    ++v1;
    ++v2;
  }
  while ( v1 < 4 );
  v3 = *(__int16 *)(dword_4CCA98 * *this + dword_4CCAAC + 758);
  if ( v3 == -1 )
    return 0;
  while ( 1 )
  {
    v4 = v3 * dword_8703BC;
    if ( v3 != *(this + 16) && *(_BYTE *)(v4 + dword_8703D0 + 31) == *((_BYTE *)this + 31) )
      break;
LABEL_10:
    v3 = *(__int16 *)(v4 + dword_8703D0 + 4);
    if ( v3 == -1 )
      return 0;
  }
  v5 = 0;
  v6 = (_WORD *)(v4 + dword_8703D0 + 16);
  while ( *v6 == 0xFFFF )
  {
    ++v5;
    ++v6;
    if ( v5 >= 4 )
      goto LABEL_10;
  }
  return 1;
}
