// 函数 0x43b130  sub_43B130  size=0xE4  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43B130(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_89E6D8 )
    {
      v1 = sub_47C740("face\\factinf_dorm.fce");
      sub_481C90(&unk_89E6E0, v1, 1);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
        sub_4820C0(dword_89E808 + 5472);
      sub_47D1A0(&unk_89E6E0, sub_43B0B0, 0, 0, 0, 0, 0, 0, 0, 0, sub_43B0E0, 100);
      dword_89E6D8 = 1;
    }
  }
  else if ( dword_89E6D8 )
  {
    sub_47CCD0(&unk_89E6E0);
    dword_89E6D8 = 0;
    sub_47E260(&unk_89E6E0);
  }
}
