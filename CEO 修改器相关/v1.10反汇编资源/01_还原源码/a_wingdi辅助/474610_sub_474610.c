// 函数 0x474610  sub_474610  size=0x177  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_474610(
        unsigned int a1,
        unsigned int a2,
        int *a3,
        unsigned int *a4,
        unsigned int *a5,
        int **a6,
        int **a7,
        int a8,
        int a9)
{
  int (__cdecl *v9)(int, int, int); // ecx
  unsigned int *v10; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  void (__cdecl *v15)(int, unsigned int *); // edx
  void (__cdecl *v16)(int, unsigned int *); // edx
  int v17; // [esp-Ch] [ebp-18h]
  int v18; // [esp-Ch] [ebp-18h]
  int v19; // [esp-Ch] [ebp-18h]
  unsigned int v20; // [esp+8h] [ebp-4h] BYREF

  v9 = *(int (__cdecl **)(int, int, int))(a9 + 32);
  v17 = *(_DWORD *)(a9 + 40);
  v20 = 0;
  v10 = (unsigned int *)v9(v17, 288, 4);
  if ( !v10 )
    return -4;
  v12 = sub_474010(a3, &v20, a1, 0x101u, (int)&unk_4A5D78, (int)&unk_4A5DF8, a6, a4, a8, v10);
  v13 = v12;
  if ( v12 )
  {
    if ( v12 == -3 )
    {
      *(_DWORD *)(a9 + 24) = "oversubscribed literal/length tree";
      goto LABEL_20;
    }
    if ( v12 == -4 )
      goto LABEL_20;
LABEL_19:
    *(_DWORD *)(a9 + 24) = "incomplete literal/length tree";
    v13 = -3;
    goto LABEL_20;
  }
  if ( !*a4 )
    goto LABEL_19;
  v14 = sub_474010(&a3[a1], &v20, a2, 0, (int)&unk_4A5E78, (int)&unk_4A5EF0, a7, a5, a8, v10);
  v13 = v14;
  switch ( v14 )
  {
    case 0:
      if ( *a5 || a1 <= 0x101 )
      {
        (*(void (__cdecl **)(_DWORD, unsigned int *))(a9 + 36))(*(_DWORD *)(a9 + 40), v10);
        return 0;
      }
LABEL_14:
      *(_DWORD *)(a9 + 24) = "empty distance tree with lengths";
      v13 = -3;
      goto LABEL_20;
    case -3:
      v15 = *(void (__cdecl **)(int, unsigned int *))(a9 + 36);
      v18 = *(_DWORD *)(a9 + 40);
      *(_DWORD *)(a9 + 24) = "oversubscribed distance tree";
      v15(v18, v10);
      return -3;
    case -5:
      v16 = *(void (__cdecl **)(int, unsigned int *))(a9 + 36);
      v19 = *(_DWORD *)(a9 + 40);
      *(_DWORD *)(a9 + 24) = "incomplete distance tree";
      v16(v19, v10);
      return -3;
  }
  if ( v14 != -4 )
    goto LABEL_14;
LABEL_20:
  (*(void (__cdecl **)(_DWORD, unsigned int *))(a9 + 36))(*(_DWORD *)(a9 + 40), v10);
  return v13;
}
