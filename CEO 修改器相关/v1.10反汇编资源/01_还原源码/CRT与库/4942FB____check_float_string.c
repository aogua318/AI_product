// 函数 0x4942fb  ___check_float_string  size=0x57  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall __check_float_string@<eax>(void **a1@<edi>, size_t *a2@<esi>, int a3, void *Src, _DWORD *a5)
{
  size_t v5; // eax
  int v6; // eax
  void *v8; // eax

  v5 = *a2;
  if ( a3 == *a2 )
  {
    if ( *a1 == Src )
    {
      v6 = _calloc_crt(v5, 2);
      *a1 = (void *)v6;
      if ( !v6 )
        return 0;
      *a5 = 1;
      memcpy(*a1, Src, *a2);
    }
    else
    {
      v8 = _recalloc_crt(*a1, v5, 2u);
      if ( !v8 )
        return 0;
      *a1 = v8;
    }
    *a2 *= 2;
  }
  return 1;
}
