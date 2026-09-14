// 函数 0x47ed10  sub_47ED10  size=0x18C  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_47ED10(__int16 *this, int a2, int a3)
{
  __int16 v4; // di
  BOOL result; // eax
  char v6; // al
  int v7; // edi
  char v8; // al
  int v9; // edi
  char v10; // al
  int v11; // edi

  v4 = *(this + 16);
  result = 1;
  if ( v4 == -1
    || !sub_467130(
          (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v4),
          *(this + 14) + *(__int16 *)(*(_DWORD *)this + 276),
          *(this + 15) + *(__int16 *)(*(_DWORD *)this + 278),
          a2,
          a3) )
  {
    v6 = *((_BYTE *)this + 8);
    if ( (v6 & 8) != 0 && (v6 & 1) != 0 )
      v7 = *(this + 22);
    else
      v7 = *(this + 21);
    if ( v7 == -1
      || !sub_467130(
            (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v7),
            *(this + 14) + *(this + 27) + *(__int16 *)(*(_DWORD *)this + 276),
            *(this + 15) + *(this + 28) + *(__int16 *)(*(_DWORD *)this + 278),
            a2,
            a3) )
    {
      v8 = *((_BYTE *)this + 8);
      if ( (v8 & 0x10) != 0 && (v8 & 2) != 0 )
        v9 = *(this + 24);
      else
        v9 = *(this + 23);
      if ( v9 == -1
        || !sub_467130(
              (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v9),
              *(this + 14) + *(this + 29) + *(__int16 *)(*(_DWORD *)this + 276),
              *(this + 15) + *(this + 30) + *(__int16 *)(*(_DWORD *)this + 278),
              a2,
              a3) )
      {
        v10 = *((_BYTE *)this + 8);
        if ( (v10 & 0x20) != 0 && (v10 & 4) != 0 )
          v11 = *(this + 26);
        else
          v11 = *(this + 25);
        if ( v11 == -1
          || !sub_467130(
                (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v11),
                *(this + 14) + *(this + 31) + *(__int16 *)(*(_DWORD *)this + 276),
                *(this + 15) + *(this + 32) + *(__int16 *)(*(_DWORD *)this + 278),
                a2,
                a3) )
        {
          return 0;
        }
      }
    }
  }
  return result;
}
