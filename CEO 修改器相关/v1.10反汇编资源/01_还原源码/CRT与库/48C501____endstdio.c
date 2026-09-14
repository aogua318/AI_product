// 函数 0x48c501  ___endstdio  size=0x20  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __endstdio()
{
  sub_48B2CC();
  if ( byte_8F2B68 )
    _fcloseall();
  free(dword_8F62C8);
}
