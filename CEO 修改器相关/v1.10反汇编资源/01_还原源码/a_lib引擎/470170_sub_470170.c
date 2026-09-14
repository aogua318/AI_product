// 函数 0x470170  sub_470170  size=0x139  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_470170(size_t *a1, int a2)
{
  int v2; // edi
  unsigned int v3; // eax
  bool v4; // zf
  int v5; // ecx
  size_t v6; // edx
  unsigned int v7; // eax
  size_t v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  int v14; // ecx
  size_t v15; // eax
  int v16; // eax

  v2 = 0xFFFF;
  if ( a1[3] - 5 < 0xFFFF )
    v2 = a1[3] - 5;
  while ( 1 )
  {
    v3 = a1[27];
    if ( v3 <= 1 )
    {
      sub_470070(a1);
      v3 = a1[27];
      if ( !v3 )
        break;
    }
    v4 = v3 + a1[25] == 0;
    a1[25] += v3;
    v5 = a1[21];
    v6 = a1[25];
    a1[27] = 0;
    v7 = v5 + v2;
    if ( !v4 && v6 < v7
      || ((a1[27] = v6 - v7, a1[25] = v7, v5 < 0) ? (v8 = 0) : (v8 = v5 + a1[12]),
          sub_472BD0(a1, v8, v2, 0),
          a1[21] = a1[25],
          sub_46FA90(*a1),
          *(_DWORD *)(*a1 + 16)) )
    {
      v9 = a1[21];
      v10 = a1[25] - v9;
      if ( v10 < a1[9] - 262 )
        continue;
      v11 = v9 < 0 ? 0 : v9 + a1[12];
      sub_472BD0(a1, v11, v10, 0);
      v12 = *a1;
      a1[21] = a1[25];
      sub_46FA90(v12);
      if ( *(_DWORD *)(*a1 + 16) )
        continue;
    }
    return 0;
  }
  if ( !a2 )
    return 0;
  v14 = a1[21];
  if ( v14 < 0 )
    v15 = 0;
  else
    v15 = v14 + a1[12];
  sub_472BD0(a1, v15, a1[25] - v14, a2 == 4);
  a1[21] = a1[25];
  sub_46FA90(*a1);
  v16 = 0;
  if ( !*(_DWORD *)(*a1 + 16) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v16) = a2 == 4;
  return 2 * v16 + 1;
}
