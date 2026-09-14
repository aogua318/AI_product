// 函数 0x47d310  sub_47D310  size=0x13B  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl sub_47D310(char *a1, int a2, int a3)
{
  char *v3; // eax
  char v4; // cl
  char *result; // eax
  int v6; // edi
  int v7; // eax
  const char *v8; // esi
  int v9; // ecx
  int v10; // [esp+0h] [ebp-108h]
  char v11[256]; // [esp+4h] [ebp-104h] BYREF

  v3 = a1;
  v11[0] = 0;
  if ( a1 )
  {
    do
    {
      v4 = *v3;
      v3[v11 - a1] = *v3;
      ++v3;
    }
    while ( v4 );
  }
  sub_464100(v11);
  result = (char *)&unk_8EEE40 + 568 * dword_4B81E4;
  if ( *(_DWORD *)result != a2 )
  {
    v6 = 0;
    v10 = -1;
    v7 = 0;
    v8 = (const char *)&unk_8EEF78;
    do
    {
      if ( *((_DWORD *)v8 - 3) )
      {
        if ( !strcmp(v8, v11) )
          return (char *)&unk_8EEE40 + 568 * v7;
        v9 = *((_DWORD *)v8 - 78);
        if ( v9 <= a2 && v9 > v6 )
        {
          v6 = *((_DWORD *)v8 - 78);
          v10 = v7;
        }
      }
      v8 += 568;
      ++v7;
    }
    while ( (int)v8 < (int)byte_8F12F8 );
    v7 = v10;
    if ( v10 != -1 )
      return (char *)&unk_8EEE40 + 568 * v7;
    v7 = sub_47CE40(v11, a3);
    if ( v7 != -1 )
      return (char *)&unk_8EEE40 + 568 * v7;
    v7 = dword_4B81E4;
    if ( dword_4B81E4 != -1 )
      return (char *)&unk_8EEE40 + 568 * v7;
    return 0;
  }
  return result;
}
