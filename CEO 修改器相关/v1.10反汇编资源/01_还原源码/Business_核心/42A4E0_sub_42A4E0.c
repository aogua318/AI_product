// 函数 0x42a4e0  sub_42A4E0  size=0x31  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_42A4E0()
{
  int i; // eax
  int result; // eax

  for ( i = dword_4D0DBC; ; i = 0 )
  {
    while ( !i )
    {
      result = sub_45D790();
      if ( !result )
        return result;
      i = 1;
      dword_4D0DBC = 1;
    }
    result = sub_45D3A0();
    if ( !result )
      break;
    dword_4D0DBC = 0;
  }
  return result;
}
