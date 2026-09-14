// 函数 0x49a0de  ___free_lconv_num  size=0x69  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 )
  {
    if ( *(_UNKNOWN **)a1 != off_4B9260 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_4B9264 )
      free(*(void **)(a1 + 4));
    if ( *(_UNKNOWN **)(a1 + 8) != off_4B9268 )
      free(*(void **)(a1 + 8));
    if ( *(_UNKNOWN **)(a1 + 48) != off_4B9290 )
      free(*(void **)(a1 + 48));
    v1 = *(void **)(a1 + 52);
    if ( v1 != off_4B9294 )
      free(v1);
  }
}
