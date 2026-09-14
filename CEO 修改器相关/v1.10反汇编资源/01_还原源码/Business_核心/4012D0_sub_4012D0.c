// 函数 0x4012d0  sub_4012D0  size=0x34  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __cdecl sub_4012D0(int a1, int a2, int a3, int a4)
{
  signed int result; // eax

  result = 40 * (abs32(a2 - a4) + abs32(a1 - a3));
  if ( result < 400 )
    return 400;
  return result;
}
