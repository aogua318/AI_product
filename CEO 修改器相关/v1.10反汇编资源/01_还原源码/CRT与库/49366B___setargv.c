// 函数 0x49366b  __setargv  size=0xBB  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( !dword_8F72F8 )
    __initmbctable();
  byte_8F379C = 0;
  GetModuleFileNameA(0, byte_8F3698, 0x104u);
  dword_8F2B60 = (int)byte_8F3698;
  if ( !dword_8F72E4 || (v6 = (char *)dword_8F72E4, !*(_BYTE *)dword_8F72E4) )
    v6 = byte_8F3698;
  parse_cmdline(v6, &v4, 0, 0, &v5);
  if ( v5 >= 0x3FFFFFFF )
    return -1;
  if ( v4 == -1 )
    return -1;
  v0 = v5;
  v1 = 4 * v5 + v4;
  if ( v1 < v4 )
    return -1;
  v2 = (char **)_malloc_crt(v1);
  if ( !v2 )
    return -1;
  parse_cmdline(v6, &v4, v2, (char *)&v2[v0], &v5);
  dword_8F2B44 = v5 - 1;
  dword_8F2B48 = (int)v2;
  return 0;
}
