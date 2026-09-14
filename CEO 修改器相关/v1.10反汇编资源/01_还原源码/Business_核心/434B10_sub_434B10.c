// 函数 0x434b10  sub_434B10  size=0x46  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __cdecl sub_434B10(int a1, int a2)
{
  if ( a1 )
  {
    if ( a1 == 1 && a2 != -1 )
      return word_870934;
  }
  else if ( a2 > 0 )
  {
    return word_870936[(a2 - 1) / 3];
  }
  return -1;
}
