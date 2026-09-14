// 函数 0x4753a0  sub_4753A0  size=0x4A  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4753A0(size_t Size)
{
  int v1; // edx

  v1 = 2304 * *(_DWORD *)(dword_8F61A0 + 13944) + dword_8F61A0 + 620;
  dword_8F61A8 = (char *)dword_8F61A8 - Size;
  if ( Size )
    memcpy(dword_8F61A8, (const void *)(v1 + *(_DWORD *)(dword_8F61A0 + 16) - Size), Size);
  dword_8F61A4 = 0;
  return 0;
}
