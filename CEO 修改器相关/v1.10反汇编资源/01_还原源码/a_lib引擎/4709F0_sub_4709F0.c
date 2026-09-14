// 函数 0x4709f0  sub_4709F0  size=0x203  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4709F0(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, _BYTE *a7, int a8)
{
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  bool v19; // zf
  int v20; // [esp+0h] [ebp-4h]

  v20 = 0;
  if ( !a7 || *a7 != *off_4B3A88 || a8 != 56 )
    return -6;
  if ( !a1 )
    return -2;
  a1[6] = 0;
  if ( !a1[8] )
  {
    a1[8] = sub_472DB0;
    a1[10] = 0;
  }
  if ( !a1[9] )
    a1[9] = sub_472DD0;
  if ( a2 == -1 )
    a2 = 6;
  v9 = a4;
  if ( a4 < 0 )
  {
    v9 = -a4;
    v20 = 1;
    a4 = -a4;
  }
  if ( (unsigned int)(a5 - 1) > 8 || a3 != 8 || (unsigned int)(v9 - 8) > 7 || a2 > 9 || a6 > 2 )
    return -2;
  v10 = ((int (__stdcall *)(_DWORD))a1[8])(a1[10]);
  v11 = v10;
  if ( v10 )
  {
    a1[7] = v10;
    *(_DWORD *)(v10 + 24) = v20;
    *(_DWORD *)(v10 + 40) = v9;
    v12 = 1 << (a5 + 7);
    *(_DWORD *)(v11 + 72) = a5 + 7;
    *(_DWORD *)(v11 + 44) = (1 << a4) - 1;
    *(_DWORD *)(v11 + 68) = v12;
    *(_DWORD *)(v11 + 76) = v12 - 1;
    *(_DWORD *)v11 = a1;
    *(_DWORD *)(v11 + 36) = 1 << a4;
    *(_DWORD *)(v11 + 80) = (a5 + 9) / 3u;
    v13 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1 << a4, 2);
    v14 = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(v11 + 48) = v13;
    v15 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], v14, 2);
    v16 = *(_DWORD *)(v11 + 68);
    *(_DWORD *)(v11 + 56) = v15;
    *(_DWORD *)(v11 + 60) = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], v16, 2);
    *(_DWORD *)(v11 + 5780) = 1 << (a5 + 6);
    v17 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1 << (a5 + 6), 4);
    v18 = *(_DWORD *)(v11 + 5780);
    v19 = *(_DWORD *)(v11 + 48) == 0;
    *(_DWORD *)(v11 + 8) = v17;
    *(_DWORD *)(v11 + 12) = 4 * v18;
    if ( !v19 && *(_DWORD *)(v11 + 56) && *(_DWORD *)(v11 + 60) && v17 )
    {
      *(_DWORD *)(v11 + 5788) = v17 + 2 * (v18 >> 1);
      *(_DWORD *)(v11 + 5776) = v18 + v17 + 2 * v18;
      *(_DWORD *)(v11 + 124) = a2;
      *(_DWORD *)(v11 + 128) = a6;
      *(_BYTE *)(v11 + 29) = 8;
      return sub_470970(a1);
    }
    a1[6] = off_4B3AE0[0];
    sub_46FD50((int)a1);
  }
  return -4;
}
