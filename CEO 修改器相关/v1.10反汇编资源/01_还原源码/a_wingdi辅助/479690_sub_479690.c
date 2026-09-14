// 函数 0x479690  sub_479690  size=0x4D5  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

float *__cdecl sub_479690(int a1)
{
  double v1; // st7
  double v2; // st6
  int i; // ebx
  int v4; // edi
  long double v5; // st7
  int v6; // ebx
  int v7; // edi
  float *result; // eax
  int v9; // edx
  int v10; // esi
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  int *v18; // esi
  int v19; // ecx
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  int *v23; // ecx
  int v24; // [esp+Ch] [ebp-10h]
  float v25; // [esp+Ch] [ebp-10h]
  float v26; // [esp+Ch] [ebp-10h]
  float v27; // [esp+Ch] [ebp-10h]
  float v28; // [esp+Ch] [ebp-10h]
  float v29; // [esp+Ch] [ebp-10h]
  float v30; // [esp+Ch] [ebp-10h]
  float v31; // [esp+Ch] [ebp-10h]
  float v32; // [esp+Ch] [ebp-10h]
  float v33; // [esp+Ch] [ebp-10h]
  float v34; // [esp+Ch] [ebp-10h]
  float v35; // [esp+Ch] [ebp-10h]
  float v36; // [esp+Ch] [ebp-10h]
  float v37; // [esp+Ch] [ebp-10h]
  int v38; // [esp+18h] [ebp-4h]
  int v39; // [esp+18h] [ebp-4h]
  int v40; // [esp+24h] [ebp+8h]

  v1 = 2.0;
  v2 = 1.0;
  for ( i = 0; i < 5; ++i )
  {
    v4 = 0;
    v24 = (int)*(&off_4B7DC8 + i);
    v38 = 0;
    if ( 16 >> i )
    {
      do
      {
        v5 = cos((v1 * (double)v38 + v2) * 3.141592653589793 / (double)(64 >> i));
        v38 = ++v4;
        *(float *)(v24 + 4 * v4 - 4) = 1.0 / (v5 * 2.0);
        v2 = 1.0;
        v1 = 2.0;
      }
      while ( v4 < 16 >> i );
    }
  }
  v6 = -a1;
  v7 = 0;
  result = (float *)&unk_8F38E0;
  v40 = -a1;
  v9 = 0;
  v10 = 2;
  do
  {
    if ( result < flt_8F4120 )
    {
      v25 = (double)dword_4B7DE0[v9] * 0.0000152587890625 * (double)v40;
      *result = v25;
      result[16] = v25;
    }
    if ( (v7 & 0x1F) == 0x1F )
      result -= 1023;
    if ( (v7 & 0x3F) == 0x3F )
      v40 = -v6;
    v11 = result + 32;
    if ( v11 < flt_8F4120 )
    {
      v26 = (double)dword_4B7DE4[v9] * 0.0000152587890625 * (double)v40;
      *v11 = v26;
      v11[16] = v26;
    }
    if ( (((_BYTE)v10 - 1) & 0x1F) == 0x1F )
      v11 -= 1023;
    if ( (((_BYTE)v10 - 1) & 0x3F) == 0x3F )
      v40 = -v40;
    v12 = v11 + 32;
    if ( v12 < flt_8F4120 )
    {
      v27 = (double)dword_4B7DE8[v9] * 0.0000152587890625 * (double)v40;
      *v12 = v27;
      v12[16] = v27;
    }
    if ( (v10 & 0x1F) == 0x1F )
      v12 -= 1023;
    if ( (v10 & 0x3F) == 0x3F )
      v40 = -v40;
    v13 = v12 + 32;
    if ( v13 < flt_8F4120 )
    {
      v28 = (double)dword_4B7DEC[v9] * 0.0000152587890625 * (double)v40;
      *v13 = v28;
      v13[16] = v28;
    }
    if ( (((_BYTE)v10 + 1) & 0x1F) == 0x1F )
      v13 -= 1023;
    if ( (((_BYTE)v10 + 1) & 0x3F) == 0x3F )
      v40 = -v40;
    v14 = v13 + 32;
    if ( v14 < flt_8F4120 )
    {
      v29 = (double)dword_4B7DF0[v9] * 0.0000152587890625 * (double)v40;
      *v14 = v29;
      v14[16] = v29;
    }
    if ( (((_BYTE)v10 + 2) & 0x1F) == 0x1F )
      v14 -= 1023;
    if ( (((_BYTE)v10 + 2) & 0x3F) == 0x3F )
      v40 = -v40;
    v15 = v14 + 32;
    if ( v15 < flt_8F4120 )
    {
      v30 = (double)dword_4B7DF4[v9] * 0.0000152587890625 * (double)v40;
      *v15 = v30;
      v15[16] = v30;
    }
    if ( (((_BYTE)v10 + 3) & 0x1F) == 0x1F )
      v15 -= 1023;
    if ( (((_BYTE)v10 + 3) & 0x3F) == 0x3F )
      v40 = -v40;
    v16 = v15 + 32;
    if ( v16 < flt_8F4120 )
    {
      v31 = (double)dword_4B7DF8[v9] * 0.0000152587890625 * (double)v40;
      *v16 = v31;
      v16[16] = v31;
    }
    if ( (((_BYTE)v10 + 4) & 0x1F) == 0x1F )
      v16 -= 1023;
    if ( (((_BYTE)v10 + 4) & 0x3F) == 0x3F )
      v40 = -v40;
    v17 = v16 + 32;
    if ( v17 < flt_8F4120 )
    {
      v32 = (double)dword_4B7DFC[v9] * 0.0000152587890625 * (double)v40;
      *v17 = v32;
      v17[16] = v32;
    }
    if ( (((_BYTE)v10 + 5) & 0x1F) == 0x1F )
      v17 -= 1023;
    v6 = v40;
    if ( (((_BYTE)v10 + 5) & 0x3F) == 0x3F )
    {
      v6 = -v40;
      v40 = -v40;
    }
    v10 += 8;
    result = v17 + 32;
    v7 += 8;
    v9 += 8;
  }
  while ( v10 < 258 );
  if ( v7 < 512 )
  {
    if ( 512 - v7 >= 4 )
    {
      v18 = (int *)(&off_4B7DD8 + v9);
      v39 = -4 - 4 * ((unsigned int)(508 - v7) >> 2) + v9;
      v6 = v40;
      v19 = v7 + 2;
      do
      {
        if ( result < flt_8F4120 )
        {
          v33 = (double)v18[2] * 0.0000152587890625 * (double)v40;
          *result = v33;
          result[16] = v33;
        }
        if ( v7 % 32 == 31 )
          result -= 1023;
        if ( v7 % 64 == 63 )
          v40 = -v6;
        v20 = result + 32;
        if ( v20 < flt_8F4120 )
        {
          v34 = (double)v18[1] * 0.0000152587890625 * (double)v40;
          *v20 = v34;
          v20[16] = v34;
        }
        if ( (v19 - 1) % 32 == 31 )
          v20 -= 1023;
        if ( (v19 - 1) % 64 == 63 )
          v40 = -v40;
        v21 = v20 + 32;
        if ( v21 < flt_8F4120 )
        {
          v35 = (double)*v18 * 0.0000152587890625 * (double)v40;
          *v21 = v35;
          v21[16] = v35;
        }
        if ( v19 % 32 == 31 )
          v21 -= 1023;
        if ( v19 % 64 == 63 )
          v40 = -v40;
        v22 = v21 + 32;
        if ( v22 < flt_8F4120 )
        {
          v36 = (double)*(v18 - 1) * 0.0000152587890625 * (double)v40;
          *v22 = v36;
          v22[16] = v36;
        }
        if ( (v19 + 1) % 32 == 31 )
          v22 -= 1023;
        v6 = v40;
        if ( (v19 + 1) % 64 == 63 )
        {
          v6 = -v40;
          v40 = -v40;
        }
        v19 += 4;
        result = v22 + 32;
        v18 -= 4;
        v7 += 4;
      }
      while ( v19 < 511 );
      v9 = v39;
    }
    if ( v7 < 512 )
    {
      v23 = &dword_4B7DE0[v9];
      do
      {
        if ( result < flt_8F4120 )
        {
          v37 = (double)*v23 * 0.0000152587890625 * (double)v40;
          *result = v37;
          result[16] = v37;
        }
        if ( v7 % 32 == 31 )
          result -= 1023;
        if ( v7 % 64 == 63 )
        {
          v6 = -v6;
          v40 = v6;
        }
        ++v7;
        result += 32;
        --v23;
      }
      while ( v7 < 512 );
    }
  }
  return result;
}
