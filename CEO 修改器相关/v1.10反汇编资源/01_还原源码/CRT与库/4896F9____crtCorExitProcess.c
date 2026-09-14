// 函数 0x4896f9  ___crtCorExitProcess  size=0x2B  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HMODULE __cdecl __crtCorExitProcess(int a1)
{
  HMODULE result; // eax

  result = GetModuleHandleW(L"mscoree.dll");
  if ( result )
  {
    result = (HMODULE)GetProcAddress(result, "CorExitProcess");
    if ( result )
      return (HMODULE)((int (__stdcall *)(int))result)(a1);
  }
  return result;
}
