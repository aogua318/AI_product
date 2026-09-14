// 函数 0x491dc0  ___initmbctable  size=0x1E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __initmbctable()
{
  if ( !dword_8F72F8 )
  {
    _setmbcp(-3);
    dword_8F72F8 = 1;
  }
  return 0;
}
