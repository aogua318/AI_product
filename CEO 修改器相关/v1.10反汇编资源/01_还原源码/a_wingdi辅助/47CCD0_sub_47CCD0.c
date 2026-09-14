// 函数 0x47ccd0  sub_47CCD0  size=0x168  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47CCD0(int *this, int a2)
{
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // edi
  _DWORD *i; // eax
  int *v12; // eax
  int v13; // ebx
  int *v14; // edi
  int v15; // eax
  int j; // ecx

  if ( dword_8F2AC8 )
  {
    v3 = *(__int16 *)(a2 + 292);
    v4 = 0;
    if ( v3 > 0 )
    {
      v5 = *(_DWORD *)(a2 + 296);
      while ( *(_WORD *)(v5 + 4) != 5 || dword_8F2AC8 != v5 )
      {
        ++v4;
        v5 += 288;
        if ( v4 >= v3 )
          goto LABEL_9;
      }
      dword_8F2AC8 = 0;
    }
  }
LABEL_9:
  if ( dword_8F2AD0 )
  {
    v6 = *(__int16 *)(a2 + 292);
    v7 = 0;
    if ( v6 > 0 )
    {
      v8 = *(_DWORD *)(a2 + 296);
      while ( *(_WORD *)(v8 + 4) != 4 || dword_8F2AD0 != v8 )
      {
        ++v7;
        v8 += 288;
        if ( v7 >= v6 )
          goto LABEL_17;
      }
      dword_8F2AD0 = 0;
    }
  }
LABEL_17:
  v9 = 0;
  if ( *(this + 1106) <= 0 )
    return 0;
  for ( i = this + 6; *i != a2; i += 11 )
  {
    if ( ++v9 >= *(this + 1106) )
      return 0;
  }
  v12 = (int *)sub_482E20(a2);
  sub_47C950(v12);
  memcpy_0(this + 11 * v9 + 6, this + 11 * v9 + 17, 44 * (*(this + 1106) - v9 - 1));
  --*(this + 1106);
  v13 = 0;
  if ( *(this + 1106) > 0 )
  {
    v14 = this + 6;
    do
    {
      *(_WORD *)(*v14 + 300) = -1;
      dword_8EED70 = 1;
      sub_483170(0);
      ++v13;
      v14 += 11;
    }
    while ( v13 < *(this + 1106) );
  }
  v15 = *(this + 1106) - 1;
  if ( v15 >= 0 )
  {
    for ( j = (int)(this + 11 * v15 + 6); !*(_WORD *)(*(_DWORD *)j + 302); j -= 44 )
    {
      if ( --v15 < 0 )
        return 1;
    }
    sub_47E3A0(1);
  }
  return 1;
}
