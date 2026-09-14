// 函数 0x45a020  sub_45A020  size=0x2F  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45A020(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  if ( a2 == 12 )
  {
    sub_47C920(1);
    return sub_47C930(v6, v5);
  }
  else
  {
    result = a2 - 13;
    if ( a2 == 13 )
    {
      sub_47C920(0);
      return sub_47C930(v4, v3);
    }
  }
  return result;
}
