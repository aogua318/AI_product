// 函数 0x4325c0  sub_4325C0  size=0x510  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4325C0()
{
  char *v0; // eax
  int v1; // edi
  int *v2; // esi
  char *v3; // eax
  int v4; // edx
  char v5; // cl
  char v6; // al
  int v7; // esi
  char *v8; // eax
  char *v9; // edx
  char v10; // cl
  int v11; // eax
  int i; // edi
  char *v13; // eax
  char *v14; // edx
  char v15; // cl
  int v16; // eax
  int v17; // esi
  char *v18; // ecx
  char *v19; // eax
  char *v20; // edx
  char v21; // cl
  char *v22; // eax
  char *v23; // edx
  char v24; // cl
  char *v25; // eax
  char *v26; // edx
  char v27; // cl
  char *v28; // eax
  char *v29; // edx
  char v30; // cl
  int v31; // eax
  int v32; // edx
  int v33; // eax
  _BYTE *v34; // ebx
  int v35; // eax
  int v36; // ebx
  double v37; // st7
  int v39; // [esp+14h] [ebp-42Ch]
  __int16 v40; // [esp+16h] [ebp-42Ah]
  _BYTE v41[12]; // [esp+20h] [ebp-420h] BYREF
  int v42; // [esp+2Ch] [ebp-414h]
  char String[1024]; // [esp+30h] [ebp-410h] BYREF
  int v44; // [esp+43Ch] [ebp-4h]

  sub_464410(v41);
  v44 = 0;
  v0 = (char *)sub_47C740("data\\product1.csv");
  if ( sub_464420(v0) )
  {
    dword_870778 = 0;
    dword_87077C = 0;
    dword_870780 = 0;
    dword_870784 = 0;
    v1 = 0;
    v2 = (int *)&unk_870788;
    do
    {
      v3 = (char *)sub_4646A0(v1 + 13, 0);
      v4 = (char *)v2 - v3;
      do
      {
        v5 = *v3;
        v3[v4] = *v3;
        ++v3;
      }
      while ( v5 );
      v2 += 5;
      ++v1;
    }
    while ( (int)v2 < (int)dword_870800 );
    v6 = 0;
    v7 = 0;
    dword_870818 = 0;
    if ( v42 > 0 )
    {
      do
      {
        v8 = (char *)sub_4646A0(0, v7);
        v9 = (char *)(String - v8);
        do
        {
          v10 = *v8;
          v8[(_DWORD)v9] = *v8;
          ++v8;
        }
        while ( v10 );
        if ( sub_438150(String) )
        {
          v11 = atoi(String) + 1;
          if ( v11 > dword_870818 )
            dword_870818 = v11;
        }
        ++v7;
      }
      while ( v7 < v42 );
      v6 = dword_870818;
    }
    *(_DWORD *)dword_870814 = sub_465E40(72 * v6, (int)"product_type.cpp", 95);
    dword_870824 = (void *)sub_465E40(112 * dword_870818, (int)"product_type.cpp", 96);
    memset(dword_870824, 0, 112 * dword_870818);
    for ( i = 0; i < v42; ++i )
    {
      v13 = (char *)sub_4646A0(0, i);
      v14 = (char *)(String - v13);
      do
      {
        v15 = *v13;
        v13[(_DWORD)v14] = *v13;
        ++v13;
      }
      while ( v15 );
      if ( sub_438150(String) )
      {
        v16 = atoi(String);
        v17 = *(_DWORD *)dword_870814 + 72 * v16;
        v18 = (char *)dword_870824 + 112 * v16;
        *((_DWORD *)v18 + 24) = -1;
        *((_DWORD *)v18 + 25) = -1;
        *((_WORD *)v18 + 7) = v16;
        *((_DWORD *)v18 + 27) = -1;
        v19 = (char *)sub_4646A0(1, i);
        v20 = (char *)(String - v19);
        do
        {
          v21 = *v19;
          v19[(_DWORD)v20] = *v19;
          ++v19;
        }
        while ( v21 );
        strcpy((char *)v17, String);
        v22 = (char *)sub_4646A0(2, i);
        v23 = (char *)(String - v22);
        do
        {
          v24 = *v22;
          v22[(_DWORD)v23] = *v22;
          ++v22;
        }
        while ( v24 );
        *(_DWORD *)(v17 + 24) = atoi(String);
        v25 = (char *)sub_4646A0(3, i);
        v26 = (char *)(String - v25);
        do
        {
          v27 = *v25;
          v25[(_DWORD)v26] = *v25;
          ++v25;
        }
        while ( v27 );
        *(_WORD *)(v17 + 14) = atoi(String);
        v28 = (char *)sub_4646A0(4, i);
        v29 = (char *)(String - v28);
        do
        {
          v30 = *v28;
          v28[(_DWORD)v29] = *v28;
          ++v28;
        }
        while ( v30 );
        *(_BYTE *)(v17 + 12) = sub_4298F0(String);
        *(_DWORD *)(v17 + 28) = sub_4646D0(5, i);
        *(_DWORD *)(v17 + 32) = sub_4646D0(6, i);
        *(_DWORD *)(v17 + 36) = sub_4646D0(7, i);
        v31 = sub_4646D0(8, i);
        v32 = *(_DWORD *)(v17 + 28) + *(_DWORD *)(v17 + 36);
        *(_DWORD *)(v17 + 40) = v31;
        *(_BYTE *)(v17 + 13) = *(_DWORD *)(v17 + 32) + v31 + v32 > 0;
        *(_BYTE *)(v17 + 45) = sub_4646D0(9, i);
        *(_BYTE *)(v17 + 44) = sub_4646D0(10, i);
        *(_BYTE *)(v17 + 47) = sub_4646D0(11, i);
        *(_BYTE *)(v17 + 46) = sub_4646D0(12, i);
        v33 = -35 - v17;
        v34 = (_BYTE *)(v17 + 48);
        v39 = 6;
        while ( 1 )
        {
          *v34 = sub_4646D0(&v34[v33], i);
          ++v34;
          if ( !--v39 )
            break;
          v33 = -35 - v17;
        }
        *(_WORD *)(v17 + 54) = sub_4646D0(19, i);
        *(_DWORD *)(v17 + 16) = -1;
        *(_DWORD *)(v17 + 20) = -1;
        v35 = *(_DWORD *)(v17 + 28);
        v36 = *(_DWORD *)(v17 + 40);
        v37 = (double)(v36 + *(_DWORD *)(v17 + 36) + v35 + *(_DWORD *)(v17 + 32));
        v40 = (int)((double)(100 * v35) / v37);
        *(_WORD *)(v17 + 56) = v40;
        *(_WORD *)(v17 + 58) = (int)((double)(100 * *(_DWORD *)(v17 + 32)) / v37);
        *(_WORD *)(v17 + 60) = (int)((double)(100 * *(_DWORD *)(v17 + 36)) / v37);
        *(_WORD *)(v17 + 62) = (int)((double)(100 * v36) / v37);
        if ( v37 > 0.0 )
        {
          dword_870778 += v40;
          dword_87077C += *(__int16 *)(v17 + 58);
          dword_870780 += *(__int16 *)(v17 + 60);
          dword_870784 += *(__int16 *)(v17 + 62);
        }
        *(_DWORD *)(v17 + 64) = sub_4646D0(20, i);
        *(_WORD *)(v17 + 68) = sub_4646D0(21, i);
        *(_WORD *)(v17 + 70) = sub_4646D0(22, i);
      }
    }
    sub_464650(v41);
    sub_432480();
    v44 = -1;
    sub_464B50(v41);
    return 1;
  }
  else
  {
    v44 = -1;
    sub_464B50(v41);
    return 0;
  }
}
