// 函数 0x43c9c0  sub_43C9C0  size=0xE9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43C9C0(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A1320 )
    {
      v1 = sub_47C740("face\\factinf_port.fce");
      sub_481C90(&unk_8A11F0, v1, 1);
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
        sub_4820C0(dword_8A1318 + 3456);
      sub_47D1A0(&unk_8A11F0, sub_43C940, 0, 0, 0, 0, 0, 0, 0, 0, sub_43C970, 100);
      sub_43C7A0();
      dword_8A1320 = 1;
    }
  }
  else if ( dword_8A1320 )
  {
    sub_47CCD0(&unk_8A11F0);
    dword_8A1320 = 0;
    sub_47E260(&unk_8A11F0);
  }
}
