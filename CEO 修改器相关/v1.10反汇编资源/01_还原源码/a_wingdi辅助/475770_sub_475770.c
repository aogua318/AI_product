// 函数 0x475770  sub_475770  size=0x3C0  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_475770(int *a1, int a2, int a3, int *a4, int a5)
{
  double v5; // st7
  int v6; // ecx
  int v8; // ebx
  int v9; // edi
  int result; // eax
  float *v11; // esi
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  double v15; // st7
  int v16; // edi
  _DWORD *v17; // eax
  bool v18; // zf
  float *v19; // esi
  int v20; // ecx
  int v21; // ebx
  int v22; // edi
  unsigned int v23; // eax
  double v24; // st6
  int v25; // edi
  int v26; // ebx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // ecx
  _DWORD *v30; // eax
  int v31; // edx
  double v32; // st7
  int v33; // edx
  int v34; // esi
  int v35; // ecx
  int v36; // [esp+Ch] [ebp-24h]
  float v37; // [esp+Ch] [ebp-24h]
  float v38; // [esp+Ch] [ebp-24h]
  int v39; // [esp+14h] [ebp-1Ch]
  int v40; // [esp+18h] [ebp-18h]
  int v41; // [esp+1Ch] [ebp-14h]
  int v42; // [esp+1Ch] [ebp-14h]
  int v43; // [esp+20h] [ebp-10h]
  __int16 v44; // [esp+24h] [ebp-Ch]
  __int16 v45; // [esp+24h] [ebp-Ch]
  int *v46; // [esp+28h] [ebp-8h]
  int *v47; // [esp+28h] [ebp-8h]
  float *v48; // [esp+2Ch] [ebp-4h]
  float v49; // [esp+2Ch] [ebp-4h]
  float v50; // [esp+2Ch] [ebp-4h]
  int v51; // [esp+38h] [ebp+8h]
  float v52; // [esp+38h] [ebp+8h]
  int v53; // [esp+38h] [ebp+8h]
  float v54; // [esp+38h] [ebp+8h]
  int v55; // [esp+44h] [ebp+14h]

  v5 = 0.0;
  v6 = a4[3];
  v8 = a4[4];
  v9 = a4[5];
  result = *a4;
  v40 = v8;
  v39 = v6;
  v36 = v9;
  v55 = *a4;
  if ( v9 > 0 )
  {
    v48 = (float *)(a2 + 128);
    v41 = v9;
    do
    {
      v44 = *(_WORD *)result;
      if ( v8 > 0 )
      {
        v11 = v48;
        v43 = v8;
        do
        {
          v12 = *a1++;
          v46 = a1;
          if ( v12 )
          {
            v13 = *(__int16 *)(result + 4 * v12 + 2);
            v14 = *(__int16 *)(result + 4 * v12);
            v51 = v13;
            if ( v13 >= 0 )
            {
              v16 = *(_DWORD *)(a3 + 4 * a5);
              v17 = (_DWORD *)(dword_4B5E94[v51] + 12 * sub_474DE0(v14));
              *(v11 - 32) = flt_8F46A0[64 * *v17 + v16];
              *v11 = flt_8F46A0[64 * v17[1] + v16];
              v15 = flt_8F46A0[64 * v17[2] + v16];
            }
            else
            {
              v52 = flt_8F46A0[64 * v14 + *(_DWORD *)(a3 + 4 * a5)];
              *(v11 - 32) = (double)(int)(v13 + sub_474DE0(v14)) * v52;
              *v11 = (double)(int)(v13 + sub_474DE0(v14)) * v52;
              v15 = (double)(int)(v13 + sub_474DE0(v14)) * v52;
            }
            a3 += 12;
            v11[32] = v15;
            v5 = 0.0;
            v9 = v36;
            result = v55;
            a1 = v46;
            v8 = v40;
          }
          else
          {
            v11[32] = v5;
            *v11 = v5;
            *(v11 - 32) = v5;
          }
          v11 += 128;
          --v43;
        }
        while ( v43 );
      }
      ++v48;
      v18 = v41-- == 1;
      v55 = result + 4 * (1 << v44);
      result = v55;
    }
    while ( !v18 );
    v6 = v39;
  }
  if ( v9 < v6 )
  {
    v19 = (float *)(a2 + 4 * v9 + 640);
    v42 = v6 - v9;
    do
    {
      v45 = *(_WORD *)result;
      v20 = a1[1];
      a1 += 2;
      v47 = a1;
      if ( v20 )
      {
        v21 = *(__int16 *)(result + 4 * v20);
        v53 = *(__int16 *)(result + 4 * v20 + 2);
        if ( v53 >= 0 )
        {
          v25 = *(_DWORD *)(a3 + 4 * a5);
          v26 = *(_DWORD *)(a3 + 4 * a5 + 12);
          v27 = sub_474DE0(*(__int16 *)(result + 4 * v20));
          v28 = dword_4B5EBC[v53];
          v27 *= 3;
          v29 = *(_DWORD *)(v28 + 4 * v27);
          v30 = (_DWORD *)(v28 + 4 * v27);
          *(v19 - 160) = flt_8F46A0[64 * v29 + v25];
          *(v19 - 32) = flt_8F46A0[64 * *v30 + v26];
          *(v19 - 128) = flt_8F46A0[64 * v30[1] + v25];
          *v19 = flt_8F46A0[64 * v30[1] + v26];
          *(v19 - 96) = flt_8F46A0[64 * v30[2] + v25];
          v31 = v30[2];
          result = v55;
          v32 = flt_8F46A0[64 * v31 + v26];
          a3 += 24;
          a1 = v47;
          v19[32] = v32;
          v5 = 0.0;
          v8 = v40;
        }
        else
        {
          v22 = v21 << 6;
          v49 = flt_8F46A0[64 * v21 + *(_DWORD *)(a3 + 4 * a5 + 12)];
          v37 = (float)(int)(v53 + sub_474DE0(v21));
          *(v19 - 160) = v37;
          *(v19 - 32) = v37 * v49;
          v38 = (float)(int)(v53 + sub_474DE0(v21));
          *(v19 - 128) = v38;
          *v19 = v38 * v49;
          v23 = sub_474DE0(v21);
          v8 = v40;
          v54 = (float)(int)(v53 + v23);
          *(v19 - 96) = v54;
          v19[32] = v54 * v49;
          v24 = flt_8F46A0[v22 + *(_DWORD *)(a3 + 4 * a5)];
          a3 += 24;
          v50 = v24;
          result = v55;
          a1 = v47;
          *(v19 - 160) = v50 * *(v19 - 160);
          *(v19 - 128) = v50 * *(v19 - 128);
          *(v19 - 96) = v54 * v50;
          v5 = 0.0;
        }
      }
      else
      {
        v19[32] = v5;
        *v19 = v5;
        *(v19 - 32) = v5;
        *(v19 - 96) = v5;
        *(v19 - 128) = v5;
        *(v19 - 160) = v5;
      }
      ++v19;
      v18 = v42-- == 1;
      result += 4 * (1 << v45);
      v55 = result;
    }
    while ( !v18 );
    v6 = v39;
  }
  if ( v6 < 32 )
  {
    v33 = a2 + 4 * v6 + 128;
    v34 = 32 - v6;
    do
    {
      if ( v8 > 0 )
      {
        result = v33;
        v35 = v8;
        do
        {
          *(float *)(result + 128) = v5;
          result += 512;
          --v35;
          *(float *)(result - 512) = v5;
          *(float *)(result - 640) = v5;
        }
        while ( v35 );
      }
      v33 += 4;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
