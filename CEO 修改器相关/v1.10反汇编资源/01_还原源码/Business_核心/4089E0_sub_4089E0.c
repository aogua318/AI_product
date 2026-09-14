// 函数 0x4089e0  sub_4089E0  size=0x6D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4089E0(double *a1, __int16 *a2)
{
  return 2
       * ((*((_DWORD *)a2 + 6) != dword_4C2CF4 ? 0 : 0x2710) + (int)((double)a2[7] + a1[2]) > (int)((double)*((__int16 *)a1 + 7)
                                                                                                  + a1[2])
                                                                                            + (*((_DWORD *)a1 + 6) != dword_4C2CF4
                                                                                             ? 0
                                                                                             : 0x2710))
       - 1;
}
