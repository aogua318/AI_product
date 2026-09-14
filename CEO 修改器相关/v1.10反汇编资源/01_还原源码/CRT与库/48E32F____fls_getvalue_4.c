// 函数 0x48e32f  ___fls_getvalue@4  size=0x1A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __stdcall __fls_getvalue(int a1)
{
  int (__stdcall *Value)(int); // eax

  Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
  return Value(a1);
}
