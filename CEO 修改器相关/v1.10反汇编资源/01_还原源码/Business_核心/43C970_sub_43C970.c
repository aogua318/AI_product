// 函数 0x43c970  sub_43C970  size=0x50  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43C970(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 296);
  if ( (*(_BYTE *)(v1 + 3465) & 4) != 0 )
    sub_45F540(
      1,
      *(__int16 *)(v1 + 3466) + *(__int16 *)(a1 + 276),
      *(__int16 *)(v1 + 3468) + *(__int16 *)(a1 + 278),
      v1 + 3484);
  return sub_43C7A0();
}
