// 函数 0x434b60  sub_434B60  size=0x63  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __cdecl sub_434B60(int a1, int a2, int a3)
{
  if ( dword_4CE034 >= 0 )
  {
    if ( dword_4CE034 <= 4 )
    {
      if ( a1 )
      {
        if ( a1 == 1 && (unsigned int)(a2 - 1) < 0x22 )
          return word_87094A;
      }
      else if ( a2 < 84 )
      {
        return word_870870[a2];
      }
    }
    else if ( dword_4CE034 == 5 )
    {
      return word_4D0BBA[*(char *)(*(_DWORD *)dword_4D0B64 + a3)];
    }
  }
  return -1;
}
