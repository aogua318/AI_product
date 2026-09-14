// 函数 0x43a280  sub_43A280  size=0x32  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_43A280(char *this)
{
  double result; // st7
  double *v2; // eax
  int v3; // ecx
  double v4; // st7

  result = 0.0;
  v2 = (double *)(this + 736);
  v3 = 4;
  do
  {
    v4 = result + *(v2 - 1);
    v2 += 10;
    --v3;
    result = v4
           + *(v2 - 10)
           + *(v2 - 9)
           + *(v2 - 8)
           + *(v2 - 7)
           + *(v2 - 6)
           + *(v2 - 5)
           + *(v2 - 4)
           + *(v2 - 3)
           + *(v2 - 2);
  }
  while ( v3 );
  return result;
}
