// 函数 0x40ade0  sub_40ADE0  size=0x26  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40ADE0(int a1, int a2)
{
  int result; // eax

  result = a2 - 1;
  if ( a2 == 1 )
  {
    sub_47CCD0(&unk_4C2EA8);
    result = dword_4C5DB8;
    if ( dword_4C5DB8 > 0 )
      return sub_437F60(&unk_4C59B8, dword_4C5DB8);
  }
  return result;
}
