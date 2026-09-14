// 函数 0x417830  sub_417830  size=0x4D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_417830@<eax>(int a1@<edi>, int a2@<esi>)
{
  _BYTE *v2; // eax
  int v3; // edx

  v2 = (_BYTE *)(dword_4CCA88 + dword_4CCA80 * (a2 - 1) + a1 - 1);
  v3 = 0;
  while ( !*v2 && !v2[1] && !v2[2] )
  {
    ++v3;
    v2 += dword_4CCA80;
    if ( v3 >= 3 )
    {
      *(_BYTE *)(dword_4CCA88 + a2 * dword_4CCA80 + a1) = 1;
      return 1;
    }
  }
  return 0;
}
