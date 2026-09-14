// 函数 0x449f30  sub_449F30  size=0x4C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_449F30(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(result + 3177) & 4) != 0 )
    return sub_45F540(
             1,
             *(__int16 *)(result + 3178) + *(__int16 *)(a1 + 276),
             *(__int16 *)(result + 3180) + *(__int16 *)(a1 + 278),
             result + 3196);
  return result;
}
