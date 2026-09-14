// 函数 0x48e8c0  __initp_eh_hooks  size=0x11  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = EncodePointer(terminate);
  dword_8F2ECC = result;
  return result;
}
