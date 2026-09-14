// 函数 0x459ab0  sub_459AB0  size=0x88  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD sub_459AB0()
{
  DWORD result; // eax
  int v1; // eax
  _BYTE *i; // ecx

  result = GetTickCount();
  if ( (int)(result - dword_8C76BC) > 200 )
  {
    dword_8C76BC = result;
    if ( ++word_8C8960 >= 8 )
      word_8C8960 = 0;
    v1 = 0;
    for ( i = (_BYTE *)(dword_8C8970 + 9); (*i & 4) == 0; i += 288 )
    {
      if ( ++v1 >= 3 )
        return sub_47C950(0);
    }
    *(_WORD *)(288 * v1 + dword_8C8970 + 16) += 3;
    if ( *(__int16 *)(288 * v1 + dword_8C8970 + 16) >= 32 )
      *(_WORD *)(288 * v1 + dword_8C8970 + 16) = v1 + 8;
    return sub_47C950(0);
  }
  return result;
}
