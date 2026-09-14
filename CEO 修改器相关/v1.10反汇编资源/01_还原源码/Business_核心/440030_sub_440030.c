// 函数 0x440030  sub_440030  size=0xB5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_440030(int a1, int a2)
{
  int result; // eax

  result = a2 - 3;
  if ( a2 == 3 )
  {
    if ( dword_4B37D0 == -1 )
    {
      result = dword_4B1028 * dword_4CCA98;
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
      {
        result = dword_8A6224 + (dword_8EED8C - 250) / 20;
        if ( result < dword_8A6228 )
          return sub_43F830(dword_8A6078[result], 3);
      }
    }
  }
  else
  {
    result = a2 - 4;
    if ( a2 == 4 )
    {
      if ( (dword_4D0AB0 & 1) != 0 )
      {
        sub_4830A0(&unk_8A6360);
        result = sub_4830A0(&unk_8A6230);
        dword_4D0AB0 &= ~1u;
      }
      else
      {
        result = sub_43FC60(1);
        dword_4D0AB0 |= 1u;
      }
    }
  }
  return result;
}
