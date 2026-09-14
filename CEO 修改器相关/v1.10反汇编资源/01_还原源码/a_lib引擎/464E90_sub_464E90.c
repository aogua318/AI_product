// 函数 0x464e90  sub_464E90  size=0x3D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464E90(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 5);
  if ( *this == 2 )
  {
    if ( *(__int16 *)(v2 + 2 * a2) < 0 )
      return 1;
  }
  else if ( *(int *)(v2 + 4 * a2) < 0 )
  {
    return 1;
  }
  return 0;
}
