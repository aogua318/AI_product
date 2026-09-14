// 函数 0x449420  sub_449420  size=0x2CB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_449420()
{
  int result; // eax
  int v1; // edx
  char v2; // al
  double *v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  char v8; // cl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  double v12; // st7
  char v13; // al
  int v14; // eax
  int v15; // eax
  char v16; // cl
  int v17; // eax
  int v18; // eax
  int v19; // eax
  double v20; // st7

  result = GetTickCount();
  if ( result - dword_8B6A20 <= 100 )
    return result;
  v1 = dword_8B6A18;
  dword_8B6A20 = result;
  v2 = *(_BYTE *)(dword_8B6A18 + 6345);
  v3 = (double *)((char *)&unk_4D10B8 + 189880 * dword_8703A0);
  v4 = 0;
  v5 = 0;
  if ( (v2 & 8) != 0 && (v2 & 4) != 0 )
  {
    v6 = dword_8B5714;
    if ( dword_8B5714 > 0 )
      v6 = 0;
    v7 = v6 - 1;
    dword_8B5714 = v7;
    if ( v7 < -10 )
    {
      v7 -= 4;
      dword_8B5714 = v7;
      if ( v7 < -100 )
      {
        v7 -= 45;
        dword_8B5714 = v7;
        if ( v7 < -1000 )
        {
          v7 -= 450;
          dword_8B5714 = v7;
        }
      }
    }
    v5 = 1;
  }
  else
  {
    v7 = dword_8B5714;
  }
  v8 = *(_BYTE *)(dword_8B6A18 + 6633);
  if ( (v8 & 8) != 0 && (v8 & 4) != 0 )
  {
    if ( v7 < 0 )
      v7 = 0;
    v9 = v7 + 1;
    dword_8B5714 = v9;
    if ( v9 > 10 )
    {
      v10 = v9 + 4;
      dword_8B5714 = v10;
      if ( v10 > 100 )
      {
        v11 = v10 + 45;
        dword_8B5714 = v11;
        if ( v11 > 1000 )
          dword_8B5714 = v11 + 450;
      }
    }
    v5 = 1;
  }
  else if ( !v5 )
  {
    dword_8B5714 = 0;
    goto LABEL_30;
  }
  sub_435570(3, 0);
  v12 = (double)dword_8B5714 * 10000.0 + dbl_8B5718;
  dbl_8B5718 = v12;
  if ( v12 < 0.0 )
  {
    dbl_8B5718 = 0.0;
    v12 = 0.0;
  }
  if ( dbl_8B5720 < v12 + v3[9] )
  {
    dbl_8B5718 = dbl_8B5720 - v3[9];
    v12 = dbl_8B5718;
  }
  v1 = dword_8B6A18;
  if ( v12 < 0.0 )
    dbl_8B5718 = 0.0;
LABEL_30:
  v13 = *(_BYTE *)(v1 + 8649);
  if ( (v13 & 8) != 0 && (v13 & 4) != 0 )
  {
    v14 = dword_8B5710;
    if ( dword_8B5710 > 0 )
      v14 = 0;
    v15 = v14 - 1;
    dword_8B5710 = v15;
    if ( v15 < -10 )
    {
      v15 -= 4;
      dword_8B5710 = v15;
      if ( v15 < -100 )
      {
        v15 -= 45;
        dword_8B5710 = v15;
        if ( v15 < -1000 )
        {
          v15 -= 450;
          dword_8B5710 = v15;
        }
      }
    }
    v4 = 1;
  }
  else
  {
    v15 = dword_8B5710;
  }
  v16 = *(_BYTE *)(v1 + 8073);
  if ( (v16 & 8) != 0 && (v16 & 4) != 0 )
  {
    if ( v15 < 0 )
      v15 = 0;
    v17 = v15 + 1;
    dword_8B5710 = v17;
    if ( v17 > 10 )
    {
      v18 = v17 + 4;
      dword_8B5710 = v18;
      if ( v18 > 100 )
      {
        v19 = v18 + 45;
        dword_8B5710 = v19;
        if ( v19 > 1000 )
          dword_8B5710 = v19 + 450;
      }
    }
    v4 = 1;
    goto LABEL_50;
  }
  if ( v4 )
  {
LABEL_50:
    sub_435570(3, 0);
    v20 = (double)dword_8B5710 * 10000.0 + dbl_8B5728;
    dbl_8B5728 = v20;
    if ( v20 < 0.0 )
    {
      dbl_8B5728 = 0.0;
      v20 = 0.0;
    }
    if ( v3[9] < v20 )
    {
      dbl_8B5728 = v3[9];
      v20 = dbl_8B5728;
    }
    if ( v3[1] < v20 )
    {
      dbl_8B5728 = v3[1];
      v20 = dbl_8B5728;
    }
    if ( v20 < 0.0 )
      dbl_8B5728 = 0.0;
    goto LABEL_59;
  }
  dword_8B5710 = 0;
LABEL_59:
  if ( v5 || v4 )
    sub_4491B0();
  sub_40AE10((int)&unk_8B5768);
  return sub_40ACC0();
}
