// 函数 0x4412e0  sub_4412E0  size=0xB6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4412E0(int a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    dword_4B37D8 = a2;
    if ( !dword_8A65C0 )
    {
      v2 = sub_47C740("face\\factinf_chart.fce");
      sub_481C90(&unk_8A65C8, v2, 1);
      sub_47D1A0(&unk_8A65C8, sub_440870, sub_441010, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      sub_440890();
      dword_8A65C0 = 1;
    }
  }
  else if ( dword_8A65C0 )
  {
    sub_47CCD0(&unk_8A65C8);
    dword_8A65C0 = 0;
    sub_47E260(&unk_8A65C8);
  }
}
