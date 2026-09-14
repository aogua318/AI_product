// 函数 0x45e2c0  sub_45E2C0  size=0x641  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45E2C0()
{
  int v0; // eax
  int v1; // esi
  char *v2; // edi
  char v3; // al
  int v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // et0
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned __int64 v14; // kr08_8
  unsigned __int64 v15; // kr10_8
  unsigned __int64 v16; // kr18_8
  signed int v17; // ecx
  int v18; // eax
  signed int v19; // ecx
  double v20; // st7
  double v21; // st6
  double v22; // st4
  long double v23; // st7
  int i; // eax
  char *v25; // esi
  int v26; // ecx
  int v27; // eax
  const char *v28; // eax
  int v30; // [esp+Ch] [ebp-31Ch]
  __int64 v31; // [esp+10h] [ebp-318h]
  int v32; // [esp+18h] [ebp-310h]
  unsigned int v33; // [esp+18h] [ebp-310h]
  __int64 Value; // [esp+1Ch] [ebp-30Ch]
  unsigned __int64 Valueb; // [esp+1Ch] [ebp-30Ch]
  unsigned __int64 Valuec; // [esp+1Ch] [ebp-30Ch]
  unsigned __int64 Valued; // [esp+1Ch] [ebp-30Ch]
  unsigned __int64 Valuea; // [esp+1Ch] [ebp-30Ch]
  int Value_4; // [esp+20h] [ebp-308h]
  char v40[512]; // [esp+24h] [ebp-304h] BYREF
  char Buffer[256]; // [esp+224h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\buyfact.fce");
  sub_481C90(&unk_8D34C8, v0, 1);
  v1 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
  v2 = (char *)&unk_4D10B8 + 189880 * *(char *)(v1 + 224);
  v30 = v1 + 204;
  sprintf(Buffer, "%s --- %s", v2 + 16, (const char *)(v1 + 204));
  sub_47FF50(Buffer);
  sub_47E650(*((__int16 *)v2 + 1) + 19);
  sub_47FF50(v2 + 60);
  v3 = *(_BYTE *)(v1 + 224);
  if ( v3 >= 7 )
    sub_47E650(27);
  else
    sub_47E650(v3 + 12);
  v4 = byte_4CE046;
  Value = 0;
  v5 = byte_4CE046 - 25;
  v32 = 12;
  do
  {
    v6 = v4;
    if ( v4 > 24 )
      v6 = v4 - 8 * (3 * (v5 / 0x18) + 3);
    if ( v6 < 0 )
      v6 += 24 * ((-1 - v6) / 0x18u) + 24;
    Value += *(int *)(v1 + 4 * v6 + 820);
    --v4;
    --v5;
    --v32;
  }
  while ( v32 );
  sub_438340(Value, Buffer);
  sub_47FF50(Buffer);
  v7 = byte_4CE046;
  v8 = 0;
  HIDWORD(v31) = 0;
  v33 = byte_4CE046 - 25;
  Value_4 = 12;
  do
  {
    v9 = v7;
    if ( v7 > 24 )
      v9 = v7 - 8 * (3 * (v33 / 0x18) + 3);
    if ( v9 < 0 )
      v9 += 24 * ((-1 - v9) / 0x18u) + 24;
    v10 = (*(int *)(v1 + 4 * v9 + 1512) + __PAIR64__(HIDWORD(v31), v8)) >> 32;
    v8 += *(_DWORD *)(v1 + 4 * v9 + 1512);
    HIDWORD(v31) = v10;
    --v33;
    --v7;
    --Value_4;
  }
  while ( Value_4 );
  LODWORD(v31) = v8;
  sub_438340(__SPAIR64__(HIDWORD(v31), v8), Buffer);
  sub_47FF50(Buffer);
  v11 = (unsigned __int64)sub_41A6C0((__int16 *)v1);
  v12 = HIDWORD(v11);
  v13 = v11;
  sub_438340(v11, Buffer);
  sub_47FF50(Buffer);
  Valueb = (unsigned __int64)sub_41A720((__int16 *)v1);
  sub_438340(Valueb, Buffer);
  sub_47FF50(Buffer);
  v14 = Valueb + __PAIR64__(v12, v13);
  Valuec = (unsigned __int64)sub_41A780((__int16 *)v1);
  sub_438340(Valuec, Buffer);
  sub_47FF50(Buffer);
  v15 = Valuec + v14;
  Valued = (unsigned __int64)sub_41A7E0((__int16 *)v1);
  sub_438340(Valued, Buffer);
  sub_47FF50(Buffer);
  v16 = Valued + v15;
  Valuea = (unsigned __int64)sub_41A840((__int16 *)v1);
  sub_438340(Valuea, Buffer);
  sub_47FF50(Buffer);
  sub_438340(Valuea + v16, Buffer);
  sub_47FF50(Buffer);
  v17 = dword_4CE04C;
  if ( dword_4CE04C > 1000 )
    v17 = -1000 - 1000 * ((dword_4CE04C - 1001) / 0x3E8u) + dword_4CE04C;
  if ( v17 < 0 )
    v17 += 1000 * ((-1 - v17) / 0x3E8u) + 1000;
  v18 = v17 + 23735 * dword_8703A0;
  v19 = dword_4CE04C;
  v20 = dbl_4D1118[v18];
  if ( dword_4CE04C > 1000 )
    v19 = -1000 - 1000 * ((dword_4CE04C - 1001) / 0x3E8u) + dword_4CE04C;
  if ( v19 < 0 )
    v19 += 1000 * ((-1 - v19) / 0x3E8u) + 1000;
  v21 = dbl_4D1118[23735 * *(char *)(v1 + 224) + v19];
  if ( v20 < 1.0 )
    v20 = 1.0;
  if ( v21 < 1.0 )
    v21 = 1.0;
  v22 = (double)v31;
  if ( v22 <= 0.0 )
    v22 = 0.0;
  v23 = (v20 / v21 / 10.0 + 1.0) * (double)(__int64)(2 * (Valuea + v16)) * (10.0 * v22 / v21 + 1.0);
  dbl_8D2308 = v23;
  for ( i = *(__int16 *)(v1 + 238); i != -1; i = *((__int16 *)v25 + 3) )
  {
    v25 = (char *)(dword_4CC8D0 + i * dword_4CC8BC);
    if ( v25[10] != 2 )
    {
      v23 = sub_41EE50(*v25) + dbl_8D2308;
      dbl_8D2308 = v23;
    }
  }
  if ( v23 > dbl_4D10C0[23735 * dword_8703A0] )
  {
    sub_4820C0(dword_8D35F0 + 2304);
    v23 = dbl_8D2308;
  }
  sub_438340((unsigned __int64)v23, Buffer);
  v27 = sub_4640D0(v26) % 4;
  v28 = (const char *)sub_4646A0(1, v27 + 28);
  sprintf(v40, v28, v30, Buffer);
  sub_47FF50(v40);
  sub_47D1A0(&unk_8D34C8, sub_45E200, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
