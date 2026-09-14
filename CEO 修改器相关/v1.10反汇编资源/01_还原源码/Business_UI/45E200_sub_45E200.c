// 函数 0x45e200  sub_45E200  size=0x41  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45E200(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  if ( a2 == 8 )
  {
    sub_435570(1, 0);
    sub_47C920(1);
    return sub_47C930(v6, v5);
  }
  else
  {
    result = a2 - 9;
    if ( a2 == 9 )
    {
      sub_435570(1, 0);
      sub_47C920(0);
      return sub_47C930(v4, v3);
    }
  }
  return result;
}
