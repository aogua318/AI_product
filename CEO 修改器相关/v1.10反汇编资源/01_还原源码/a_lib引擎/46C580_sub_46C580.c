// 函数 0x46c580  sub_46C580  size=0x50  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46C580(_DWORD *this, int a2, int a3)
{
  int v4; // esi

  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 72))(*this);
  if ( a2 )
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 52))(*this, 0);
  v4 = *this;
  if ( a3 )
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v4 + 48))(v4, 0, 0, 1);
  else
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0, 0, 0);
}
