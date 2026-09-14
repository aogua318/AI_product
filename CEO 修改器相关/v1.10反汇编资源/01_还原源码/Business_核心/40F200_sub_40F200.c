// 函数 0x40f200  sub_40F200  size=0x64  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40F200@<eax>(int a1@<edi>)
{
  int v1; // ebx
  int v2; // edx
  int v3; // eax

  v1 = dword_4C43A8;
  v2 = *(__int16 *)(a1 * dword_4C43C8 + dword_4C43DC + 18);
  v3 = *(__int16 *)(a1 * dword_4C43C8 + dword_4C43DC + 20);
  if ( v2 == -1 )
    *(_WORD *)(dword_4C43A8 + 1620) = v3;
  else
    *(_WORD *)(v2 * dword_4C43C8 + dword_4C43DC + 20) = v3;
  if ( v3 != -1 )
    *(_WORD *)(v3 * dword_4C43C8 + dword_4C43DC + 18) = v2;
  --*(_WORD *)(v1 + 1622);
  return sub_40F100(a1);
}
