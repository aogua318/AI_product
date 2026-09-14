// 函数 0x43e360  sub_43E360  size=0x8A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43E360(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A1D60 )
    {
      v1 = sub_47C740("face\\Board.fce");
      sub_481C90(&unk_8A1D68, v1, 1);
      sub_47D1A0(&unk_8A1D68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8A1D60 = 1;
    }
  }
  else if ( dword_8A1D60 )
  {
    sub_47CCD0(&unk_8A1D68);
    dword_8A1D60 = 0;
    sub_47E260(&unk_8A1D68);
  }
}
