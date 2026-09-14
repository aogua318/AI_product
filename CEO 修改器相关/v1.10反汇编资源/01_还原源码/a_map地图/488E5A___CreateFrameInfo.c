// 函数 0x488e5a  __CreateFrameInfo  size=0x2C  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}
