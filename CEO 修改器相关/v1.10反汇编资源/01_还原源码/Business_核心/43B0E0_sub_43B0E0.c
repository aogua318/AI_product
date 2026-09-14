// 函数 0x43b0e0  sub_43B0E0  size=0x4C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43B0E0(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(result + 5481) & 4) != 0 )
    return sub_45F540(
             1,
             *(__int16 *)(result + 5482) + *(__int16 *)(a1 + 276),
             *(__int16 *)(result + 5484) + *(__int16 *)(a1 + 278),
             result + 5500);
  return result;
}
