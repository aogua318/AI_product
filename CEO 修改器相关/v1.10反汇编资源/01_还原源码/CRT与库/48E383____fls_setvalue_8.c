// 函数 0x48e383  ___fls_setvalue@8  size=0x1D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __stdcall __fls_setvalue(int a1, int a2)
{
  int (__stdcall *v2)(int, int); // eax

  v2 = (int (__stdcall *)(int, int))DecodePointer(dword_8F2EC4);
  return v2(a1, a2);
}
