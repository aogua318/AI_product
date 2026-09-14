// 函数 0x405090  sub_405090  size=0x402  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_405090@<eax>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, double a6, int a7)
{
  int v7; // edi
  bool v8; // cc
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  char v17; // al
  int v18; // ebx
  int v20; // eax
  int v21; // ebx
  double v22; // st7
  bool v23; // zf
  signed int v24; // eax
  int *v25; // edx
  int v26; // eax
  int v27; // eax
  _WORD *i; // ecx
  _DWORD *v29; // edx
  int v30; // eax
  _WORD *j; // ecx
  int v32; // [esp+14h] [ebp-218h]
  int v33; // [esp+18h] [ebp-214h] BYREF
  int v34; // [esp+1Ch] [ebp-210h] BYREF
  int v35; // [esp+20h] [ebp-20Ch]
  int v36; // [esp+24h] [ebp-208h]
  _DWORD v37[64]; // [esp+28h] [ebp-204h] BYREF
  _DWORD v38[64]; // [esp+128h] [ebp-104h] BYREF

  v7 = a1;
  v8 = word_4B9918[a1] <= 0;
  v35 = a7;
  if ( !v8 )
    return 0;
  while ( 1 )
  {
    if ( word_4C2980[v7] <= 0 )
    {
      if ( word_4C27D8[v7] <= 0 )
        goto LABEL_7;
      v8 = sub_4640D0() % 100 < 95;
    }
    else
    {
      v8 = word_4C2A54[v7] < 60;
    }
    if ( v8 )
      return 0;
LABEL_7:
    v9 = *(_DWORD *)dword_870814 + 72 * v7;
    if ( (dword_4D08B0[v7] > 0 || *(_BYTE *)(v9 + 12) != 2 && *((int *)dword_870824 + 28 * v7 + 4) <= 0)
      && *(_BYTE *)(v9 + 12) != 2
      && sub_4010C0(v7, v38, &v34, v37, &v33) )
    {
      v7 = -1;
      v10 = 0;
      if ( v33 > 0 )
      {
        while ( 1 )
        {
          v11 = v37[v10];
          if ( !dword_4D08B0[v11] && !word_4B9AC4[v11] )
            break;
          if ( ++v10 >= v33 )
            goto LABEL_18;
        }
        v7 = v37[v10];
      }
LABEL_18:
      if ( v10 == v33 )
      {
        v12 = 0;
        if ( v34 > 0 )
        {
          while ( 1 )
          {
            v13 = v38[v12];
            if ( !dword_4D08B0[v13] && !word_4B9AC4[v13] )
              break;
            if ( ++v12 >= v34 )
              goto LABEL_25;
          }
          v7 = v38[v12];
        }
      }
LABEL_25:
      if ( v7 == -1 || word_4B9918[v7] + word_4B9E20[v7] > 0 )
        return 0;
    }
    v14 = *(_DWORD *)dword_870814 + 72 * v7;
    v32 = v14;
    sub_4045A0(a3, v7, 0);
    if ( a6 < a2 )
      return 0;
    v15 = sub_404C10(v7, a3, a3, a4, a5, a6 * 0.5);
    v16 = v15;
    if ( v15 == -1 )
      return 0;
    if ( *(_BYTE *)(dword_4C43DC + v15 * dword_4C43C8 + 2) != 0xFF )
      break;
    v17 = *(_BYTE *)(v14 + 12);
    if ( v17 < 0 )
      goto LABEL_47;
    if ( v17 <= 1 )
    {
      v36 = 3;
      v20 = sub_40DEC0(v16, 4);
      v21 = v20;
      if ( v20 != -1 )
      {
        v22 = sub_40F4B0(v20, 1, v7);
        a2 = v22 + v22;
        if ( a2 < a6 )
        {
          if ( sub_40F3A0(v16, v21) )
          {
            v36 = 4;
LABEL_49:
            v25 = (int *)v35;
            v26 = v36;
            *(_DWORD *)(v35 + 4) = v16;
            *v25 = v26;
            v25[2] = v7;
            v27 = 0;
            for ( i = (_WORD *)(v32 + 16); *i == 0xFFFF; ++i )
            {
              if ( ++v27 >= 4 )
              {
                v25[4] = -1;
                return 1;
              }
            }
            v25[3] = *(__int16 *)(v32 + 2 * v27 + 16);
            v25[4] = -1;
            return 1;
          }
          v24 = sub_4640D0() & 0x80000001;
          v23 = v24 == 0;
          if ( v24 < 0 )
            v23 = (((_BYTE)v24 - 1) | 0xFFFFFFFE) == -1;
          if ( !v23 && word_4B9918[dword_4B102C] + word_4B9C78[dword_4B102C] <= 0 )
          {
            v7 = dword_4B102C;
            goto LABEL_37;
          }
        }
      }
    }
    else
    {
      if ( v17 != 2 )
      {
LABEL_47:
        v36 = 0;
        goto LABEL_34;
      }
      v36 = 5;
    }
LABEL_34:
    v18 = sub_40DEC0(v16, v36);
    a2 = sub_40F4B0(v18, 1, v7);
    if ( a2 >= a6 )
      return 0;
    if ( sub_40F3A0(v16, v18) )
      goto LABEL_49;
    v7 = dword_4B102C;
    if ( word_4B9918[dword_4B102C] + word_4B9C78[dword_4B102C] > 0 )
      return 0;
LABEL_37:
    if ( word_4B9918[v7] > 0 )
      return 0;
  }
  v29 = (_DWORD *)v35;
  *(_DWORD *)(v35 + 4) = v15;
  *v29 = -1;
  v29[2] = v7;
  v30 = 0;
  for ( j = (_WORD *)(v14 + 16); *j == 0xFFFF; ++j )
  {
    if ( ++v30 >= 4 )
    {
      v29[4] = -1;
      return 1;
    }
  }
  v29[3] = *(__int16 *)(v14 + 2 * v30 + 16);
  v29[4] = -1;
  return 1;
}
