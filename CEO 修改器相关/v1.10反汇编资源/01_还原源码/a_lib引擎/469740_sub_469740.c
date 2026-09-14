// 函数 0x469740  sub_469740  size=0x4B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469740(int *this, int a2, int a3, int *a4, int a5, int a6, int a7, int a8)
{
  int result; // eax

  result = a4[3];
  if ( result == 24 && *(this + 3) == 24 )
    return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468720);
  if ( result == 32 && *(this + 3) == 32 )
    return sub_4691D0(this, a2, a3, a4, a5, a6, a7, a8, (int (__cdecl *)(int, int, int))sub_468760);
  return result;
}
