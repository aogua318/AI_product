// 函数 0x46f470  sub_46F470  size=0xA6  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_46F470(_DWORD *this, _BYTE *a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax

  if ( *(this + 4) >= *(this + 2) + *(this + 3) )
    return 0;
  v4 = 0;
  v5 = sub_46F3A0((int)this);
  if ( v5 != -1 )
  {
    while ( v5 == 32 || v5 == 9 || v5 == 10 || v5 == 13 )
    {
      v5 = sub_46F3A0((int)this);
      if ( v5 == -1 )
      {
        *a2 = 0;
        return 0;
      }
    }
    *a2 = v5;
    v4 = 1;
    do
    {
      v6 = sub_46F3A0((int)this);
      if ( v6 == 32 )
        break;
      if ( v6 == 9 )
        break;
      if ( v6 == 10 )
        break;
      if ( v6 == 13 )
        break;
      a2[v4++] = v6;
    }
    while ( v6 != -1 );
  }
  a2[v4] = 0;
  return v4 > 0;
}
