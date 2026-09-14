// 函数 0x4380f0  sub_4380F0  size=0x51  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4380F0(const char *a1)
{
  int result; // eax
  const char *v2; // esi

  result = 0;
  v2 = byte_4B33C8;
  while ( strcmp(v2, a1) )
  {
    v2 += 8;
    ++result;
    if ( (int)v2 >= (int)byte_4B33E0 )
      return -1;
  }
  return result;
}
