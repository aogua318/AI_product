// 函数 0x464650  sub_464650  size=0x45  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464650(int *this)
{
  int result; // eax

  if ( *this )
  {
    sub_465FE0(*this, (int)"a_lib\\a_util.cpp", 331);
    *this = 0;
  }
  result = *(this + 1);
  if ( result )
  {
    result = sub_465FE0(result, (int)"a_lib\\a_util.cpp", 335);
    *(this + 1) = 0;
  }
  return result;
}
