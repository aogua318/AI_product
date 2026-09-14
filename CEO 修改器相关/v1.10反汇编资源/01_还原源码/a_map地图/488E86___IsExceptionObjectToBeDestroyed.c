// 函数 0x488e86  __IsExceptionObjectToBeDestroyed  size=0x27  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _IsExceptionObjectToBeDestroyed(int a1)
{
  _DWORD *i; // eax

  for ( i = *(_DWORD **)(_getptd() + 152); ; i = (_DWORD *)i[1] )
  {
    if ( !i )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}
