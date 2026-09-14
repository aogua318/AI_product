// 函数 0x492c2d  ??4exception@std@@QAEAAV01@ABV01@@Z  size=0x35  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void **__thiscall std::exception::operator=(void **this, int a2)
{
  if ( this != (void **)a2 )
  {
    std::exception::_Tidy(this);
    if ( *(_BYTE *)(a2 + 8) )
      std::exception::_Copy_str((std::exception *)this, *(char **)(a2 + 4));
    else
      *(this + 1) = *(void **)(a2 + 4);
  }
  return this;
}
