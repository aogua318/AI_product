// 函数 0x4298f0  sub_4298F0  size=0x5E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4298F0(const char *a1)
{
  int result; // eax
  const char *i; // esi

  result = 0;
  if ( dword_4D0C98 <= 0 )
    return -1;
  for ( i = (const char *)(*(_DWORD *)dword_4D0C94 + 12); strcmp(i, a1); i += 68 )
  {
    if ( ++result >= dword_4D0C98 )
      return -1;
  }
  return result;
}
