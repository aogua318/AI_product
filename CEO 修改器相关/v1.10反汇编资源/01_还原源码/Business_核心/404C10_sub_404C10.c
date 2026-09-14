// 函数 0x404c10  sub_404C10  size=0x471  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_404C10@<eax>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5, double a6)
{
  int v6; // esi
  long double v7; // st7
  int v8; // ebx
  int v9; // esi
  char v10; // al
  char v11; // al
  __int16 v12; // ax
  char v13; // al
  double v14; // st7
  char v15; // al
  double v16; // st7
  int v18; // [esp-8h] [ebp-40h]
  double v19; // [esp+8h] [ebp-30h]
  double v20; // [esp+10h] [ebp-28h]
  int v21; // [esp+18h] [ebp-20h]
  int v22; // [esp+1Ch] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+28h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-Ch]
  int v28; // [esp+30h] [ebp-8h] BYREF
  int v29; // [esp+34h] [ebp-4h] BYREF

  v20 = -1000000.0;
  v18 = a2;
  v6 = -1;
  v27 = -1;
  v21 = *(_DWORD *)dword_870814 + 72 * a1;
  v7 = pow((double)*((int *)dword_870824 + 28 * a1) * 0.00390625, 0.5);
  v8 = 0;
  v25 = 0;
  v19 = v7 + v7;
  v26 = 0;
  if ( dword_4C43CC <= 0 )
    return v6;
  while ( !sub_464E90(v8) )
  {
LABEL_44:
    v26 = ++v8;
    if ( v8 >= dword_4C43CC )
      return v6;
  }
  v9 = dword_4C43DC + v8 * dword_4C43C8;
  v10 = *(_BYTE *)(v9 + 3);
  if ( v10 && v10 != 3 )
    goto LABEL_42;
  v11 = *(_BYTE *)(v9 + 2);
  if ( v11 == -1 )
  {
    if ( (double)(int)sub_40F570(1) >= a6 )
      goto LABEL_42;
  }
  else if ( v11 != a3 )
  {
    goto LABEL_42;
  }
  v12 = *(_WORD *)(v9 + 4);
  if ( v12 != -1 && v12 != a1 )
    goto LABEL_42;
  if ( word_4B9AC4[a1] > 0 && *(_BYTE *)(v9 + 3) != 3 || dword_4D0B68 && *(_BYTE *)(v9 + 2) <= 6u )
    goto LABEL_42;
  v13 = *(_BYTE *)(v21 + 12);
  if ( v13 < 0 )
    goto LABEL_49;
  if ( v13 <= 1 )
  {
    if ( *(_BYTE *)(v9 + 3) == 3 && *(char *)(v9 + 2) == a3 )
    {
      v15 = *(_BYTE *)(v9 + 7);
      if ( (v15 == 3 || v15 == 4) && *(__int16 *)(v9 + 26) > 3 * dword_4B1108 * sub_40CD20(v9, v18) / 4 )
      {
        sub_40D7C0(&v28, &v29);
        v22 = sub_4011F0(v28, v29, a4, a5);
        v8 = v26;
        v14 = v19 * 4.0 - (double)(sub_404B40(a1, a4, a5) + v22) + (double)(*(__int16 *)(v9 + 26) / 10);
        goto LABEL_26;
      }
    }
    if ( *(_BYTE *)(v9 + 3) )
      goto LABEL_42;
LABEL_35:
    sub_40D7C0(&v28, &v29);
    v23 = sub_4011F0(v28, v29, a4, a5);
    v14 = v19 * 3.0 - (double)(sub_404B40(a1, a4, a5) + v23);
LABEL_26:
    if ( v20 >= v14 )
      goto LABEL_42;
    goto LABEL_27;
  }
  if ( v13 != 2 )
  {
LABEL_49:
    if ( *(char *)(v9 + 2) == a3
      && *(_BYTE *)(v9 + 3) == 3
      && *(__int16 *)(v9 + 26) > 2 * dword_4B1108 * sub_40CD20(v9, v18)
      && !*(_BYTE *)(v9 + 7) )
    {
      sub_40D7C0(&v28, &v29);
      v24 = sub_4011F0(v28, v29, a4, a5);
      v16 = v19 * 4.0 - (double)(sub_404B40(a1, a4, a5) + v24) + (double)(*(__int16 *)(v9 + 26) / 10);
      v8 = v26;
      v14 = v16 + (double)sub_4048D0(*(__int16 *)(v9 + 16));
      if ( v20 < v14 )
      {
LABEL_27:
        v20 = v14;
        v27 = v8;
        goto LABEL_42;
      }
    }
    if ( *(_BYTE *)(v9 + 3) )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v9 + 3) == 3
    && *(char *)(v9 + 2) == a3
    && *(_BYTE *)(v9 + 7) == 5
    && *(__int16 *)(v9 + 26) > 5 * dword_4B1108 * sub_40CD20(v9, v18) / 8 )
  {
    sub_40D7C0(&v28, &v29);
    v14 = v19 * 1.5 - (double)sub_4011F0(v28, v29, a4, a5);
    goto LABEL_26;
  }
  if ( !*(_BYTE *)(v9 + 3) && *(__int16 *)(v9 + 4) == a1 )
  {
    sub_40D7C0(&v28, &v29);
    v14 = v19 - (double)sub_4011F0(v28, v29, a4, a5);
    goto LABEL_26;
  }
LABEL_42:
  if ( ++v25 < dword_4C43D4 )
  {
    v6 = v27;
    goto LABEL_44;
  }
  return v27;
}
