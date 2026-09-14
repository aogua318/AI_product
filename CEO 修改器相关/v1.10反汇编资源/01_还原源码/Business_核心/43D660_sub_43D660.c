// 函数 0x43d660  sub_43D660  size=0x145  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43D660(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    if ( !dword_8A19D0 )
    {
      v1 = sub_47C740("face\\face_RetailMachine.fce");
      sub_481C90(&unk_8A19D8, v1, 1);
      sub_43CAB0();
      if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) != dword_8703A0 )
      {
        sub_4820C0(dword_8A1B00 + 7776);
        sub_4820C0(dword_8A1B00 + 9216);
        sub_4820C0(dword_8A1B00 + 8640);
        sub_4820C0(dword_8A1B00 + 6624);
        sub_4820C0(dword_8A1B00 + 6912);
        sub_4820C0(dword_8A1B00 + 7200);
      }
      sub_47D1A0(&unk_8A19D8, sub_43D190, 0, 0, 0, 0, 0, 0, 0, sub_43D590, sub_43D5C0, 100);
      dword_8A19D0 = 1;
    }
  }
  else if ( dword_8A19D0 )
  {
    sub_47CCD0(&unk_8A19D8);
    dword_8A19D0 = 0;
    sub_47E260(&unk_8A19D8);
  }
}
