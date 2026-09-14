// 函数 0x471cb0  sub_471CB0  size=0x24A  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_471CB0@<eax>(int a1@<esi>, int a2, int a3, int a4)
{
  int v4; // ecx
  __int16 v5; // ax
  __int16 v6; // dx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // dx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  __int16 v15; // ax
  __int16 v16; // dx
  int v17; // ecx
  int v18; // edx
  int i; // edi
  int v20; // ecx
  unsigned __int16 v21; // ax
  __int16 v22; // dx
  int v23; // ecx
  int v24; // edx

  v4 = *(_DWORD *)(a1 + 5812);
  v5 = a2 - 257;
  if ( v4 <= 11 )
  {
    *(_WORD *)(a1 + 5808) |= v5 << v4;
    *(_DWORD *)(a1 + 5812) = v4 + 5;
  }
  else
  {
    v6 = v5 << v4;
    v7 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5808) |= v6;
    *(_BYTE *)(v7 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5808);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5809);
    v8 = *(_DWORD *)(a1 + 5812);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 5812) = v8 - 11;
    *(_WORD *)(a1 + 5808) = (unsigned __int16)(a2 - 257) >> (16 - v8);
  }
  v9 = *(_DWORD *)(a1 + 5812);
  v10 = a3 - 1;
  if ( v9 <= 11 )
  {
    *(_WORD *)(a1 + 5808) |= v10 << v9;
    *(_DWORD *)(a1 + 5812) = v9 + 5;
  }
  else
  {
    v11 = v10 << v9;
    v12 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5808) |= v11;
    *(_BYTE *)(v12 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5808);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5809);
    v13 = *(_DWORD *)(a1 + 5812);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 5812) = v13 - 11;
    *(_WORD *)(a1 + 5808) = (unsigned __int16)(a3 - 1) >> (16 - v13);
  }
  v14 = *(_DWORD *)(a1 + 5812);
  v15 = a4 - 4;
  if ( v14 <= 12 )
  {
    *(_WORD *)(a1 + 5808) |= v15 << v14;
    *(_DWORD *)(a1 + 5812) = v14 + 4;
  }
  else
  {
    v16 = v15 << v14;
    v17 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5808) |= v16;
    *(_BYTE *)(v17 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5808);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5809);
    v18 = *(_DWORD *)(a1 + 5812);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 5812) = v18 - 12;
    *(_WORD *)(a1 + 5808) = (unsigned __int16)(a4 - 4) >> (16 - v18);
  }
  for ( i = 0; i < a4; ++i )
  {
    v20 = *(_DWORD *)(a1 + 5812);
    if ( v20 <= 13 )
    {
      *(_WORD *)(a1 + 5808) |= *(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A521C[i] + 2678) << v20;
      *(_DWORD *)(a1 + 5812) = v20 + 3;
    }
    else
    {
      v21 = *(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A521C[i] + 2678);
      v22 = v21 << v20;
      v23 = *(_DWORD *)(a1 + 20);
      *(_WORD *)(a1 + 5808) |= v22;
      *(_BYTE *)(v23 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5808);
      *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5809);
      v24 = *(_DWORD *)(a1 + 5812);
      ++*(_DWORD *)(a1 + 20);
      *(_WORD *)(a1 + 5808) = v21 >> (16 - v24);
      *(_DWORD *)(a1 + 5812) = v24 - 13;
    }
  }
  sub_471730(a1, a1 + 140, a2 - 1);
  return sub_471730(a1, a1 + 2432, a3 - 1);
}
