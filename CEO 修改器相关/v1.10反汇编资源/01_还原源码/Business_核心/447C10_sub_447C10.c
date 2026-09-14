// 函数 0x447c10  sub_447C10  size=0x2B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_447C10(int a1, int a2)
{
  int result; // eax

  if ( a2 )
  {
    result = a2 - 1;
    if ( a2 != 1 )
      return result;
    sub_47C920(0);
  }
  else
  {
    sub_47C920(1);
  }
  sub_47C930();
  return sub_435570(1, 0);
}
