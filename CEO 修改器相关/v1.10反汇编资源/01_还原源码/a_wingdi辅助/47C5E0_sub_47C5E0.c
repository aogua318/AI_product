// 函数 0x47c5e0  sub_47C5E0  size=0x56  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_47C5E0()
{
  int result; // eax
  int v1; // ecx
  const RECT *v2; // eax

  result = dword_4B81E8;
  if ( dword_4B81E8 != -1 )
  {
    v1 = dword_8EED88 + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8);
    v2 = (const RECT *)sub_464D00(
                         v1,
                         dword_8EED8C + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 2),
                         v1 + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 4),
                         dword_8EED8C
                       + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 2)
                       + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 6));
    return InvalidateRect(hWnd, v2, 0);
  }
  return result;
}
