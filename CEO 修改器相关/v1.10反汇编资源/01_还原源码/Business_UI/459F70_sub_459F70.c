// 函数 0x459f70  sub_459F70  size=0xA7  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_459F70()
{
  char *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // eax

  v0 = (char *)&unk_4D10B8 + 189880 * dword_8703A0;
  if ( dword_4CD128 >= 1000 )
    v1 = 1000;
  else
    v1 = dword_4CD128 - dword_4CDF10 + 1949;
  v2 = sub_464D00(252, 206, 517, 276);
  sub_45DE00(v2, v1, (int)(v0 + 11936), 1, 31, 0.0);
  v3 = sub_464D00(252, 332, 517, 402);
  return sub_45DE00(v3, v1, (int)(v0 + 96), 1, 12319, 0.0);
}
