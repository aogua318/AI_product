// 函数 0x443be0  sub_443BE0  size=0x62  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_443BE0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    if ( a2 > 0 && a2 <= 2 )
    {
      sub_435570(1, 0);
      if ( a2 == 1 )
      {
        v2 = sub_444530(0);
        sub_443B90(v2);
      }
      else
      {
        v3 = sub_444530(1);
        sub_443B90(v3);
      }
    }
  }
  else
  {
    sub_435570(1, 0);
    sub_443AC0();
  }
}
