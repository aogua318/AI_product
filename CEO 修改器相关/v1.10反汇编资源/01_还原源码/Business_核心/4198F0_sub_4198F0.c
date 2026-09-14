// 函数 0x4198f0  sub_4198F0  size=0x2F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4198F0(_DWORD *this, int a2, int a3, _DWORD *a4, int *a5)
{
  int result; // eax

  *a4 = a2 * dword_4B1108 - *(this + 47);
  result = a3 * dword_4B1108 - *(this + 48);
  *a5 = result;
  return result;
}
