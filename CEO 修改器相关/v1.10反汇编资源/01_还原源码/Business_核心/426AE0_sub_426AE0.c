// 函数 0x426ae0  sub_426AE0  size=0x4F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_426AE0(int a1)
{
  int result; // eax

  result = dword_4B119C;
  if ( dword_4B119C != -1 )
  {
    result = sub_4864E0(dword_4B119C);
    dword_4B119C = -1;
    dword_4B11A0 = -1;
    if ( dword_4B1028 == a1 )
      dword_4B1010 = -1;
  }
  return result;
}
