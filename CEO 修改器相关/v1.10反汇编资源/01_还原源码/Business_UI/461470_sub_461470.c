// 函数 0x461470  sub_461470  size=0x11D  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_461470(int a1, int a2)
{
  if ( !a2 )
  {
    sub_435570(1, 0);
    if ( dword_4CE034 == 1 )
    {
      word_4CE038 = *(_WORD *)(dword_8D7CB8 + 52);
      word_4CE03A = 0;
      sub_461040();
      sub_482FE0(dword_8D7B88);
      sub_482120(570, 18 * word_4CE038 + 75);
    }
    else
    {
      sub_482060(dword_8D7CB8);
      dword_8D78C0 = GetTickCount();
      sub_47FF50((char *)&unk_8D78C8 + 20 * *(_DWORD *)(dword_8D7CB8 + 52));
      switch ( dword_4CE034 )
      {
        case 2:
          word_4CE03E = *(_WORD *)(dword_8D7CB8 + 52);
          dword_8EED90 = 0;
          return;
        case 3:
          word_4CE040 = *(_WORD *)(dword_8D7CB8 + 52);
          dword_8EED90 = 0;
          return;
        case 4:
          word_4CE042 = *(_WORD *)(dword_8D7CB8 + 52);
          dword_8EED90 = 0;
          return;
      }
    }
    dword_8EED90 = 0;
  }
}
