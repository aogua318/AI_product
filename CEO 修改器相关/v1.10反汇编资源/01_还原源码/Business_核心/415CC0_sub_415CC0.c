// 函数 0x415cc0  sub_415CC0  size=0x28  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415CC0(_DWORD *this, int a2)
{
  int result; // eax

  result = (*(this + 317) + a2 + 2 * *(this + 317)) / 4;
  if ( result > 0 )
    *(this + 317) = result;
  return result;
}
