// 函数 0x492c94  ??0exception@std@@QAE@ABV01@@Z  size=0x25  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

std::exception *__thiscall std::exception::exception(std::exception *this, const struct exception *a2)
{
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &std::exception::`vftable';
  *((_BYTE *)this + 8) = 0;
  std::exception::operator=((void **)this, (int)a2);
  return this;
}
