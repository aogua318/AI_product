// 函数 0x42e710  sub_42E710  size=0x111  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double sub_42E710()
{
  double v0; // st6
  int v1; // ecx
  double v2; // st5
  double *v3; // eax
  double v4; // st4
  float v6; // [esp+0h] [ebp-4h]

  v0 = 0.0;
  v1 = 8 * byte_4CE045 + 8200;
  v2 = 0.0;
  v3 = dbl_4D1100;
  do
  {
    v4 = *(double *)((char *)v3 + v1 - 72);
    v3 += 237350;
    v0 = v0
       + v4
       + *(double *)((char *)v3 + v1 - 1708992)
       + *(double *)((char *)v3 + v1 - 1519112)
       + *(double *)((char *)v3 + v1 - 1329232)
       + *(double *)((char *)v3 + v1 - 1139352)
       + *(double *)((char *)v3 + v1 - 949472)
       + *(double *)((char *)v3 + v1 - 759592)
       + *(double *)((char *)v3 + v1 - 569712)
       + *(double *)((char *)v3 + v1 - 379832)
       + *(double *)((char *)v3 + v1 - 189952);
    v2 = v2
       + *(v3 - 237350)
       + *(v3 - 213615)
       + *(v3 - 189880)
       + *(v3 - 166145)
       + *(v3 - 142410)
       + *(v3 - 118675)
       + *(v3 - 94940)
       + *(v3 - 71205)
       + *(v3 - 47470)
       + *(v3 - 23735);
  }
  while ( (int)v3 < (int)&dbl_870360 );
  if ( v0 <= 0.0 )
  {
    flt_8703A4 = 0.0049999999;
    return (float)0.0049999999;
  }
  else
  {
    v6 = v2 * 10.0 / v0 + 5.0;
    flt_8703A4 = v6 / 1000.0;
    return flt_8703A4;
  }
}
