// 函数 0x46f310  sub_46F310  size=0x23  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46F310(int this, int a2)
{
  int result; // eax

  result = sub_46A2E0((FILE **)this, a2 + *(_DWORD *)(this + 8));
  *(_DWORD *)(this + 16) = a2 + *(_DWORD *)(this + 8);
  return result;
}
