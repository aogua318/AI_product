// 函数 0x46a450  sub_46A450  size=0xE6  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A450(int this, _BYTE *a2)
{
  FILE *v3; // ecx
  int v5; // ebx
  int v6; // ebx
  int v7; // eax

  v3 = *(FILE **)this;
  if ( !v3 )
    return 0;
  if ( *(_DWORD *)(this + 4) )
    return sub_46F470(a2);
  v5 = fgetc(v3);
  if ( !feof(*(FILE **)this) )
  {
    while ( v5 == 32 || v5 == 9 || v5 == 10 || v5 == 13 )
    {
      v5 = fgetc(*(FILE **)this);
      if ( feof(*(FILE **)this) )
        return feof(*(FILE **)this) == 0;
    }
    *a2 = v5;
    v6 = 1;
    if ( !feof(*(FILE **)this) )
    {
      while ( 1 )
      {
        v7 = fgetc(*(FILE **)this);
        if ( v7 == 32 || v7 == 9 || v7 == 10 || v7 == 13 )
          break;
        a2[v6++] = v7;
        if ( feof(*(FILE **)this) )
          return feof(*(FILE **)this) == 0;
      }
      a2[v6] = 0;
    }
  }
  return feof(*(FILE **)this) == 0;
}
