// 函数 0x464e10  sub_464E10  size=0x7C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464E10(int *this, int a2)
{
  int v3; // edx
  int v4; // esi

  if ( a2 >= *(this + 2) )
    return 0;
  v3 = *(this + 4);
  if ( v3 > 0 )
  {
    v4 = *(this + 5);
    if ( *this == 2 )
    {
      if ( *(__int16 *)(v4 + 2 * a2) < 0 )
      {
        *(_WORD *)(v4 + 2 * v3 - 2) |= a2;
        *(_WORD *)(*(this + 5) + 2 * a2) &= ~0x8000u;
        --*(this + 4);
        return 1;
      }
    }
    else if ( *(int *)(v4 + 4 * a2) < 0 )
    {
      *(_DWORD *)(v4 + 4 * v3 - 4) |= a2;
      *(_DWORD *)(*(this + 5) + 4 * a2) &= ~0x80000000;
      --*(this + 4);
      return 1;
    }
  }
  return 0;
}
