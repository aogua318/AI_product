// 函数 0x42a550  sub_42A550  size=0xA7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_42A550(char *Str, _DWORD *a2, _DWORD *a3)
{
  char *v3; // eax
  char *v4; // eax

  v3 = strstr(Str, "+connect ");
  *a2 = 0;
  if ( v3 && strlen(Str) > v3 - Str + 9 )
    *a2 = v3 + 9;
  v4 = strstr(Str, "+connect_lobby ");
  *a3 = 0;
  if ( v4 && strlen(Str) > v4 - Str + 15 )
    *a3 = v4 + 15;
  return *a2 || *a3;
}
