// 函数 0x468850  sub_468850  size=0x59  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_468850(int *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  v2 = *(this + 10);
  if ( v2 )
    sub_465FE0(v2, "a_lib\\a_graph.cpp", 177);
  *(this + 10) = (int)sub_465E40(4 * *(this + 1), "a_lib\\a_graph.cpp", 178);
  for ( result = 0; result < *(this + 1); *(_DWORD *)(*(this + 10) + 4 * result - 4) = v4 )
  {
    v4 = *(this + 9) + result * *(this + 2);
    ++result;
  }
  return result;
}
