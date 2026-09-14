// 函数 0x436f10  sub_436F10  size=0x68  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__cdecl sub_436F10(int a1, int a2)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  _BYTE *v6; // eax

  if ( dword_4CD13C )
    return 0;
  if ( a2 > 6 )
    return 0;
  v3 = (_DWORD *)(*(_DWORD *)dword_89D248 + 12 * a1);
  v4 = v3[2];
  v5 = v3[1] + sub_4640D0(*(_DWORD *)dword_89D248) % v4 + 1;
  if ( *v3 )
    v5 += a2 * v4;
  v6 = (_BYTE *)sub_4646A0(3, v5);
  return *v6 != 0 ? v6 : 0;
}
