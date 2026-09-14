// 函数 0x45bb70  sub_45BB70  size=0x3C  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const char *__usercall sub_45BB70@<eax>(int a1@<edx>, const char *a2@<esi>)
{
  int v3; // eax
  int v4; // ecx

  if ( (int)strlen(a2) <= a1 )
    return 0;
  v3 = 0;
  if ( a1 > 0 )
  {
    do
    {
      v4 = v3 + (a2[v3] < 0) + 1;
      if ( v4 > a1 )
        break;
      v3 += (a2[v3] < 0) + 1;
    }
    while ( v4 < a1 );
  }
  return &a2[v3];
}
