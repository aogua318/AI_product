// 函数 0x492be8  ?_Tidy@exception@std@@AAEXXZ  size=0x1E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall std::exception::_Tidy(void **this)
{
  if ( *((_BYTE *)this + 8) )
    free(*(this + 1));
  *(this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
}
