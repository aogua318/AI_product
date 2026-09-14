// 函数 0x474f20  sub_474F20  size=0x82  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__usercall sub_474F20@<eax>(size_t a1@<ebx>, _DWORD *a2@<edi>, void *Src)
{
  _DWORD *v3; // esi
  void *v5; // eax
  char v6; // [esp+0h] [ebp-4h]

  v3 = malloc(0x14u);
  if ( v3 )
  {
    v5 = malloc(a1);
    *v3 = v5;
    if ( v5 )
    {
      v3[1] = a1;
      memcpy(v5, Src, a1);
      v3[3] = 0;
      v3[4] = *a2;
      v3[2] = 0;
      if ( a2[1] )
      {
        *(_DWORD *)(*a2 + 12) = v3;
        a2[2] += a1;
      }
      else
      {
        a2[2] += a1;
        a2[1] = v3;
      }
      *a2 = v3;
      return v3;
    }
    else
    {
      free(v3);
      return 0;
    }
  }
  else
  {
    sub_4753F0("Out of memory!\n", v6);
    return 0;
  }
}
