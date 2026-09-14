// 函数 0x4723d0  sub_4723D0  size=0x17  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __fastcall sub_4723D0(unsigned int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // esi

  v2 = 0;
  do
  {
    v3 = a1 & 1;
    --a2;
    a1 >>= 1;
    v2 = 2 * (v3 | v2);
  }
  while ( a2 > 0 );
  return v2 >> 1;
}
