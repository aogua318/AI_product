// 函数 0x437fc0  sub_437FC0  size=0x69  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_437FC0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax

  if ( *(int *)(a1 + 2392) > 0 && sub_437F00(a1, a2, (const char *)(a1 + 1368), *(_DWORD *)(a1 + 2392)) )
    return sub_437F60((void *)a1, (const char *)(a1 + 2396), *(_DWORD *)(a1 + 3420));
  result = *(_DWORD *)(a1 + 4448);
  if ( result > 0 )
  {
    result = sub_437F00(a1, a2, (const char *)(a1 + 3424), *(_DWORD *)(a1 + 4448));
    if ( result )
      return sub_437F60((void *)a1, (const char *)(a1 + 4452), *(_DWORD *)(a1 + 5476));
  }
  return result;
}
