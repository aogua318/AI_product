// 函数 0x4059f0  CompareFunction  size=0x33  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl CompareFunction(double *a1, double *a2)
{
  if ( a2[1] > a1[1] )
    return 1;
  if ( a2[1] >= a1[1] )
    return 0;
  return -1;
}
