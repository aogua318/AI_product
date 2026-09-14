// 函数 0x45a2a0  sub_45A2A0  size=0xAF  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_45A2A0()
{
  char *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // eax

  v0 = (char *)&unk_4D10B8 + 189880 * dword_8703A0;
  if ( dword_4CD128 >= 1000 )
  {
    v1 = 1000;
  }
  else
  {
    v1 = dword_4CD128 - dword_4CDF10 + 1949;
    if ( v1 <= 0 )
      return;
  }
  v2 = sub_464D00(354, 210, 619, 280);
  sub_45DE00(v2, v1, (int)(v0 + 11936), 0, 31, 0.0);
  v3 = sub_464D00(354, 336, 619, 406);
  sub_45DE00(v3, v1, (int)(v0 + 96), 0, 12319, 0.0);
}
