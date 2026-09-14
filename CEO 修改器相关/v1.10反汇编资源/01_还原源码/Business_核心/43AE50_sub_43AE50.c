// 函数 0x43ae50  sub_43AE50  size=0x8E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43AE50(int a1)
{
  int v1; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(v1 + 8361) & 4) != 0 )
    sub_45F540(
      1,
      *(__int16 *)(v1 + 8362) + *(__int16 *)(a1 + 276),
      *(__int16 *)(v1 + 8364) + *(__int16 *)(a1 + 278),
      v1 + 8380);
  result = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(result + 8073) & 4) != 0 )
    return sub_45F540(
             1,
             *(__int16 *)(result + 8074) + *(__int16 *)(a1 + 276),
             *(__int16 *)(result + 8076) + *(__int16 *)(a1 + 278),
             result + 8092);
  return result;
}
