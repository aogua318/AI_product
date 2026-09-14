// 函数 0x483930  sub_483930  size=0x12D  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_483930@<eax>(_WORD *a1@<edi>, int a2@<esi>)
{
  __int16 *v2; // eax
  int *v3; // eax
  __int16 v4; // cx
  __int16 v5; // ax
  __int16 v6; // dx
  int v8; // ebx
  __int16 v9; // cx
  __int16 v10; // ax
  int v11; // eax
  int v12[4]; // [esp+4h] [ebp-30h] BYREF
  int v13[4]; // [esp+14h] [ebp-20h] BYREF
  int v14[4]; // [esp+24h] [ebp-10h] BYREF

  sub_464B60(v14);
  v2 = (__int16 *)sub_467760(*(_DWORD **)(dword_8F2AD4 + 144), *(_DWORD *)(a2 + 4));
  v3 = sub_467100(v2, *(__int16 *)(a2 + 12), *(__int16 *)(a2 + 14));
  sub_464CE0(v14, v3);
  v4 = a1[4];
  v5 = *(_WORD *)(a2 + 10);
  if ( v4 > v5 )
    return 0;
  v6 = a1[5];
  if ( v6 <= *(__int16 *)(a2 + 8) && v6 < v5 )
    goto LABEL_19;
  v8 = v5;
  if ( v4 >= v5 )
    return 0;
  if ( ((v9 = a1[11], v9 >= *(__int16 *)(a2 + 18)) || a1[8] > *(_WORD *)(a2 + 20))
    && ((v10 = a1[10], v10 >= *(__int16 *)(a2 + 16)) || a1[9] > *(_WORD *)(a2 + 22)) )
  {
    sub_464D50(v12, (__int16)a1[8], (__int16)a1[9], v10 + 1, v9 + 1);
    sub_464D50(v13, *(__int16 *)(a2 + 16), *(__int16 *)(a2 + 18), *(__int16 *)(a2 + 20) + 1, *(__int16 *)(a2 + 22) + 1);
    if ( sub_464BC0(v12, v13) )
    {
      v11 = (__int16)a1[5] + (__int16)a1[4];
      if ( v11 < v8 || v11 == v8 && a1[7] < *(_WORD *)(a2 + 14) )
        return 1;
    }
  }
  else
  {
LABEL_19:
    if ( sub_464BC0(&dword_8F2AF0, v14) )
      return 1;
  }
  return 0;
}
