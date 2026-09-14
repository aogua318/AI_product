// 函数 0x48e50a  __getptd  size=0x1A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD *__cdecl _getptd()
{
  DWORD *result; // eax

  result = _getptd_noexit();
  if ( !result )
    _amsg_exit(16);
  return result;
}
