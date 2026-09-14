// 函数 0x465530  sub_465530  size=0xEA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_465530(_DWORD *this, int a2)
{
  int v3; // ebx
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  __int16 *i; // esi
  int v9; // ecx
  int *v10; // esi

  v3 = *(this + 4);
  if ( !v3 )
    return -1;
  v5 = 0;
  if ( !a2 )
  {
    v6 = sub_4640D0() % v3;
    if ( *this == 2 )
    {
      v7 = *(this + 2);
      result = 0;
      if ( v7 > 0 )
      {
        for ( i = (__int16 *)*(this + 5); ; ++i )
        {
          if ( *i < 0 )
          {
            if ( v5 == v6 )
              return result;
            if ( ++v5 >= v3 )
              break;
          }
          if ( ++result >= v7 )
            return -1;
        }
      }
    }
    else if ( *this == 4 )
    {
      v9 = *(this + 2);
      result = 0;
      if ( v9 > 0 )
      {
        v10 = (int *)*(this + 5);
        do
        {
          if ( *v10 < 0 )
          {
            if ( v5 == v6 )
              return result;
            if ( ++v5 >= v3 )
              break;
          }
          ++result;
          ++v10;
        }
        while ( result < v9 );
      }
    }
    return -1;
  }
  if ( *this == 2 )
  {
    do
      result = sub_4640D0() % *(this + 2);
    while ( *(__int16 *)(*(this + 5) + 2 * result) >= 0 );
    return result;
  }
  if ( *this != 4 )
    return -1;
  do
    result = sub_4640D0() % *(this + 2);
  while ( *(int *)(*(this + 5) + 4 * result) >= 0 );
  return result;
}
