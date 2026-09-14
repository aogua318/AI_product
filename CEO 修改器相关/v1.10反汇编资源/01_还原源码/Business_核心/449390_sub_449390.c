// 函数 0x449390  sub_449390  size=0x84  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_449390(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx

  if ( a2 )
  {
    if ( a2 == 34 )
    {
      sub_435570(5, 0);
      sub_42F0A0((double *)&unk_4D10B8 + 23735 * dword_8703A0, dbl_8B5718);
    }
    else
    {
      result = a2 - 35;
      if ( a2 != 35 )
        return result;
      sub_435570(5, 0);
      sub_42F130((double *)&unk_4D10B8 + 23735 * dword_8703A0, dbl_8B5728);
    }
  }
  else
  {
    sub_435570(1, 0);
  }
  return sub_47C930(v4, v3);
}
