// 函数 0x45acf0  sub_45ACF0  size=0xAE  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45ACF0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8CB0A8 )
    {
      v1 = sub_47C740("face\\face_mapedit.fce");
      sub_481C90(&unk_8CB0B0, v1, 1);
      sub_481AC0(&unk_4B3840, 5, 5, 0);
      sub_47D1A0(&unk_8CB0B0, sub_45ACD0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1);
      dword_8CB0A8 = 1;
    }
  }
  else if ( dword_8CB0A8 )
  {
    sub_47CCD0(&unk_8CB0B0);
    sub_47E260(&unk_8CB0B0);
    dword_8CB0A8 = 0;
  }
}
