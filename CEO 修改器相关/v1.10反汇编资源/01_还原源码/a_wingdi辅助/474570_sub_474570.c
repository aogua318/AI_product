// 函数 0x474570  sub_474570  size=0x92  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_474570(int *a1, unsigned int *a2, int **a3, int a4, int a5)
{
  int (__cdecl *v5)(int, int, int); // ecx
  unsigned int *v6; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // [esp-Ch] [ebp-18h]
  unsigned int v11; // [esp+8h] [ebp-4h] BYREF

  v5 = *(int (__cdecl **)(int, int, int))(a5 + 32);
  v10 = *(_DWORD *)(a5 + 40);
  v11 = 0;
  v6 = (unsigned int *)v5(v10, 19, 4);
  if ( !v6 )
    return -4;
  v8 = sub_474010(a1, &v11, 0x13u, 0x13u, 0, 0, a3, a2, a4, v6);
  v9 = v8;
  if ( v8 == -3 )
  {
    *(_DWORD *)(a5 + 24) = "oversubscribed dynamic bit lengths tree";
  }
  else if ( v8 == -5 || !*a2 )
  {
    *(_DWORD *)(a5 + 24) = "incomplete dynamic bit lengths tree";
    v9 = -3;
  }
  (*(void (__cdecl **)(_DWORD, unsigned int *))(a5 + 36))(*(_DWORD *)(a5 + 40), v6);
  return v9;
}
