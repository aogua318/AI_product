// 函数 0x46fd50  sub_46FD50  size=0xC1  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_46FD50(int a1)
{
  int v1; // eax
  int v2; // edi
  int v4; // eax
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a1 )
    return -2;
  v1 = *(_DWORD *)(a1 + 28);
  if ( !v1 )
    return -2;
  v2 = *(_DWORD *)(v1 + 4);
  if ( v2 != 42 && v2 != 113 && v2 != 666 )
    return -2;
  v4 = *(_DWORD *)(v1 + 8);
  if ( v4 )
    (*(void (__cdecl **)(_DWORD, int))(a1 + 36))(*(_DWORD *)(a1 + 40), v4);
  v5 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v5 + 60) )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v5 + 60));
  v6 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v6 + 56) )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v6 + 56));
  v7 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v7 + 48) )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(v7 + 48));
  (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 28));
  *(_DWORD *)(a1 + 28) = 0;
  return v2 != 113 ? 0 : 0xFFFFFFFD;
}
