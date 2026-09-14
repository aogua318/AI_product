// 函数 0x4838b0  sub_4838B0  size=0x22  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4838B0(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int result; // eax

  *a4 = a2 + *this - *(this + 24);
  result = a3 + *(this + 1) - *(this + 25);
  *a5 = result;
  return result;
}
