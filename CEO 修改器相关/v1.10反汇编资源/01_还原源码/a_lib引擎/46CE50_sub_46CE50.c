// 函数 0x46ce50  sub_46CE50  size=0x46  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_46CE50(int this)
{
  int v2; // eax
  bool v3; // zf

  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)(this + 16) )
      sub_46CDB0((char *)this);
    v2 = *(_DWORD *)(this + 182210);
    if ( v2 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*(_DWORD *)(this + 182210));
      *(_DWORD *)(this + 182210) = 0;
    }
    v3 = *(_DWORD *)(this + 32) == 0;
    *(_DWORD *)this = 0;
    if ( !v3 )
      sub_46A1F0((int *)(this + 32));
  }
}
