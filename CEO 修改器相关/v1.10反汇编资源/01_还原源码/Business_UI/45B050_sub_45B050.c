// 函数 0x45b050  sub_45B050  size=0x9F  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45B050(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8CB1E4 )
    {
      v1 = sub_47C740("face\\extface_putland.fce");
      sub_481C90(&unk_8CB1E8, v1, 1);
      sub_47F2C0(1);
      sub_47D1A0(&unk_8CB1E8, sub_45AF20, 0, 0, 0, 0, 1, 0, 1, 0, 0, -1);
      dword_8CB1E4 = 1;
    }
  }
  else if ( dword_8CB1E4 )
  {
    sub_47CCD0(&unk_8CB1E8);
    sub_47E260(&unk_8CB1E8);
    dword_8CB1E4 = 0;
  }
}
