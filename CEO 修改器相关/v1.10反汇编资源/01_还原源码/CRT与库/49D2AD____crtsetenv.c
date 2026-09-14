// 函数 0x49d2ad  ___crtsetenv  size=0x242  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl __crtsetenv(const unsigned __int8 **a1, int a2)
{
  const unsigned __int8 *v3; // esi
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // edi
  char *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  size_t v11; // edi
  char *v12; // esi
  char *v13; // eax
  unsigned __int8 **v14; // ecx
  size_t v15; // eax
  char *v16; // edi
  size_t v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // [esp+4h] [ebp-14h]
  char *v20; // [esp+8h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-Ch]
  BOOL v22; // [esp+10h] [ebp-8h]
  unsigned __int8 *Block; // [esp+14h] [ebp-4h]

  v21 = 0;
  if ( !a1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v3 = *a1;
  Block = (unsigned __int8 *)*a1;
  if ( !*a1 )
    goto LABEL_12;
  v4 = _mbschr(v3, 0x3Du);
  v5 = v4;
  v19 = v4;
  if ( !v4 || v3 == v4 )
    goto LABEL_12;
  v22 = v4[1] == 0;
  v6 = (char *)dword_8F2B50;
  if ( dword_8F2B50 == (void *)dword_8F2B54 )
  {
    v6 = copy_environ(dword_8F2B50);
    dword_8F2B50 = v6;
  }
  if ( !v6 )
  {
    if ( a2 && dword_8F2B58 )
    {
      if ( __wtomb_environ() )
      {
LABEL_12:
        *_errno() = 22;
        return -1;
      }
    }
    else
    {
      if ( v22 )
        return 0;
      v7 = _malloc_crt(4u);
      dword_8F2B50 = v7;
      if ( !v7 )
        return -1;
      *v7 = 0;
      if ( !dword_8F2B58 )
      {
        v8 = _malloc_crt(4u);
        dword_8F2B58 = (int)v8;
        if ( !v8 )
          return -1;
        *v8 = 0;
      }
    }
  }
  v9 = dword_8F2B50;
  v20 = (char *)dword_8F2B50;
  if ( !dword_8F2B50 )
    return -1;
  v10 = findenv(v5 - Block, Block);
  v11 = v10;
  if ( v10 < 0 || !*v9 )
  {
    if ( !v22 )
    {
      if ( v10 < 0 )
        v11 = -v10;
      if ( (int)(v11 + 2) <= (int)v11 )
        return -1;
      if ( v11 + 2 >= 0x3FFFFFFF )
        return -1;
      v13 = (char *)_recalloc_crt(dword_8F2B50, 4u, v11 + 2);
      if ( !v13 )
        return -1;
      v14 = (unsigned __int8 **)&v13[4 * v11];
      *v14 = Block;
      v14[1] = 0;
      *a1 = 0;
      goto LABEL_37;
    }
    free(Block);
    *a1 = 0;
    return 0;
  }
  v12 = (char *)&v9[v10];
  free(*(void **)v12);
  if ( !v22 )
  {
    *(_DWORD *)v12 = Block;
    *a1 = 0;
    goto LABEL_38;
  }
  while ( *(_DWORD *)v12 )
  {
    *(_DWORD *)v12 = *((_DWORD *)v12 + 1);
    ++v11;
    v12 = &v20[4 * v11];
  }
  if ( v11 >= 0x3FFFFFFF )
    goto LABEL_38;
  v13 = (char *)_recalloc_crt(dword_8F2B50, v11, 4u);
  if ( !v13 )
    goto LABEL_38;
LABEL_37:
  dword_8F2B50 = v13;
LABEL_38:
  if ( a2 )
  {
    v15 = strlen((const char *)Block);
    v16 = (char *)_calloc_crt(v15 + 2, 1);
    if ( v16 )
    {
      v17 = strlen((const char *)Block);
      if ( strcpy_s(v16, v17 + 2, (const char *)Block) )
        _invoke_watson(0, 0, 0, 0, 0);
      v18 = &v19[v16 - (char *)Block];
      *v18 = 0;
      if ( !SetEnvironmentVariableA(v16, !v22 ? (LPCSTR)v18 + 1 : 0) )
      {
        v21 = -1;
        *_errno() = 42;
      }
      free(v16);
    }
  }
  if ( v22 )
  {
    free(Block);
    *a1 = 0;
  }
  return v21;
}
