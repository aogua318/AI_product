// 函数 0x46a2c0  sub_46A2C0  size=0x20  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A2C0(FILE **this)
{
  if ( !*this )
    return 0;
  if ( *(this + 1) )
    return (*this)->_file - (unsigned int)(*this)->_base;
  return ftell(*this);
}
