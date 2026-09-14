// 函数 0x4012a0  sub_4012A0  size=0x2E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4012A0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = *(this + 45) + a2 * *(this + 40);
  return sub_483850(*(__int16 *)(v4 + 2), *(__int16 *)(v4 + 4), a3, a4);
}
