// 函数 0x43aee0  sub_43AEE0  size=0x1D0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43AEE0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_89E588 )
    {
      v1 = sub_47C740("face\\factinf_board.fce");
      sub_481C90(&unk_89E5A8, v1, 1);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
      {
        sub_4820C0(dword_89E6D0 + 8064);
        sub_4820C0(dword_89E6D0 + 8352);
      }
      sub_482060(dword_89E6D0 + 8928);
      sub_482060(dword_89E6D0 + 9216);
      sub_482060(dword_89E6D0 + 9504);
      sub_482060(dword_89E6D0 + 9792);
      sub_482060(dword_89E6D0 + 10080);
      sub_482060(dword_89E6D0 + 10368);
      sub_482060(dword_89E6D0 + 10656);
      sub_482060(dword_89E6D0 + 10944);
      sub_482060(dword_89E6D0 + 11232);
      sub_482060(dword_89E6D0 + 11520);
      sub_482060(dword_89E6D0 + 11808);
      sub_482060(dword_89E6D0 + 12096);
      sub_47D1A0(&unk_89E5A8, sub_43A770, 0, 0, 0, 0, 0, 0, 0, 0, sub_43AE50, 100);
      dword_89E588 = 1;
    }
    sub_43A810();
  }
  else
  {
    if ( dword_89E588 )
    {
      sub_47CCD0(&unk_89E5A8);
      dword_89E588 = 0;
      sub_47E260(&unk_89E5A8);
    }
    sub_466C70(&unk_89E58C);
  }
}
