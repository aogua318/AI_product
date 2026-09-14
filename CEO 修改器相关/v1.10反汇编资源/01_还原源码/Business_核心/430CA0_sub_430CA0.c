// 函数 0x430ca0  sub_430CA0  size=0x50  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430CA0(__int16 *this, int a2, int a3)
{
  int v3; // eax

  v3 = dword_4CCAAC + dword_4CCA98 * *this;
  return sub_483850(
           *(__int16 *)(*(this + 3) * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 2),
           *(__int16 *)(*(this + 3) * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 4),
           a2,
           a3);
}
