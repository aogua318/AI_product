// 函数 0x46cdb0  sub_46CDB0  size=0x47  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_46CDB0(char *this)
{
  if ( *((_DWORD *)this + 4) )
  {
    if ( *(_DWORD *)this )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 182210) + 72))(*(_DWORD *)(this + 182210));
      while ( *(_DWORD *)(this + 182214) )
      {
        *((_DWORD *)this + 4) = 0;
        Sleep(1u);
      }
    }
  }
}
