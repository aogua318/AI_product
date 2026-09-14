// 函数 0x469db0  sub_469DB0  size=0x19  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_469DB0(LPCSTR lpFileName)
{
  return GetFileAttributesA(lpFileName) != -1;
}
