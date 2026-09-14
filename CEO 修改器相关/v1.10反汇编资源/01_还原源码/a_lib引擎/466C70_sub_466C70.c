// 函数 0x466c70  sub_466C70  size=0x2D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__thiscall sub_466C70(int *this)
{
  FILE *result; // eax

  if ( *(this + 5) )
  {
    result = sub_465FE0(*(this + 4), "a_lib\\a_pic2.cpp", 32);
    *(this + 5) = 0;
  }
  *(this + 4) = 0;
  *(this + 3) = 0;
  *(this + 2) = 0;
  return result;
}
