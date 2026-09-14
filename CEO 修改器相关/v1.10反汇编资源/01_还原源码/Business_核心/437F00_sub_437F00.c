// 函数 0x437f00  sub_437F00  size=0x5B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __userpurge sub_437F00@<eax>(int a1@<ecx>, double a2@<st0>, const char *a3, int a4)
{
  int v5; // edi

  v5 = 0;
  if ( a4 <= 0 )
    return 1;
  while ( 1 )
  {
    sub_437C60(a1, a3);
    if ( 0.0 == a2 )
      break;
    ++v5;
    a3 += strlen(a3) + 1;
    if ( v5 >= a4 )
      return 1;
  }
  return 0;
}
