// 函数 0x48d64b  sub_48D64B  size=0x27  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__thiscall sub_48D64B(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_492C62();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
