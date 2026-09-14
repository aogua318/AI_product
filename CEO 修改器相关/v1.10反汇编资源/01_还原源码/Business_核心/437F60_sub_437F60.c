// 函数 0x437f60  sub_437F60  size=0x3A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __thiscall sub_437F60(void *this, const char *a2, int a3)
{
  unsigned int result; // eax
  int v6; // edi

  result = a3;
  if ( a3 > 0 )
  {
    v6 = a3;
    do
    {
      sub_437C60((int)this, a2);
      result = strlen(a2);
      --v6;
      a2 += result + 1;
    }
    while ( v6 );
  }
  return result;
}
