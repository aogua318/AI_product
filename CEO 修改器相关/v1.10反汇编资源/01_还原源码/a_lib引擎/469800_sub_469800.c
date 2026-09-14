// 函数 0x469800  sub_469800  size=0x53  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469800(_DWORD *this, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9, int a10)
{
  int result; // eax

  result = a6[3];
  if ( result == 24 && *(this + 3) == 24 )
    return sub_469370(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, (void (__cdecl *)(int, int, int))sub_468720);
  if ( result == 32 && *(this + 3) == 32 )
    return sub_469370(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, sub_468760);
  return result;
}
