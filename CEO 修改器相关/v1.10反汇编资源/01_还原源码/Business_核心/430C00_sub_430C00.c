// 函数 0x430c00  sub_430C00  size=0x9E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430C00(__int16 *this, int a2)
{
  __int16 v2; // ax
  int v3; // edi
  int v4; // esi
  int v5; // edx
  __int16 *i; // eax
  int v8; // [esp+Ch] [ebp-4h]

  v2 = *(this + 14);
  v3 = -1;
  if ( v2 == -1 )
    return -1;
  v4 = dword_89E57C + dword_89E568 * v2;
  v5 = 3;
  for ( i = this + 7; ; --i )
  {
    v8 = *i;
    if ( v8 != -1 && v3 == -1 )
      v3 = v5;
    if ( v8 == a2 )
      break;
    if ( --v5 < 0 )
      return -1;
  }
  *(this + v5 + 4) = -1;
  *(_WORD *)(v4 + 2 * v5 + 8) = -1;
  if ( v5 != v3 )
  {
    *(this + v5 + 4) = *(this + v3 + 4);
    *(_WORD *)(v4 + 2 * v5 + 8) = *(_WORD *)(v4 + 2 * v3 + 8);
    *(this + v3 + 4) = -1;
    *(_WORD *)(v4 + 2 * v3 + 8) = -1;
  }
  return v8;
}
