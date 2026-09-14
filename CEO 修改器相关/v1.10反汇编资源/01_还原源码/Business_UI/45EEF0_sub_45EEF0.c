// 函数 0x45eef0  sub_45EEF0  size=0xB9  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45EEF0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8D3600 )
    {
      v1 = sub_47C740("face\\CompanyInfo.fce");
      sub_481C90(&unk_8D3608, v1, 1);
      sub_47D1A0(&unk_8D3608, sub_45EBA0, sub_45EDF0, 0, 0, 0, 0, 0, 0, 0, sub_45ED50, 100);
      dword_8D3600 = 1;
      sub_45EA50();
    }
  }
  else if ( dword_8D3600 )
  {
    sub_47CCD0(&unk_8D3608);
    sub_47E260(&unk_8D3608);
    dword_8D3600 = 0;
  }
}
