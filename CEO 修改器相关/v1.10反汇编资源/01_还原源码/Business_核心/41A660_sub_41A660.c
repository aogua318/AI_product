// 函数 0x41a660  sub_41A660  size=0x55  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41A660(_BYTE *this, int a2)
{
  char v2; // dl

  v2 = *(this + (a2 < 0 ? 0 : a2) + 1852);
  if ( v2 != -1 )
    return v2;
  *(this + a2 + 1852) = *(this + 1848);
  if ( (int)++*((_DWORD *)this + 462) >= 8 )
    *((_DWORD *)this + 462) = 0;
  return (char)*(this + a2 + 1852);
}
