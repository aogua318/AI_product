// 函数 0x426d70  sub_426D70  size=0x5C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_426D70(__int16 *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int result; // eax

  v4 = *(_DWORD *)dword_4D0C8C + 388 * *this;
  v5 = *(char *)(v4 + 2 * a2 + 32);
  result = *(char *)(v4 + 2 * a2 + 33);
  if ( v5 || result )
  {
    sub_483D50(*(this + 8), v5, result, a3, a4);
    return 1;
  }
  return result;
}
