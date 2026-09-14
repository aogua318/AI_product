// 函数 0x474de0  sub_474DE0  size=0x5E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_474DE0(int a1)
{
  int v2; // eax
  int v3; // edi

  if ( !a1 )
    return 0;
  v2 = (*((unsigned __int8 *)dword_8F61A8 + 2)
      | (((*(unsigned __int8 *)dword_8F61A8 << 8) | *((unsigned __int8 *)dword_8F61A8 + 1)) << 8)) << dword_8F61A4;
  v3 = (a1 + dword_8F61A4) >> 3;
  dword_8F61A4 = (a1 + dword_8F61A4) & 7;
  dword_8F61A8 = (char *)dword_8F61A8 + v3;
  return (v2 & 0xFFFFFFu) >> (24 - a1);
}
