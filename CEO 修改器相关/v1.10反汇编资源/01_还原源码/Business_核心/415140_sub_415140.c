// 函数 0x415140  sub_415140  size=0x19  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415140(int this, int a2)
{
  int result; // eax

  result = dword_4CD11C;
  *(_BYTE *)(this + 8) &= ~1u;
  *(_DWORD *)(this + 52) += a2;
  *(_DWORD *)(this + 36) = result;
  return result;
}
