// 函数 0x43f980  sub_43F980  size=0x55  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_43F980(unsigned int a1)
{
  unsigned int result; // eax

  dword_8A5E24 = a1;
  if ( a1 < 2 )
    return sub_4810E0(1);
  result = a1 - 2;
  if ( a1 == 2 )
    return sub_4810E0(1);
  return result;
}
