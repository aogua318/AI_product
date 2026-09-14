// 函数 0x47c7a0  sub_47C7A0  size=0x5D  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_47C7A0()
{
  int *v0; // esi

  v0 = (int *)&unk_8EEE40;
  do
  {
    sub_47B730(v0);
    v0 += 142;
  }
  while ( (int)v0 < (int)dword_8F11C0 );
  if ( !dword_8EEDA4 )
    return 0;
  dword_8EEDA4 = 0;
  sub_47C550();
  sub_46D2C0(hdcSrc, &dword_8EEDEC);
  DestroyWindow(hWnd);
  return 1;
}
