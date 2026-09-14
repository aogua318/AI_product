// 函数 0x434620  sub_434620  size=0x30  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_434620(int this)
{
  int v1; // edx
  int v2; // esi

  v1 = *(__int16 *)(this + 6);
  v2 = *(__int16 *)(this + 10);
  *(_BYTE *)(this + 15) = 0;
  *(_WORD *)(this + 10) = -1;
  sub_4868E0(v1, 1);
  return v2;
}
