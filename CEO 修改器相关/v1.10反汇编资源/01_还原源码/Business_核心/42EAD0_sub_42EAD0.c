// 函数 0x42ead0  sub_42EAD0  size=0x92  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42EAD0(int a1)
{
  int v1; // eax

  v1 = dword_89E57C + a1 * dword_89E568;
  if ( *(_BYTE *)(v1 + 18)
    && (*(_BYTE *)(v1 + 19) & 0xF) == 1
    && *(char *)(dword_4CCA98 * *(__int16 *)(v1 + 6) + dword_4CCAAC + 224) == dword_87032C )
  {
    dbl_870338 = (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v1 + 16) + 24)
               * (double)*(unsigned __int8 *)(v1 + 17)
               * ((double)*((int *)dword_870824 + 28 * *(unsigned __int8 *)(v1 + 16))
                * 0.00390625)
               + dbl_870338;
  }
  return 0;
}
