// 函数 0x467130  sub_467130  size=0x6E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_467130(__int16 *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( sub_46F080(
         a2 + *this,
         a3 + *(this + 1),
         *((_DWORD *)this + 2) + *((_DWORD *)this + 4),
         *((_DWORD *)this + 3),
         a4,
         a5) )
  {
    return 1;
  }
  result = sub_46EFB0(a2 + *this, a3 + *(this + 1), *((_DWORD *)this + 4), *((_DWORD *)this + 2), a4, a5);
  if ( result )
    return 1;
  return result;
}
