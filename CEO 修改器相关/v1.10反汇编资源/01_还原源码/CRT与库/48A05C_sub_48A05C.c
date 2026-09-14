// 函数 0x48a05c  sub_48A05C  size=0x27  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__thiscall sub_48A05C(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_492C62();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
