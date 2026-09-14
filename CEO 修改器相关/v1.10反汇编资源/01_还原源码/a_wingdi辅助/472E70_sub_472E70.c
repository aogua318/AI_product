// 函数 0x472e70  sub_472E70  size=0xAA  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl sub_472E70(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v6; // eax

  v3 = (_DWORD *)(*(int (__cdecl **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1, 64);
  if ( !v3 )
    return 0;
  v4 = (*(int (__cdecl **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 8, 1440);
  v3[9] = v4;
  if ( !v4 )
  {
    (*(void (__cdecl **)(_DWORD, _DWORD *))(a1 + 36))(*(_DWORD *)(a1 + 40), v3);
    return 0;
  }
  v6 = (*(int (__cdecl **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1, a3);
  v3[10] = v6;
  if ( v6 )
  {
    v3[11] = a3 + v6;
    v3[14] = a2;
    *v3 = 0;
    sub_472DF0(v3, a1, 0);
    return v3;
  }
  else
  {
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), v3[9]);
    (*(void (__cdecl **)(_DWORD, _DWORD *))(a1 + 36))(*(_DWORD *)(a1 + 40), v3);
    return 0;
  }
}
