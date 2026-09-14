// 函数 0x432f00  sub_432F00  size=0xA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_432F00()
{
  int result; // eax

  sub_432EC0();
  if ( dword_870824 )
  {
    sub_465FE0((char)dword_870824, (int)"product_type.cpp", 179);
    dword_870824 = 0;
  }
  result = *(_DWORD *)dword_870814;
  if ( *(_DWORD *)dword_870814 )
  {
    result = sub_465FE0(dword_870814[0], (int)"product_type.cpp", 183);
    *(_DWORD *)dword_870814 = 0;
  }
  dword_870818 = 0;
  return result;
}
