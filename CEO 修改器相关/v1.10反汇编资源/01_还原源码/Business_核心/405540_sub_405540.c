// 函数 0x405540  sub_405540  size=0x240  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_405540@<eax>(int a1@<edi>, int a2, int a3, int a4, double a5)
{
  int v5; // ebx
  int v6; // esi
  long double v7; // st7
  int v8; // edi
  int v9; // esi
  char v10; // al
  char v11; // al
  double v12; // st7
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v18; // [esp-Ch] [ebp-38h]
  double v19; // [esp+0h] [ebp-2Ch]
  double v20; // [esp+8h] [ebp-24h]
  int v21; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch] BYREF
  int v25; // [esp+24h] [ebp-8h] BYREF
  int v26; // [esp+28h] [ebp-4h]

  v19 = 0.0;
  v5 = a3;
  v6 = -1;
  v18 = a1;
  v23 = -1;
  v7 = pow((double)*((int *)dword_870824 + 28 * a4) * 0.00390625, 0.5);
  v8 = 0;
  v22 = 0;
  v20 = v7 + v7;
  if ( dword_4C43CC <= 0 )
    return v6;
  while ( !sub_464E90(v8) )
  {
LABEL_28:
    if ( ++v8 >= dword_4C43CC )
      return v6;
  }
  v9 = dword_4C43DC + v8 * dword_4C43C8;
  v10 = *(_BYTE *)(v9 + 3);
  if ( (!v10 || v10 == 3) && (!dword_4D0B68 || *(_BYTE *)(v9 + 2) > 6u) )
  {
    v11 = *(_BYTE *)(v9 + 2);
    if ( v11 != dword_8703A0 )
    {
      if ( v11 != -1 || (v26 = sub_40F570(1), (double)v26 < a5) )
      {
        if ( *(_WORD *)(v9 + 4) == 0xFFFF && (word_4B9B98[a4] <= 0 || *(_BYTE *)(v9 + 3) == 3) )
        {
          v12 = -1.0;
          if ( *(_BYTE *)(v9 + 3) == 3 )
          {
            v13 = *(_BYTE *)(v9 + 7);
            if ( v13 == 1 || v13 == 2 )
            {
              if ( *(__int16 *)(v9 + 26) <= 5 * dword_4B1108 * sub_40CD20(v9, v18) / 8 )
              {
                v12 = -1.0;
              }
              else
              {
                sub_40D7C0(&v25, &v24);
                v26 = sub_4011F0(v25, v24, a2, v5);
                v14 = sub_404A60(a4, a2, v5);
                v26 += v14 / 2;
                v5 = a3;
                v21 = sub_4054A0(*(__int16 *)(v9 + 16), a4) + 100;
                v12 = (double)v21 * (v20 * 4.0 - (double)v26) / 100.0;
              }
            }
          }
          if ( !*(_BYTE *)(v9 + 3) )
          {
            sub_40D7C0(&v25, &v24);
            v15 = abs32(v25 - a2);
            v16 = abs32(v24 - v5);
            if ( v15 < v16 )
              v26 = v16 + (v15 >> 1);
            else
              v26 = v15 + (v16 >> 1);
            v12 = v20 * 3.0 - (double)v26;
          }
          if ( v19 < v12 )
          {
            v19 = v12;
            v23 = v8;
          }
        }
      }
    }
  }
  if ( ++v22 < dword_4C43D4 )
  {
    v6 = v23;
    goto LABEL_28;
  }
  return v23;
}
