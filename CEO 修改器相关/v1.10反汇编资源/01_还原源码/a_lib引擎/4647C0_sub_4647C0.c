// 函数 0x4647c0  sub_4647C0  size=0x59  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4647C0(_BYTE *a1, char *a2)
{
  char v2; // al
  int v3; // ecx
  int result; // eax
  char *v5; // esi
  char v6; // cl
  int v7; // eax
  char v8; // cl
  char v9; // cl

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
    return 0;
  while ( v2 == 32 || v2 == 9 )
  {
    v2 = a2[++v3];
    if ( !v2 )
      return 0;
  }
  v5 = &a2[v3];
  v6 = a2[v3];
  v7 = 0;
  *a1 = v6;
  if ( v6 )
  {
    do
    {
      v8 = *++v5;
      a1[++v7] = v8;
    }
    while ( v8 );
  }
  do
  {
    do
      v9 = a1[--v7];
    while ( v9 == 32 );
  }
  while ( v9 == 9 );
  result = v7 + 1;
  a1[result] = 0;
  return result;
}
