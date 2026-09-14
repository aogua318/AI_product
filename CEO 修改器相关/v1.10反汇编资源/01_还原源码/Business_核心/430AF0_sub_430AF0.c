// 函数 0x430af0  sub_430AF0  size=0xA1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430AF0(__int16 *this, int a2)
{
  __int16 v2; // ax
  int v3; // edx
  int v4; // esi
  int v5; // eax
  __int16 *i; // edi

  v2 = *(this + 14);
  if ( v2 == -1 )
    return 0;
  v3 = dword_89E57C + dword_89E568 * v2;
  v4 = -1;
  v5 = 3;
  for ( i = this + 7; ; --i )
  {
    if ( v4 == -1 && *i != -1 )
      v4 = v5;
    if ( *i == a2 )
      break;
    if ( --v5 < 0 )
      return 0;
  }
  if ( v5 == v4 )
  {
    *(this + v5 + 4) = -1;
    *(_WORD *)(v3 + 2 * v5 + 8) = -1;
  }
  else
  {
    *(this + v5 + 4) = *(this + v4 + 4);
    *(this + v4 + 4) = -1;
    *(_WORD *)(v3 + 2 * v5 + 8) = *(_WORD *)(v3 + 2 * v4 + 8);
    *(_WORD *)(v3 + 2 * v4 + 8) = -1;
  }
  return 1;
}
