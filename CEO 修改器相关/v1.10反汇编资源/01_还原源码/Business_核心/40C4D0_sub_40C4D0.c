// 函数 0x40c4d0  sub_40C4D0  size=0x81  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40C4D0(__int16 *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx

  v3 = dword_4CCAAC + dword_4CCA98 * *this;
  v4 = sub_4640D0() % 8;
  sub_4868E0(*(this + 4), a2 + 8 * v4);
  --*(_WORD *)(v3 + 2 * *((char *)this + 10) + 768);
  ++*(_WORD *)(v3 + 2 * a2 + 768);
  v5 = *((char *)this + 10);
  --*(_WORD *)(v3 + 2 * v5 + 784);
  ++*(_WORD *)(v3 + 2 * a2 + 784);
  *((_BYTE *)this + 10) = a2;
  return v3 + 2 * v5 + 784;
}
