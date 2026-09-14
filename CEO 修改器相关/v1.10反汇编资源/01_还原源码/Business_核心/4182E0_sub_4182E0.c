// 函数 0x4182e0  sub_4182E0  size=0x45  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __usercall sub_4182E0@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int result; // eax
  int v4; // esi
  int v5; // eax

  result = *(_DWORD *)(dword_4C2D38 + 24);
  if ( a2 < result && a1 < *(_DWORD *)(dword_4C2D38 + 28) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(dword_4C2D38 + 140) + 4 * (a2 + a1 * result));
    result = sub_483C00(v4);
    if ( result == 3 )
    {
      v5 = sub_483C30(v4);
      return sub_40BF60(v5);
    }
  }
  return result;
}
