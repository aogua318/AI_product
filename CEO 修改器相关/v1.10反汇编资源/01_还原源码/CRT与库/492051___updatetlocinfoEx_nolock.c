// 函数 0x492051  __updatetlocinfoEx_nolock  size=0x4D  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

volatile LONG *__cdecl _updatetlocinfoEx_nolock(volatile LONG **a1, volatile LONG *lpAddend)
{
  volatile LONG *v2; // esi

  if ( !lpAddend || !a1 )
    return 0;
  v2 = *a1;
  if ( *a1 != lpAddend )
  {
    *a1 = lpAddend;
    __addlocaleref(lpAddend);
    if ( v2 )
    {
      __removelocaleref(v2);
      if ( !*v2 && v2 != (volatile LONG *)&unk_4B8F20 )
        __freetlocinfo((char *)v2);
    }
  }
  return lpAddend;
}
