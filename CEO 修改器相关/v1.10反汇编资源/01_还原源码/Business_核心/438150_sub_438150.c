// 函数 0x438150  sub_438150  size=0x40  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_438150(const char *a1)
{
  int v1; // eax
  int v3; // ecx
  char v4; // dl

  v1 = strlen(a1);
  if ( !v1 )
    return 0;
  v3 = 0;
  if ( v1 > 0 )
  {
    while ( 1 )
    {
      v4 = a1[v3];
      if ( v4 < 48 || v4 > 57 )
        break;
      if ( ++v3 >= v1 )
        return 1;
    }
    return 0;
  }
  return 1;
}
