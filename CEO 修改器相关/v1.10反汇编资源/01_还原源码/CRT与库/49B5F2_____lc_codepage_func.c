// 函数 0x49b5f2  ____lc_codepage_func  size=0x26  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl ___lc_codepage_func()
{
  DWORD *v0; // ecx
  DWORD v1; // eax

  v0 = _getptd();
  v1 = v0[27];
  if ( (volatile LONG *)v1 != off_4B8FF8 && (dword_4B8DB0 & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *(_DWORD *)(v1 + 4);
}
