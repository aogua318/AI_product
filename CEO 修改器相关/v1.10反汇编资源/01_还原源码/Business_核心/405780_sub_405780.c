// 函数 0x405780  sub_405780  size=0x1CD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_405780@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        _DWORD *a3@<esi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        double a8)
{
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  double v13; // st7
  bool v14; // zf
  signed int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // [esp+14h] [ebp-4h]
  int v19; // [esp+14h] [ebp-4h]

  if ( word_4B99EC[a1] > 0 )
    return 0;
  sub_4045A0(a5, a1, 1);
  if ( a8 < a4 )
    return 0;
  v9 = sub_405540(a2, a6, a7, a1, a8 * 0.5);
  v10 = v9;
  if ( v9 != -1 )
  {
    v11 = dword_4C43DC + v9 * dword_4C43C8;
    if ( *(_BYTE *)(v11 + 2) == 0xFF )
    {
      v12 = sub_40DEC0(v10, 2);
      v18 = v12;
      if ( v12 != -1 )
      {
        v13 = sub_40F4B0(v12, 1, a1);
        if ( v13 + v13 < a8 )
        {
          if ( sub_40F3A0(v10, v18) )
          {
            *a3 = 2;
LABEL_22:
            a3[1] = v10;
            a3[2] = -1;
            a3[3] = -1;
            a3[4] = a1;
            return 1;
          }
          v15 = sub_4640D0() & 0x80000001;
          v14 = v15 == 0;
          if ( v15 < 0 )
            v14 = (((_BYTE)v15 - 1) | 0xFFFFFFFE) == -1;
          if ( !v14 )
          {
            v16 = dword_4B102C;
            if ( word_4B9918[dword_4B102C] + word_4B9C78[dword_4B102C] <= 0 )
              return sub_405090(v16, a8, a5, a6, a7, a8, (int)a3);
          }
        }
      }
      v19 = sub_40DEC0(v10, 1);
      if ( sub_40F4B0(v19, 1, a1) < a8 )
      {
        if ( sub_40F3A0(v10, v19) )
        {
          *a3 = 1;
          goto LABEL_22;
        }
        v16 = dword_4B102C;
        if ( word_4B9918[dword_4B102C] + word_4B9C78[dword_4B102C] <= 0 )
          return sub_405090(v16, a8, a5, a6, a7, a8, (int)a3);
      }
    }
    else
    {
      v17 = *(__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v11 + 16) + 2 * a1 + 240);
      if ( v17 == -1 || !sub_415AC0(dword_4CC8D0 + v17 * dword_4CC8BC) )
      {
        *a3 = 1;
        goto LABEL_22;
      }
    }
  }
  return 0;
}
