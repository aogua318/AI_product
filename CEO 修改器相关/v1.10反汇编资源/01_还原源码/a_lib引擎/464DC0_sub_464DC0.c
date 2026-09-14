// 函数 0x464dc0  sub_464DC0  size=0x41  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464DC0(int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 5);
  if ( v2 )
  {
    sub_465FE0(v2, (int)"a_lib\\a_block.cpp", 72);
    *(this + 5) = 0;
  }
  result = *(this + 6);
  if ( result )
  {
    result = sub_465FE0(result, (int)"a_lib\\a_block.cpp", 76);
    *(this + 6) = 0;
  }
  return result;
}
