// 函数 0x488f60  _pow  size=0x3F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl pow(double X, double Y)
{
  int v2; // eax
  bool v3; // zf
  char v5; // [esp+0h] [ebp-8h]

  if ( dword_8F62C0 )
  {
    v2 = _mm_getcsr() & 0x7F80;
    v3 = v2 == 8064;
    if ( v2 == 8064 )
      v3 = (v5 & 0x7F) == 127;
    if ( v3 )
      return _pow_pentium4(X, Y);
  }
  _fload_withFB();
  return start_0(X, Y);
}
