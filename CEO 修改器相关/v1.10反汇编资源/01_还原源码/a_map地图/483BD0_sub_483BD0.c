// 函数 0x483bd0  sub_483BD0  size=0x25  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_483BD0(_DWORD *this, int a2, char a3, __int16 a4)
{
  int result; // eax

  result = *(this + 45) + a2 * *(this + 40);
  *(_BYTE *)(result + 11) = a3;
  *(_WORD *)(result + 12) = a4;
  return result;
}
