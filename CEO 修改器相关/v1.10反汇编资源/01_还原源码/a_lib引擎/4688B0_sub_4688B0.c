// 函数 0x4688b0  sub_4688B0  size=0x49  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__thiscall sub_4688B0(int *this)
{
  FILE *result; // eax

  if ( *(this + 11) )
  {
    sub_465FE0(*(this + 9), "a_lib\\a_graph.cpp", 192);
    *(this + 11) = 0;
  }
  result = (FILE *)*(this + 10);
  if ( result )
  {
    result = sub_465FE0((int)result, "a_lib\\a_graph.cpp", 196);
    *(this + 10) = 0;
  }
  return result;
}
