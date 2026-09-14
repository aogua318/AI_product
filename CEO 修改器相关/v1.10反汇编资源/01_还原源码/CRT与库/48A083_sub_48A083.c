// 函数 0x48a083  sub_48A083  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

std::exception *__thiscall sub_48A083(std::exception *this, struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
