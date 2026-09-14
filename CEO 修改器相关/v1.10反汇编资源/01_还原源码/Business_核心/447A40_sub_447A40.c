// 函数 0x447a40  sub_447A40  size=0x92  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_447A40(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8AA660 )
    {
      v1 = sub_47C740("face\\Home.fce");
      sub_481C90(&unk_8AA668, v1, 1);
      dword_8AA660 = 1;
      sub_447600();
      sub_47D1A0(&unk_8AA668, 0, sub_4479B0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
    }
  }
  else if ( dword_8AA660 )
  {
    sub_47CCD0(&unk_8AA668);
    dword_8AA660 = 0;
    sub_47E260(&unk_8AA668);
  }
}
