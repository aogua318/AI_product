// 函数 0x48f4c1  __fFEXP  size=0x35  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __usercall _fFEXP(__int16 a1@<cx>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  HIBYTE(a1) = 0;
  _ffexpm1(a1);
  JUMPOUT(0x48F7A8);
}
