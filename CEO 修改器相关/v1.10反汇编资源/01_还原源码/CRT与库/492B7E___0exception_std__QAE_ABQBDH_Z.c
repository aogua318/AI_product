// 函数 0x492b7e  ??0exception@std@@QAE@ABQBDH@Z  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const char **__thiscall std::exception::exception(const char **this, const char *const *a2, int a3)
{
  *this = (const char *)&std::exception::`vftable';
  *(this + 1) = *a2;
  *((_BYTE *)this + 8) = 0;
  return this;
}
