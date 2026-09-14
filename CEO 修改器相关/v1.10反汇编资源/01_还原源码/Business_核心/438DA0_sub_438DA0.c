// 函数 0x438da0  sub_438DA0  size=0x3C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_438DA0(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  int result; // eax

  v3 = *(this + 5);
  *a2 = *(__int16 *)(v3 * dword_4D0F08 + dword_4D0F1C + 2);
  result = *(__int16 *)(v3 * dword_4D0F08 + dword_4D0F1C + 4);
  *a3 = result;
  return result;
}
