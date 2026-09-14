// 函数 0x486af0  sub_486AF0  size=0x39  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__thiscall sub_486AF0(int *this)
{
  void *result; // eax

  sub_4688B0(this + 13);
  sub_4688B0(this + 1);
  result = memset(this, 0, 0xA0u);
  *(this + 38) = (int)sub_486A40;
  *(this + 39) = (int)sub_486A50;
  return result;
}
