// 函数 0x47cf60  sub_47CF60  size=0x2D  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47CF60(const char *a1, int a2)
{
  int v2; // eax

  v2 = sub_47CE40(a1, a2);
  if ( v2 == -1 )
  {
    sub_47CF30();
    return 0;
  }
  else
  {
    dword_4B81E4 = v2;
    return 1;
  }
}
