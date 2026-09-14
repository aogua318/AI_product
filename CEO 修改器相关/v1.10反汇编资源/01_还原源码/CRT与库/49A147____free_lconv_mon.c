// 函数 0x49a147  ___free_lconv_mon  size=0xFE  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_4B926C )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_4B9270 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_4B9274 )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_4B9278 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_4B927C )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_4B9280 )
      free(*(void **)(a1 + 32));
    if ( *(_UNKNOWN **)(a1 + 36) != off_4B9284 )
      free(*(void **)(a1 + 36));
    if ( *(_UNKNOWN **)(a1 + 56) != off_4B9298 )
      free(*(void **)(a1 + 56));
    if ( *(_UNKNOWN **)(a1 + 60) != off_4B929C )
      free(*(void **)(a1 + 60));
    if ( *(_UNKNOWN **)(a1 + 64) != off_4B92A0 )
      free(*(void **)(a1 + 64));
    if ( *(_UNKNOWN **)(a1 + 68) != off_4B92A4 )
      free(*(void **)(a1 + 68));
    if ( *(_UNKNOWN **)(a1 + 72) != off_4B92A8 )
      free(*(void **)(a1 + 72));
    v1 = *(void **)(a1 + 76);
    if ( v1 != off_4B92AC )
      free(v1);
  }
}
