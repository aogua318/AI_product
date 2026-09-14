// 函数 0x478ec0  sub_478EC0  size=0x1F7  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

float *__usercall sub_478EC0@<eax>(int a1@<eax>, float *a2, float *a3, int a4)
{
  float *v4; // edx
  int v6; // esi
  float *v7; // ebx
  int v8; // eax
  float *v9; // esi
  float *result; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  bool v14; // cc
  int v15; // edi
  int v16; // ecx
  double v17; // st6
  float *v18; // [esp+Ch] [ebp-14h]
  float *v19; // [esp+10h] [ebp-10h]
  float *v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  float *v22; // [esp+1Ch] [ebp-4h]
  float *v23; // [esp+2Ch] [ebp+Ch]
  float *v24; // [esp+2Ch] [ebp+Ch]

  v4 = a3;
  v6 = *(_DWORD *)(dword_8F61A0 + 4 * a1 + 13932);
  v7 = (float *)(dword_8F61A0 + 4716 + 2304 * (a1 + 2 * v6));
  v8 = 1 - v6;
  v9 = (float *)(dword_8F61A0 + 4716 + 2304 * (a1 + 2 * (1 - v6)));
  *(_DWORD *)(dword_8F61A0 + 4 * a1 + 13932) = v8;
  result = (float *)a4;
  v22 = a3;
  v21 = 0;
  v20 = v9;
  if ( *(_DWORD *)(a4 + 20) )
  {
    v21 = 2;
    sub_478190(a3, flt_8DF830, v7, v9, a2);
    sub_478190((float *)(v11 + 4), flt_8ED3A0, v7 + 18, v9 + 18, a2 + 18);
    v20 = v9 + 36;
    v9 += 36;
    result = (float *)a4;
    v7 += 36;
    v4 = a3 + 2;
    v22 = a3 + 2;
  }
  v12 = *((_DWORD *)result + 4);
  if ( v12 == 2 )
  {
    v13 = v21;
    if ( v21 >= *((_DWORD *)result + 16) )
      goto LABEL_12;
    v23 = &a2[18 * v21];
    do
    {
      sub_4788B0(flt_8DF950, v9, v4, v7, v23);
      sub_4788B0(flt_8ED4C0, v9 + 18, v22 + 1, v7 + 18, v23 + 18);
      v22 += 2;
      v23 += 36;
      v4 = v22;
      result = (float *)(v21 + 2);
      v7 += 36;
      v9 += 36;
      v21 = (int)result;
    }
    while ( (int)result < *(_DWORD *)(a4 + 64) );
  }
  else if ( v21 < *((_DWORD *)result + 16) )
  {
    v18 = &flt_8ED3A0[36 * v12];
    v19 = &flt_8DF830[36 * v12];
    v24 = &a2[18 * v21];
    do
    {
      sub_478190(v4, v19, v7, v9, v24);
      sub_478190(v22 + 1, v18, v7 + 18, v20 + 18, v24 + 18);
      v22 += 2;
      v20 += 36;
      v24 += 36;
      v9 = v20;
      result = (float *)(v21 + 2);
      v7 += 36;
      v14 = v21 + 2 < *(_DWORD *)(a4 + 64);
      v4 = v22;
      v21 += 2;
    }
    while ( v14 );
  }
  v13 = v21;
LABEL_12:
  if ( v13 < 32 )
  {
    v15 = 32 - v13;
    do
    {
      result = v4;
      v16 = 18;
      do
      {
        v17 = *v7++;
        *result = v17;
        ++v9;
        result += 32;
        --v16;
        *(v9 - 1) = 0.0;
      }
      while ( v16 );
      ++v4;
      --v15;
    }
    while ( v15 );
  }
  return result;
}
