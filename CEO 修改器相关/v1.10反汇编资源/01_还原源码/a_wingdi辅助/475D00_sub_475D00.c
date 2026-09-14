// 函数 0x475d00  sub_475D00  size=0x30  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int sub_475D00()
{
  unsigned int v0; // eax

  v0 = (unsigned __int8)(*(_BYTE *)dword_8F61A8 << dword_8F61A4);
  dword_8F61A8 = (char *)dword_8F61A8 + ((dword_8F61A4 + 1) >> 3);
  dword_8F61A4 = (dword_8F61A4 + 1) & 7;
  return v0 >> 7;
}
