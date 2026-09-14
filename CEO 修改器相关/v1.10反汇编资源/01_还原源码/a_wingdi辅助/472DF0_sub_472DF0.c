// 函数 0x472df0  sub_472DF0  size=0x7E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int (__cdecl *__cdecl sub_472DF0(_DWORD *a1, int a2, _DWORD *a3))(_DWORD, _DWORD, _DWORD)
{
  int v3; // eax
  int (__cdecl *result)(_DWORD, _DWORD, _DWORD); // eax

  if ( a3 )
    *a3 = a1[15];
  if ( *a1 == 4 || *a1 == 5 )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a2 + 36))(*(_DWORD *)(a2 + 40), a1[3]);
  if ( *a1 == 6 )
    sub_473FF0(a1[1], a2);
  v3 = a1[10];
  a1[13] = v3;
  a1[12] = v3;
  result = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))a1[14];
  *a1 = 0;
  a1[7] = 0;
  a1[8] = 0;
  if ( result )
  {
    result = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))result(0, 0, 0);
    a1[15] = result;
    *(_DWORD *)(a2 + 48) = result;
  }
  return result;
}
