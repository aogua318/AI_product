// 函数 0x45ac20  sub_45AC20  size=0xA6  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45AC20(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8CAF74 )
    {
      v1 = sub_47C740("face\\face_cheat.fce");
      sub_481C90(&unk_8CAF78, v1, 1);
      sub_482F10(140, 290);
      sub_47D1A0(&unk_8CAF78, sub_45A9D0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1);
      dword_8CAF74 = 1;
    }
  }
  else if ( dword_8CAF74 )
  {
    sub_47CCD0(&unk_8CAF78);
    sub_47E260(&unk_8CAF78);
    dword_8CAF74 = 0;
  }
}
