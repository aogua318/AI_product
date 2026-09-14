// 函数 0x432ec0  sub_432EC0  size=0x31  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_432EC0()
{
  int result; // eax

  result = *(_DWORD *)dword_87081C;
  if ( *(_DWORD *)dword_87081C )
  {
    result = sub_465FE0(dword_87081C[0], (int)"product_type.cpp", 279);
    *(_DWORD *)dword_87081C = 0;
  }
  dword_870820 = 0;
  return result;
}
