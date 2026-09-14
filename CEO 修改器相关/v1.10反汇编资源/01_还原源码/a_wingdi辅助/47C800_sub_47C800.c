// 函数 0x47c800  sub_47C800  size=0x119  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47C800(int x, int y, __int16 *a3, int cy)
{
  __int16 *v4; // esi
  HDC hDC; // [esp+4h] [ebp-4h]

  hDC = GetDC(hWnd);
  if ( a3 && cy )
  {
    if ( dword_4B81E8 == -1 )
    {
      v4 = a3;
    }
    else
    {
      v4 = (__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8);
      sub_469640(dword_8EEDBC, 0, 0, &dword_8EEDEC, dword_8EED88 + *v4, dword_8EED8C + v4[1], v4[2], v4[3]);
      sub_466CA0(v4, &dword_8EEDEC, dword_8EED88, dword_8EED8C);
    }
    if ( *(_BYTE *)(dword_8EEC68 + 1) )
      sub_46D320(hDC, x, y, hdcSrc, x, y, (int)a3, cy);
    else
      sub_46D2F0(hDC, x, y, hdcSrc, x, y, (int)a3, cy);
    if ( dword_4B81E8 != -1 )
      sub_469640(&dword_8EEDEC, dword_8EED88 + *v4, dword_8EED8C + v4[1], dword_8EEDBC, 0, 0, v4[2], v4[3]);
  }
  return ReleaseDC(hWnd, hDC);
}
