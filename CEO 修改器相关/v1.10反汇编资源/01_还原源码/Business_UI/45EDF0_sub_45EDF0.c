// 函数 0x45edf0  sub_45EDF0  size=0xFA  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45EDF0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  int *v7; // eax
  unsigned int v8; // [esp+14h] [ebp-70h]
  double v9[13]; // [esp+18h] [ebp-6Ch] BYREF

  if ( !a2 || (v2 = sub_464D00(642, 213, 784, 277), sub_464BC0(v2)) )
  {
    v3 = sub_45E9A0();
    v4 = byte_4CE045;
    v5 = 0;
    v8 = byte_4CE045 - 14;
    do
    {
      v6 = v4;
      if ( v4 > 13 )
        v6 = v4 - 13 * (v8 / 0xD + 1);
      if ( v6 < 0 )
        v6 += 13 * ((-1 - v6) / 0xDu) + 13;
      --v8;
      v9[v5++] = *((double *)&unk_4D10B8 + 23735 * v3 + v6 + 1025);
      --v4;
    }
    while ( v5 < 13 );
    v7 = (int *)sub_464D00(642, 213, 784, 277);
    sub_45DE00(v7, 13, (int)v9, 1, 32736, 0.0);
  }
}
