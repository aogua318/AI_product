// 函数 0x46fae0  sub_46FAE0  size=0x267  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46FAE0(int a1, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // [esp+14h] [ebp+8h]

  if ( !a1 )
    return -2;
  v3 = *(_DWORD *)(a1 + 28);
  if ( !v3 || (unsigned int)a2 > 4 )
    return -2;
  if ( !*(_DWORD *)(a1 + 12)
    || !*(_DWORD *)a1 && *(_DWORD *)(a1 + 4)
    || (v4 = *(_DWORD *)(v3 + 4), v4 == 666) && a2 != 4 )
  {
    *(char **)(a1 + 24) = off_4B3AD8[0];
    return -2;
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_28:
    *(char **)(a1 + 24) = off_4B3AE4[0];
    return -5;
  }
  v5 = *(_DWORD *)(v3 + 32);
  *(_DWORD *)v3 = a1;
  v15 = v5;
  *(_DWORD *)(v3 + 32) = a2;
  if ( v4 == 42 )
  {
    v6 = (*(_DWORD *)(v3 + 124) - 1) >> 1;
    if ( v6 > 3 )
      v6 = 3;
    v7 = (v6 << 6) | (((*(_DWORD *)(v3 + 40) - 8) << 12) + 2048);
    if ( *(_DWORD *)(v3 + 100) )
      v7 |= 0x20u;
    *(_DWORD *)(v3 + 4) = 113;
    v8 = sub_46FA60(v3, 31 * (v7 / 0x1F + 1));
    if ( *(_DWORD *)(v3 + 100) )
    {
      v9 = sub_46FA60(v8, *(_WORD *)(a1 + 50));
      sub_46FA60(v9, *(_WORD *)(a1 + 48));
    }
    *(_DWORD *)(a1 + 48) = 1;
  }
  if ( *(_DWORD *)(v3 + 20) )
  {
    sub_46FA90(a1);
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_20:
      *(_DWORD *)(v3 + 32) = -1;
      return 0;
    }
  }
  else if ( !*(_DWORD *)(a1 + 4) && a2 <= v15 && a2 != 4 )
  {
    *(char **)(a1 + 24) = off_4B3AE4[0];
    return -5;
  }
  v11 = *(_DWORD *)(v3 + 4);
  if ( v11 == 666 )
  {
    if ( *(_DWORD *)(a1 + 4) )
      goto LABEL_28;
LABEL_30:
    if ( !*(_DWORD *)(v3 + 108) && (!a2 || v11 == 666) )
      goto LABEL_44;
    goto LABEL_33;
  }
  if ( !*(_DWORD *)(a1 + 4) )
    goto LABEL_30;
LABEL_33:
  v12 = funcs_46FC55[3 * *(_DWORD *)(v3 + 124)](v3, a2);
  if ( v12 == 2 || v12 == 3 )
    *(_DWORD *)(v3 + 4) = 666;
  if ( !v12 || v12 == 2 )
  {
    if ( *(_DWORD *)(a1 + 16) )
      return 0;
    *(_DWORD *)(v3 + 32) = -1;
    return 0;
  }
  if ( v12 == 1 )
  {
    if ( a2 == 1 )
    {
      sub_4729D0(v3);
    }
    else
    {
      sub_472920(v3, 0, 0, 0);
      if ( a2 == 3 )
      {
        *(_WORD *)(*(_DWORD *)(v3 + 60) + 2 * *(_DWORD *)(v3 + 68) - 2) = 0;
        memset(*(void **)(v3 + 60), 0, 2 * *(_DWORD *)(v3 + 68) - 2);
      }
    }
    sub_46FA90(a1);
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_20;
  }
LABEL_44:
  if ( a2 != 4 )
    return 0;
  if ( *(_DWORD *)(v3 + 24) )
    return 1;
  v13 = sub_46FA60(v3, *(_WORD *)(a1 + 50));
  sub_46FA60(v13, *(_WORD *)(a1 + 48));
  sub_46FA90(a1);
  v14 = *(_DWORD *)(v3 + 20) == 0;
  *(_DWORD *)(v3 + 24) = -1;
  return v14;
}
