// 函数 0x42eb70  sub_42EB70  size=0xE8  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __thiscall sub_42EB70(double *this)
{
  double result; // st7

  dbl_870320 = *(this + 1);
  dbl_870360 = *(this + 9);
  dword_87032C = *(char *)this;
  dbl_870338 = 0.0;
  memset(dbl_870368, 0, 0x30u);
  sub_464ED0(sub_42E830);
  dbl_870398 = dbl_870338;
  dbl_870338 = 0.0;
  sub_464ED0(sub_42E8A0);
  sub_464ED0(sub_42EAD0);
  dbl_870318 = dbl_870338;
  dbl_870338 = 0.0;
  sub_464ED0(sub_42EA80);
  dbl_870348 = dbl_870338;
  result = dbl_870338
         + dbl_870320
         - dbl_870360
         + dbl_870318
         + dbl_870398
         + dbl_870368[0]
         + dbl_870370
         + dbl_870378
         + dbl_870380
         + dbl_870388
         + dbl_870390;
  dbl_870330 = result;
  return result;
}
