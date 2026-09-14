// 函数 0x40c730  sub_40C730  size=0x2CA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40C730(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v8; // eax
  int v9; // ebx
  __int16 *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // ebx
  __int16 *v19; // edi
  int v20; // eax
  int v21; // [esp-1Ch] [ebp-28h]
  int v22; // [esp+4h] [ebp-8h]
  int v23; // [esp+8h] [ebp-4h] BYREF

  v6 = (_DWORD *)a1;
  if ( dword_4C2D38 != a1 )
    return -1;
  v8 = *(_DWORD *)(a1 + 180) + a2 * *(_DWORD *)(a1 + 160);
  sub_483850(*(__int16 *)(v8 + 2), *(__int16 *)(v8 + 4), &v23, &a1);
  if ( v6 == dword_4D0E68 )
  {
    v9 = *(_DWORD *)(v6[34] + 4 * (v23 + a1 * v6[6]));
    if ( v9 != -1 )
    {
      while ( 1 )
      {
        v10 = (__int16 *)(v6[45] + v9 * v6[40]);
        if ( *((_BYTE *)v10 + 11) == 2 )
          break;
        v9 = *((_DWORD *)v10 + 5);
        if ( v9 == -1 )
          goto LABEL_7;
      }
      if ( *v10 != a4 || ((*((unsigned __int8 *)v10 + 10) >> 4) & 7) != a5 || (unsigned __int16)v10[7] != a6 )
      {
        v21 = a4;
        *(_DWORD *)(dword_4C4398 + dword_4C4384 * v10[6] + 4) = dword_4CD11C;
        sub_486530(v9, v21, 4, 0, 0, 0);
        sub_486260(v9, a5, a6);
      }
      return v10[6];
    }
    goto LABEL_7;
  }
  if ( dword_4B1028 == -1 )
    return -1;
  v15 = v6[6];
  v16 = v23;
  if ( v23 < v15 - 1 )
    v16 = ++v23;
  v17 = a1;
  if ( a1 < v6[7] - 1 )
    v17 = ++a1;
  a3 += 32;
  v18 = *(_DWORD *)(v6[34] + 4 * (v16 + v17 * v15));
  if ( v18 == -1 )
  {
LABEL_7:
    v11 = sub_4656D0(&unk_4C4380);
    v22 = v11;
    if ( v11 != -1 )
    {
      v12 = a2;
      v13 = dword_4C4398 + v11 * dword_4C4384;
      *(_DWORD *)(v13 + 4) = dword_4CD11C;
      *(_DWORD *)(v13 + 12) = v12;
      if ( v6 == dword_4D0E68 )
      {
        v14 = sub_486480(a4, v23, a1, 0, a3, 0, 0, 0, 0);
        if ( v14 != -1 )
        {
          sub_483BD0(v14, 2, v22);
          *(_WORD *)(v13 + 2) = -1;
          *(_WORD *)v13 = 0;
          *(_DWORD *)(v13 + 8) = v14;
LABEL_33:
          sub_486260(v14, a5, a6);
          return v22;
        }
      }
      else
      {
        v20 = sub_486480(a4, v23, a1, 0, a3, 0, 0, 0, 0);
        v14 = v20;
        if ( v20 != -1 )
        {
          sub_483BD0(v20, 10, v22);
          *(_WORD *)(v13 + 2) = dword_4B1028;
          *(_WORD *)v13 = 1;
          *(_DWORD *)(v13 + 8) = v14;
          goto LABEL_33;
        }
      }
      nullsub_2();
      goto LABEL_33;
    }
    return -1;
  }
  while ( 1 )
  {
    v19 = (__int16 *)(v6[45] + v18 * v6[40]);
    if ( *((_BYTE *)v19 + 11) == 10 )
      break;
    v18 = *((_DWORD *)v19 + 5);
    if ( v18 == -1 )
      goto LABEL_7;
  }
  if ( *v19 != a4 || ((*((unsigned __int8 *)v19 + 10) >> 4) & 7) != a5 || (unsigned __int16)v19[7] != a6 )
  {
    *(_DWORD *)(dword_4C4384 * v19[6] + dword_4C4398 + 4) = dword_4CD11C;
    sub_486530(v18, a4, 4, 0, 0, 0);
    sub_486260(v18, a5, a6);
  }
  return v19[6];
}
