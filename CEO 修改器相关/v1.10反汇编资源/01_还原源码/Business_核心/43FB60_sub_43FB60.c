// 函数 0x43fb60  sub_43FB60  size=0xD9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43FB60(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A5E20 )
    {
      v1 = sub_47C740("face\\factinf.fce");
      sub_481C90(&unk_8A5E28, v1, 1);
      sub_47D1A0(&unk_8A5E28, sub_43F7C0, 0, 0, 0, 0, 0, 0, 0, sub_43FA30, 0, 0);
      dword_8A5E20 = 1;
      sub_43F6A0(1);
      sub_43F830(-1, dword_4B37C8);
      sub_43F980(dword_8A5E24);
    }
  }
  else if ( dword_8A5E20 )
  {
    sub_43F6A0(0);
    sub_47CCD0(&unk_8A5E28);
    dword_8A5E20 = 0;
    sub_47E260(&unk_8A5E28);
  }
}
