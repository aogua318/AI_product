// 函数 0x48fdf0  ___doserrno  size=0x13  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int *__cdecl __doserrno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 )
    return v0 + 3;
  else
    return (unsigned int *)&unk_4B875C;
}
