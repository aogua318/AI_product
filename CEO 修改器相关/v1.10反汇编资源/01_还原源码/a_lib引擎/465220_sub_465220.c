// 函数 0x465220  sub_465220  size=0xFC  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_465220(size_t *this, int a2)
{
  signed int i; // edi
  signed int j; // edi

  if ( *(_DWORD *)(a2 + 12) != 1 )
    return 0;
  if ( *this == 2 )
  {
    for ( i = 0; i < (int)*(this + 2); ++i )
    {
      if ( *(__int16 *)(*(this + 5) + 2 * i) >= 0 )
        memset((void *)(*(this + 6) + i * *(this + 1)), 0, *(this + 1));
    }
  }
  else if ( *this == 4 )
  {
    for ( j = 0; j < (int)*(this + 2); ++j )
    {
      if ( *(int *)(*(this + 5) + 4 * j) >= 0 )
        memset((void *)(*(this + 6) + j * *(this + 1)), 0, *(this + 1));
    }
  }
  sub_466260(this, 4);
  sub_466260(this + 1, 4);
  sub_466260(this + 2, 4);
  sub_466260(this + 3, 4);
  sub_466260(this + 4, 4);
  sub_466260(*(this + 5), *this * *(this + 2));
  sub_466260(*(this + 6), *(this + 1) * *(this + 2));
  return 1;
}
