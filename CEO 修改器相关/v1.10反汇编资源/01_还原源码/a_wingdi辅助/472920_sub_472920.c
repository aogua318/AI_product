// 函数 0x472920  sub_472920  size=0xA3  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__cdecl sub_472920(int a1, _BYTE *a2, int a3, unsigned __int16 a4)
{
  int v4; // ecx
  __int16 v5; // dx
  int v6; // ecx
  char v7; // bl
  int v8; // edx

  v4 = *(_DWORD *)(a1 + 5812);
  if ( v4 <= 13 )
  {
    *(_DWORD *)(a1 + 5812) = v4 + 3;
    *(_WORD *)(a1 + 5808) |= a4 << v4;
  }
  else
  {
    v5 = a4 << v4;
    v6 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(a1 + 5808) |= v5;
    *(_BYTE *)(v6 + *(_DWORD *)(a1 + 20)) = *(_BYTE *)(a1 + 5808);
    v7 = *(_BYTE *)(a1 + 5809);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = v7;
    v8 = *(_DWORD *)(a1 + 5812);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 5812) = v8 - 13;
    *(_WORD *)(a1 + 5808) = a4 >> (16 - v8);
  }
  return sub_4724D0(a1, a2, a3, 1);
}
