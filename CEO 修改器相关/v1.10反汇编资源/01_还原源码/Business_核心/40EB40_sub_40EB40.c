// 函数 0x40eb40  sub_40EB40  size=0x4D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40EB40@<eax>(int a1@<edi>, int a2@<esi>)
{
  _BYTE *v2; // eax
  int v3; // edx

  v2 = (_BYTE *)(dword_4C43BC + dword_4C43B0 * (a2 - 1) + a1 - 1);
  v3 = 0;
  while ( !*v2 && !v2[1] && !v2[2] )
  {
    ++v3;
    v2 += dword_4C43B0;
    if ( v3 >= 3 )
    {
      *(_BYTE *)(dword_4C43BC + a2 * dword_4C43B0 + a1) = 1;
      return 1;
    }
  }
  return 0;
}
