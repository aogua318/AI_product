// 函数 0x443ac0  sub_443AC0  size=0xC5  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_443AC0()
{
  int v0; // esi
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  sub_4095B0();
  sub_4090C0((int)dword_4D0E68, 1);
  sub_4629D0();
  sub_40DD00(dword_4B1024);
  if ( dword_4B1024 != -1 )
  {
    v0 = *(_DWORD *)(dword_4B1024 * dword_4C43C8 + dword_4C43DC + 80);
    sub_483850(
      *(__int16 *)(dword_4D0F1C + v0 * dword_4D0F08 + 2),
      *(__int16 *)(dword_4D0F1C + v0 * dword_4D0F08 + 4),
      &v2,
      &v3);
    sub_485F80(v2, v3);
    dword_4B1010 = v0;
  }
  sub_45F540(0, 0, 0, byte_4A2869);
  sub_47C950(0);
  sub_486D40(0, 0);
  return sub_486D40(1, 1);
}
