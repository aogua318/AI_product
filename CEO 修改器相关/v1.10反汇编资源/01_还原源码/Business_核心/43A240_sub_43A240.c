// 函数 0x43a240  sub_43A240  size=0x3F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_43A240(_DWORD *this)
{
  int v2; // edx
  _DWORD *v3; // eax
  int v4; // ecx
  BOOL v5; // esi

  sub_425D90();
  v2 = 0;
  if ( dword_4D0C64 > 0 )
  {
    v3 = this + 61;
    v4 = dword_4D0C64;
    do
    {
      if ( *v3 )
        ++v2;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  v5 = v2 == dword_4D0C64;
  sub_4262C0();
  return v5;
}
