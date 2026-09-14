// 函数 0x47cc90  sub_47CC90  size=0x33  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47CC90(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = *(this + 1106);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = this + 6; *i != a2; i += 11 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
