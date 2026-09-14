// 函数 0x41ef50  sub_41EF50  size=0x4CC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41EF50(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int *v5; // eax
  int v6; // edx
  int v7; // ecx
  double v8; // st7
  int *v9; // esi
  int v10; // edx
  int v11; // ebx
  double v12; // st5
  int *v13; // edi
  double v14; // st4
  double v15; // st3
  double v16; // st2
  double v17; // st4
  double v18; // st4
  double v19; // st6
  double v20; // st5
  double v21; // st4
  double v23; // [esp+50h] [ebp-13Ch]
  double v24; // [esp+58h] [ebp-134h]
  double v25; // [esp+60h] [ebp-12Ch]
  int v26; // [esp+64h] [ebp-128h]
  _BYTE v27[8]; // [esp+68h] [ebp-124h] BYREF
  int v28; // [esp+70h] [ebp-11Ch]
  int v29; // [esp+74h] [ebp-118h]
  int v30; // [esp+78h] [ebp-114h]
  char Buffer[256]; // [esp+7Ch] [ebp-110h] BYREF
  int v32; // [esp+188h] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v27);
  v1 = 0;
  v32 = 0;
  v2 = 0;
  v3 = 0;
  v28 = 0;
  v29 = 0;
  v26 = dword_4CDFFC;
  dword_4CDFFC = 0;
  memset(dbl_4CD4B0, 0, 0x350u);
  memset(dbl_4CD800, 0, sizeof(dbl_4CD800));
  v30 = 0;
  if ( dword_4C5DD8 > 0 )
  {
    v4 = dword_4C5DEC;
    do
    {
      if ( v4 > 0 )
      {
        do
        {
          v5 = (int *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v1 + v30 * v4));
          v6 = v5[3];
          v2 += *v5;
          v3 += v5[1];
          v28 += v5[2];
          v29 += v6;
          sub_41EDC0(v5);
          v4 = dword_4C5DEC;
          ++v1;
        }
        while ( v1 < dword_4C5DEC );
      }
      v1 = 0;
      ++v30;
    }
    while ( v30 < dword_4C5DD8 );
  }
  sub_41ED50();
  dword_4CDFFC = v26;
  if ( a1 && sub_469F90("log\\prod_need.csv") )
  {
    sprintf(Buffer, &byte_4A2E58, v2);
    sub_46A360(Buffer, strlen(Buffer));
    sprintf(Buffer, &byte_4A2E48, v3);
    sub_46A360(Buffer, strlen(Buffer));
    sprintf(Buffer, &byte_4A2E38, v28);
    sub_46A360(Buffer, strlen(Buffer));
    sprintf(Buffer, &byte_4A2E28, v29);
    sub_46A360(Buffer, strlen(Buffer));
    sprintf(
      Buffer,
      "%10s:\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\r\n",
      byte_4A2DA0,
      byte_4A2DAC,
      byte_4A2DBC,
      byte_4A2DCC,
      byte_4A2DEC,
      byte_4A2DD8,
      byte_4A2DEC,
      byte_4A2DF8,
      byte_4A2E10);
    sub_46A360(Buffer, strlen(Buffer));
    v7 = 0;
    v30 = 0;
    if ( dword_870818 > 0 )
    {
      v28 = 0;
      v29 = 0;
      while ( 1 )
      {
        v8 = 0.00390625;
        v9 = (int *)((char *)dword_870824 + v28);
        v10 = *(_DWORD *)dword_870814;
        v11 = *(_DWORD *)dword_870814 + v29;
        v12 = (double)*(int *)((char *)dword_870824 + v28) * 0.00390625;
        if ( *(_BYTE *)(*(_DWORD *)dword_870814 + v29 + 13) )
        {
          v13 = v9 + 20;
          v14 = v12 - (double)v9[20] * 0.00390625;
          v15 = (double)*(int *)(v11 + 24);
          v25 = dbl_4CD158[v7] * v14 * v15;
          v16 = v14 * dbl_4CD4B0[v7];
          v17 = v25;
          v24 = v15 * v16;
        }
        else
        {
          v18 = (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v9 + 7) + 24) * v12;
          if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v9 + 7) + 13) )
            v18 = v18 * 0.8;
          v13 = v9 + 20;
          v25 = (v18 - (double)v9[20] * 0.00390625 * (double)*(int *)(v11 + 24)) * dbl_4CD158[v7];
          v24 = 0.0;
          v17 = v25;
        }
        v23 = (v12 - (double)*v13 * 0.00390625) * (dbl_4CD158[v7] - dbl_4CD4B0[v7]) * (double)*(int *)(v11 + 24);
        v19 = v17;
        if ( v17 < 0.0 )
        {
          MessageBoxA(hWnd, &byte_4A2D68, "error", 0);
          v10 = *(_DWORD *)dword_870814;
          v7 = v30;
          v19 = v25;
          v8 = 0.00390625;
        }
        v20 = (double)*v9 * v8;
        v21 = (double)*(int *)(v10 + 72 * *((__int16 *)v9 + 7) + 24) * v20;
        if ( *(_BYTE *)(v10 + 72 * *((__int16 *)v9 + 7) + 13) )
          v21 = v21 * 0.8;
        sprintf(
          Buffer,
          "%10s:\t%.2lf\t%.2lf\t%.0lf\t%.0lf\t%.2lf\t%.0lf\t%.0lf\t%.0lf\r\n",
          (const char *)v11,
          dbl_4CD4B0[v7],
          dbl_4CD158[v7],
          (double)*(int *)(v11 + 24) * v20,
          v19,
          dbl_4CDB58[v7],
          (v21 - v8 * (double)*v13 * (double)*(int *)(v11 + 24)) * dbl_4CDB58[v7],
          v24,
          v23);
        sub_46A360(Buffer, strlen(Buffer));
        v29 += 72;
        v28 += 112;
        if ( ++v30 >= dword_870818 )
          break;
        v7 = v30;
      }
    }
    sub_46A1F0(v27);
  }
  v32 = -1;
  return nullsub_2(v27);
}
