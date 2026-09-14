// 函数 0x436fb0  sub_436FB0  size=0x41  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_436FB0(int a1, int a2)
{
  int result; // eax

  if ( a2 == 3 )
  {
    sub_435570(1, 0);
    sub_47C920(0);
    return sub_47C930();
  }
  else
  {
    result = a2 - 4;
    if ( a2 == 4 )
    {
      sub_435570(1, 0);
      sub_47C920(1);
      return sub_47C930();
    }
  }
  return result;
}
