// 函数 0x491430  __IsNonwritableInCurrentImage  size=0xBC  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x400000)
      && (PESection = _FindPESection(0x400000, a1 - 0x400000)) != 0
      && *(int *)(PESection + 36) >= 0;
}
