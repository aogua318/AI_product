// 函数 0x461590  sub_461590  size=0x7D  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_461590(int a1, int a2)
{
  if ( !a2 )
  {
    sub_435570(1, 0);
    dword_8D78C0 = GetTickCount();
    word_4CE03A = *(_WORD *)(dword_8D7B88 + 52);
    word_4CE03C = word_8D7898[word_4CE03A];
    sub_47FF50((char *)&unk_8D7708 + 20 * word_4CE03A);
    sub_482060(dword_8D7CB8);
    sub_482060(dword_8D7B88);
    dword_8EED90 = 0;
  }
}
