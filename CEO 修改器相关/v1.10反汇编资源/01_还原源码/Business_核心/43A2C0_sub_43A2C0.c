// 函数 0x43a2c0  sub_43A2C0  size=0x4A6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43A2C0()
{
  double *v0; // edi
  int v1; // ebx
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // cl
  int v14; // eax
  char v15; // cl
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // esi
  _DWORD *v23; // ecx
  int v24; // eax
  char v25; // cl
  int v26; // eax
  char v27; // cl
  int v28; // eax
  char v29; // cl
  _BYTE v31[8]; // [esp+10h] [ebp-900h] BYREF
  double v32[15]; // [esp+18h] [ebp-8F8h] BYREF
  _OWORD Src[60]; // [esp+90h] [ebp-880h] BYREF
  _DWORD Buffer[300]; // [esp+450h] [ebp-4C0h] BYREF
  int v35; // [esp+90Ch] [ebp-4h]

  v0 = (double *)((char *)&unk_4D10B8 + 189880 * dword_8703A0);
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v31);
  v1 = 0;
  v35 = 0;
  if ( dword_4CDEBC )
  {
    memset(Buffer, 0, sizeof(Buffer));
    if ( sub_46A580("famehall2.dat") || sub_469F90("famehall2.dat") )
    {
      sub_46A320(Buffer, 0x4B0u);
      sub_46A1F0(v31);
    }
    v21 = sub_459B70(dword_8703A0);
    LODWORD(v32[10]) = v21;
    v22 = 0;
    v23 = &Buffer[20];
    while ( *v23 >= v21 )
    {
      ++v22;
      v23 += 30;
      if ( v22 >= 10 )
        goto LABEL_44;
    }
    if ( v22 < 9 )
      memcpy_0(&Buffer[30 * v22 + 30], &Buffer[30 * v22], 96 * (9 - v22));
    v24 = 0;
    do
    {
      v25 = byte_4CDEC4[v24];
      *((_BYTE *)v32 + v24++) = v25;
    }
    while ( v25 );
    v26 = 0;
    do
    {
      v27 = byte_4CDEC4[v26];
      *((_BYTE *)&v32[5] + v26++) = v27;
    }
    while ( v27 );
    v28 = 0;
    do
    {
      v29 = byte_4CE00C[v28];
      *((_BYTE *)&v32[7] + v28++ + 4) = v29;
    }
    while ( v29 );
    v32[11] = sub_42EB70(v0) - v0[12];
    sub_425920(dword_4CDEB8, &v32[12]);
    qmemcpy(&Buffer[30 * v22], v32, 0x78u);
    if ( sub_46A580("famehall2.dat") )
    {
      sub_46A360(Buffer, 0x4B0u);
      sub_46A1F0(v31);
    }
    dword_4D0DBC = 1;
    goto LABEL_43;
  }
  memset(Src, 0, sizeof(Src));
  if ( sub_46A580("famehall1.dat") || sub_469F90("famehall1.dat") )
  {
    sub_46A320(Src, 0x3C0u);
    sub_46A1F0(v31);
  }
  sub_423440(&Buffer[38], dword_4CDEC0);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v2 += Buffer[v3 + 59];
    v6 += Buffer[v3 + 60];
    v5 += Buffer[v3 + 61];
    v4 += Buffer[v3 + 62];
    v3 += 4;
  }
  while ( v3 < 40 );
  v7 = v6 + v5 + v4 + v2;
  LODWORD(v32[13]) = v7;
  if ( sub_43A240(&Buffer[38]) )
  {
    sub_4357C0(-1, 0);
    v8 = sub_47C740("Video\\win.wmv");
    sub_46BF10((int)hInstance, hWnd, 0, 0, 800, 600, v8);
    sub_435860(1);
    v9 = &Src[5];
    while ( *v9 >= v7 )
    {
      ++v1;
      v9 += 24;
      if ( v1 >= 10 )
        goto LABEL_44;
    }
    if ( v1 < 9 )
      memcpy_0(&Src[6 * v1 + 6], &Src[6 * v1], 96 * (9 - v1));
    v10 = 0;
    do
    {
      v11 = *((_BYTE *)&Buffer[38] + v10);
      *((_BYTE *)&v32[3] + v10++) = v11;
    }
    while ( v11 );
    v12 = 0;
    do
    {
      v13 = *((_BYTE *)&Buffer[48] + v12);
      *((_BYTE *)&v32[8] + v12++) = v13;
    }
    while ( v13 );
    v14 = 0;
    do
    {
      v15 = *((_BYTE *)&Buffer[54] + v14);
      *((_BYTE *)&v32[10] + v14++ + 4) = v15;
    }
    while ( v15 );
    v32[14] = sub_43A280((char *)&Buffer[38]);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    do
    {
      v16 += Buffer[v17 + 179];
      v20 += Buffer[v17 + 180];
      v19 += Buffer[v17 + 181];
      v18 += Buffer[v17 + 182];
      v17 += 4;
    }
    while ( v17 < 40 );
    HIDWORD(v32[13]) = v16 + v20 + v19 + v18;
    qmemcpy(&Src[6 * v1], &v32[3], 0x60u);
    if ( sub_46A580("famehall1.dat") )
    {
      sub_46A360(Src, 0x3C0u);
      sub_46A1F0(v31);
    }
    dword_4D0DBC = 0;
LABEL_43:
    sub_42A4E0();
  }
LABEL_44:
  v35 = -1;
  return nullsub_2(v31);
}
