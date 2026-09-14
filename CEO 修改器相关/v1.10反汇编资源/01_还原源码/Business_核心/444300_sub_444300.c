// 函数 0x444300  sub_444300  size=0xA3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_444300(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A7580 )
    {
      v1 = sub_47C740("face\\ExitButton.fce");
      sub_481C90(&unk_8A7588, v1, 1);
      sub_47D1A0(&unk_8A7588, sub_443BE0, 0, 0, 0, 0, 0, 0, 1, 0, sub_443C70, 100);
      dword_8A7580 = 1;
      sub_443A40();
    }
  }
  else if ( dword_8A7580 )
  {
    sub_47CCD0(&unk_8A7588);
    dword_8A7580 = 0;
    sub_47E260(&unk_8A7588);
  }
}
