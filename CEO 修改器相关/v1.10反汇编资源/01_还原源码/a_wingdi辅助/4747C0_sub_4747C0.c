// 函数 0x4747c0  sub_4747C0  size=0xF9  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4747C0(_DWORD *a1, _DWORD *a2, int a3)
{
  char *v3; // ecx
  unsigned int v4; // ebx
  size_t v6; // eax
  size_t v7; // ebx
  int (__cdecl *v8)(_DWORD, char *, size_t); // eax
  int v9; // eax
  char *v10; // edx
  char *v11; // eax
  char *v12; // ecx
  size_t v13; // eax
  size_t v14; // ebx
  int (__cdecl *v15)(_DWORD, char *, size_t); // eax
  int v16; // eax
  char *v18; // [esp+Ch] [ebp-4h]
  char *v19; // [esp+Ch] [ebp-4h]
  char *v20; // [esp+1Ch] [ebp+Ch]
  char *v21; // [esp+1Ch] [ebp+Ch]

  v3 = (char *)a1[12];
  v4 = a1[13];
  v18 = (char *)a2[3];
  v20 = v3;
  if ( (unsigned int)v3 > v4 )
    v4 = a1[11];
  v6 = a2[4];
  v7 = v4 - (_DWORD)v3;
  if ( v7 > v6 )
    v7 = a2[4];
  if ( v7 && a3 == -5 )
    a3 = 0;
  a2[5] += v7;
  a2[4] = v6 - v7;
  v8 = (int (__cdecl *)(_DWORD, char *, size_t))a1[14];
  if ( v8 )
  {
    v9 = v8(a1[15], v3, v7);
    v3 = v20;
    a1[15] = v9;
    a2[12] = v9;
  }
  memcpy(v18, v3, v7);
  v10 = (char *)a1[11];
  v19 = &v18[v7];
  v11 = &v20[v7];
  if ( &v20[v7] == v10 )
  {
    v12 = (char *)a1[10];
    v21 = v12;
    if ( (char *)a1[13] == v10 )
      a1[13] = v12;
    v13 = a2[4];
    v14 = a1[13] - (_DWORD)v12;
    if ( v14 > v13 )
      v14 = a2[4];
    if ( v14 && a3 == -5 )
      a3 = 0;
    a2[5] += v14;
    a2[4] = v13 - v14;
    v15 = (int (__cdecl *)(_DWORD, char *, size_t))a1[14];
    if ( v15 )
    {
      v16 = v15(a1[15], v12, v14);
      v12 = v21;
      a1[15] = v16;
      a2[12] = v16;
    }
    memcpy(v19, v12, v14);
    v19 += v14;
    v11 = &v21[v14];
  }
  a2[3] = v19;
  a1[12] = v11;
  return a3;
}
