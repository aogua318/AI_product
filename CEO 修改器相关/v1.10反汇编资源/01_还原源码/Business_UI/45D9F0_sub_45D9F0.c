// 函数 0x45d9f0  sub_45D9F0  size=0x35B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45D9F0(int a1, int a2, int a3, int a4, double *a5, int a6)
{
  double v6; // st7
  double v7; // st6
  double *v8; // ebx
  int v9; // esi
  unsigned int v10; // edx
  double *v11; // ecx
  double v12; // st5
  double v13; // st6
  double v14; // st5
  double v15; // st6
  double v16; // st5
  double v17; // st6
  double v18; // st5
  double v19; // st5
  int v20; // esi
  long double v21; // st5
  _BYTE *v22; // ecx
  double v23; // st6
  int v24; // edi
  long double v25; // st7
  long double v26; // st7
  int *v27; // esi
  long double v28; // st7
  long double v29; // st7
  int v30; // eax
  long double v31; // [esp+0h] [ebp-3ECCh]
  double v32; // [esp+8h] [ebp-3EC4h]
  double v33; // [esp+14h] [ebp-3EB8h]
  double v34; // [esp+20h] [ebp-3EACh]
  double v35; // [esp+28h] [ebp-3EA4h]
  int v36; // [esp+30h] [ebp-3E9Ch]
  double v37; // [esp+34h] [ebp-3E98h]
  double v38; // [esp+3Ch] [ebp-3E90h]
  double v39; // [esp+3Ch] [ebp-3E90h]
  double v40; // [esp+3Ch] [ebp-3E90h]
  double *v41; // [esp+44h] [ebp-3E88h]
  _BYTE v42[8000]; // [esp+48h] [ebp-3E84h] BYREF
  int v43; // [esp+1F88h] [ebp-1F44h] BYREF
  _DWORD v44[2]; // [esp+1F8Ch] [ebp-1F40h]
  int v45; // [esp+1F94h] [ebp-1F38h] BYREF

  v6 = 0.0;
  v7 = 0.0;
  v34 = 0.0;
  v8 = a5;
  v9 = 0;
  v43 = a1;
  v44[0] = a2;
  if ( a4 >= 4 )
  {
    v10 = ((unsigned int)(a4 - 4) >> 2) + 1;
    v11 = a5 + 2;
    v9 = 4 * v10;
    do
    {
      if ( *(v11 - 2) >= 0.0 )
        v12 = *(v11 - 2);
      else
        v12 = 0.0;
      v13 = v7 + v12;
      if ( *(v11 - 1) >= 0.0 )
        v14 = *(v11 - 1);
      else
        v14 = 0.0;
      v15 = v13 + v14;
      if ( *v11 >= 0.0 )
        v16 = *v11;
      else
        v16 = 0.0;
      v17 = v15 + v16;
      if ( v11[1] >= 0.0 )
        v18 = v11[1];
      else
        v18 = 0.0;
      v11 += 4;
      v7 = v17 + v18;
      --v10;
    }
    while ( v10 );
    v34 = v7;
  }
  if ( v9 < a4 )
  {
    do
    {
      if ( a5[v9] >= 0.0 )
        v19 = a5[v9];
      else
        v19 = 0.0;
      ++v9;
      v7 = v7 + v19;
    }
    while ( v9 < a4 );
    v34 = v7;
  }
  if ( 0.0 != v7 )
  {
    v20 = 0;
    v21 = 0.0;
    v38 = 0.0;
    v36 = 0;
    if ( a4 > 0 )
    {
      v22 = (_BYTE *)(v42 - (_BYTE *)a5);
      v41 = a5;
      v33 = (double)a1;
      v37 = (double)a3;
      v32 = (double)a2;
      while ( 1 )
      {
        if ( *v8 >= v6 )
          v6 = *v8;
        v23 = v6 / v7 * 3.14159 + v6 / v7 * 3.14159;
        *(double *)((char *)v8 + (_DWORD)v22) = v23;
        v35 = v23 + v21;
        v44[1] = (int)(cos(v21) * v37 + v33);
        v45 = (int)(sin(v38) * v37 + v32);
        v31 = v38;
        v24 = 2;
        v25 = v35;
        if ( v35 > v38 )
        {
          v26 = v38;
          v27 = &v45;
          do
          {
            v39 = cos(v26) * v37 + v33;
            v28 = sin(v31) * v37 + v32;
            if ( *(v27 - 1) != (int)v39 || *v27 != (int)v28 )
            {
              v27[1] = (int)v39;
              v27[2] = (int)v28;
              ++v24;
              v27 += 2;
            }
            v26 = v31 + 0.01;
            v31 = v26;
          }
          while ( v35 > v26 );
          v20 = v36;
          v25 = v35;
          v8 = v41;
        }
        v40 = cos(v25) * v37 + v33;
        v29 = sin(v35) * v37 + v32;
        v30 = (int)v40;
        if ( *(_DWORD *)&v42[8 * v24 + 7992] == (int)v40 )
        {
          if ( *(_DWORD *)&v42[8 * v24 + 7996] == (int)v29 )
            goto LABEL_40;
          v30 = (int)v40;
        }
        v44[2 * v24 - 1] = v30;
        v44[2 * v24++] = (int)v29;
LABEL_40:
        sub_468FD0((int)&v43, v24, *(_DWORD *)(a6 + 4 * v20++));
        v38 = v35;
        ++v8;
        v36 = v20;
        v41 = v8;
        if ( v20 >= a4 )
          return;
        v22 = (_BYTE *)(v42 - (_BYTE *)a5);
        v7 = v34;
        v21 = v35;
        v6 = 0.0;
      }
    }
  }
}
