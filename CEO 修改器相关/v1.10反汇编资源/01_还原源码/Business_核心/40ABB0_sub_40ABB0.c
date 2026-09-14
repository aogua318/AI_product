// 函数 0x40abb0  sub_40ABB0  size=0x109  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_40ABB0()
{
  const char *v0; // eax
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax

  if ( dword_4C2D3C )
  {
    v0 = (const char *)sub_464210(
                         (unsigned __int64)dbl_4D10C0[23735 * dword_8703A0],
                         (unsigned __int64)dbl_4D10C0[23735 * dword_8703A0] >> 32,
                         16,
                         0);
    sub_409010(word_4C2D4C, &dword_8EEDEC, 373, 20, v0, 12, 1);
    v1 = (const char *)sub_464140(dword_4CD128 + 1950, 4, 0);
    sub_409010(word_4C2D4C, &dword_8EEDEC, 76, 20, v1, 12, 1);
    v2 = (const char *)sub_464140(dword_4B1120, 2, 0);
    sub_409010(word_4C2D4C, &dword_8EEDEC, 107, 20, v2, 12, 1);
    v3 = (const char *)sub_464140(10 * dword_4B111C, 2, 0);
    sub_409010(word_4C2D4C, &dword_8EEDEC, 130, 20, v3, 12, 0);
    v4 = (const char *)sub_464140(dword_4CD124, 2, 0);
    sub_409010(word_4C2D4C, &dword_8EEDEC, 164, 20, v4, 12, 0);
  }
}
