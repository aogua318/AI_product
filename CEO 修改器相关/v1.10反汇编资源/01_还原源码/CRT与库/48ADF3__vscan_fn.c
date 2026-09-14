// 函数 0x48adf3  _vscan_fn  size=0x6E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall vscan_fn@<eax>(const char *a1@<esi>, int (__cdecl *a2)(_DWORD *, int, int, int), int a3, int a4, int a5)
{
  size_t v6; // eax
  _DWORD v7[8]; // [esp+4h] [ebp-20h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( a1 && a3 )
  {
    v6 = strlen(a1);
    v7[3] = 73;
    v7[2] = a1;
    v7[0] = a1;
    v7[1] = 0x7FFFFFFF;
    if ( v6 <= 0x7FFFFFFF )
      v7[1] = v6;
    return a2(v7, a3, a4, a5);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
