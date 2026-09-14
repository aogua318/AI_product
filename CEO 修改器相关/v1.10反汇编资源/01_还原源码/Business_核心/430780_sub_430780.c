// 函数 0x430780  sub_430780  size=0x58  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_430780@<eax>(int a1@<ebx>, unsigned int *a2, int a3, int *a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  v4 = 0;
  while ( 1 )
  {
    v5 = sub_485630(19, a3, a1, v4, 0);
    v6 = 1;
    if ( v4 > 0 )
    {
      v7 = v4;
      do
      {
        v6 *= 2;
        --v7;
      }
      while ( v7 );
    }
    if ( (v6 & v5) != 0 )
    {
      *a4 = v4;
      if ( sub_430670(v4, a2, a3, a1) )
        break;
    }
    if ( ++v4 >= 4 )
      return 0;
  }
  return 1;
}
