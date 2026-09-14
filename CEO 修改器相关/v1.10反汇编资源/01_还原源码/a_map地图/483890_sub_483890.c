// 函数 0x483890  sub_483890  size=0x1F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483890(_DWORD *this, int a2, int a3, _DWORD *a4, int *a5)
{
  int result; // eax

  *a4 = a2 * *(this + 8);
  result = a3 * *(this + 8);
  *a5 = result;
  return result;
}
