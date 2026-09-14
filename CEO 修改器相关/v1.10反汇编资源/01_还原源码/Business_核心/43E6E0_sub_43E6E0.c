// 函数 0x43e6e0  sub_43E6E0  size=0x2B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43E6E0(int a1, int a2)
{
  int result; // eax

  if ( a2 == 6 )
  {
    sub_47C920(1);
  }
  else
  {
    result = a2 - 7;
    if ( a2 != 7 )
      return result;
    sub_47C920(0);
  }
  sub_47C930();
  return sub_435570(1, 0);
}
