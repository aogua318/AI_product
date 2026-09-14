// 函数 0x464b90  sub_464B90  size=0x2B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_464B90(_DWORD *this, int a2, int a3)
{
  return a2 >= *this && a3 >= *(this + 1) && a2 < *(this + 2) && a3 < *(this + 3);
}
