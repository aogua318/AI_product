// 函数 0x48a046  ??3@YAXPAX@Z  size=0xB  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl operator delete(void *Block)
{
  free(Block);
}
