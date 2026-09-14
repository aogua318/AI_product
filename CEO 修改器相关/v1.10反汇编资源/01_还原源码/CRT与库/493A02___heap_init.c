// 函数 0x493a02  __heap_init  size=0x1E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL _heap_init()
{
  hHeap = HeapCreate(0, 0x1000u, 0);
  return hHeap != 0;
}
