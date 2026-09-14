// 函数 0x40ca00  sub_40CA00  size=0x1C7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40CA00(int a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // eax
  int v10; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v1 = a1;
  v2 = dword_4C4398 + a1 * dword_4C4384;
  if ( !*(_WORD *)v2 )
  {
    if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 && dword_4CD11C - *(_DWORD *)(v2 + 4) <= 50 )
    {
      v3 = *(_DWORD *)(v2 + 12);
      v12 = *(__int16 *)(v3 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 2);
      a1 = *(__int16 *)(v3 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 4);
      sub_4866A0(
        *(_DWORD *)(v2 + 8),
        v12,
        a1,
        *(unsigned __int8 *)(*(_DWORD *)(v2 + 8) * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 9));
      goto LABEL_13;
    }
LABEL_15:
    sub_4864E0(*(_DWORD *)(v2 + 8));
    sub_464E10(v1);
    return 0;
  }
  if ( dword_4C2D38 != dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v2 + 2) || dword_4CD11C - *(_DWORD *)(v2 + 4) > 50 )
    goto LABEL_15;
  v4 = *(_DWORD *)(v2 + 12);
  v12 = *(__int16 *)(v4 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 2);
  a1 = *(__int16 *)(v4 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 4);
  sub_483850(v12, a1, &v11, &v10);
  v5 = v11;
  if ( v11 < *(_DWORD *)(dword_4C2D38 + 24) - 1 )
    v5 = ++v11;
  v6 = v10;
  if ( v10 < *(_DWORD *)(dword_4C2D38 + 28) - 1 )
    v6 = ++v10;
  sub_483890(v5, v6, &v12, &a1);
  sub_4866A0(
    *(_DWORD *)(v2 + 8),
    v12,
    a1,
    *(unsigned __int8 *)(*(_DWORD *)(v2 + 8) * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 9));
LABEL_13:
  v7 = *(_DWORD *)(v2 + 8);
  v8 = *(__int16 *)(v7 * *(_DWORD *)(dword_4C2D38 + 160) + *(_DWORD *)(dword_4C2D38 + 180) + 6);
  if ( v8 < 7 )
  {
    sub_4868E0(v7, v8 + 1);
    return 0;
  }
  return 0;
}
