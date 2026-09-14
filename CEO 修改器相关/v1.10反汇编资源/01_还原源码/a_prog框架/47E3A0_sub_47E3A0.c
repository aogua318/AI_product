// 函数 0x47e3a0  sub_47E3A0  size=0x69  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47E3A0(int this, int a2)
{
  int result; // eax
  int v3; // esi
  _BYTE *i; // edx

  result = a2;
  *(_WORD *)(this + 302) = a2;
  if ( a2 )
  {
    if ( !dword_8F2AC8 )
    {
      result = 0;
      if ( *(__int16 *)(this + 292) > 0 )
      {
        v3 = *(_DWORD *)(this + 296);
        for ( i = (_BYTE *)(v3 + 27); *(_WORD *)(i - 23) != 5 || (*i & 1) == 0; i += 288 )
        {
          if ( ++result >= *(__int16 *)(this + 292) )
            return result;
        }
        result = v3 + 288 * result;
        dword_8F2AC8 = result;
      }
    }
  }
  return result;
}
