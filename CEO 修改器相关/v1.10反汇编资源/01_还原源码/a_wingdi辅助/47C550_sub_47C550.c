// 函数 0x47c550  sub_47C550  size=0x30  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *sub_47C550()
{
  FILE *result; // eax

  if ( dword_4B81E8 != -1 )
  {
    ShowCursor(1);
    result = sub_4688B0(dword_8EEDBC);
    dword_8EEB5C = 0;
    dword_4B81E8 = -1;
  }
  return result;
}
