// 函数 0x492c6d  sub_492C6D  size=0x27  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void **__thiscall sub_492C6D(void **this, char a2)
{
  *this = &std::exception::`vftable';
  std::exception::_Tidy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
