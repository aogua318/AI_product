// 函数 0x46c5d0  sub_46C5D0  size=0x39  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46C5D0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *this )
    return (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)*this + 60))(*this, 2000 * a2 / 100 - 2000);
  return result;
}
