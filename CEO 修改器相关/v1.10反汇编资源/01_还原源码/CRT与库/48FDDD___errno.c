// 函数 0x48fddd  __errno  size=0x13  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl _errno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 )
    return (int *)(v0 + 2);
  else
    return (int *)&unk_4B8758;
}
