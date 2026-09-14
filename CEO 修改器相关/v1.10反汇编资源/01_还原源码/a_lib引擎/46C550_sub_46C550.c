// 函数 0x46c550  sub_46C550  size=0x23  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46C550(int *this)
{
  int result; // eax

  result = *this;
  if ( *this )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)result + 72))(result);
    result = (*(int (__stdcall **)(int))(*(_DWORD *)*this + 8))(*this);
    *this = 0;
  }
  return result;
}
