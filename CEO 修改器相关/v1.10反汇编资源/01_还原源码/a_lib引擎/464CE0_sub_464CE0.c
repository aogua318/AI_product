// 函数 0x464ce0  sub_464CE0  size=0x20  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464CE0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  result = a2[3];
  *(this + 3) = result;
  return result;
}
