// 函数 0x4823c0  sub_4823C0  size=0x86  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__thiscall sub_4823C0(__int16 *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  bool v4; // sf
  int v5; // edx
  int v6; // eax
  int v7; // edx

  if ( *(this + 10) )
  {
    v1 = *(this + 18);
    v2 = *(this + 20) - v1;
    if ( !v2 )
      v2 = 1;
    v3 = *(this + 13) - *(__int16 *)(*(_DWORD *)this + 278) - *(this + 15) - v1;
    v4 = dword_8EED8C + v3 < 0;
    v5 = dword_8EED8C + v3;
  }
  else
  {
    v6 = *(this + 17);
    v2 = *(this + 19) - v6;
    if ( !v2 )
      v2 = 1;
    v7 = *(this + 12) - *(__int16 *)(*(_DWORD *)this + 276) - *(this + 14) - v6;
    v4 = dword_8EED88 + v7 < 0;
    v5 = dword_8EED88 + v7;
  }
  if ( v4 )
    v5 = 0;
  if ( v5 > v2 - 1 )
    v5 = v2 - 1;
  return sub_481500((int)this, (HWND)(v5 * *((_DWORD *)this + 3) / v2));
}
