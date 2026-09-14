// 函数 0x474e40  sub_474E40  size=0x4C  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_474E40(int a1)
{
  int v1; // eax
  int v2; // edi

  v1 = ((*(unsigned __int8 *)dword_8F61A8 << 8) | *((unsigned __int8 *)dword_8F61A8 + 1)) << dword_8F61A4;
  v2 = (a1 + dword_8F61A4) >> 3;
  dword_8F61A4 = (a1 + dword_8F61A4) & 7;
  dword_8F61A8 = (char *)dword_8F61A8 + v2;
  return (unsigned __int16)v1 >> (16 - a1);
}
