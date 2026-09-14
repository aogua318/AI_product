// 函数 0x426cb0  sub_426CB0  size=0x56  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_426CB0(__int16 *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int result; // eax

  v3 = *(_DWORD *)dword_4D0C8C + 388 * *this;
  v4 = *(char *)(v3 + 18);
  result = *(char *)(v3 + 19);
  if ( v4 || result )
  {
    sub_483D50(*(this + 8), v4, result, a2, a3);
    return 1;
  }
  return result;
}
