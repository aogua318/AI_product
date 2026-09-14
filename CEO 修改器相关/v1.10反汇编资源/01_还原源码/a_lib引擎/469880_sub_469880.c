// 函数 0x469880  sub_469880  size=0x90  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469880(int *this, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax

  sub_4688B0(this);
  *(this + 3) = a4;
  *this = a2;
  *(this + 7) = a2;
  v6 = (a4 * a2 / 8 + 3) & 0xFFFFFFFC;
  *(this + 1) = a3;
  *(this + 2) = v6;
  *(this + 4) = -1;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 8) = a3;
  if ( a5 )
  {
    *(this + 9) = a5;
    *(this + 11) = 0;
  }
  else
  {
    *(this + 9) = (int)sub_465E40(a3 * v6, "a_lib\\a_graph.cpp", 165);
    *(this + 11) = 1;
  }
  return sub_468850(this);
}
