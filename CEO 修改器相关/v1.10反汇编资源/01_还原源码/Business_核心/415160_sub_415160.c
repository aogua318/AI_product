// 函数 0x415160  sub_415160  size=0x19  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415160(int this, int a2, int a3)
{
  int result; // eax

  result = dword_4CD11C;
  *(_BYTE *)(this + 8) &= ~1u;
  *(_DWORD *)(this + 48) += a2;
  *(_DWORD *)(this + 36) = result;
  return result;
}
