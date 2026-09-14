// 函数 0x472bd0  sub_472BD0  size=0x1E0  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_472BD0(int a1, _BYTE *a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  unsigned __int16 v11; // ax
  __int16 v12; // dx
  int v13; // ecx
  int v14; // edx
  unsigned __int16 v15; // dx
  __int16 v16; // ax
  int v17; // ecx
  int v18; // eax
  int result; // eax
  int v20; // [esp+Ch] [ebp-4h]

  v20 = 0;
  if ( *(int *)(a1 + 124) <= 0 )
  {
    v6 = a3 + 5;
LABEL_7:
    v5 = v6;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 28) == 2 )
    sub_472310(a1);
  sub_472650((_DWORD *)a1, (int *)(a1 + 2832));
  sub_472650((_DWORD *)a1, (int *)(a1 + 2844));
  v4 = sub_472850(a1);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 5792) + 10) >> 3;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 5796) + 10) >> 3;
  v20 = v4;
  if ( v6 <= v5 )
    goto LABEL_7;
LABEL_8:
  if ( a3 + 4 <= v5 && a2 )
  {
    v7 = a4;
    sub_472920(a1, a2, a3, a4);
  }
  else
  {
    v7 = a4;
    v9 = v6 == v5;
    v10 = *(_DWORD *)(a1 + 5812);
    if ( v9 )
    {
      v11 = a4 + 2;
      if ( v10 <= 13 )
      {
        *(_WORD *)(a1 + 5808) |= v11 << v10;
        *(_DWORD *)(a1 + 5812) = v10 + 3;
      }
      else
      {
        v12 = v11 << v10;
        v13 = *(_DWORD *)(a1 + 8);
        *(_WORD *)(a1 + 5808) |= v12;
        *(_BYTE *)(v13 + (*(_DWORD *)(a1 + 20))++) = *(_BYTE *)(a1 + 5808);
        *(_BYTE *)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5809);
        v14 = *(_DWORD *)(a1 + 5812);
        ++*(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 5812) = v14 - 13;
        *(_WORD *)(a1 + 5808) = v11 >> (16 - v14);
      }
      sub_471F00(a1, (int)&unk_4A52F8, (int)&unk_4A5778);
    }
    else
    {
      v15 = a4 + 4;
      if ( v10 <= 13 )
      {
        *(_WORD *)(a1 + 5808) |= v15 << v10;
        *(_DWORD *)(a1 + 5812) = v10 + 3;
      }
      else
      {
        v16 = v15 << v10;
        v17 = *(_DWORD *)(a1 + 8);
        *(_WORD *)(a1 + 5808) |= v16;
        *(_BYTE *)(v17 + (*(_DWORD *)(a1 + 20))++) = *(_BYTE *)(a1 + 5808);
        *(_BYTE *)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5809);
        v18 = *(_DWORD *)(a1 + 5812);
        ++*(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 5812) = v18 - 13;
        *(_WORD *)(a1 + 5808) = v15 >> (16 - v18);
      }
      sub_471CB0(a1, *(_DWORD *)(a1 + 2836) + 1, *(_DWORD *)(a1 + 2848) + 1, v20 + 1);
      sub_471F00(a1, a1 + 140, a1 + 2432);
    }
  }
  result = sub_4712F0(v8, a1);
  if ( v7 )
    return sub_472470(a1);
  return result;
}
