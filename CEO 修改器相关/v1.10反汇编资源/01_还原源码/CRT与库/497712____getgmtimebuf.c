// 函数 0x497712  ___getgmtimebuf  size=0x37  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __getgmtimebuf()
{
  DWORD *v0; // eax
  DWORD *v1; // esi
  void *v3; // eax

  v0 = _getptd_noexit();
  v1 = v0;
  if ( v0 )
  {
    if ( v0[17] )
      return v1[17];
    v3 = _malloc_crt(0x24u);
    v1[17] = (DWORD)v3;
    if ( v3 )
      return v1[17];
  }
  *_errno() = 12;
  return 0;
}
