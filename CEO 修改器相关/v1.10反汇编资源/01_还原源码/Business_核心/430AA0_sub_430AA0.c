// 函数 0x430aa0  sub_430AA0  size=0x43  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430AA0(__int16 *this, int a2)
{
  int v2; // eax
  __int16 *i; // esi

  v2 = 0;
  for ( i = this + 4; *i != a2; ++i )
  {
    if ( *i == -1 )
    {
      *(this + v2 + 4) = a2;
      return 1;
    }
    if ( ++v2 >= 4 )
      return 0;
  }
  return 1;
}
