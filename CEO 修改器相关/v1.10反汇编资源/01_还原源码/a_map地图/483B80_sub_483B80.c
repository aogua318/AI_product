// 函数 0x483b80  sub_483B80  size=0x28  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483B80(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 36) = a2;
  *(this + 37) = *(_DWORD *)(a2 + 292);
  result = *(_DWORD *)(a2 + 296);
  *(this + 38) = result;
  return result;
}
