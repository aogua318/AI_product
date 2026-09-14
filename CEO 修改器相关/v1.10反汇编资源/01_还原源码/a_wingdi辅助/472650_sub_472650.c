// 函数 0x472650  sub_472650  size=0x1F5  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __usercall sub_472650@<eax>(_DWORD *a1@<esi>, int *a2)
{
  int v2; // edi
  int *v3; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int i; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  unsigned __int8 v14; // dl
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  v2 = *a2;
  v3 = (int *)a2[2];
  v4 = v3[3];
  v5 = *v3;
  v6 = -1;
  v7 = 0;
  v16 = v4;
  v17 = -1;
  a1[1298] = 0;
  for ( a1[1299] = 573; v7 < v4; ++v7 )
  {
    if ( *(_WORD *)(v2 + 4 * v7) )
    {
      a1[++a1[1298] + 725] = v7;
      v17 = v7;
      *((_BYTE *)a1 + v7 + 5200) = 0;
      v6 = v7;
    }
    else
    {
      *(_WORD *)(v2 + 4 * v7 + 2) = 0;
    }
  }
  if ( (int)a1[1298] < 2 )
  {
    do
    {
      if ( v6 >= 2 )
        v8 = 0;
      else
        v8 = ++v6;
      a1[++a1[1298] + 725] = v8;
      *(_WORD *)(v2 + 4 * v8) = 1;
      *((_BYTE *)a1 + v8 + 5200) = 0;
      --a1[1448];
      if ( v5 )
        a1[1449] -= *(unsigned __int16 *)(v5 + 4 * v8 + 2);
    }
    while ( (int)a1[1298] < 2 );
    v17 = v6;
  }
  a2[1] = v6;
  for ( i = a1[1298] / 2; i >= 1; --i )
    sub_471370((int)a1, v2, i);
  do
  {
    v10 = a1[1298];
    v11 = a1[v10 + 725];
    v12 = a1[726];
    a1[1298] = v10 - 1;
    a1[726] = v11;
    sub_471370((int)a1, v2, 1);
    v13 = a1[726];
    --a1[1299];
    a1[a1[1299]-- + 725] = v12;
    a1[a1[1299] + 725] = v13;
    *(_WORD *)(v2 + 4 * v16) = *(_WORD *)(v2 + 4 * v12) + *(_WORD *)(v2 + 4 * v13);
    v14 = *((_BYTE *)a1 + v12 + 5200);
    if ( v14 < *((_BYTE *)a1 + v13 + 5200) )
      v14 = *((_BYTE *)a1 + v13 + 5200);
    *((_BYTE *)a1 + v16 + 5200) = v14 + 1;
    *(_WORD *)(v2 + 4 * v13 + 2) = v16;
    *(_WORD *)(v2 + 4 * v12 + 2) = v16;
    a1[726] = v16++;
    sub_471370((int)a1, v2, 1);
  }
  while ( (int)a1[1298] >= 2 );
  a1[--a1[1299] + 725] = a1[726];
  sub_471450(a1, a2);
  return sub_4725D0((int)(a1 + 717), v17, v2);
}
