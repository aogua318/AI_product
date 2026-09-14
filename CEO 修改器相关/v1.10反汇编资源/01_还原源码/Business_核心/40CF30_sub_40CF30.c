// 函数 0x40cf30  sub_40CF30  size=0x99  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40CF30(_BYTE *this)
{
  int *v1; // eax

  if ( *(this + 3) != 3 )
    return (int)0.0;
  v1 = (int *)(*(_DWORD *)dword_4C4434 + 72 * *(__int16 *)this);
  return (int)((double)v1[15]
             + 0.0
             + (double)*((int *)dword_870824 + 241) * 0.00390625 * (double)v1[1]
             + (double)*((int *)dword_870824 + 269) * 0.00390625 * (double)v1[2]
             + (double)*((int *)dword_870824 + 73) * 0.00390625 * (double)v1[3]
             + (double)*((int *)dword_870824 + 437) * 0.00390625 * (double)v1[4]
             + (double)*((int *)dword_870824 + 409) * 0.00390625 * (double)v1[5]
             + (double)*((int *)dword_870824 + 829) * 0.00390625 * (double)v1[6]
             + 0.00390625 * (double)*((int *)dword_870824 + 353) * (double)v1[7]);
}
