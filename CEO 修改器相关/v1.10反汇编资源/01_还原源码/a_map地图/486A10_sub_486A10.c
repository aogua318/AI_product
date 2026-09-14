// 函数 0x486a10  sub_486A10  size=0x2F  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_486A10(int *this, int a2)
{
  int result; // eax

  dword_8F2ADC = a2;
  dword_8F2AD4 = (int)this;
  result = sub_464ED0(this + 39, sub_486980);
  *(this + 15) = a2;
  return result;
}
