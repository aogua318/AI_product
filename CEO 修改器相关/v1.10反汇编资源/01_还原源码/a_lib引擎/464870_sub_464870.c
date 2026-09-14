// 函数 0x464870  sub_464870  size=0x32  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464870(int *this)
{
  int result; // eax

  result = *this;
  if ( *this )
  {
    result = sub_465FE0(result, (int)"a_lib\\a_util.cpp", 439);
    *this = 0;
    *(this + 1) = 0;
    *(this + 2) = 0;
  }
  return result;
}
