// 函数 0x464ed0  sub_464ED0  size=0x8C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464ED0(int *this, int (__cdecl *a2)(int))
{
  int result; // eax
  int v4; // ebx
  int i; // edi
  int j; // edi
  int v7; // [esp+4h] [ebp-4h]

  result = *(this + 4);
  v7 = result;
  if ( result )
  {
    result = *this;
    v4 = 0;
    if ( *this == 2 )
    {
      for ( i = 0; i < *(this + 2); ++i )
      {
        result = *(this + 5);
        if ( *(__int16 *)(result + 2 * i) < 0 )
        {
          result = a2(i);
          if ( result )
            break;
          if ( ++v4 >= v7 )
            break;
        }
      }
    }
    else if ( result == 4 )
    {
      for ( j = 0; j < *(this + 2); ++j )
      {
        if ( *(int *)(*(this + 5) + 4 * j) < 0 )
        {
          result = a2(j);
          if ( result )
            break;
          if ( ++v4 >= v7 )
            break;
        }
      }
    }
  }
  return result;
}
