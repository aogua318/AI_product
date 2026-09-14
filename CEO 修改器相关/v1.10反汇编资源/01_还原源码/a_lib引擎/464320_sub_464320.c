// 函数 0x464320  sub_464320  size=0x94  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_464320(const char *a1)
{
  int v1; // esi
  BOOL v3; // edx
  int v4; // eax
  char v5; // cl
  int v6; // eax

  v1 = strlen(a1);
  if ( !v1 )
    return 0;
  v3 = 0;
  v4 = 0;
  if ( v1 <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = a1[v4];
    if ( v3 )
      break;
    if ( v5 != 32 )
    {
      v3 = v5 == 45;
      if ( v5 >= 48 && v5 <= 57 )
        v3 = 1;
    }
LABEL_13:
    if ( ++v4 >= v1 )
      return 1;
  }
  if ( v5 != 32 )
  {
    if ( v5 != 46 && (v5 < 48 || v5 > 57) )
      return 0;
    goto LABEL_13;
  }
  v6 = v4 + 1;
  if ( v6 >= v1 )
    return 1;
  while ( a1[v6] == 32 )
  {
    if ( ++v6 >= v1 )
      return 1;
  }
  return 0;
}
