// 函数 0x42a310  sub_42A310  size=0x45  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_42A310(_BYTE *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  if ( !*(this + 16) )
    return 0;
  v2 = (_DWORD *)SteamInternal_ContextInit(&off_4B3104);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v2 + 28))(*v2, a2);
  v3 = (_DWORD *)SteamInternal_ContextInit(&off_4B3104);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v3 + 40))(*v3);
}
