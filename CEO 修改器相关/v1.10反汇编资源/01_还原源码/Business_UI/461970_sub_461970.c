// 函数 0x461970  sub_461970  size=0x392  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_461970(int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  _WORD v5[66]; // [esp+8h] [ebp-8Ch] BYREF
  __int16 v6; // [esp+8Ch] [ebp-8h]

  v1 = ++dword_8D7A5C;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 296);
  do
  {
    if ( (*(_BYTE *)(v3 + 9) & 4) != 0 )
    {
      sub_45F540(
        1,
        *(__int16 *)(a1 + 276) + *(__int16 *)(v3 + 10),
        *(__int16 *)(a1 + 278) + *(__int16 *)(v3 + 12),
        (const char *)(v3 + 28));
      return;
    }
    ++v2;
    v3 += 288;
  }
  while ( v2 < 5 );
  v4 = dword_4C2D34;
  if ( dword_4C2D34 == 4 )
  {
    if ( (v1 & 4) == 0 )
      return;
    sub_45F540(
      1,
      -26 - *(__int16 *)(a1 + 276) - *(__int16 *)(*(_DWORD *)(a1 + 296) + 874),
      -(*(__int16 *)(*(_DWORD *)(a1 + 296) + 876) + *(__int16 *)(a1 + 278)),
      (const char *)(*(_DWORD *)(a1 + 296) + 892));
    v1 = dword_8D7A5C;
    v4 = dword_4C2D34;
  }
  if ( v4 == 2 )
  {
    dword_8D7A5C = 0;
    dword_4C2D34 = 3;
    return;
  }
  if ( v4 == 3 )
  {
    if ( v1 <= 0xC )
      return;
    qmemcpy(&v5[46], &unk_4A4944, 0x24u);
    v5[64] = unk_4A4968;
    LOBYTE(v5[65]) = unk_4A496A;
    sub_437150((int)&v5[46], 0, -1, -1);
    v1 = dword_8D7A5C;
    v4 = ++dword_4C2D34;
  }
  if ( v4 == 5 )
  {
    qmemcpy(&v5[36], &unk_4A4908, 0x38u);
    v5[64] = unk_4A4940;
    LOBYTE(v5[65]) = unk_4A4942;
    sub_437150((int)&v5[36], 0, -1, -1);
    v1 = dword_8D7A5C;
    v4 = ++dword_4C2D34;
  }
  if ( v4 == 6 )
  {
    if ( word_4CE042 == 10 )
    {
      dword_4C2D34 = 7;
      dword_8D7A5C = 0;
    }
    return;
  }
  if ( v4 == 7 )
  {
    if ( v1 <= 0xC )
      return;
    qmemcpy(v5, &unk_4A4880, sizeof(v5));
    v6 = unk_4A4904;
    sub_437150((int)v5, 0, -1, -1);
    v4 = dword_4C2D34 + 1;
    v1 = 0;
    ++dword_4C2D34;
    dword_8D7A5C = 0;
  }
  if ( v4 == 8 )
  {
    if ( v1 <= 0xC || dbl_4D10C0[23735 * dword_8703A0] >= 1000000.0 )
      return;
    qmemcpy(&v5[36], &unk_4A4840, 0x3Cu);
    v6 = unk_4A487C;
    sub_437150((int)&v5[36], 0, -1, -1);
    v4 = dword_4C2D34 + 1;
    v1 = 0;
    ++dword_4C2D34;
    dword_8D7A5C = 0;
  }
  if ( v4 == 9 )
  {
    if ( v1 <= 0x14 || dbl_4D10C0[23735 * dword_8703A0] >= 450000.0 )
      return;
    qmemcpy(&v5[26], &unk_4A47E0, 0x50u);
    LOBYTE(v6) = unk_4A4830;
    sub_437150((int)&v5[26], 0, -1, -1);
    v1 = dword_8D7A5C;
    v4 = ++dword_4C2D34;
  }
  if ( v4 == 54 )
  {
    if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
      return;
    v1 = 0;
    dword_8D7A5C = 0;
    dword_4C2D34 = 55;
    goto LABEL_33;
  }
  if ( v4 == 55 )
  {
LABEL_33:
    if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 || v1 <= 0x1E )
      return;
    qmemcpy(&v5[6], &unk_4A4760, 0x78u);
    v6 = unk_4A47D8;
    sub_437150((int)&v5[6], 0, -1, -1);
    v4 = dword_4C2D34 + 1;
    v1 = 0;
    ++dword_4C2D34;
    dword_8D7A5C = 0;
  }
  if ( v4 == 56 && (_DWORD *)dword_4C2D38 == dword_4D0E68 && v1 > 0x190 )
  {
    qmemcpy(&v5[36], &unk_4A4724, 0x38u);
    v5[64] = unk_4A475C;
    LOBYTE(v5[65]) = unk_4A475E;
    sub_437150((int)&v5[36], 0, -1, -1);
    ++dword_4C2D34;
  }
}
