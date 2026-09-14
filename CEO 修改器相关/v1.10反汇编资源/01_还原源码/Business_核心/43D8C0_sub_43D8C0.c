// 函数 0x43d8c0  sub_43D8C0  size=0x28D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43D8C0(int a1)
{
  int v1; // eax
  int i; // ecx
  int v3; // esi
  _BYTE *v4; // ecx
  int v5; // eax

  v1 = 0;
  dword_8A1B10 = a1;
  dword_8A1B1C = 0;
  if ( !a1 )
  {
    do
    {
      byte_8A1B24[8 * v1] = 1;
      word_8A1B20[4 * v1] = 2 * v1 + 316;
      word_8A1B22[4 * v1] = 2 * v1 + 332;
      byte_8A1B25[8 * v1++] = 0;
    }
    while ( v1 < 8 );
    for ( i = 0; i < 8; ++i )
    {
      byte_8A1B24[8 * v1] = 2;
      word_8A1B20[4 * v1] = 2 * i + 317;
      word_8A1B22[4 * v1] = 2 * i + 333;
      byte_8A1B25[8 * v1++] = 0;
    }
    byte_8A1B24[8 * v1] = 3;
    word_8A1B20[4 * v1] = 310;
    word_8A1B22[4 * v1] = 314;
    byte_8A1B25[8 * v1] = 0;
    byte_8A1B2C[8 * v1] = 4;
    word_8A1B28[4 * v1] = 311;
    word_8A1B2A[4 * v1] = 315;
    byte_8A1B2D[8 * v1] = 0;
    byte_8A1B34[8 * v1] = 5;
    word_8A1B30[4 * v1] = 569;
    word_8A1B32[4 * v1] = 795;
    byte_8A1B35[8 * v1] = 0;
    byte_8A1B3C[8 * v1] = 6;
    word_8A1B38[4 * v1] = 570;
    word_8A1B3A[4 * v1] = 796;
    byte_8A1B3D[8 * v1] = 0;
    byte_8A1B44[8 * v1] = 7;
    word_8A1B40[4 * v1] = 571;
    word_8A1B42[4 * v1] = 797;
    byte_8A1B45[8 * v1] = 0;
    byte_8A1B4C[8 * v1] = 8;
    word_8A1B48[4 * v1] = 572;
    word_8A1B4A[4 * v1] = 798;
    byte_8A1B4D[8 * v1] = 0;
    byte_8A1B54[8 * v1] = 9;
    word_8A1B50[4 * v1] = 573;
    word_8A1B52[4 * v1] = 799;
    byte_8A1B55[8 * v1] = 0;
    v1 += 7;
LABEL_14:
    dword_8A1B1C = v1;
    goto LABEL_15;
  }
  v3 = 0;
  if ( dword_4D0C90 > 0 )
  {
    v4 = (_BYTE *)(*(_DWORD *)dword_4D0C8C + 78);
    do
    {
      if ( *v4 != 0xFF
        && *(__int16 *)(*(_DWORD *)dword_4D0C94 + 68 * (char)*v4 + 66) == a1
        && (char)*(v4 - 66) <= dword_4CD128
        && (char)*(v4 - 65) > (unsigned int)dword_4CD128 )
      {
        byte_8A1B24[8 * v1] = 0;
        word_8A1B26[4 * v1] = v3;
        word_8A1B20[4 * v1] = *((_WORD *)v4 - 37);
        word_8A1B22[4 * v1] = *((_WORD *)v4 - 36);
        byte_8A1B25[8 * v1++] = 0;
      }
      ++v3;
      v4 += 388;
    }
    while ( v3 < dword_4D0C90 );
    goto LABEL_14;
  }
LABEL_15:
  sub_47ECC0(v1 - 4);
  sub_43D7B0();
  v5 = sub_464D00(624, 200, 800, 600);
  return sub_47C950(v5);
}
