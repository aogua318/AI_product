// 函数 0x43e3f0  sub_43E3F0  size=0x8A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43E3F0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A1E98 )
    {
      v1 = sub_47C740("face\\dorm.fce");
      sub_481C90(&unk_8A1EA0, v1, 1);
      sub_47D1A0(&unk_8A1EA0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8A1E98 = 1;
    }
  }
  else if ( dword_8A1E98 )
  {
    sub_47CCD0(&unk_8A1EA0);
    dword_8A1E98 = 0;
    sub_47E260(&unk_8A1EA0);
  }
}
