// 函数 0x492c06  ??0exception@std@@QAE@ABQBD@Z  size=0x27  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

std::exception *__thiscall std::exception::exception(std::exception *this, char **a2)
{
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &std::exception::`vftable';
  *((_BYTE *)this + 8) = 0;
  std::exception::_Copy_str(this, *a2);
  return this;
}
