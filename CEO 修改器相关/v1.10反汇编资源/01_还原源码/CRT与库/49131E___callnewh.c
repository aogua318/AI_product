// 函数 0x49131e  __callnewh  size=0x28  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))DecodePointer(dword_8F3044);
  return v1 && v1(Size);
}
