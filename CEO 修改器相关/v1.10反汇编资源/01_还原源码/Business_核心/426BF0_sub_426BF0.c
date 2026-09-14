// 函数 0x426bf0  sub_426BF0  size=0x51  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_426BF0(__int16 *this, int a2, int a3)
{
  int v3; // eax

  v3 = dword_4CCAAC + dword_4CCA98 * *(this + 1);
  return sub_483850(
           *(__int16 *)(*(this + 8) * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 2),
           *(__int16 *)(*(this + 8) * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 4),
           a2,
           a3);
}
