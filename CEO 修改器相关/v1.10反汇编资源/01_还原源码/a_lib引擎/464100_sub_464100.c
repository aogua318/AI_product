// 函数 0x464100  sub_464100  size=0x40  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __cdecl sub_464100(const char *a1)
{
  unsigned int v1; // eax
  signed int v2; // edx
  signed int i; // ecx

  v1 = strlen(a1);
  v2 = v1;
  for ( i = 0; i < v2; ++i )
  {
    LOBYTE(v1) = a1[i];
    if ( (v1 & 0x80u) == 0 )
    {
      if ( (char)v1 >= 97 && (char)v1 <= 122 )
      {
        LOBYTE(v1) = v1 - 32;
        a1[i] = v1;
      }
    }
    else
    {
      ++i;
    }
  }
  return v1;
}
