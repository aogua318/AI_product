// 函数 0x49ace7  ___mtold12  size=0x1E4  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int *__cdecl __mtold12(char *a1, int a2, unsigned int *a3)
{
  unsigned int *result; // eax
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // edi
  unsigned int v10; // esi
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned int v21; // ecx
  int v22; // edi
  unsigned int v23; // ecx
  __int64 v24; // kr10_8
  unsigned int v25; // [esp+Ch] [ebp-18h]
  unsigned int v26; // [esp+10h] [ebp-14h]
  unsigned int v27; // [esp+14h] [ebp-10h]
  int v28; // [esp+18h] [ebp-Ch]
  unsigned int v29; // [esp+1Ch] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-8h]
  __int16 v31; // [esp+20h] [ebp-4h]
  int v32; // [esp+34h] [ebp+10h]
  int v33; // [esp+34h] [ebp+10h]
  int v34; // [esp+34h] [ebp+10h]
  int v35; // [esp+34h] [ebp+10h]

  result = a3;
  HIDWORD(v4) = 0;
  v31 = 16462;
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  if ( a2 )
  {
    v32 = 0;
    do
    {
      v25 = *result;
      __SET_PAIR__(v26, v4, *(_QWORD *)result);
      v27 = result[2];
      v5 = v32;
      v33 = 0;
      v6 = HIDWORD(v4);
      v7 = v4 >> 31;
      v8 = (v6 >> 31) | (2 * v5);
      v9 = __SPAIR64__(v7, 2 * *result) >> 31;
      v29 = v9;
      v10 = 4 * *result;
      v11 = (v7 >> 31) | (2 * v8);
      v12 = 5 * *result;
      *result = v10;
      result[1] = v9;
      result[2] = v11;
      if ( v12 < v10 || v12 < v25 )
        v33 = 1;
      *result = v12;
      if ( v33 )
      {
        v34 = 0;
        ++v9;
        if ( v29 + 1 < v29 || v29 == -1 )
          v34 = 1;
        result[1] = v9;
        if ( v34 )
          result[2] = ++v11;
      }
      v35 = 0;
      v13 = v9 + v26;
      if ( v9 + v26 < v9 || v13 < v26 )
        v35 = 1;
      result[1] = v13;
      if ( v35 )
        result[2] = ++v11;
      v30 = 0;
      v14 = (v13 >> 31) | (2 * (v27 + v11));
      __SET_PAIR__(v16, v15, 2LL * v12);
      HIDWORD(v4) = v16 | (2 * v13);
      result[2] = v14;
      v28 = v14;
      v32 = v14;
      *result = v15;
      result[1] = HIDWORD(v4);
      v17 = *a1;
      LODWORD(v4) = v15 + v17;
      if ( v15 + v17 < v15 || (unsigned int)v4 < v17 )
        v30 = 1;
      *result = v4;
      if ( v30 )
      {
        LODWORD(v4) = HIDWORD(v4) + 1;
        v18 = 0;
        if ( (unsigned int)(HIDWORD(v4) + 1) < HIDWORD(v4) || HIDWORD(v4) == -1 )
          v18 = 1;
        ++HIDWORD(v4);
        result[1] = v4;
        if ( v18 )
        {
          v32 = v28 + 1;
          result[2] = v28 + 1;
        }
      }
      --a2;
      ++a1;
      result[1] = HIDWORD(v4);
      result[2] = v32;
    }
    while ( a2 );
  }
  if ( !result[2] )
  {
    v19 = result[1];
    do
    {
      v31 -= 16;
      v20 = HIWORD(v19);
      v19 = HIWORD(*result) | (v19 << 16);
      v21 = *result << 16;
      result[1] = v19;
      *result = v21;
    }
    while ( !v20 );
    result[2] = v20;
  }
  v22 = result[2];
  if ( (v22 & 0x8000) == 0 )
  {
    v23 = result[1];
    do
    {
      --v31;
      v22 = (v23 >> 31) | (2 * v22);
      v24 = 2LL * *result;
      v23 = HIDWORD(v24) | (2 * v23);
      *result = v24;
      result[1] = v23;
      result[2] = v22;
    }
    while ( (v22 & 0x8000) == 0 );
  }
  *((_WORD *)result + 5) = v31;
  return result;
}
