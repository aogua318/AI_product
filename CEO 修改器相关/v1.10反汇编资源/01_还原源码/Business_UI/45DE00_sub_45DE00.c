// 函数 0x45de00  sub_45DE00  size=0x331  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45DE00(int *a1, int a2, int a3, int a4, int a5, double a6)
{
  double v6; // st5
  int v7; // ecx
  double v8; // st4
  double v9; // st3
  double *v10; // edx
  double v11; // st4
  double v12; // st3
  double v13; // st4
  double v14; // st3
  double v15; // st4
  double v16; // st3
  double v17; // st4
  double v18; // st3
  double *v19; // edx
  double v20; // st4
  double v21; // st3
  int v22; // ebx
  int v23; // esi
  double v24; // st6
  double i; // st6
  double v26; // st1
  int j; // esi
  int v28; // [esp+4h] [ebp-3E94h]
  int v29; // [esp+8h] [ebp-3E90h]
  int v30; // [esp+Ch] [ebp-3E8Ch]
  int v31; // [esp+10h] [ebp-3E88h]
  int v32; // [esp+10h] [ebp-3E88h]
  _DWORD v33[2000]; // [esp+14h] [ebp-3E84h]
  double v34[1000]; // [esp+1F54h] [ebp-1F44h] BYREF

  v28 = *a1;
  v30 = a1[3];
  v31 = a1[2] - *a1;
  v29 = v30 - a1[1];
  if ( 0.0 == a6 )
    v6 = 10.0;
  else
    v6 = a6;
  v7 = 0;
  if ( a4 )
  {
    if ( a2 >= 4 )
    {
      v10 = (double *)(a3 + 8 * a2 - 16);
      do
      {
        v11 = v10[1];
        v34[v7] = v11;
        if ( 0.0 == a6 )
        {
          v12 = v11;
          if ( v11 < 0.0 )
            v12 = -v11;
          if ( v12 > v6 )
          {
            v6 = v11;
            if ( v11 < 0.0 )
              v6 = -v11;
          }
        }
        v13 = *v10;
        v34[v7 + 1] = v13;
        if ( 0.0 == a6 )
        {
          v14 = v13;
          if ( v13 < 0.0 )
            v14 = -v13;
          if ( v14 > v6 )
          {
            v6 = v13;
            if ( v13 < 0.0 )
              v6 = -v13;
          }
        }
        v15 = *(v10 - 1);
        v34[v7 + 2] = v15;
        if ( 0.0 == a6 )
        {
          v16 = v15;
          if ( v15 < 0.0 )
            v16 = -v15;
          if ( v16 > v6 )
          {
            v6 = v15;
            if ( v15 < 0.0 )
              v6 = -v15;
          }
        }
        v17 = *(v10 - 2);
        v34[v7 + 3] = v17;
        if ( 0.0 == a6 )
        {
          v18 = v17;
          if ( v17 < 0.0 )
            v18 = -v17;
          if ( v18 > v6 )
          {
            v6 = v17;
            if ( v17 < 0.0 )
              v6 = -v17;
          }
        }
        v7 += 4;
        v10 -= 4;
      }
      while ( v7 < a2 - 3 );
    }
    if ( v7 < a2 )
    {
      v19 = (double *)(a3 + 8 * (a2 - v7) - 8);
      do
      {
        v20 = *v19;
        v34[v7] = v20;
        if ( 0.0 == a6 )
        {
          v21 = v20;
          if ( v20 < 0.0 )
            v21 = -v20;
          if ( v21 > v6 )
          {
            v6 = v20;
            if ( v20 < 0.0 )
              v6 = -v20;
          }
        }
        ++v7;
        --v19;
      }
      while ( v7 < a2 );
    }
  }
  else if ( a2 > 0 )
  {
    do
    {
      v8 = *(double *)((char *)&v34[v7] + a3 - (_DWORD)v34);
      v34[v7] = v8;
      if ( 0.0 == a6 )
      {
        v9 = v8;
        if ( v8 < 0.0 )
          v9 = -v8;
        if ( v9 > v6 )
        {
          v6 = v8;
          if ( v8 < 0.0 )
            v6 = -v8;
        }
      }
      ++v7;
    }
    while ( v7 < a2 );
  }
  v22 = a2 - 1;
  v23 = 0;
  v24 = (double)v31;
  v32 = 0;
  for ( i = v24 / (double)(a2 - 1); v23 < a2; v32 = v23 )
  {
    v26 = v34[v23] * (double)v29;
    v33[2 * v23] = (int)((double)v32 * i + (double)v28);
    v33[2 * v23++ + 1] = (int)((double)(v30 - v29 / 2 - 1) - v26 * 0.5 / (v6 * 1.2));
  }
  for ( j = 0; j < v22; ++j )
    sub_468A40(v33[2 * j], v33[2 * j + 1], v33[2 * j + 2], v33[2 * j + 3], a5);
}
