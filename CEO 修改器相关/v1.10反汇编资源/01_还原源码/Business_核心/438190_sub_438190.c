// 函数 0x438190  sub_438190  size=0x187  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl sub_438190(__int64 a1, char *Buffer, int a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // rax
  int i; // [esp+18h] [ebp+Ch]

  v3 = a1;
  v4 = 1;
  if ( a1 < 0 )
  {
    v3 = -a1;
    v4 = -1;
    --a3;
  }
  v5 = v3;
  for ( i = 0; v5; ++i )
    v5 /= 10;
  if ( i > a3 )
  {
    if ( i > a3 + 2 )
    {
      if ( i > a3 + 5 )
      {
        _i64toa((v3 + 500000000) / 1000000000 * v4, Buffer, 10);
        *(_WORD *)&Buffer[strlen(Buffer)] = 71;
      }
      else
      {
        _i64toa((v3 + 500000) / 1000000 * v4, Buffer, 10);
        *(_WORD *)&Buffer[strlen(Buffer)] = 77;
      }
      return Buffer;
    }
    else
    {
      _i64toa((v3 + 500) / 1000 * v4, Buffer, 10);
      *(_WORD *)&Buffer[strlen(Buffer)] = 75;
      return Buffer;
    }
  }
  else
  {
    _i64toa(v4 * v3, Buffer, 10);
    return Buffer;
  }
}
