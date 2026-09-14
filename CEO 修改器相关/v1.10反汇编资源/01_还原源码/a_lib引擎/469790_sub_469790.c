// 函数 0x469790  sub_469790  size=0x66  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469790(_DWORD *this, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9, int a10)
{
  int result; // eax

  result = a6[3];
  if ( result == 24 && *(this + 3) == 16 )
    return sub_469370(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, (void (__cdecl *)(int, int, int))sub_468480);
  if ( result == 32 )
  {
    if ( *(this + 3) == 16 )
    {
      return sub_469370(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, (void (__cdecl *)(int, int, int))sub_468560);
    }
    else if ( *(this + 3) == 32 )
    {
      return sub_469370(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, (void (__cdecl *)(int, int, int))sub_468660);
    }
  }
  return result;
}
