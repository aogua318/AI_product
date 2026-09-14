// 函数 0x48c3a4  _sqrt  size=0x9  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __cdecl sqrt(double X)
{
  int v1; // ecx

  _fload_withFB(v1);
  return start_4(LODWORD(X), HIDWORD(X));
}
