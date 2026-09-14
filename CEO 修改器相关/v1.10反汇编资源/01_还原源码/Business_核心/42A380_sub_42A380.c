// 函数 0x42a380  sub_42A380  size=0xFA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__thiscall sub_42A380(_BYTE *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // eax
  const char *v9; // eax
  _DWORD *v10; // [esp+4h] [ebp-4h]
  int v11; // [esp+10h] [ebp+8h]

  result = a2;
  if ( *(_DWORD *)this == *a2 && *((_DWORD *)this + 1) == a2[1] && a2[2] == 1 )
  {
    result = 0;
    *(this + 16) = 1;
    v10 = 0;
    if ( *((int *)this + 3) > 0 )
    {
      v11 = 0;
      do
      {
        v4 = v11 + *((_DWORD *)this + 2);
        v5 = (_DWORD *)SteamInternal_ContextInit(&off_4B3104);
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*v5 + 24))(*v5, *(_DWORD *)(v4 + 4), v4 + 392);
        v6 = (_DWORD *)SteamInternal_ContextInit(&off_4B3104);
        v7 = (const char *)(*(int (__thiscall **)(_DWORD, _DWORD, const char *))(*(_DWORD *)*v6 + 48))(
                             *v6,
                             *(_DWORD *)(v4 + 4),
                             "name");
        _snprintf((char *const)(v4 + 8), 0x80u, "%s", v7);
        v8 = (_DWORD *)SteamInternal_ContextInit(&off_4B3104);
        v9 = (const char *)(*(int (__thiscall **)(_DWORD, _DWORD, const char *))(*(_DWORD *)*v8 + 48))(
                             *v8,
                             *(_DWORD *)(v4 + 4),
                             "desc");
        _snprintf((char *const)(v4 + 136), 0x100u, "%s", v9);
        v11 += 400;
        result = (_DWORD *)((char *)v10 + 1);
        v10 = result;
      }
      while ( (int)result < *((_DWORD *)this + 3) );
    }
  }
  return result;
}
