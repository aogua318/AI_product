// 函数 0x49d610  sub_49D610  size=0x26  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LPDIRECTDRAW sub_49D610()
{
  LPDIRECTDRAW result; // eax

  result = lpDD;
  if ( lpDD )
  {
    result = (LPDIRECTDRAW)lpDD->lpVtbl->RestoreDisplayMode(lpDD);
    lpDD = 0;
  }
  dword_8F38D8 = 0;
  return result;
}
