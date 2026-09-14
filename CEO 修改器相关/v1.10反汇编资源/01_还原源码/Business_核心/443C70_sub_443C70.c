// 函数 0x443c70  sub_443C70  size=0x68B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_443C70(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // eax
  _DWORD v4[36]; // [esp+8h] [ebp-98h] BYREF
  __int16 v5; // [esp+98h] [ebp-8h]

  v1 = ++dword_8A7584;
  v2 = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(v2 + 585) & 4) != 0 )
  {
    sub_45F540(
      1,
      *(__int16 *)(v2 + 586) + *(__int16 *)(a1 + 276),
      *(__int16 *)(v2 + 588) + *(__int16 *)(a1 + 278),
      v2 + 604);
    return;
  }
  if ( (*(_BYTE *)(v2 + 297) & 4) != 0 )
  {
    sub_45F540(
      1,
      *(__int16 *)(v2 + 298) + *(__int16 *)(a1 + 276),
      *(__int16 *)(v2 + 300) + *(__int16 *)(a1 + 278),
      v2 + 316);
    return;
  }
  if ( (*(_BYTE *)(v2 + 9) & 4) != 0 )
  {
    sub_45F540(
      1,
      *(__int16 *)(v2 + 10) + *(__int16 *)(a1 + 276),
      *(__int16 *)(v2 + 12) + *(__int16 *)(a1 + 278),
      v2 + 28);
    return;
  }
  v3 = dword_4C2D34;
  if ( dword_4C2D34 == 18 || dword_4C2D34 == 34 || dword_4C2D34 == 50 )
  {
    v1 = 0;
    v3 = dword_4C2D34 + 1;
    dword_8A7584 = 0;
    ++dword_4C2D34;
  }
  if ( v3 == 19 )
  {
    if ( v1 <= 12 )
      return;
    qmemcpy(&v4[16], &unk_4A3F58, 0x50u);
    LOBYTE(v5) = unk_4A3FA8;
    sub_437150((int)&v4[16], 0, -1, -1);
    v1 = dword_8A7584;
    v3 = ++dword_4C2D34;
  }
  if ( v3 == 20 )
  {
    sub_4443D0((v1 & 4) == 0);
    v1 = dword_8A7584;
    v3 = dword_4C2D34;
  }
  if ( v3 == 21 )
  {
    if ( v1 <= 16 )
      return;
    qmemcpy(&v4[22], &unk_4A3F18, 0x38u);
    LOBYTE(v5) = unk_4A3F50;
    sub_437150((int)&v4[22], 0, -1, -1);
    v1 = dword_8A7584;
    v3 = ++dword_4C2D34;
  }
  if ( v3 == 22 )
  {
    if ( dbl_4D10C0[23735 * dword_8703A0] < 1000000.0 )
    {
      dword_8A7584 = 0;
      dword_4C2D34 = 23;
    }
  }
  else
  {
    if ( v3 == 23 )
    {
      if ( v1 <= 12 )
        return;
      qmemcpy(&v4[14], &unk_4A3EC0, 0x58u);
      sub_437150((int)&v4[14], 0, -1, -1);
      v1 = dword_8A7584;
      v3 = ++dword_4C2D34;
    }
    if ( v3 == 25 )
    {
      dword_8A7584 = 0;
      dword_4C2D34 = 26;
      return;
    }
    if ( v3 == 26 )
    {
      if ( v1 <= 48 )
        return;
      qmemcpy(&v4[7], &unk_4A3E48, 0x70u);
      LOWORD(v4[35]) = unk_4A3EB8;
      BYTE2(v4[35]) = unk_4A3EBA;
      sub_437150((int)&v4[7], 0, -1, -1);
      v1 = dword_8A7584;
      v3 = ++dword_4C2D34;
    }
    if ( v3 == 27 )
    {
      if ( *((_DWORD *)dword_870824 + 251) == -1 )
        return;
      qmemcpy(&v4[12], &unk_4A3DE0, 0x60u);
      LOBYTE(v5) = unk_4A3E40;
      sub_437150((int)&v4[12], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 28 )
    {
      if ( v1 <= 120 )
        return;
      qmemcpy(&v4[14], &unk_4A3D88, 0x54u);
      LOWORD(v4[35]) = unk_4A3DDC;
      BYTE2(v4[35]) = unk_4A3DDE;
      sub_437150((int)&v4[14], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 29 )
    {
      if ( v1 <= 60 )
        return;
      v4[31] = 1436857777;
      v4[34] = 1875198375;
      v4[32] = 1320473512;
      v4[33] = -1179261275;
      LOWORD(v4[35]) = 18849;
      BYTE2(v4[35]) = 0;
      sub_437150((int)&v4[31], 0, -1, -1);
      v1 = dword_8A7584;
      v3 = ++dword_4C2D34;
    }
    if ( v3 == 35 )
    {
      if ( v1 <= 16 )
        return;
      qmemcpy(&v4[13], &unk_4A3D10, 0x5Cu);
      LOBYTE(v5) = unk_4A3D6C;
      sub_437150((int)&v4[13], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 36 )
    {
      if ( v1 <= 300 )
        return;
      qmemcpy(&v4[14], &unk_4A3CB0, 0x58u);
      LOBYTE(v5) = unk_4A3D08;
      sub_437150((int)&v4[14], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 37 )
    {
      if ( v1 <= 180 )
        return;
      qmemcpy(&v4[27], &unk_4A3C84, 0x24u);
      LOBYTE(v5) = unk_4A3CA8;
      sub_437150((int)&v4[27], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 38 )
    {
      if ( v1 <= 180 )
        return;
      qmemcpy(&v4[21], &unk_4A3C48, 0x38u);
      LOWORD(v4[35]) = unk_4A3C80;
      BYTE2(v4[35]) = unk_4A3C82;
      sub_437150((int)&v4[21], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 39 )
    {
      if ( v1 <= 180 )
        return;
      qmemcpy(&v4[22], &unk_4A3C0C, 0x38u);
      LOBYTE(v5) = unk_4A3C44;
      sub_437150((int)&v4[22], 0, -1, -1);
      v1 = dword_8A7584;
      v3 = ++dword_4C2D34;
    }
    if ( v3 == 51 )
    {
      if ( v1 <= 16 )
        return;
      qmemcpy(&v4[7], &unk_4A3B98, 0x74u);
      sub_437150((int)&v4[7], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 52 )
    {
      if ( v1 <= 200 )
        return;
      qmemcpy(v4, &unk_4A3B00, sizeof(v4));
      v5 = unk_4A3B90;
      sub_437150((int)v4, 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 53 )
    {
      if ( v1 <= 200 )
        return;
      qmemcpy(v4, &unk_4A3A68, sizeof(v4));
      v5 = unk_4A3AF8;
      sub_437150((int)v4, 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 57 )
    {
      dword_8A7584 = 0;
      dword_4C2D34 = 58;
      return;
    }
    if ( v3 == 58 )
    {
      if ( v1 <= 20 )
        return;
      qmemcpy(&v4[13], &unk_4A3A08, 0x58u);
      LOWORD(v4[35]) = unk_4A3A60;
      BYTE2(v4[35]) = unk_4A3A62;
      sub_437150((int)&v4[13], 0, -1, -1);
      v3 = dword_4C2D34 + 1;
      v1 = 0;
      ++dword_4C2D34;
      dword_8A7584 = 0;
    }
    if ( v3 == 59 && v1 > 150 )
    {
      qmemcpy(&v4[30], &unk_4A39EC, 0x18u);
      LOBYTE(v5) = unk_4A3A04;
      sub_437150((int)&v4[30], 0, -1, -1);
      ++dword_4C2D34;
    }
  }
}
