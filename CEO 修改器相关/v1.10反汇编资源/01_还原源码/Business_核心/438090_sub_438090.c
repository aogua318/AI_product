// 函数 0x438090  sub_438090  size=0x51  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_438090(const char *a1)
{
  int result; // eax
  const char *v2; // esi

  result = 0;
  v2 = byte_4B3380;
  while ( strcmp(v2, a1) )
  {
    v2 += 12;
    ++result;
    if ( (int)v2 >= (int)byte_4B33C8 )
      return -1;
  }
  return result;
}
