// 函数 0x46fe20  sub_46FE20  size=0x53  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __usercall sub_46FE20@<eax>(size_t a1@<ecx>, _DWORD *a2@<edi>, void *a3)
{
  size_t v3; // esi

  v3 = a2[1];
  if ( v3 > a1 )
    v3 = a1;
  if ( !v3 )
    return 0;
  a2[1] -= v3;
  if ( !*(_DWORD *)(a2[7] + 24) )
    a2[12] = sub_4711B0(a2[12], *a2, v3);
  memcpy(a3, (const void *)*a2, v3);
  *a2 += v3;
  a2[2] += v3;
  return v3;
}
