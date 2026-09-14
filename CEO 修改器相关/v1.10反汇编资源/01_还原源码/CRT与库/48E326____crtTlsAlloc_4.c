// 函数 0x48e326  ___crtTlsAlloc@4  size=0x9  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}
