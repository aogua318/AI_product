// 函数 0x40cbe0  sub_40CBE0  size=0x119  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_40CBE0(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  char *v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // [esp+4h] [ebp-4h] BYREF

  v2 = a1;
  if ( (_DWORD *)dword_4C2D38 == a1 )
  {
    sub_483850(
      *(__int16 *)(a2 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 2),
      *(__int16 *)(a2 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 4),
      &a1,
      &v12);
    v3 = *(_DWORD *)(dword_4C2D38 + 24);
    if ( v2 == dword_4D0E68 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(dword_4C2D38 + 136) + 4 * ((_DWORD)a1 + v12 * v3));
      if ( v4 == -1 )
        return;
      v5 = *(_DWORD *)(dword_4C2D38 + 160);
      v6 = *(_DWORD *)(dword_4C2D38 + 180);
      while ( 1 )
      {
        v7 = v4 * v5;
        if ( *(_BYTE *)(v4 * v5 + v6 + 11) == 2 )
          break;
        v4 = *(_DWORD *)(v7 + v6 + 20);
        if ( v4 == -1 )
          return;
      }
      goto LABEL_17;
    }
    v8 = (char *)a1;
    if ( (int)a1 < v3 - 1 )
    {
      v8 = (char *)a1 + 1;
      a1 = (_DWORD *)((char *)a1 + 1);
    }
    v9 = v12;
    if ( v12 < *(_DWORD *)(dword_4C2D38 + 28) - 1 )
      v9 = ++v12;
    v4 = *(_DWORD *)(*(_DWORD *)(dword_4C2D38 + 136) + 4 * (_DWORD)&v8[v9 * *(_DWORD *)(dword_4C2D38 + 24)]);
    if ( v4 != -1 )
    {
      v10 = *(_DWORD *)(dword_4C2D38 + 160);
      v6 = *(_DWORD *)(dword_4C2D38 + 180);
      while ( 1 )
      {
        v7 = v4 * v10;
        if ( *(_BYTE *)(v4 * v10 + v6 + 11) == 10 )
          break;
        v4 = *(_DWORD *)(v7 + v6 + 20);
        if ( v4 == -1 )
          return;
      }
LABEL_17:
      v11 = *(__int16 *)(v7 + v6 + 12);
      sub_4864E0(v4);
      sub_464E10(v11);
    }
  }
}
