// 函数 0x468de0  sub_468DE0  size=0x181  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_468DE0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // edi
  signed int v8; // ecx
  signed int v9; // esi
  int v10; // edi
  int result; // eax
  int v12; // ecx
  unsigned int v13; // edx
  int j; // ebx
  unsigned int v15; // ebx
  int v16; // esi
  unsigned int i; // ecx
  unsigned int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]
  int v22; // [esp+28h] [ebp+10h]
  int v23; // [esp+2Ch] [ebp+14h]

  v6 = a5 - a3;
  v7 = a4 - a2;
  v18 = a1[1];
  v8 = abs32(a4 - a2);
  v9 = abs32(a5 - a3);
  if ( v8 < v9 )
  {
    v15 = a3;
    if ( a3 > a5 )
    {
      v15 = a5;
      a2 = a4;
      a5 = a3;
      v7 = -v7;
    }
    v22 = 2 * v8;
    result = 2 * v8 - v9;
    v20 = -2 * v9;
    if ( v8 )
    {
      v23 = v7 / v8;
      result = 2 * v8 - v9;
    }
    else
    {
      v23 = 0;
    }
    v16 = a2;
    for ( i = v15; (int)i <= a5; ++i )
    {
      if ( i < v18 )
      {
        if ( *(_DWORD *)(a6 + 8 * i + 4) < v16 )
          *(_DWORD *)(a6 + 8 * i + 4) = v16;
        if ( *(_DWORD *)(a6 + 8 * i) > v16 )
          *(_DWORD *)(a6 + 8 * i) = v16;
        if ( *(_DWORD *)(a6 + 8 * i + 4) >= *a1 )
          *(_DWORD *)(a6 + 8 * i + 4) = *a1 - 1;
        if ( *(int *)(a6 + 8 * i) < 0 )
          *(_DWORD *)(a6 + 8 * i) = 0;
      }
      if ( result > 0 )
      {
        result += v20;
        v16 += v23;
      }
      result += v22;
    }
  }
  else
  {
    v10 = a2;
    if ( a2 > a4 )
    {
      v10 = a4;
      a4 = a2;
      a3 = a5;
      v6 = -v6;
    }
    result = 2 * v9 - v8;
    v21 = result;
    v19 = -2 * v8;
    if ( v9 )
      v12 = v6 / v9;
    else
      v12 = 0;
    v13 = a3;
    for ( j = v10; j <= a4; v21 = result )
    {
      if ( v13 < v18 )
      {
        if ( *(_DWORD *)(a6 + 8 * v13 + 4) < j )
          *(_DWORD *)(a6 + 8 * v13 + 4) = j;
        if ( *(_DWORD *)(a6 + 8 * v13) > j )
          *(_DWORD *)(a6 + 8 * v13) = j;
        if ( *(_DWORD *)(a6 + 8 * v13 + 4) >= *a1 )
          *(_DWORD *)(a6 + 8 * v13 + 4) = *a1 - 1;
        result = v21;
        if ( *(int *)(a6 + 8 * v13) < 0 )
          *(_DWORD *)(a6 + 8 * v13) = 0;
      }
      if ( result > 0 )
      {
        result += v19;
        v13 += v12;
      }
      result += 2 * v9;
      ++j;
    }
  }
  return result;
}
