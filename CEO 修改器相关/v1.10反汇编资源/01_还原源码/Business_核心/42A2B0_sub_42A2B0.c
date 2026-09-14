// 函数 0x42a2b0  sub_42A2B0  size=0x53  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_42A2B0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // eax

  if ( !*(_DWORD *)SteamInternal_ContextInit(&off_4B3104) )
    return 0;
  if ( !*(_DWORD *)SteamInternal_ContextInit(&off_4B311C) )
    return 0;
  v0 = (_DWORD *)SteamInternal_ContextInit(&off_4B311C);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v0 + 4))(*v0) )
    return 0;
  v1 = (_DWORD *)SteamInternal_ContextInit(&off_4B3104);
  return (**(int (__thiscall ***)(_DWORD))*v1)(*v1);
}
