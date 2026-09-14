// 函数 0x4198b0  sub_4198B0  size=0x31  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4198B0(_DWORD *this, int a2, int a3, int *a4, int *a5)
{
  int result; // eax

  *a4 = (a2 + *(this + 47)) / dword_4B1108;
  result = (a3 + *(this + 48)) / dword_4B1108;
  *a5 = result;
  return result;
}
