// 函数 0x464d90  sub_464D90  size=0x30  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464D90(_DWORD *this)
{
  int result; // eax
  bool v2; // zf

  result = 0;
  v2 = *this == 2;
  *(this + 4) = 0;
  if ( v2 )
  {
    if ( (int)*(this + 2) > 0 )
    {
      do
      {
        *(_WORD *)(*(this + 5) + 2 * result) = result;
        ++result;
      }
      while ( result < *(this + 2) );
    }
  }
  else if ( (int)*(this + 2) > 0 )
  {
    do
    {
      *(_DWORD *)(*(this + 5) + 4 * result) = result;
      ++result;
    }
    while ( result < *(this + 2) );
  }
  return result;
}
