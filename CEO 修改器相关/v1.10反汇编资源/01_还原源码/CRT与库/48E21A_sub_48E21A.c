// 函数 0x48e21a  sub_48E21A  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

std::exception *__thiscall sub_48E21A(std::exception *this, struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}
