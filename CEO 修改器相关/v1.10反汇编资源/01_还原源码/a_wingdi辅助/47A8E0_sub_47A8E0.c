// 函数 0x47a8e0  sub_47A8E0  size=0x3E2  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47A8E0(int a1, int a2, int a3, _DWORD *a4)
{
  _WORD *v4; // ebx
  int v5; // eax
  int v6; // ecx
  float *v7; // esi
  float *v8; // edi
  double v9; // st5
  int v10; // eax
  double v11; // st5
  float *v12; // esi
  _WORD *v13; // ebx
  float *v14; // edi
  double v15; // st5
  int v16; // eax
  int v18; // [esp+Ch] [ebp-8h]
  float v19; // [esp+Ch] [ebp-8h]
  float v20; // [esp+Ch] [ebp-8h]
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+Ch] [ebp-8h]
  float v23; // [esp+Ch] [ebp-8h]
  float v24; // [esp+Ch] [ebp-8h]
  float v25; // [esp+Ch] [ebp-8h]
  float v26; // [esp+Ch] [ebp-8h]
  float v27; // [esp+Ch] [ebp-8h]
  float v28; // [esp+Ch] [ebp-8h]
  float v29; // [esp+Ch] [ebp-8h]
  float v30; // [esp+Ch] [ebp-8h]
  float v31; // [esp+Ch] [ebp-8h]
  float v32; // [esp+Ch] [ebp-8h]
  float v33; // [esp+Ch] [ebp-8h]
  float v34; // [esp+Ch] [ebp-8h]
  int v35; // [esp+10h] [ebp-4h]
  float v36; // [esp+10h] [ebp-4h]
  float v37; // [esp+10h] [ebp-4h]
  float v38; // [esp+10h] [ebp-4h]
  float v39; // [esp+10h] [ebp-4h]
  float v40; // [esp+10h] [ebp-4h]
  float v41; // [esp+10h] [ebp-4h]
  float v42; // [esp+10h] [ebp-4h]
  float v43; // [esp+10h] [ebp-4h]
  float v44; // [esp+10h] [ebp-4h]
  float v45; // [esp+10h] [ebp-4h]
  float v46; // [esp+10h] [ebp-4h]
  float v47; // [esp+10h] [ebp-4h]
  float v48; // [esp+10h] [ebp-4h]
  float v49; // [esp+10h] [ebp-4h]
  float v50; // [esp+10h] [ebp-4h]
  float v51; // [esp+10h] [ebp-4h]
  int v52; // [esp+20h] [ebp+Ch]
  float v53; // [esp+20h] [ebp+Ch]
  float v54; // [esp+20h] [ebp+Ch]
  float v55; // [esp+20h] [ebp+Ch]
  float v56; // [esp+20h] [ebp+Ch]
  float v57; // [esp+20h] [ebp+Ch]
  float v58; // [esp+20h] [ebp+Ch]
  float v59; // [esp+20h] [ebp+Ch]
  float v60; // [esp+20h] [ebp+Ch]
  int v61; // [esp+20h] [ebp+Ch]
  int v62; // [esp+24h] [ebp+10h]

  v4 = (_WORD *)(a3 + *a4);
  v5 = *(_DWORD *)(dword_8F61A0 + 18300);
  v62 = 0;
  v35 = v5;
  if ( a2 )
  {
    ++v4;
    v6 = dword_8F61A0 + 16124;
  }
  else
  {
    v5 = ((_BYTE)v5 - 1) & 0xF;
    v35 = v5;
    v6 = dword_8F61A0 + 13948;
  }
  if ( (v5 & 1) != 0 )
  {
    v18 = v5;
    v7 = (float *)v6;
    sub_47B6E0(v6 + 4 * (((_BYTE)v5 + 1) & 0xF) + 1088, v6 + 4 * v5, a1);
  }
  else
  {
    v18 = v5 + 1;
    v7 = (float *)(v6 + 1088);
    sub_47B6E0(v6 + 4 * v5, v6 + 4 * v5 + 1092, a1);
  }
  *(_DWORD *)(dword_8F61A0 + 18300) = v35;
  v8 = (float *)((char *)&unk_8F3920 - 4 * v18);
  v52 = 16;
  do
  {
    v36 = *v8 * *v7;
    v37 = v36 - v8[1] * v7[1];
    v38 = v37 + v8[2] * v7[2];
    v39 = v38 - v8[3] * v7[3];
    v40 = v39 + v8[4] * v7[4];
    v41 = v40 - v8[5] * v7[5];
    v42 = v41 + v8[6] * v7[6];
    v43 = v42 - v8[7] * v7[7];
    v44 = v43 + v8[8] * v7[8];
    v45 = v44 - v8[9] * v7[9];
    v46 = v45 + v8[10] * v7[10];
    v47 = v46 - v8[11] * v7[11];
    v48 = v47 + v8[12] * v7[12];
    v49 = v48 - v8[13] * v7[13];
    v50 = v49 + v8[14] * v7[14];
    v51 = v50 - v8[15] * v7[15];
    v9 = v51;
    if ( v51 <= 32767.0 )
    {
      if ( v9 >= -32768.0 )
      {
        v10 = (int)v9;
      }
      else
      {
        ++v62;
        LOWORD(v10) = 0x8000;
      }
      *v4 = v10;
    }
    else
    {
      ++v62;
      *v4 = 0x7FFF;
    }
    v7 += 16;
    v8 += 32;
    v4 += 2;
    --v52;
  }
  while ( v52 );
  v53 = *v8 * *v7;
  v54 = v8[2] * v7[2] + v53;
  v55 = v54 + v8[4] * v7[4];
  v56 = v55 + v8[6] * v7[6];
  v57 = v56 + v8[8] * v7[8];
  v58 = v57 + v8[10] * v7[10];
  v59 = v58 + v8[12] * v7[12];
  v60 = v59 + v8[14] * v7[14];
  v11 = v60;
  if ( v60 <= 32767.0 )
  {
    if ( v11 >= -32768.0 )
    {
      *v4 = (int)v11;
    }
    else
    {
      ++v62;
      *v4 = 0x8000;
    }
  }
  else
  {
    ++v62;
    *v4 = 0x7FFF;
  }
  v12 = v7 - 16;
  v13 = v4 + 2;
  v14 = &v8[2 * v18 - 32];
  v61 = 15;
  do
  {
    v19 = -*(v14 - 1) * *v12;
    v20 = v19 - *(v14 - 2) * v12[1];
    v21 = v20 - *(v14 - 3) * v12[2];
    v22 = v21 - *(v14 - 4) * v12[3];
    v23 = v22 - *(v14 - 5) * v12[4];
    v24 = v23 - *(v14 - 6) * v12[5];
    v25 = v24 - *(v14 - 7) * v12[6];
    v26 = v25 - *(v14 - 8) * v12[7];
    v27 = v26 - *(v14 - 9) * v12[8];
    v28 = v27 - *(v14 - 10) * v12[9];
    v29 = v28 - *(v14 - 11) * v12[10];
    v30 = v29 - *(v14 - 12) * v12[11];
    v31 = v30 - *(v14 - 13) * v12[12];
    v32 = v31 - *(v14 - 14) * v12[13];
    v33 = v32 - *(v14 - 15) * v12[14];
    v34 = v33 - v12[15] * *v14;
    v15 = v34;
    if ( v34 <= 32767.0 )
    {
      if ( v15 >= -32768.0 )
      {
        v16 = (int)v15;
      }
      else
      {
        ++v62;
        LOWORD(v16) = 0x8000;
      }
      *v13 = v16;
    }
    else
    {
      ++v62;
      *v13 = 0x7FFF;
    }
    v12 -= 16;
    v14 -= 32;
    v13 += 2;
    --v61;
  }
  while ( v61 );
  *a4 += 128;
  return v62;
}
